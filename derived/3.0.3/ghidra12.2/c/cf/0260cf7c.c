
void FUN_0260cf7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_80;
  char *pcStack_78;
  int local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  long local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar4 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_78 = "PlayReportMgr";
  local_80 = puVar1;
  uVar5 = FUN_038c6d48(0xca800,&local_80,param_2,8,1,0);
  *(undefined8 *)(param_1 + 8) = uVar5;
  pcStack_78 = "ErepoHeap";
  local_80 = puVar1;
  local_80 = (undefined *)FUN_038c6d48(0x84000,&local_80,uVar5,8,1,1);
  *(undefined **)(param_1 + 0x10) = local_80;
  local_68 = 0x80;
  local_58 = 0x80;
  pcStack_78 = (char *)0x64000;
  lVar9 = *(long *)PTR_DAT_04bb4410;
  if (lVar9 == 0) {
    local_50 = 0;
    uStack_48 = 0;
  }
  else {
    local_50 = *(undefined8 *)(lVar9 + 0x140);
    uStack_48 = *(undefined8 *)(lVar9 + 0x148);
  }
  local_54 = 0;
  pcStack_a0 = "PlayReport";
  local_a8 = puVar1;
  FUN_03c53c60(&local_98,&local_a8);
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,local_98._4_4_);
  local_60 = (long)uStack_90._4_4_;
  local_70 = 1 << (ulong)(local_98._4_4_ & 0x1f);
  uStack_6c = (undefined4)local_98;
  FUN_03f25d08(0);
  FUN_03f25e20(*(undefined8 *)PTR_DAT_04bc3578,&local_80);
  uStack_90 = "FieldParser";
  local_98 = puVar1;
  plVar6 = (long *)FUN_038c6d48(0x20800,&local_98,*(undefined8 *)(param_1 + 8),8,1,1);
  *(long **)(param_1 + 0x18) = plVar6;
  puVar1 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar6 = malloc(0x98);
  }
  else {
    if (plVar6 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar9 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x98,8);
  }
  puVar2 = PTR_FUN_04bc3540;
  plVar6[6] = (long)plVar6;
  plVar6[7] = (long)puVar2;
  puVar2 = PTR_DAT_04bc3558 + 0x10;
  puVar3 = PTR_DAT_04bc3560 + 0x10;
  plVar6[2] = 0;
  plVar6[3] = 0;
  *plVar6 = (long)puVar2;
  plVar6[1] = 0;
  plVar6[4] = 0;
  plVar6[5] = (long)puVar3;
  puVar2 = PTR_DAT_04bc3568 + 0x10;
  plVar6[8] = 0;
  plVar6[9] = (long)puVar2;
  puVar2 = PTR_FUN_04bc3548;
  plVar6[10] = (long)plVar6;
  plVar6[0xb] = (long)puVar2;
  puVar2 = PTR_DAT_04bc3570;
  plVar6[0x12] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = (long)(puVar2 + 0x10);
  puVar2 = PTR_LAB_04bc3550;
  plVar6[0x10] = 0;
  plVar6[0x11] = 0;
  plVar6[0xe] = (long)plVar6;
  plVar6[0xf] = (long)puVar2;
  *(long **)(param_1 + 0x98) = plVar6;
  FUN_02606e80(plVar6,*(undefined8 *)(param_1 + 0x18));
  local_98 = puVar4 + 0x10;
  uStack_90 = "CollectBitParser";
  plVar6 = (long *)FUN_038c6d48(0xa000,&local_98,*(undefined8 *)(param_1 + 8),8,1,1);
  lVar9 = *(long *)puVar1;
  *(long **)(param_1 + 0x20) = plVar6;
  if (lVar9 == 0) {
    plVar6 = malloc(0x18);
  }
  else {
    if (plVar6 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar9 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x18,8);
  }
  puVar2 = PTR_DAT_04bc3538;
  *(undefined4 *)(plVar6 + 2) = 0;
  *plVar6 = (long)(puVar2 + 0x10);
  plVar6[1] = 0;
  *(long **)(param_1 + 0xa0) = plVar6;
  lVar9 = *(long *)puVar1;
  plVar6[1] = *(long *)(param_1 + 0x20);
  if (lVar9 == 0) {
    plVar6 = malloc(0x160);
  }
  else {
    plVar8 = *(long **)(param_1 + 8);
    if (plVar8 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar9 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      plVar6 = (long *)0x0;
      if (plVar8 == (long *)0x0) goto LAB_0260d2a0;
    }
    plVar6 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x160,8);
  }
