
void FUN_0191d2d0(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  
  FUN_0191c370();
  puVar2 = PTR_DAT_04bb31d0;
  *param_1 = (long)&PTR_LAB_049dab58;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x37] = (long)(puVar2 + 0x10);
  param_1[0x38] = (long)"mPlayerSearchRange";
  plVar6 = param_1 + 5;
  lVar5 = *plVar6;
  if (*plVar6 != 0) {
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 0x10);
    } while (lVar5 != 0);
    plVar6 = (long *)(lVar4 + 0x10);
  }
  *plVar6 = (long)(param_1 + 0x37);
  param_1[0x3a] = (long)param_1;
  uVar7 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x3b) & 0x800) != 0) {
    uVar7 = 0x3f060a92;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x37] + 0xf0))();
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x3b);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x3c] = 0;
    uVar7 = 0x41f00000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x3c) = uVar7;
  }
  *(uint *)(param_1 + 0x3b) = uVar1 & 0xfeffffff;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3d] = (long)(puVar2 + 0x10);
  param_1[0x3e] = (long)"mRestPointSearchRange";
  param_1[0x42] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3d);
  uVar7 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x41) & 0x800) != 0) {
    uVar7 = 0x3f060a92;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x3d] + 0xf0))(param_1 + 0x3d);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x41);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x42] = 0;
    uVar7 = 0x41f00000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x42) = uVar7;
  }
  *(uint *)(param_1 + 0x41) = uVar1 & 0xfeffffff;
  return;
}

