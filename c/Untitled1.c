void solve() {
int a[] = {1, 2, 3, 4, 5};
int sum = 0;
int i;
for( i = 0; i < 5; i++) {
if(i % 2 == 0) {
sum += *(a + i);
}
else {
sum -= *(a + i);
}
}
printf("%d",sum);
return 0;
}
