
long FUN_00218cec(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x68);
  uVar1 = *(ulong *)(param_1 + 0x60) + param_2;
  if ((CARRY8(*(ulong *)(param_1 + 0x60),param_2)) || (uVar1 == 0xffffffffffffffff)) {
    *(undefined4 *)(param_1 + 0x50) = 4;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x50);
    if (iVar3 != 4) {
      if ((iVar3 == 2) && (*(char *)(param_1 + 0x70) == '\0')) {
        *(ulong *)(param_1 + 0x60) = uVar1;
        *(undefined1 *)(param_1 + 0x70) = 1;
        *(undefined4 *)(param_1 + 0x50) = 3;
LAB_00218d30:
        *(ulong *)(param_1 + 0x68) = uVar1;
        return uVar1 - uVar2;
      }
      *(ulong *)(param_1 + 0x60) = uVar1;
      if (1 < iVar3 - 1U) {
        *(ulong *)(param_1 + 0x68) = uVar2 + param_2;
        return (uVar2 + param_2) - uVar2;
      }
      uVar4 = uVar1 - uVar2;
      if (uVar2 < uVar1) {
        if ((param_3 <= uVar4) && (uVar4 <= param_4)) {
          if (iVar3 == 2) {
            *(undefined4 *)(param_1 + 0x50) = 3;
            *(ulong *)(param_1 + 0x68) = uVar1;
            return uVar1 - uVar2;
          }
          goto LAB_00218d30;
        }
        if (param_2 <= uVar4) {
          *(ulong *)(param_1 + 0x68) = uVar2 + param_4;
          return (uVar2 + param_4) - uVar2;
        }
      }
      *(ulong *)(param_1 + 0x68) = uVar2 + param_3;
      return (uVar2 + param_3) - uVar2;
    }
  }
  *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
  return 0;
}

