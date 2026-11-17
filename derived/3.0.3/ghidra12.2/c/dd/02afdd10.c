
void FUN_02afdd10(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "Actor";
  local_78 = puVar1;
  FUN_00751ec0(param_1,&local_78,param_2,0);
  *param_1 = (long)&PTR_FUN_04aa0d48;
  pcStack_70 = "mLightBaseColor";
  puStack_60 = &DAT_0407ebb1;
  puStack_50 = &DAT_0407ebb1;
  local_48 = 8;
  local_88 = 0x3f2b851f3f800000;
  uStack_80 = 0x3f8000003ee66666;
  local_78 = puVar1;
  local_68 = puVar1;
  local_58 = puVar1;
  FUN_00744b60(param_1 + 0x18,&local_78,&local_88,param_1);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 8;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x25] = 0;
  param_1[0x20] = (long)(puVar1 + 0x10);
  param_1[0x21] = (long)"mDynamicLightToONMorphFrame";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x20);
  uVar5 = 0x41f00000;
  if ((*(uint *)(param_1 + 0x24) & 0x800) != 0) {
    uVar5 = 0x3f060a92;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x20] + 0xf0))(param_1 + 0x20);
  *puVar3 = uVar5;
  uVar2 = *(uint *)(param_1 + 0x24);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x25] = 0;
    uVar5 = 0x41f00000;
    if ((uVar2 & 0x800) != 0) {
      uVar5 = 0x3f060a92;
    }
    *(undefined4 *)(param_1 + 0x25) = uVar5;
  }
  *(undefined4 *)(param_1 + 0x2a) = 8;
  *(uint *)(param_1 + 0x24) = uVar2 & 0xfeffffff;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x26] = (long)(puVar1 + 0x10);
  param_1[0x27] = (long)"mDynamicLightToOFFMorphFrame";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x26);
  uVar5 = 0x41700000;
  if ((*(uint *)(param_1 + 0x2a) & 0x800) != 0) {
    uVar5 = 0x3e860a92;
  }
  puVar3 = (undefined4 *)(**(code **)(param_1[0x26] + 0xf0))(param_1 + 0x26);
  *puVar3 = uVar5;
  uVar2 = *(uint *)(param_1 + 0x2a);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x2b] = 0;
    uVar5 = 0x41700000;
    if ((uVar2 & 0x800) != 0) {
      uVar5 = 0x3e860a92;
    }
    *(undefined4 *)(param_1 + 0x2b) = uVar5;
  }
  *(uint *)(param_1 + 0x2a) = uVar2 & 0xfeffffff;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 8;
  puVar1 = PTR_DAT_04bb5a88;
  param_1[0x31] = 0;
  param_1[0x2c] = (long)(puVar1 + 0x10);
  param_1[0x2d] = (long)"mNpcWaitFrame";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2c);
  puVar4 = (undefined1 *)(**(code **)(param_1[0x2c] + 0xf0))(param_1 + 0x2c);
  *puVar4 = 0x3c;
  if ((*(uint *)(param_1 + 0x30) >> 7 & 1) == 0) {
    param_1[0x31] = 0;
    *(undefined1 *)(param_1 + 0x31) = 0x3c;
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfeffffff;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800000;
  return;
}

