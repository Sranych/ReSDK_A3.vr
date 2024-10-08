# Система шаблонов лута

Данная система позволяет определять заранее заготовленные наборы лута, создаваемые в контейнерах при загрузке карты.

# Быстрый старт
Для создания нового файла с конфигурациями лута выполните следующие действия:
1. Создаем в `src\host\LootSystem\Collections` новый yml файл. Название должно отражать либо отдельный спавн (если в файле описан только он), либо название группы\категории спавнов. Например, в абстрактном файле `CaveClothes.yml` находились бы конфигурации лута, в котором спавнится одежда в пещерах.
2. Открываем наш файл и принимаемся описывать настройки спавнов. Подробнее о [схеме можно почитать](#описание-схемы) в разделе ниже.
3. После описания спавна открываем `src\host\LootSystem\loader.sqf` и добавляем наш файл в список лута. Путь может быть полным внутри проекта `src\host\LootSystem\Collections\NAME.yml`, `Collections\NAME.yml`, либо внутри Collections `NAME.yml`. Расширение файла указывать не обязательно.
4. В редакторе ReNode выбираем нужный контейнер и в инспекторе (поле `Шаблон лута`) указываем наш конфиг.

# Описание схемы

Конфигурации лута определяются в yml файлах.
Пример конфигурации описан в `src\host\LootSystem\test.yml`

```yml
TestLoot:
  interface: true # интерфейсы только для заготовки шаблонов
  inherit: BaseLoot # Опциональное наследование конфигурации.
  name: some name # Описательное название конфигурации (опционально)
  maps: # попадание хотя бы под одну группу разрешает тип
    - regex: .*Map[1-9] #regex like pattern
    - name: TestMap #exact
    - TestMap
    - typeof: BaseMap #type inheritance check
  #gamemodes: # не определенный тип снимает все ограничения
  items:
    Item:
      name: Overriden name
      prob: 35
      count: [1, 3] #ranged count
    Key:
      prob: 100
      name: "Тест-ключ"
      count: 4 #fixed count
```

## Общие настройки

### Имя конфига
В корневой элемент крафта это его системное название. У вас не может быть создано несколько конфигов с одинаковым именем. Имя конфига задается в инспекторе для контейнера. Несколько контейнеров могут использовать одну и ту же конфигурацию.

### interface
Это свойство указывает является ли конфигурация интерфейсной. Интерфейсная конфигурация это промежуточный конфиг для наследования другими конфигами. Такие конфиги нельзя указывать для контейнеров. Свойство принимает тип bool (yes,no,Y,n,true,false)

### inherit
Это свойство задает родительский конфиг. При включении свойства данные о предметах, разрешенных картах и режимах будут переданы из значения свойства `inherit` если в текущем конфиге отсутствуют следующие опции: items, maps, gamemodes

### name
Это просто псевдонимное имя конфига использующеся при разработке в редакторе.

### maps
Это свойство отвечает за ограничения на использования шаблона лута. Указанные опции задают **разрешенные** карты, которые могут использовать этот конфиг.

Опции для карт следующие:
	- **name** - полное сравнение по названию. Если ключ опции не указан, то значение так же интерпретируется как имя.
	- **regex** - сопоставление с шаблоном регулярного выражения.
	- **typeof** - сопоставление с родительским типом. Так как карты не являются классами это сопоставление является обычным сравнением по строке.

### modes
Это свойство отвечает за ограничения на использования шаблона лута. Указанные опции задают **разрешенные** режимы, которые могут использовать этот конфиг.

Принцип работы и список опций эквиваленты свойству [maps](#maps) за исключением того, что они работают с ограничениями на допустимые режимы.

### items
Набор игровых предметов, которые могут быть заспавнены в контейнере.
Ключ каждого элемента набора должен являться реальным класснеймом. Значенем является группа опций.
Для предметов предоставляются следующие опции:
	- **name** - необязательное новое имя для создаваемого предмета. Все предметы, которые создаются с помощью системы лута получат это название. 
	- **prob** - вероятность появления в процентах.
	- **count** - количество предметов или случайный диапазон количества
		- Для задания количества просто укажите целое число.
		- Для задания случайного количества укажите список из двух элементов. Например, `count: [2,5]` означает, что может быть создано от 2 до 5 предметов этого типа.