# En-Yakin-Komsu-Algoritmasi
En yakın komşu algoritması (kısaca KNN) bir sınıflandırma ve regresyon algoritmasıdır. Amacı, yeni verilerin sınıflandırılmasını veya bir çıktı değeri tahmin etmesini sağlamaktır.

KNN, öncelikle sınıflandırma problemlerinde kullanılır. Algoritmanın çalışma prensibi oldukça basittir. Öncelikle, bir veri kümesi içindeki her verinin etiketi (sınıfı veya çıktısı) bilinir. Ardından, yeni bir veri geldiğinde, bu verinin etiketi, en yakın komşularının etiketlerine bakarak belirlenir. KNN, ölçümünü yalnızca iki nokta arasındaki Euclidean mesafesi gibi bir metrik kullanarak yapar. Örneğin, yeni bir veri noktası bir kategorideki diğer veri noktalarından daha yakınsa, bu veri noktası aynı kategoriye atanır.

Regresyon problemleri için KNN algoritması, bir çıktı değeri tahmini yapmak için kullanılır. Bu durumda, veri kümesindeki her örneğin bir çıktı değeri vardır. Yeni bir veri noktası geldiğinde, KNN, en yakın komşuların çıktı değerlerine bakarak yeni veri noktasının çıktı değerini tahmin eder.

KNN'nin kullanım şekli, öncelikle veri kümesi için bir eğitim seti hazırlamakla başlar. Daha sonra, yeni veri noktaları geldiğinde, KNN, en yakın komşuların etiketlerine veya çıktı değerlerine bakarak tahminler yapar. KNN, özellikle küçük veri setleri için iyi çalışır. Ancak, büyük veri kümeleri için hesaplama maliyeti yüksek olabilir.
