
void FUN_01fd7ed0(long param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 *puVar5;
  
  puVar1 = (uint *)(param_1 + 0x123c0);
  uVar2 = *puVar1;
  uVar3 = (ulong)uVar2;
  if ((int)uVar2 < *(int *)(param_1 + 0x123c4)) {
    if (0 < (int)uVar2) {
      puVar5 = *(undefined8 **)(param_1 + 0x123c8);
      do {
        if (*(int *)*puVar5 == *param_2) {
          return;
        }
        puVar5 = puVar5 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    piVar4 = *(int **)(param_1 + 0x123d0);
    if (piVar4 != (int *)0x0) {
      *(undefined8 *)(param_1 + 0x123d0) = *(undefined8 *)piVar4;
    }
    *piVar4 = *param_2;
    if ((int)*puVar1 < *(int *)(param_1 + 0x123c4)) {
      *(int **)(*(long *)(param_1 + 0x123c8) + (long)(int)*puVar1 * 8) = piVar4;
      *puVar1 = *puVar1 + 1;
    }
  }
  return;
}

