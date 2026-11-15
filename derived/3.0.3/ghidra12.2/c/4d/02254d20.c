
void FUN_02254d20(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (0 < *param_1) {
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 2);
    *puVar3 = *(undefined8 *)(param_1 + 4);
    *(undefined8 **)(param_1 + 4) = puVar3;
    uVar1 = *param_1 - 1;
    if (0 < *param_1) {
      if (uVar1 == 0) {
        iVar2 = 0;
      }
      else {
        memmove(*(void **)(param_1 + 2),(void *)((long)*(void **)(param_1 + 2) + 8),
                (ulong)uVar1 << 3);
        iVar2 = *param_1 + -1;
      }
      *param_1 = iVar2;
    }
  }
  return;
}

