
void FUN_01650adc(long *param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  
  lVar5 = *(long *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[7] = (long)param_1 + 0x44;
  *(undefined4 *)(param_1 + 8) = 0x100;
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  puVar1 = PTR_DAT_04bb21f8 + 0x10;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[5] = 0;
  param_1[6] = (long)puVar1;
  param_1[0x2a] = (long)param_1;
  *param_1 = (long)&PTR_FUN_049b84f0;
  param_1[1] = lVar5;
  puVar1 = PTR_DAT_04bb2020;
  local_98 = PTR_DAT_04bb2020 + 0x10;
  local_68 = 0;
  local_a0 = (undefined1 *)CONCAT44(local_a0._4_4_,0x43200000);
  pcStack_90 = "mPos";
  puStack_70 = &DAT_0407ebb1;
  puStack_80 = &DAT_04081664;
  local_a8 = 0x41e0000043200000;
  local_88 = local_98;
  local_78 = local_98;
  FUN_006fdfc0(param_1 + 0x2b,&local_98,&local_a8,param_1);
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  puVar3 = PTR_DAT_04bb31d0;
  param_1[0x37] = 0;
  param_1[0x32] = (long)(puVar3 + 0x10);
  param_1[0x33] = (long)"mAlternateLightPosZ";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x32);
  uVar6 = 0x43200000;
  if ((*(uint *)(param_1 + 0x36) & 0x800) != 0) {
    uVar6 = 0x4032b8c2;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x32] + 0xf0))(param_1 + 0x32);
  *puVar4 = uVar6;
  uVar2 = *(uint *)(param_1 + 0x36);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x37] = 0;
    uVar6 = 0x43200000;
    if ((uVar2 & 0x800) != 0) {
      uVar6 = 0x4032b8c2;
    }
    *(undefined4 *)(param_1 + 0x37) = uVar6;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(uint *)(param_1 + 0x36) = uVar2 & 0xfeffffff;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3d] = 0;
  param_1[0x38] = (long)(puVar3 + 0x10);
  param_1[0x39] = (long)"mSize";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x38);
  uVar6 = 0x420c0000;
  if ((*(uint *)(param_1 + 0x3c) & 0x800) != 0) {
    uVar6 = 0x3f1c61aa;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x38] + 0xf0))(param_1 + 0x38);
  *puVar4 = uVar6;
  uVar2 = *(uint *)(param_1 + 0x3c);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x3d] = 0;
    uVar6 = 0x420c0000;
    if ((uVar2 & 0x800) != 0) {
      uVar6 = 0x3f1c61aa;
    }
    *(undefined4 *)(param_1 + 0x3d) = uVar6;
  }
  *(uint *)(param_1 + 0x3c) = uVar2 & 0xfeffffff;
  param_1[0x3f] = (long)"mRadius";
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x3e] = (long)(puVar3 + 0x10);
  param_1[0x43] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3e);
  uVar6 = 0x42700000;
  if ((*(uint *)(param_1 + 0x42) & 0x800) != 0) {
    uVar6 = 0x3f860a92;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x3e] + 0xf0))(param_1 + 0x3e);
  *puVar4 = uVar6;
  uVar2 = *(uint *)(param_1 + 0x42);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x43] = 0;
    uVar6 = 0x42700000;
    if ((uVar2 & 0x800) != 0) {
      uVar6 = 0x3f860a92;
    }
    *(undefined4 *)(param_1 + 0x43) = uVar6;
  }
  puVar1 = puVar1 + 0x10;
  local_68 = 0;
  *(uint *)(param_1 + 0x42) = uVar2 & 0xfeffffff;
  pcStack_90 = "mOrangeColor";
  puStack_80 = &DAT_04071f8e;
  puStack_70 = &DAT_0407ebb1;
  local_a8 = 0x3f0000003f800000;
  local_a0 = (undefined1 *)0x3f8000003e4ccccd;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_00744b60(param_1 + 0x44,&local_98,&local_a8,param_1);
  param_1[0x4e] = 0;
  param_1[0x4d] = (long)"mOrangeColorIntensity";
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x4c] = (long)(puVar3 + 0x10);
  param_1[0x51] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4c);
  uVar6 = 0x40400000;
  if ((*(uint *)(param_1 + 0x50) & 0x800) != 0) {
    uVar6 = 0x3d567750;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x4c] + 0xf0))(param_1 + 0x4c);
  *puVar4 = uVar6;
  uVar2 = *(uint *)(param_1 + 0x50);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x51] = 0;
    uVar6 = 0x40400000;
    if ((uVar2 & 0x800) != 0) {
      uVar6 = 0x3d567750;
    }
    *(undefined4 *)(param_1 + 0x51) = uVar6;
  }
  local_68 = 0;
  *(uint *)(param_1 + 0x50) = uVar2 & 0xfeffffff;
  pcStack_90 = "mWhiteColor";
  puStack_80 = &DAT_040e469c;
  puStack_70 = &DAT_0407ebb1;
  local_a8 = 0x3f8000003f733333;
  local_a0 = &DAT_3f8000003f800000;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_00744b60(param_1 + 0x52,&local_98,&local_a8,param_1);
  param_1[0x5c] = 0;
  param_1[0x5b] = (long)"mWhiteColorIntensity";
  param_1[0x5a] = (long)(puVar3 + 0x10);
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5a);
  uVar6 = 0x41400000;
  if ((*(uint *)(param_1 + 0x5e) & 0x800) != 0) {
    uVar6 = 0x3e567750;
  }
  puVar4 = (undefined4 *)(**(code **)(param_1[0x5a] + 0xf0))(param_1 + 0x5a);
  *puVar4 = uVar6;
  uVar2 = *(uint *)(param_1 + 0x5e);
  if ((uVar2 >> 7 & 1) == 0) {
    param_1[0x5f] = 0;
    uVar6 = 0x41400000;
    if ((uVar2 & 0x800) != 0) {
      uVar6 = 0x3e567750;
    }
    *(undefined4 *)(param_1 + 0x5f) = uVar6;
  }
  *(uint *)(param_1 + 0x5e) = uVar2 & 0xfeffffff;
  return;
}

