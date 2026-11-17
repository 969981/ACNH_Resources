
/* WARNING: Removing unreachable block (ram,0x02b5e8cc) */
/* WARNING: Removing unreachable block (ram,0x02b5e8d4) */

uint FUN_02b5e870(undefined4 param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined *local_30;
  undefined4 local_28;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  uVar3 = FUN_02b5e950(&local_8,param_1);
  uVar2 = 0;
  if ((uVar3 & 1) != 0) {
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar1[1] == 0) {
      uVar2 = 0;
    }
    else {
      local_28 = 0;
      local_4 = 0;
      local_30 = PTR_DAT_04bc43f8 + 0x10;
      uVar3 = FUN_02b674f0(&local_4,local_8);
      if ((uVar3 & 1) != 0) {
        local_28 = local_4;
      }
      uVar2 = FUN_02a59140(puVar1,&local_30);
    }
  }
  return uVar2 & 1;
}

