int sortValues[7] = {4,9,7,5,8,9,3};
 
void setup(){
  Serial.begin(9600);
}
 
void loop() {
 
  bubbleSort(sortValues,7);
  Serial.print("Sorted Array: ");
  for(int i=0; i<7; i++) {
     Serial.print(sortValues[i]); 
     Serial.print(",");
  }
 Serial.println();
  Serial.print("1. [7,9]-> ");
    Serial.print(sortValues[1]);
    Serial.print(sortValues[3]);
    Serial.print(sortValues[5]);
    Serial.print(sortValues[2]);
    Serial.print(sortValues[4]);
    Serial.print(sortValues[6]);
    Serial.print(sortValues[0]);
    Serial.println();
  
  Serial.print("2. [5,9]-> ");
    Serial.print(sortValues[1]);
    Serial.print(sortValues[3]);
    Serial.print(sortValues[2]);
    Serial.print(sortValues[5]);
    Serial.print(sortValues[4]);
    Serial.print(sortValues[5]);
    Serial.print(sortValues[0]);
    Serial.println();
     
 

  Serial.print("3. [5,7]-> ");
    Serial.print(sortValues[1]);
    Serial.print(sortValues[2]);
    Serial.print(sortValues[3]);
    Serial.print(sortValues[5]);
    Serial.print(sortValues[4]);
    Serial.print(sortValues[5]);
    Serial.print(sortValues[0]);
    Serial.println();
     
  Serial.print("4. [8,9]-> ");
    Serial.print(sortValues[1]);
    Serial.print(sortValues[2]);
    Serial.print(sortValues[3]);
    Serial.print(sortValues[4]);
    Serial.print(sortValues[5]);
    Serial.print(sortValues[6]);
    Serial.print(sortValues[0]);
    Serial.println();

  Serial.print("5. [3,9]-> ");
    Serial.print(sortValues[1]);
    Serial.print(sortValues[2]);
    Serial.print(sortValues[3]);
    Serial.print(sortValues[4]);
    Serial.print(sortValues[5]);
    Serial.print(sortValues[0]);
    Serial.print(sortValues[6]);
    Serial.println();

  Serial.print("6. [3,9]-> ");
    Serial.print(sortValues[1]);
    Serial.print(sortValues[2]);
    Serial.print(sortValues[3]);
    Serial.print(sortValues[4]);
    Serial.print(sortValues[0]);
    Serial.print(sortValues[5]);
    Serial.print(sortValues[6]);
    Serial.println();

  Serial.print("7. [3,8]-> ");
    Serial.print(sortValues[1]);
    Serial.print(sortValues[2]);
    Serial.print(sortValues[3]);
    Serial.print(sortValues[0]);
    Serial.print(sortValues[4]);
    Serial.print(sortValues[5]);
    Serial.print(sortValues[6]);
    Serial.println();

  Serial.print("8. [3,7]-> ");
    Serial.print(sortValues[1]);
    Serial.print(sortValues[2]);
    Serial.print(sortValues[0]);
    Serial.print(sortValues[3]);
    Serial.print(sortValues[4]);
    Serial.print(sortValues[5]);
    Serial.print(sortValues[6]);
    Serial.println();

  Serial.print("9. [3,5]-> ");
    Serial.print(sortValues[1]);
    Serial.print(sortValues[0]);
    Serial.print(sortValues[2]);
    Serial.print(sortValues[3]);
    Serial.print(sortValues[4]);
    Serial.print(sortValues[5]);
    Serial.print(sortValues[6]);
    Serial.println();
    
  Serial.print("10.[3,4]-> ");
    Serial.print(sortValues[0]);
    Serial.print(sortValues[1]);
    Serial.print(sortValues[2]);
    Serial.print(sortValues[3]);
    Serial.print(sortValues[4]);
    Serial.print(sortValues[5]);
    Serial.print(sortValues[6]);
 
  delay(10000);
}
 
void bubbleSort(int a[], int size) {
    for(int i=0; i<(size-1); i++) {
        for(int o=0; o<(size-(i+1)); o++) {
                if(a[o] > a[o+1]) {
                    int t = a[o];
                    a[o] = a[o+1];
                    a[o+1] = t;
                }
        }
    }
}
