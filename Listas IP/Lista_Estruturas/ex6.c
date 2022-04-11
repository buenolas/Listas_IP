#include <stdio.h>
#include <stdlib.h>

struct list{
  int day, month, year, code;
  char name[200];
};
typedef struct list data;

int ComparaDataNasc(data *stud1, data *stud2){

  if (stud1->year > stud2->year)
  {
    return 1;
  }
  else if (stud2->year > stud1->year)
  {
    return 0;
  }
  else if (stud1->month > stud2->month)
  {
    return 1;
  }
  else if (stud2->month > stud1->month)
  {
    return 0;
  }
  else if (stud1->day >= stud2->day)
  {
    return 1;
  }
  return 0;
}

void trade(data *x, data *y){
  data temp;

  temp = *x;
  *x = *y;
  *y = temp;
}

void ordened(data vet[], int n)
{
  int i, j, dat;

  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - 1 - i; j++)
    {
      if (ComparaDataNasc(&vet[j], &vet[j + 1]) == 0)
      {
        trade(&vet[j], &vet[j + 1]);
      }
    }
  }
}


int main(){
  int n; // número de alunos
  // dados *temp;
  data *student;
  int i;
  int database;
  // dados *aluno2;

  scanf("%d", &n);
  student = malloc(n * sizeof(data));
  if (1 <= n <= 30)
  {
    for (i = 0; i < n; i++){
      scanf("%d%d%d%d", &student[i].code, &student[i].day, &student[i].month, &student[i].year);
      scanf("%*c%[^\n]", student[i].name);
    }
    ordened(student, n);

    for (i = 0; i < n; i++){
      printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", student[i].code, student[i].name, student[i].day, student[i].month, student[i].year);
    }

    free(student);
  }
  return 0;
}