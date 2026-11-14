
undefined8 FUN_018146ac(long *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined2 local_34;
  undefined2 local_32;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_1[0x7a] != 0) {
    local_32 = 0;
    local_30 = 0;
    local_34 = (undefined2)*(undefined4 *)(param_1[0x7a] + 0x2b8);
    FUN_0277d4ac(&local_34);
    local_2c = FUN_0277d6c4(&local_34);
    local_2a = 0;
    local_28 = 0;
    FUN_0277d4ac(&local_2c);
    local_24 = FUN_0277d6c4(&local_2c);
    uVar1 = FUN_018bba44(&local_24);
    if ((uVar1 < 3) && (param_1[0x78] != 0)) {
      FUN_011e24dc(param_1[0x78] + 0x160,0);
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x210))(param_1);
  if (((uVar3 & 1) != 0) && (*(char *)((long)param_1 + 0x432) == '\0')) {
    lVar5 = *(long *)PTR_DAT_04bb47e0;
    iVar2 = (**(code **)(*param_1 + 0x100))(param_1);
    if (iVar2 == 0x283) {
      uVar1 = 0;
    }
    else {
      if (iVar2 != 0x24c) goto LAB_01814798;
      uVar1 = 1;
    }
    lVar4 = *(long *)(lVar5 + 0x168);
    if (uVar1 < *(uint *)(lVar5 + 0x160) && lVar4 != 0) {
      *(undefined1 *)(lVar4 + (ulong)uVar1) = 0;
    }
  }
LAB_01814798:
  FUN_03ebae78(param_1 + 0x4f);
  return 0;
}

