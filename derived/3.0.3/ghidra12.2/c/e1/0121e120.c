
void FUN_0121e120(long param_1,int *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  
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
    plVar4 = *(long **)(param_1 + 0x6a008);
    lVar1 = (long)*(int *)(param_1 + 0x6a000) << 3;
    do {
      if (*(char *)(*plVar4 + 0xd0) == '\0') {
        FUN_00dbf7b0(param_2);
      }
      plVar4 = plVar4 + 1;
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  return;
}

