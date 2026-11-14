
void FUN_0191e8e0(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  
  FUN_0191dbe0();
  puVar1 = PTR_DAT_04bb31d0;
  *param_1 = (long)&PTR_LAB_049db0d8;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x2b] = (long)(puVar1 + 0x10);
  param_1[0x2c] = (long)"mSpeedApproach";
  plVar6 = param_1 + 5;
  lVar5 = *plVar6;
  if (*plVar6 != 0) {
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 0x10);
    } while (lVar5 != 0);
    plVar6 = (long *)(lVar4 + 0x10);
  }
  *plVar6 = (long)(param_1 + 0x2b);
  param_1[0x2e] = (long)param_1;
  uVar7 = 0x3df00000;
  if ((*(uint *)(param_1 + 0x2f) & 0x800) != 0) {
    uVar7 = 0x3b060a92;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x2b] + 0xf0))();
  *puVar3 = uVar7;
  uVar2 = *(uint *)(param_1 + 0x2f);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x30] = 0;
    uVar7 = 0x3df00000;
    if ((uVar2 & 0x800) != 0) {
      uVar7 = 0x3b060a92;
    }
    *(undefined4 *)(param_1 + 0x30) = uVar7;
  }
  puVar1 = puVar1 + 0x10;
  *(uint *)(param_1 + 0x2f) = uVar2 & 0xfeffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x31] = (long)puVar1;
  param_1[0x32] = (long)"mPlayerSearchRagne";
  param_1[0x36] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x31);
  uVar7 = 0x41200000;
  if ((*(uint *)(param_1 + 0x35) & 0x800) != 0) {
    uVar7 = 0x3e32b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x31] + 0xf0))(param_1 + 0x31);
  *puVar3 = uVar7;
  uVar2 = *(uint *)(param_1 + 0x35);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x36] = 0;
    uVar7 = 0x41200000;
    if ((uVar2 & 0x800) != 0) {
      uVar7 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x36) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(uint *)(param_1 + 0x35) = uVar2 & 0xfeffffff;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x37] = (long)puVar1;
  param_1[0x38] = (long)"mRestPointSearchRagne";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x37);
  uVar7 = 0x41200000;
  if ((*(uint *)(param_1 + 0x3b) & 0x800) != 0) {
    uVar7 = 0x3e32b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x37] + 0xf0))(param_1 + 0x37);
  *puVar3 = uVar7;
  uVar2 = *(uint *)(param_1 + 0x3b);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x3c] = 0;
    uVar7 = 0x41200000;
    if ((uVar2 & 0x800) != 0) {
      uVar7 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x3c) = uVar7;
  }
  *(uint *)(param_1 + 0x3b) = uVar2 & 0xfeffffff;
  return;
}

