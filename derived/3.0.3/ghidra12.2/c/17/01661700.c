
void FUN_01661700(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  MutexType *pMVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  char *pcStack_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 auStack_48 [8];
  
  puVar4 = PTR_DAT_04bb3350;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    puVar7 = malloc(0x468);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) goto LAB_016619ec;
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x468,8);
  }
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar7 + 2) = 0;
    *(undefined4 *)((long)puVar7 + 0x24) = 0;
    puVar7[1] = 0;
    puVar1 = PTR_DAT_04bdf0c8;
    *puVar7 = 0xe;
    puVar2 = PTR_DAT_04bdf1d8;
    *(undefined1 *)(puVar7 + 4) = 1;
    puVar1 = puVar1 + 0x10;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar2 = puVar2 + 0x10;
    puVar7[3] = puVar1;
    puVar7[9] = 0;
    puVar7[0xb] = 0;
    *(undefined1 *)(puVar7 + 0xc) = 0;
    puVar7[0xd] = puVar1;
    *(undefined4 *)(puVar7 + 10) = 0xffffffff;
    *(undefined1 *)(puVar7 + 0xe) = 1;
    *(undefined4 *)((long)puVar7 + 0x74) = 0;
    puVar7[0x11] = 0;
    *(undefined4 *)(puVar7 + 0x14) = 0xffffffff;
    puVar7[0x15] = 0;
    *(undefined1 *)(puVar7 + 0x16) = 0;
    puVar7[0x17] = puVar1;
    *(undefined1 *)(puVar7 + 0x18) = 1;
    *(undefined4 *)((long)puVar7 + 0xc4) = 0;
    puVar7[0x1d] = 0;
    *(undefined4 *)(puVar7 + 0x1e) = 0xffffffff;
    puVar7[0x1f] = 0;
    *(undefined1 *)(puVar7 + 0x20) = 0;
    puVar7[0x21] = puVar1;
    *(undefined1 *)(puVar7 + 0x22) = 1;
    *(undefined4 *)((long)puVar7 + 0x114) = 0;
    puVar7[0x25] = 0;
    *(undefined4 *)(puVar7 + 0x28) = 0xffffffff;
    puVar7[0x29] = 0;
    *(undefined1 *)(puVar7 + 0x2a) = 0;
    puVar7[0x2b] = puVar1;
    *(undefined1 *)(puVar7 + 0x2c) = 1;
    *(undefined4 *)((long)puVar7 + 0x164) = 0;
    puVar7[0x31] = 0;
    *(undefined4 *)(puVar7 + 0x32) = 0xffffffff;
    puVar7[0x33] = 0;
    *(undefined1 *)(puVar7 + 0x34) = 0;
    puVar7[0x35] = puVar1;
    *(undefined1 *)(puVar7 + 0x36) = 1;
    *(undefined4 *)((long)puVar7 + 0x1b4) = 0;
    puVar7[0x39] = 0;
    *(undefined4 *)(puVar7 + 0x3c) = 0xffffffff;
    puVar7[0x3d] = 0;
    *(undefined1 *)(puVar7 + 0x3e) = 0;
    puVar7[0x3f] = puVar1;
    *(undefined1 *)(puVar7 + 0x40) = 1;
    *(undefined4 *)((long)puVar7 + 0x204) = 0;
    puVar7[0x41] = 0;
    puVar7[0x42] = puVar2;
    puVar7[0x45] = 0;
    puVar7[0x44] = 0;
    puVar7[0x43] = 0;
    *(undefined4 *)(puVar7 + 0x46) = 0xffffffff;
    puVar7[0x47] = 0;
    *(undefined1 *)(puVar7 + 0x48) = 0;
    puVar7[0x49] = puVar1;
    *(undefined1 *)(puVar7 + 0x4a) = 1;
    *(undefined4 *)((long)puVar7 + 0x254) = 0;
    puVar7[0x4b] = 0;
    puVar7[0x4c] = puVar2;
    puVar7[0x4f] = 0;
    puVar7[0x4e] = 0;
    puVar7[0x4d] = 0;
    *(undefined4 *)(puVar7 + 0x50) = 0xffffffff;
    puVar7[0x51] = 0;
    *(undefined1 *)(puVar7 + 0x52) = 0;
    puVar7[0x53] = puVar1;
    *(undefined1 *)(puVar7 + 0x54) = 1;
    *(undefined4 *)((long)puVar7 + 0x2a4) = 0;
    puVar7[0x55] = 0;
    puVar7[0x56] = puVar2;
    puVar7[0x59] = 0;
    puVar7[0x58] = 0;
    puVar7[0x57] = 0;
    *(undefined4 *)(puVar7 + 0x5a) = 0xffffffff;
    puVar7[0x5b] = 0;
    *(undefined1 *)(puVar7 + 0x5c) = 0;
    puVar7[0x5d] = puVar1;
    *(undefined1 *)(puVar7 + 0x5e) = 1;
    *(undefined4 *)((long)puVar7 + 0x2f4) = 0;
    puVar7[0x5f] = 0;
    puVar7[0x60] = puVar2;
    puVar7[99] = 0;
    puVar7[0x62] = 0;
    puVar7[0x61] = 0;
    *(undefined4 *)(puVar7 + 100) = 0xffffffff;
    puVar7[0x65] = 0;
    *(undefined1 *)(puVar7 + 0x66) = 0;
    puVar7[0x67] = puVar1;
    *(undefined1 *)(puVar7 + 0x68) = 1;
    *(undefined4 *)((long)puVar7 + 0x344) = 0;
    puVar7[0x69] = 0;
    puVar7[0x6a] = puVar2;
    puVar7[0x6d] = 0;
    puVar7[0x6c] = 0;
    puVar7[0x6b] = 0;
    *(undefined4 *)(puVar7 + 0x6e) = 0xffffffff;
    puVar7[0x6f] = 0;
    *(undefined1 *)(puVar7 + 0x70) = 0;
    puVar7[0x71] = puVar1;
    *(undefined1 *)(puVar7 + 0x72) = 1;
    *(undefined4 *)((long)puVar7 + 0x394) = 0;
    puVar7[0x73] = 0;
    puVar7[0x74] = puVar2;
    puVar7[0x77] = 0;
    puVar7[0x76] = 0;
    puVar7[0x75] = 0;
    *(undefined4 *)(puVar7 + 0x78) = 0xffffffff;
    puVar7[0x79] = 0;
    *(undefined1 *)(puVar7 + 0x7a) = 0;
    puVar7[0x7b] = puVar1;
    *(undefined1 *)(puVar7 + 0x7c) = 1;
    *(undefined4 *)((long)puVar7 + 0x3e4) = 0;
    puVar7[0x7d] = 0;
    puVar7[0x7e] = puVar2;
    puVar7[0x81] = 0;
    puVar7[0x80] = 0;
    puVar7[0x7f] = 0;
    *(undefined4 *)(puVar7 + 0x82) = 0xffffffff;
    puVar7[0x83] = 0;
    *(undefined1 *)(puVar7 + 0x84) = 0;
    puVar7[0x85] = puVar1;
    *(undefined1 *)(puVar7 + 0x86) = 1;
    *(undefined4 *)((long)puVar7 + 0x434) = 0;
    puVar7[0x87] = 0;
    puVar7[0x88] = puVar2;
    puVar7[0x8b] = 0;
    puVar7[0x8a] = 0;
    puVar7[0x89] = 0;
    *(undefined4 *)(puVar7 + 0x8c) = 0xffffffff;
    puVar7[5] = 0;
    puVar7[6] = puVar2;
    puVar7[0xf] = 0;
    puVar7[0x10] = puVar2;
    puVar7[0x12] = 0;
    puVar7[0x13] = 0;
    puVar7[0x19] = 0;
    puVar7[0x1a] = puVar2;
    puVar7[0x1b] = 0;
    puVar7[0x1c] = 0;
    puVar7[0x23] = 0;
    puVar7[0x24] = puVar2;
    puVar7[0x26] = 0;
    puVar7[0x27] = 0;
    puVar7[0x2d] = 0;
    puVar7[0x2e] = puVar2;
    puVar7[0x2f] = 0;
    puVar7[0x30] = 0;
    puVar7[0x37] = 0;
    puVar7[0x38] = puVar2;
    puVar7[0x3a] = 0;
    puVar7[0x3b] = 0;
    *(undefined4 *)(param_1 + 0x38) = 0xe;
    *(undefined8 **)(param_1 + 0x40) = puVar7 + 1;
  }
