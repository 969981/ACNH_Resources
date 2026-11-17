
/* WARNING: Removing unreachable block (ram,0x02b603d8) */
/* WARNING: Removing unreachable block (ram,0x02b603e0) */

uint FUN_02b603a0(uint param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *local_28;
  int local_20;
  uint local_14;
  
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_28 = PTR_DAT_04bc43f8 + 0x10;
    uVar2 = param_1;
    if (0xf < param_1) {
      uVar2 = 0;
    }
    local_20 = (&DAT_05636e58)[(int)uVar2];
    if (local_20 != 0) {
      local_14 = param_1;
      uVar2 = FUN_02a59140(puVar1,&local_28);
      goto LAB_02b60450;
    }
  }
  uVar2 = 0;
LAB_02b60450:
  return uVar2 & 1;
}

