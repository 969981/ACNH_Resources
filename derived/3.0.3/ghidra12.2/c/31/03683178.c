
/* WARNING: Removing unreachable block (ram,0x03683354) */
/* WARNING: Removing unreachable block (ram,0x036832dc) */
/* WARNING: Removing unreachable block (ram,0x036832a0) */
/* WARNING: Removing unreachable block (ram,0x036831e8) */
/* WARNING: Removing unreachable block (ram,0x036831e0) */
/* WARNING: Removing unreachable block (ram,0x03683230) */
/* WARNING: Removing unreachable block (ram,0x036832a8) */
/* WARNING: Removing unreachable block (ram,0x0368334c) */
/* WARNING: Removing unreachable block (ram,0x03683388) */

void FUN_03683178(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined **local_50;
  int local_48;
  
  uVar3 = FUN_02b613d0(0,0);
  *(undefined4 *)(param_1 + 8) = uVar3;
  uVar3 = FUN_02b61730(0,0);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  puVar2 = PTR_DAT_04bb27a8;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e58;
    if ((DAT_05636e58 != 0) && (uVar5 = FUN_02a59140(puVar1,&local_50), (uVar5 & 1) != 0)) {
      iVar4 = FUN_02b58b90(0);
      local_50 = (undefined **)CONCAT44(local_50._4_4_,iVar4);
      if ((2 < iVar4) && (uVar5 = FUN_02b60460(0), (uVar5 & 1) == 0)) {
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
    }
  }
  lVar6 = *(long *)(*(long *)puVar2 + 0x38);
  puVar1 = &DAT_05636dd8;
  if (lVar6 != 0) {
    puVar1 = (undefined8 *)(lVar6 + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e60;
    if ((DAT_05636e60 != 0) && (uVar5 = FUN_02a59140(puVar1,&local_50), (uVar5 & 1) != 0)) {
      iVar4 = FUN_02b5a7a0(0);
      local_50 = (undefined **)CONCAT44(local_50._4_4_,iVar4);
      if ((2 < iVar4) && (uVar5 = FUN_02b60460(2), (uVar5 & 1) == 0)) {
        *(undefined1 *)(param_1 + 0x19) = 1;
      }
    }
  }
  lVar6 = *(long *)(*(long *)puVar2 + 0x38);
  puVar1 = &DAT_05636dd8;
  if (lVar6 != 0) {
    puVar1 = (undefined8 *)(lVar6 + 0x148);
  }
  if (puVar1[1] != 0) {
    local_50 = &PTR_LAB_04a9b110;
    local_48 = DAT_05636e6c;
    if (((DAT_05636e6c != 0) && (uVar5 = FUN_02a59140(puVar1,&local_50), (uVar5 & 1) != 0)) &&
       (uVar5 = FUN_02b60460(5), (uVar5 & 1) == 0)) {
      *(undefined1 *)(param_1 + 0x1a) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = DAT_05405788;
  return;
}

