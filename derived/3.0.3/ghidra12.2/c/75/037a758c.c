
/* WARNING: Removing unreachable block (ram,0x037a7750) */
/* WARNING: Removing unreachable block (ram,0x037a7728) */
/* WARNING: Removing unreachable block (ram,0x037a76f0) */
/* WARNING: Removing unreachable block (ram,0x037a7780) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037a758c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  param_1[8] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x80;
  *(undefined1 *)((long)param_1 + 0xe3) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  *(undefined4 *)(param_1 + 0x1f) = 0x80;
  *(undefined1 *)((long)param_1 + 0x17b) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[10] = puVar1;
  param_1[0xb] = (undefined1 *)((long)param_1 + 100);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)((long)param_1 + 0xfc) = 0;
  param_1[0x1d] = puVar1;
  param_1[0x1e] = (undefined1 *)((long)param_1 + 0xfc);
  *param_1 = &PTR_LAB_04b4b790;
  param_1[1] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  puVar5 = PTR_DAT_04bb2120;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x48] = puVar1;
  param_1[0x49] = puVar5;
  param_1[0x3e] = puVar1;
  param_1[0x3f] = puVar5;
  param_1[0x4a] = 0x1600000018;
  *(undefined4 *)(param_1 + 0x4b) = 3;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  param_1[0x4d] = 0;
  param_1[0x4c] = puVar1;
  puVar1 = PTR_DAT_04bb2e18 + 0x10;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x4e] = puVar1;
  memset(param_1 + 0x55,0,0x104);
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined4 *)((long)param_1 + 0x3d4) = 0xffffffff;
  param_1[0x7b] = 0;
  param_1[0x3f] = s_TargetPoint_04b4bdf8;
  uVar4 = _UNK_04102888;
  uVar3 = _DAT_04102880;
  uVar2 = _DAT_04102200;
  param_1[0x37] = _UNK_04102208;
  param_1[0x36] = uVar2;
  param_1[0x39] = uVar4;
  param_1[0x38] = uVar3;
  uVar3 = _UNK_041023d8;
  uVar2 = _DAT_041023d0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3b] = uVar3;
  param_1[0x3a] = uVar2;
  param_1[0x49] = s_CeilingCenter_04b4be06;
  uVar4 = _UNK_04102888;
  uVar3 = _DAT_04102880;
  uVar2 = _DAT_04102200;
  param_1[0x41] = _UNK_04102208;
  param_1[0x40] = uVar2;
  param_1[0x43] = uVar4;
  param_1[0x42] = uVar3;
  uVar3 = _UNK_041023d8;
  uVar2 = _DAT_041023d0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x45] = uVar3;
  param_1[0x44] = uVar2;
  return;
}

