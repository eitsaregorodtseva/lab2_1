#ifndef MAPCOLLECTON_H
#define MAPCOLLECTON_H

#include <vector>
#include <string>

template<typename K, typename V> class MapCollection {
public:
    MapCollection();                                      //по умолчанию
    MapCollection(const MapCollection &other_);           //копирования
    void clear();                                         //удаляющий все значения
    size_t size() const;                                  //возвращающий количество
    void readFromFile(std::string filename);              //из файла
    void writeToFile(std::string filename) const;         //в файл ДОПИСАТЬ
    bool operator==(const MapCollection &other_);   //оператор ==
    bool compareMaps(const MapCollection &other_);  //для == ДОПИСАТЬ
    void insert(const K& key_, const V& value_);          //добавляющий новую пару
    void erase(const K& key_);                            //удаляющий пару
    V &find(const K& key_);                               //для []
    V &operator[](const K& key_);                         //оператор []
    bool exist(const K& key_) const;                      //проверка ключа
    std::vector<V> allValuesReturn(const MapCollection &other_);               //ДОПИСАТЬ
    bool compareKeys(const K& key_);                        //для > ПРОВЕРИТЬ
    bool operator>(const K& key_);                          //оператор > ПРОВЕРИТЬ
    //MapCollection& sortMap(const MapCollection &other_);
    ~MapCollection() = default;
private:
    std::vector<K> m_keys;
    std::vector <V> m_values;
    std::size_t m_size;
    void copyFromOther(const MapCollection &other_);
};

#endif // MAPCOLLECTON_H


