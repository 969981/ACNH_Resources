
void FUN_0340c514(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0x2c)) {
      iVar1 = *(int *)(param_1 + 0x28);
    }
    piVar4 = (int *)(*(long *)(param_1 + 0x20) + (long)(*(int *)(param_1 + 0x2c) - iVar1) * 0x78);
    iVar1 = *piVar4;
    if (iVar1 == 1) {
      uVar2 = FUN_0339bb10(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),piVar4 + 2);
      if ((uVar2 & 1) == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
      uVar3 = 2;
    }
    else {
      uVar3 = 3;
      if (iVar1 != 0) {
        uVar3 = 0;
      }
    }
  }
  FUN_03ebb160(param_1 + 0x1a8,uVar3);
  return;
}

