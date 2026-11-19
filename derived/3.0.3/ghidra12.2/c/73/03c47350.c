
void FUN_03c47350(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar6 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar6;
  lVar6 = param_2[6];
  *param_1 = (long)&DAT_04b7e798;
  *(int *)(param_1 + 4) = (int)lVar6;
  plVar7 = param_1 + 5;
  *plVar7 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = (long)&PTR_LAB_04b7ff08;
  *param_1 = (long)&PTR_LAB_04b7fda8;
  param_1[7] = (long)&DAT_040dd778;
  param_1[8] = 0;
  lVar6 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar5 = lVar6;
      lVar6 = *(long *)(lVar5 + 0x10);
    } while (lVar6 != 0);
    plVar7 = (long *)(lVar5 + 0x10);
  }
  *plVar7 = (long)(param_1 + 6);
  param_1[9] = (long)param_1;
  puVar4 = (undefined4 *)(**(code **)(param_1[6] + 0xf0))();
  *puVar4 = 2;
  if ((*(uint *)(param_1 + 10) >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xb) = 2;
  }
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) & 0xfeffffff;
  param_1[0xd] = (long)&DAT_040f28e3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar3 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar1 = puVar3 + 0x10;
  param_1[0x11] = 0;
  plVar7 = param_1 + 0xc;
  *plVar7 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  uVar8 = 0x41200000;
  if ((*(uint *)(param_1 + 0x10) & 0x800) != 0) {
    uVar8 = 0x3e32b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    uVar8 = 0x41200000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3e32b8c2;
    }
    *(undefined4 *)(param_1 + 0x11) = uVar8;
  }
  param_1[0x15] = 0;
  *(uint *)(param_1 + 0x10) = uVar2 & 0xfeffffff;
  param_1[0x13] = (long)"spreadMin";
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  plVar7 = param_1 + 0x12;
  *plVar7 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x16) >> 7 & 1) == 0) {
    param_1[0x17] = 0;
    *(undefined4 *)(param_1 + 0x17) = 0;
  }
  param_1[0x1b] = 0;
  *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xfeffffff;
  plVar7 = param_1 + 0x18;
  *plVar7 = (long)(puVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x19] = (long)"rearSpeakerGain";
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  uVar8 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar8 = 0x3c8efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x1c);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar8 = 0x3f800000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar8;
  }
  *(uint *)(param_1 + 0x1c) = uVar2 & 0xfeffffff;
  return;
}

