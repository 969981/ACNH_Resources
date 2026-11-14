
void FUN_01bed9e0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb2698;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    plVar7 = malloc(0x248);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar10 + 8);
    if (lVar6 != 0) {
      puVar3 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x248,8);
  }
  memset(plVar7 + 1,0,0x1e0);
  puVar2 = PTR_DAT_04bb2d80;
  plVar7[7] = 0;
  plVar7[8] = 0;
  puVar1 = puVar2 + 0x10;
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  *(undefined4 *)(plVar7 + 0x3d) = 0xffffffff;
  plVar7[0x13] = 0;
  plVar7[0x14] = 0;
  *(undefined4 *)(plVar7 + 0x40) = 0;
  plVar7[3] = (long)puVar1;
  plVar7[9] = (long)puVar1;
  plVar7[0xf] = (long)puVar1;
  plVar7[0x15] = (long)puVar1;
  plVar7[0x1b] = (long)puVar1;
  plVar7[0x21] = (long)puVar1;
  plVar7[0x27] = (long)puVar1;
  plVar7[0x2d] = (long)puVar1;
  plVar7[0x33] = (long)puVar1;
  plVar7[0x39] = (long)puVar1;
  plVar7[0x19] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x1f] = 0;
  plVar7[0x20] = 0;
  plVar7[0x25] = 0;
  plVar7[0x26] = 0;
  plVar7[0x2b] = 0;
  plVar7[0x2c] = 0;
  plVar7[0x31] = 0;
  plVar7[0x32] = 0;
  plVar7[0x37] = 0;
  plVar7[0x38] = 0;
  plVar7[0x3e] = 0;
  plVar7[0x3f] = 0;
  plVar7[0x42] = (long)PTR_DAT_04bc0848;
  plVar7[0x41] = param_2;
  *(undefined4 *)((long)plVar7 + 0x224) = 0;
  *(undefined2 *)(plVar7 + 0x45) = 0;
  *(undefined4 *)((long)plVar7 + 0x21f) = 0;
  plVar7[0x43] = 0;
  *(undefined8 *)((long)plVar7 + 0x23d) = 0;
  plVar7[0x47] = 0;
  *plVar7 = (long)(PTR_DAT_04bc0b48 + 0x10);
  lVar10 = *(long *)puVar4;
  plVar7[0x46] = 0;
  if (lVar10 == 0) {
    plVar8 = malloc(0x4c0);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar10 + 8);
    if (lVar6 != 0) {
      puVar3 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar8 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x4c0,8);
  }
  memset(plVar8 + 1,0,0x1e0);
  puVar1 = puVar2 + 0x10;
  *(undefined4 *)(plVar8 + 0x3d) = 0xffffffff;
  plVar8[3] = (long)puVar1;
  plVar8[9] = (long)puVar1;
  plVar8[0xf] = (long)puVar1;
  plVar8[0x15] = (long)puVar1;
  plVar8[0x1b] = (long)puVar1;
  plVar8[0x21] = (long)puVar1;
  plVar8[0x27] = (long)puVar1;
  plVar8[0x2d] = (long)puVar1;
  plVar8[0x33] = (long)puVar1;
  plVar8[0x39] = (long)puVar1;
  *(undefined4 *)((long)plVar8 + 0x20f) = 0;
  *(undefined8 *)((long)plVar8 + 0x22d) = 0;
  *(undefined8 *)((long)plVar8 + 0x276) = 0;
  *(undefined4 *)(plVar8 + 0x40) = 0;
  *(undefined4 *)((long)plVar8 + 0x214) = 0;
  *(undefined2 *)(plVar8 + 0x43) = 0;
  plVar8[0x41] = 0;
  plVar8[0x45] = 0;
  plVar8[0x44] = 0;
  *(undefined2 *)(plVar8 + 0x4d) = 0;
  plVar8[0x4c] = 0;
  plVar8[0x4b] = 0;
  plVar8[0x4a] = 0;
  plVar8[0x49] = 0;
  plVar8[0x48] = 0;
  plVar8[0x47] = 0;
  plVar8[0x4e] = 0;
  *(undefined4 *)(plVar8 + 0x50) = 9;
  *(undefined2 *)((long)plVar8 + 0x284) = 0;
  plVar8[0x55] = 0;
  plVar8[0x54] = 0;
  plVar8[0x53] = 0;
  plVar8[0x52] = 0;
  *(undefined1 *)(plVar8 + 0x56) = 1;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[0xd] = 0;
  plVar8[0xe] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  plVar8[0x19] = 0;
  plVar8[0x1a] = 0;
  plVar8[0x1f] = 0;
  plVar8[0x20] = 0;
  plVar8[0x25] = 0;
  plVar8[0x26] = 0;
  plVar8[0x2b] = 0;
  plVar8[0x2c] = 0;
  plVar8[0x31] = 0;
  plVar8[0x32] = 0;
  plVar8[0x37] = 0;
  plVar8[0x38] = 0;
  plVar8[0x3e] = 0;
  plVar8[0x3f] = 0;
  plVar8[0x51] = (long)(PTR_DAT_04bc0cd8 + 0x10);
  plVar8[0x57] = (long)plVar8 + 0x2cc;
  *(undefined4 *)(plVar8 + 0x58) = 10;
  puVar1 = PTR_DAT_04bc0b00 + 0x10;
  *(undefined4 *)((long)plVar8 + 0x2b4) = 0;
  *plVar8 = (long)puVar1;
  lVar10 = *(long *)PTR_DAT_04bb2718;
  *(undefined4 *)(plVar8 + 0x59) = 0;
  *(undefined4 *)((long)plVar8 + 0x2c4) = 0;
  plVar8[0x96] = param_2;
  *(undefined1 *)((long)plVar8 + 0x4bc) = 0;
  *(undefined4 *)(plVar8 + 0x97) = 0;
  uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0x408) + 8);
  uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0x400) + 8);
  FUN_003532e0(param_1);
  *(undefined8 *)((long)param_1 + 0xd) = 0;
  *(undefined1 **)((long)param_1 + 0x2c) = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 1) = 0xff;
  *(undefined1 *)((long)param_1 + 0xc) = 0xff;
  *(undefined8 *)((long)param_1 + 0x15) = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined2 *)((long)param_1 + 0x49) = 0xffff;
  *(undefined1 *)((long)param_1 + 0x4b) = 0xff;
  param_1[7] = uVar9;
  param_1[8] = uVar11;
  *param_1 = &DAT_04a3d400;
  lVar10 = *(long *)puVar4;
  param_1[0xc] = plVar8;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  param_1[0xb] = plVar7;
  if (lVar10 == 0) {
    plVar7 = malloc(0x208);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    puVar3 = (undefined8 *)(lVar10 + 8);
    if (lVar6 != 0) {
      puVar3 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  memset(plVar7 + 1,0,0x1e0);
  puVar2 = puVar2 + 0x10;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[3] = (long)puVar2;
  plVar7[9] = (long)puVar2;
  plVar7[0xf] = (long)puVar2;
  plVar7[0x15] = (long)puVar2;
  plVar7[0x1b] = (long)puVar2;
  plVar7[0x21] = (long)puVar2;
  plVar7[0x27] = (long)puVar2;
  plVar7[0x2d] = (long)puVar2;
  plVar7[0x33] = (long)puVar2;
  plVar7[0x39] = (long)puVar2;
  *(undefined4 *)(plVar7 + 0x3d) = 0xffffffff;
  plVar7[0x40] = 0;
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  plVar7[0x13] = 0;
  plVar7[0x14] = 0;
  plVar7[0x19] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x1f] = 0;
  plVar7[0x20] = 0;
  plVar7[0x25] = 0;
  plVar7[0x26] = 0;
  plVar7[0x2b] = 0;
  plVar7[0x2c] = 0;
  plVar7[0x31] = 0;
  plVar7[0x32] = 0;
  plVar7[0x37] = 0;
  plVar7[0x38] = 0;
  plVar7[0x3e] = 0;
  plVar7[0x3f] = 0;
  *plVar7 = (long)(PTR_DAT_04bc0770 + 0x10);
  *(undefined4 *)((long)param_1 + 0x74) = 100;
  param_1[0xd] = plVar7;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = &DAT_04a3d790;
  return;
}

