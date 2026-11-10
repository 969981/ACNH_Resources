
undefined8 FUN_0014fd84(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  *param_2 = 0;
  if (*(char *)(param_1 + 0x41a) == '\0' || (*(uint *)(param_1 + 0x41c) & 0x1000) == 0) {
    if ((*(uint *)(param_1 + 0x41c) >> 0xc & 1) == 0) {
      uVar1 = FUN_00165ac4(param_1,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (((*(int *)(param_1 + 0x178) != 2) || (*(char *)(param_1 + 0x418) != '\0')) &&
         ((((*(uint *)(param_1 + 0x41c) ^ 0xffffffff) & 0x4020) != 0 ||
          (uVar2 = FUN_00166714(param_1), (uVar2 & 1) == 0)))) {
        pcVar3 = *(code **)(*(long *)(param_1 + 0x440) + 0x28);
        if (pcVar3 == (code *)0x0) {
          *param_2 = 1;
        }
        else {
          uVar1 = (*pcVar3)(param_1,param_2);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
        *(uint *)(param_1 + 0x41c) = *(uint *)(param_1 + 0x41c) | 0x1000;
        return 0;
      }
    }
  }
  else if (*(long *)(*(long *)(param_1 + 0x440) + 0x30) == 0) {
    *param_2 = 1;
    return 0;
  }
  return 0;
}

