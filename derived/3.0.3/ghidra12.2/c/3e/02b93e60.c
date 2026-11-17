
/* WARNING: Removing unreachable block (ram,0x02b93e8c) */
/* WARNING: Removing unreachable block (ram,0x02b93e9c) */

void FUN_02b93e60(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined *local_48;
  byte local_40;
  int local_3c;
  undefined *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined2 local_24;
  
  local_48 = (undefined *)((ulong)local_48 & 0xffffffff00000000);
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  if (puVar1[1] == 0) {
    local_48 = PTR_DAT_04bc4608 + 0x10;
    local_40 = PTR_DAT_04bbc570[8];
    local_3c = *(int *)(PTR_DAT_04bbc570 + 0xc);
    uStack_30 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
    local_38 = PTR_DAT_04bb2010 + 0x10;
    local_28 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
    local_24 = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  }
  else {
    FUN_01360490(&local_48,puVar1[1],param_1);
  }
  if (((local_3c != 0) &&
      ((((local_3c != 0 && (local_3c == 0x1a)) && ((local_40 & 1) == 0)) ||
       (((local_3c != 0 && (local_3c == 0x1b)) && ((local_40 & 1) == 0)))))) && (puVar1[1] != 0)) {
    FUN_01361f00(puVar1[1],param_1);
  }
  return;
}

