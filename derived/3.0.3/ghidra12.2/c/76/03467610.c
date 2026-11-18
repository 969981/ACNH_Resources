
ulong FUN_03467610(long *param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar3 = (**(code **)(*param_1 + 0x38))();
  uVar4 = (**(code **)(*param_2 + 0x38))(param_2);
  if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
    uVar8 = 0xffffffff;
    if ((uVar3 & 1) != 0) {
      uVar8 = 1;
    }
    if (((uVar3 | uVar4) & 1) != 0) {
      return (ulong)uVar8;
    }
    uVar1 = (**(code **)(*param_1 + 0xd0))(param_1);
    uVar2 = (**(code **)(*param_2 + 0xd0))(param_2);
    if (uVar2 <= uVar1) {
      if (uVar1 == uVar2) {
        uVar7 = FUN_034672b0(param_1,param_2);
        return uVar7;
      }
      return 1;
    }
  }
  else {
    uVar7 = (**(code **)(*param_1 + 0x38))(param_1);
    if (((uVar7 & 1) == 0) || (uVar7 = (**(code **)(*param_2 + 0x38))(param_2), (uVar7 & 1) == 0)) {
      return 0;
    }
    iVar5 = (**(code **)(*param_1 + 0x98))(param_1);
    iVar6 = (**(code **)(*param_2 + 0x98))(param_2);
    if (iVar6 <= iVar5) {
      return (ulong)(iVar5 != iVar6);
    }
  }
  return 0xffffffff;
}

