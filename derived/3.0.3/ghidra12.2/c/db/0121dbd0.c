
void FUN_0121dbd0(long param_1,int *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (0 < *param_2) {
    lVar1 = 0;
    puVar2 = *(undefined8 **)(param_2 + 4);
    do {
      puVar3 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar1 * 8);
      lVar1 = lVar1 + 1;
      *puVar3 = puVar2;
      *(undefined8 **)(param_2 + 4) = puVar3;
      puVar2 = puVar3;
    } while (lVar1 < *param_2);
  }
  *param_2 = 0;
  if (*(int *)(param_1 + 0x6a000) != 0) {
    lVar1 = (long)*(int *)(param_1 + 0x6a000) << 3;
    puVar2 = *(undefined8 **)(param_1 + 0x6a008);
    do {
      FUN_00dbf7b0(param_2,*puVar2);
      lVar1 = lVar1 + -8;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}