LAB_0260d2a0:
  *(undefined2 *)(plVar6 + 5) = 0;
  puVar1 = PTR_DAT_04bc3580;
  *(undefined4 *)(plVar6 + 6) = 0;
  puVar2 = PTR_DAT_04bd4738;
  *(undefined8 *)((long)plVar6 + 0xfe) = 0;
  *(undefined8 *)((long)plVar6 + 0xf6) = 0;
  *(undefined8 *)((long)plVar6 + 0xee) = 0;
  *(undefined8 *)((long)plVar6 + 0xe6) = 0;
  *(undefined8 *)((long)plVar6 + 0xde) = 0;
  *(undefined8 *)((long)plVar6 + 0xd6) = 0;
  *(undefined8 *)((long)plVar6 + 0xce) = 0;
  *(undefined8 *)((long)plVar6 + 0xc6) = 0;
  *(undefined8 *)((long)plVar6 + 0xbe) = 0;
  *(undefined8 *)((long)plVar6 + 0xb6) = 0;
  plVar6[4] = 0xffffffff;
  plVar6[7] = 0;
  *(undefined4 *)(plVar6 + 8) = 0;
  plVar6[0x14] = 0;
  *(undefined4 *)(plVar6 + 0x14) = 0;
  *(undefined1 *)((long)plVar6 + 0xa4) = 0;
  *(undefined8 *)((long)plVar6 + 0xae) = 0;
  *(undefined8 *)((long)plVar6 + 0xa6) = 0;
  *plVar6 = (long)(puVar1 + 0x10);
  plVar6[1] = (long)(puVar2 + 0x10);
  *(undefined8 *)((long)plVar6 + 0x146) = 0;
  plVar6[0xb] = 0;
  *(undefined8 *)((long)plVar6 + 0x13e) = 0;
  *(undefined8 *)((long)plVar6 + 0x136) = 0;
  *(undefined8 *)((long)plVar6 + 0x12e) = 0;
  *(undefined8 *)((long)plVar6 + 0x126) = 0;
  *(undefined8 *)((long)plVar6 + 0x11e) = 0;
  *(undefined8 *)((long)plVar6 + 0x116) = 0;
  *(undefined8 *)((long)plVar6 + 0x10e) = 0;
  *(undefined8 *)((long)plVar6 + 0x106) = 0;
  *(undefined2 *)((long)plVar6 + 0xbc) = 0xffff;
  *(undefined2 *)((long)plVar6 + 0xc4) = 0xffff;
  *(undefined2 *)((long)plVar6 + 0xcc) = 0xffff;
  *(undefined2 *)((long)plVar6 + 0xd4) = 0xffff;
  *(undefined2 *)((long)plVar6 + 0xdc) = 0xffff;
  *(undefined2 *)((long)plVar6 + 0xe4) = 0xffff;
  *(undefined2 *)((long)plVar6 + 0xec) = 0xffff;
  *(undefined2 *)((long)plVar6 + 0xf4) = 0xffff;
  *(undefined2 *)((long)plVar6 + 0xfc) = 0xffff;
  *(undefined2 *)((long)plVar6 + 0x104) = 0xffff;
  *(undefined4 *)((long)plVar6 + 0x5c) = 1;
  *(undefined4 *)((long)plVar6 + 0xac) = 1;
  *(undefined4 *)(plVar6 + 0x23) = 0;
  *(undefined1 *)((long)plVar6 + 0x11c) = 0;
  *(undefined4 *)((long)plVar6 + 300) = 0;
  *(undefined1 *)(plVar6 + 0x26) = 0;
  *(undefined4 *)(plVar6 + 0x28) = 0;
  *(undefined1 *)((long)plVar6 + 0x144) = 0;
  *(undefined4 *)((long)plVar6 + 0x126) = 0;
  *(undefined8 *)((long)plVar6 + 0x11e) = 0;
  *(undefined4 *)((long)plVar6 + 0x13a) = 0;
  *(undefined8 *)((long)plVar6 + 0x132) = 0;
  *(undefined8 *)((long)plVar6 + 0x10e) = 0;
  plVar6[0x21] = 0;
  *(undefined8 *)((long)plVar6 + 0x156) = 0;
  plVar6[0x2a] = 0;
  plVar6[2] = 0xffffffff;
  plVar6[3] = 0xffffffff;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  *(undefined4 *)((long)plVar6 + 100) = 0xffffffff;
  plVar6[0xe] = 0;
  plVar6[0xf] = 0;
  plVar6[0xe] = 0;
  *(undefined4 *)((long)plVar6 + 0x77) = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = 0;
  *(undefined4 *)((long)plVar6 + 0x8c) = 0;
  *(undefined8 *)((long)plVar6 + 0x7c) = 0;
  *(undefined8 *)((long)plVar6 + 0x82) = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  *(undefined1 *)(plVar6 + 0x12) = 0;
  *(undefined8 *)((long)plVar6 + 0x92) = 0;
  *(undefined4 *)((long)plVar6 + 0x9a) = 0;
  *(long **)(param_1 + 0xa8) = plVar6;
  FUN_0260f888(plVar6,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x98));
  local_98 = puVar4 + 0x10;
  uStack_90 = "AppReportWork";
  uVar5 = FUN_038c6d48(0,&local_98,*(undefined8 *)(param_1 + 8),8,1,1);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  FUN_007b44a8(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}

