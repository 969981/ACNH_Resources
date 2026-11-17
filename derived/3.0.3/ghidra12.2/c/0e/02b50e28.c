
void FUN_02b50e28(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined4 local_58;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb60a0;
  lVar5 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar5;
  lVar5 = param_2[6];
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar5;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  local_58 = 8;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *param_1 = (long)(PTR_DAT_04bc4ab0 + 0x10);
  puVar3 = PTR_DAT_04bb2150;
  puStack_70 = &DAT_0407ebb1;
  pcStack_80 = "mOffset";
  puStack_60 = &DAT_0407ebb1;
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_006fdfc0(param_1 + 6,&local_88,PTR_DAT_04bb2150,param_1);
  pcStack_80 = "mHeadOffset";
  local_58 = 8;
  puStack_70 = &DAT_0407ebb1;
  puStack_60 = &DAT_0407ebb1;
  local_88 = puVar1;
  local_78 = puVar1;
  local_68 = puVar1;
  FUN_006fdfc0(param_1 + 0xd,&local_88,puVar3,param_1);
  param_1[0x17] = 0;
  param_1[0x15] = (long)"mTalkableDistance";
  param_1[0x16] = 0;
  puVar3 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x18) = 8;
  puVar1 = puVar3 + 0x10;
  param_1[0x19] = 0;
  plVar6 = param_1 + 0x14;
  *plVar6 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0x41a00000;
  if ((*(uint *)(param_1 + 0x18) & 0x800) != 0) {
    uVar7 = 0x3eb2b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar4 = uVar7;
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x19] = 0;
    uVar7 = 0x41a00000;
    if ((uVar2 & 0x800) != 0) {
      uVar7 = 0x3eb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x19) = uVar7;
  }
  param_1[0x1d] = 0;
  *(uint *)(param_1 + 0x18) = uVar2 & 0xfeffffff;
  param_1[0x1b] = (long)"mPlayerHalfViewAngle";
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 8;
  param_1[0x1f] = 0;
  plVar6 = param_1 + 0x1a;
  *plVar6 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar6);
  uVar7 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x1e) & 0x800) != 0) {
    uVar7 = 0x3f060a92;
  }
  puVar4 = (undefined4 *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  *puVar4 = uVar7;
  uVar2 = *(uint *)(param_1 + 0x1e);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x1f] = 0;
    uVar7 = 0x41f00000;
    if ((uVar2 & 0x800) != 0) {
      uVar7 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x1f) = uVar7;
  }
  *(uint *)(param_1 + 0x1e) = uVar2 & 0xfeffffff;
  *(undefined4 *)(param_1 + 0x24) = 8;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = (long)(puVar3 + 0x10);
  param_1[0x21] = (long)"mSignboardHalfViewAngle";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x20);
  uVar7 = 0x42340000;
  if ((*(uint *)(param_1 + 0x24) & 0x800) != 0) {
    uVar7 = 0x3f490fdb;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x20] + 0xf0))(param_1 + 0x20);
  *puVar4 = uVar7;
  uVar2 = *(uint *)(param_1 + 0x24);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x25] = 0;
    uVar7 = 0x42340000;
    if ((uVar2 & 0x800) != 0) {
      uVar7 = 0x3f490fdb;
    }
    *(undefined4 *)(param_1 + 0x25) = uVar7;
  }
  *(uint *)(param_1 + 0x24) = uVar2 & 0xfeffffff;
  return;
}

