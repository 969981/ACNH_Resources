
undefined4 FUN_03467750(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar4 = (**(code **)(*param_1 + 0x98))();
  uVar5 = (**(code **)(*param_2 + 0x98))(param_2);
  if (uVar4 == 5) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0xffffffff;
    if (uVar5 != 5) {
      uVar7 = 6;
      if (DAT_0575ac84 == '\0') {
        uVar7 = 0;
      }
      iVar2 = -(uint)(uVar4 != uVar7);
      iVar3 = -(uint)(uVar5 != uVar7);
      if (uVar4 == 0) {
        iVar2 = 1;
      }
      if (uVar5 == 0) {
        iVar3 = 1;
      }
      uVar7 = 2;
      if (DAT_0575ac88 == '\0') {
        uVar7 = 0;
      }
      iVar1 = 2;
      if (uVar4 != uVar7) {
        iVar1 = iVar2;
      }
      iVar2 = 2;
      if (uVar5 != uVar7) {
        iVar2 = iVar3;
      }
      uVar7 = 3;
      if (DAT_0575ac8c == '\0') {
        uVar7 = 0;
      }
      iVar3 = 3;
      if (uVar4 != uVar7) {
        iVar3 = iVar1;
      }
      iVar1 = 3;
      if (uVar5 != uVar7) {
        iVar1 = iVar2;
      }
      iVar2 = 4;
      if (uVar4 != DAT_0575ac90) {
        iVar2 = iVar3;
      }
      iVar3 = 4;
      if (uVar5 != DAT_0575ac90) {
        iVar3 = iVar1;
      }
      uVar7 = 4;
      if (DAT_0575ac94 == '\0') {
        uVar7 = 0;
      }
      iVar1 = 5;
      if (uVar4 != uVar7) {
        iVar1 = iVar2;
      }
      iVar2 = 5;
      if (uVar5 != uVar7) {
        iVar2 = iVar3;
      }
      uVar6 = 1;
      if (iVar1 < iVar2) {
        uVar6 = 0xffffffff;
      }
    }
  }
  return uVar6;
}

