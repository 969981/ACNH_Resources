
void FUN_03baae70(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *__dest;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  size_t __n;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)(param_1 + 0x20)) {
    return;
  }
  plVar1 = param_2 + 0x37;
  while (plVar4 != plVar1) {
    plVar4 = (long *)plVar4[1];
    if (plVar4 == (long *)(param_1 + 0x20)) {
      return;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar2) {
    __dest = *(undefined8 **)(param_1 + 0x18);
    uVar5 = 0;
    __n = (long)(int)uVar2 * 8;
    do {
      __n = __n - 8;
      if ((undefined8 *)*__dest == param_2) {
        iVar3 = (int)uVar5;
        if ((-1 < iVar3) && (iVar3 < (int)uVar2)) {
          if (iVar3 + 1 < (int)uVar2) {
            memmove(__dest,__dest + 1,__n);
            uVar2 = *(uint *)(param_1 + 0x10);
          }
          *(uint *)(param_1 + 0x10) = uVar2 - 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      __dest = __dest + 1;
    } while (uVar2 != uVar5);
  }
  if (*plVar1 != 0) {
    *(undefined8 *)(*plVar1 + 8) = param_2[0x38];
  }
  if ((long *)param_2[0x38] != (long *)0x0) {
    *(long *)param_2[0x38] = *plVar1;
  }
  *plVar1 = 0;
  param_2[0x38] = 0;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  (**(code **)*param_2)(param_2);
  *param_2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 **)(param_1 + 0x38) = param_2;
  return;
}

