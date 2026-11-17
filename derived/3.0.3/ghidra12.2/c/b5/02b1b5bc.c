
/* WARNING: Removing unreachable block (ram,0x02b1b65c) */
/* WARNING: Removing unreachable block (ram,0x02b1b664) */

void FUN_02b1b5bc(uint param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *local_40;
  undefined4 local_38;
  
  puVar3 = PTR_DAT_04bc43f8;
  if (param_2 == 1) {
    local_40 = PTR_DAT_04bc43f8 + 0x10;
    uVar1 = param_1;
    if (0xf < param_1) {
      uVar1 = 0;
    }
    local_38 = (&DAT_05636e58)[(int)uVar1];
    FUN_02b3cb40(*(long *)PTR_DAT_04bb5008 + 0x26e8,&local_40,0x6622bd46);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] != 0) {
      local_40 = puVar3 + 0x10;
      if (0xf < param_1) {
        param_1 = 0;
      }
      local_38 = (&DAT_05636e58)[(int)param_1];
      FUN_02a59b30(puVar2,&local_40);
    }
  }
  return;
}

