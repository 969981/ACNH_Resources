
void FUN_0029c6b4(int param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  int local_40 [4];
  undefined8 local_28;
  
  lVar1 = DAT_04c60f48;
  if (DAT_04c60f48 == 0) {
    return;
  }
  local_28 = 0;
  FUN_002ba324(local_40,*(undefined8 *)PTR_DAT_04bc1510,&local_28,param_2);
  uVar2 = local_28;
  if (local_40[0] != 0) {
    return;
  }
  if (param_1 != 2) goto LAB_0029c774;
  if (*(long *)(lVar1 + 0x20) == 0) {
    if (*(long *)(lVar1 + 0x30) != 0) {
      uVar4 = 0;
      goto LAB_0029c74c;
    }
  }
  else {
    uVar3 = FUN_002212e4();
    uVar4 = uVar3 & 0xffffffff;
    if (*(long *)(lVar1 + 0x30) != 0) {
LAB_0029c74c:
      uVar3 = FUN_002212e4();
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  uVar4 = FUN_002212e4(*(undefined8 *)(lVar1 + 0x38));
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*(int *)(lVar1 + 0xd8) - 2U < 6) {
    return;
  }
LAB_0029c774:
  if (*(code **)(lVar1 + 0xa0) == (code *)0x0) {
    return;
  }
  (**(code **)(lVar1 + 0xa0))(param_1,uVar2,*(undefined8 *)(lVar1 + 0xa8));
  return;
}