LAB_016619ec:
  lVar9 = *(long *)PTR_DAT_04bb49b8;
  local_50 = auStack_48;
  local_58 = 0x100000000;
  uVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
  if ((int)local_58 < local_58._4_4_) {
    *(undefined8 *)(local_50 + (long)(int)local_58 * 8) = uVar8;
    local_58 = CONCAT44(local_58._4_4_,(int)local_58 + 1);
  }
  pMVar3 = (MutexType *)(lVar9 + 0x178);
  nn::os::LockMutex(pMVar3);
  *(undefined8 **)(lVar9 + 0x150) = &local_58;
  *(undefined1 *)(lVar9 + 0x198) = 1;
  nn::os::UnlockMutex(pMVar3);
  puVar1 = PTR_DAT_04bb2110;
  puVar4 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "FldUnit";
  pcStack_70 = "FieldResource";
  local_78 = puVar4;
  local_68 = puVar4;
  FUN_00818830(*(undefined8 *)PTR_DAT_04bb2110,*(undefined8 *)(param_1 + 0x40),&local_68,1,&local_78
              );
  pcStack_60 = "FldProcGrass";
  pcStack_70 = "FieldResource";
  local_78 = puVar4;
  local_68 = puVar4;
  FUN_00818830(*(undefined8 *)puVar1,
               *(long *)(param_1 + 0x40) + (ulong)(1 < *(uint *)(param_1 + 0x38)) * 0x50,&local_68,1
               ,&local_78);
  pcStack_70 = "FieldResource";
  pcStack_60 = "FldUnitCliff";
  lVar5 = 0xa0;
  if (*(uint *)(param_1 + 0x38) < 3) {
    lVar5 = 0;
  }
  local_78 = puVar4;
  local_68 = puVar4;
  FUN_00818830(*(undefined8 *)puVar1,*(long *)(param_1 + 0x40) + lVar5,&local_68,1,&local_78);
  pcStack_70 = "FieldResource";
  pcStack_60 = "FldUnitFall";
  lVar5 = 0xf0;
  if (*(uint *)(param_1 + 0x38) < 4) {
    lVar5 = 0;
  }
  local_78 = puVar4;
  local_68 = puVar4;
  FUN_00818830(*(undefined8 *)puVar1,*(long *)(param_1 + 0x40) + lVar5,&local_68,1,&local_78);
  pcStack_70 = "FieldResource";
  pcStack_60 = "FldUnitRiver";
  lVar5 = 0x140;
  if (*(uint *)(param_1 + 0x38) < 5) {
    lVar5 = 0;
  }
  local_78 = puVar4;
  local_68 = puVar4;
  FUN_00818830(*(undefined8 *)puVar1,*(long *)(param_1 + 0x40) + lVar5,&local_68,1,&local_78);
  pcStack_70 = "FieldResource";
  pcStack_60 = "FldUnitRoadStone";
  lVar5 = 400;
  if (*(uint *)(param_1 + 0x38) < 6) {
    lVar5 = 0;
  }
  local_78 = puVar4;
  local_68 = puVar4;
  FUN_00818830(*(undefined8 *)puVar1,*(long *)(param_1 + 0x40) + lVar5,&local_68,1,&local_78);
  pcStack_70 = "FieldResource";
  pcStack_60 = "FldUnitRoadSoil";
  lVar5 = 0x1e0;
  if (*(uint *)(param_1 + 0x38) < 7) {
    lVar5 = 0;
  }
  local_78 = puVar4;
  local_68 = puVar4;
  FUN_00818830(*(undefined8 *)puVar1,*(long *)(param_1 + 0x40) + lVar5,&local_68,1,&local_78);
  pcStack_70 = "FieldResource";
  pcStack_60 = "FldUnitRoadBrick";
  lVar5 = 0x230;
  if (*(uint *)(param_1 + 0x38) < 8) {
    lVar5 = 0;
  }
  local_78 = puVar4;
  local_68 = puVar4;
  FUN_00818830(*(undefined8 *)puVar1,*(long *)(param_1 + 0x40) + lVar5,&local_68,1,&local_78);
  pcStack_70 = "FieldResource";
  pcStack_60 = "FldUnitRoadDarkSoil";
  lVar5 = 0x280;
  if (*(uint *)(param_1 + 0x38) < 9) {
    lVar5 = 0;
  }
  local_78 = puVar4;
  local_68 = puVar4;
  FUN_00818830(*(undefined8 *)puVar1,*(long *)(param_1 + 0x40) + lVar5,&local_68,1,&local_78);
  pcStack_70 = "FieldResource";
  pcStack_60 = "FldUnitRoadFanPattern";
  lVar5 = 0x2d0;
  if (*(uint *)(param_1 + 0x38) < 10) {
    lVar5 = 0;
  }
  local_78 = puVar4;
  local_68 = puVar4;
  FUN_00818830(*(undefined8 *)puVar1,*(long *)(param_1 + 0x40) + lVar5,&local_68,1,&local_78);
  pcStack_70 = "FieldResource";
  pcStack_60 = "FldUnitRoadSand";
  lVar5 = 800;
  if (*(uint *)(param_1 + 0x38) < 0xb) {
    lVar5 = 0;
  }
  local_78 = puVar4;
  local_68 = puVar4;
  FUN_00818830(*(undefined8 *)puVar1,*(long *)(param_1 + 0x40) + lVar5,&local_68,1,&local_78);
  pcStack_70 = "FieldResource";
  pcStack_60 = "FldUnitRoadTile";
  lVar5 = 0x370;
  if (*(uint *)(param_1 + 0x38) < 0xc) {
    lVar5 = 0;
  }
  local_78 = puVar4;
  local_68 = puVar4;
  FUN_00818830(*(undefined8 *)puVar1,*(long *)(param_1 + 0x40) + lVar5,&local_68,1,&local_78);
  pcStack_70 = "FieldResource";
  pcStack_60 = "FldUnitRoadWood";
  lVar5 = 0x3c0;
  if (*(uint *)(param_1 + 0x38) < 0xd) {
    lVar5 = 0;
  }
  local_78 = puVar4;
  local_68 = puVar4;
  FUN_00818830(*(undefined8 *)puVar1,*(long *)(param_1 + 0x40) + lVar5,&local_68,1,&local_78);
  pcStack_70 = "FieldResource";
  pcStack_60 = "FldUnitRoadMyDesign";
  lVar5 = 0x410;
  if (*(uint *)(param_1 + 0x38) < 0xe) {
    lVar5 = 0;
  }
  local_78 = puVar4;
  local_68 = puVar4;
  FUN_00818830(*(undefined8 *)puVar1,*(long *)(param_1 + 0x40) + lVar5,&local_68,1,&local_78);
  nn::os::LockMutex(pMVar3);
  *(undefined1 *)(lVar9 + 0x198) = 0;
  *(undefined8 *)(lVar9 + 0x150) = 0;
  nn::os::UnlockMutex(pMVar3);
  return;
}

