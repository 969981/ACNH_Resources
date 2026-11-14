
void FUN_0191e760(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  
  FUN_0191da14();
  puVar2 = PTR_DAT_04bb31d0;
  *param_1 = (long)&PTR_LAB_049daf78;
  param_1[0x13] = (long)"mApproachCycleSec";
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x12] = (long)(puVar2 + 0x10);
  plVar6 = param_1 + 5;
  lVar5 = *plVar6;
  if (*plVar6 != 0) {
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 0x10);
    } while (lVar5 != 0);
    plVar6 = (long *)(lVar4 + 0x10);
  }
  *plVar6 = (long)(param_1 + 0x12);
  param_1[0x15] = (long)param_1;
  uVar7 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x16) & 0x800) != 0) {
    uVar7 = 0x3eb2b8c2;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x12] + 0xf0))();
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x16);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x17] = 0;
    uVar7 = 0x41a00000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x17) = uVar7;
  }
  param_1[0x1b] = 0;
  *(uint *)(param_1 + 0x16) = uVar1 & 0xfeffffff;
  plVar6 = param_1 + 0x18;
  *plVar6 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x19] = (long)"mRestSec";
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0x40c00000;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar7 = 0x3dd67750;
  }
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar3 = uVar7;
  uVar1 = *(uint *)(param_1 + 0x1c);
  if ((uVar1 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar7 = 0x40c00000;
    if ((uVar1 & 0x800) != 0) {
      uVar7 = 0x3dd67750;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar7;
  }
  *(uint *)(param_1 + 0x1c) = uVar1 & 0xfeffffff;
  return;
}

