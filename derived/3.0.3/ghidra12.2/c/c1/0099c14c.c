
void FUN_0099c14c(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb60a0;
  lVar6 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar6;
  lVar6 = param_2[6];
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar6;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  puVar1 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_FUN_0492b768;
  puVar3 = PTR_DAT_04bb2150;
  local_48 = 0;
  puVar1 = puVar1 + 0x10;
  pcStack_70 = "mOffsetPos";
  puStack_60 = &DAT_0407ebb1;
  puStack_50 = &DAT_0407ebb1;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_006fdfc0(param_1 + 6,&local_78,PTR_DAT_04bb2150,param_1);
  pcStack_70 = "mOffsetDegAngle";
  local_48 = 0;
  puStack_60 = &DAT_0407ebb1;
  puStack_50 = &DAT_0407ebb1;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_006fdfc0(param_1 + 0xd,&local_78,puVar3,param_1);
  param_1[0x17] = 0;
  param_1[0x15] = (long)"mOffsetScale";
  param_1[0x16] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  plVar7 = param_1 + 0x14;
  *plVar7 = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  uVar8 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x18) & 0x800) != 0) {
    uVar8 = 0x3c8efa35;
  }
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = uVar8;
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x19] = 0;
    uVar8 = 0x3f800000;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x19) = uVar8;
  }
  param_1[0x1d] = 0;
  *(uint *)(param_1 + 0x18) = uVar2 & 0xfeffffff;
  plVar7 = param_1 + 0x1a;
  *plVar7 = (long)&PTR_LAB_0492b8c8;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1b] = (long)"mUniqueID";
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar5 = (undefined2 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar5 = 0xfffe;
  if ((*(uint *)(param_1 + 0x1e) >> 7 & 1) == 0) {
    param_1[0x1f] = 0;
    *(undefined2 *)(param_1 + 0x1f) = 0xfffe;
  }
  *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1e) & 0xfeffffff;
  return;
}

