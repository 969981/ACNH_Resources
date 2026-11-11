
void FUN_0043db40(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  do {
    puVar2 = param_1;
    if (param_2 == 0) {
      return;
    }
    while( true ) {
      iVar1 = (int)param_3[3];
      if ((iVar1 < 0) && (*(int *)(param_3 + 3) = iVar1 + 8, iVar1 + 8 < 1)) break;
      puVar3 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar3 + 1);
      param_2 = param_2 + -1;
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 1;
      if (param_2 == 0) {
        return;
      }
    }
    param_2 = param_2 + -1;
    param_1 = puVar2 + 1;
    *puVar2 = *(undefined8 *)(param_3[1] + (long)iVar1);
  } while( true );
}

