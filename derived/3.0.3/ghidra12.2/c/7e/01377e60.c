
/* WARNING: Removing unreachable block (ram,0x01377ea4) */
/* WARNING: Removing unreachable block (ram,0x01377eac) */

void FUN_01377e60(undefined8 param_1,undefined8 param_2)

{
  undefined **local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  long *plStack_28;
  long local_20;
  undefined8 local_18;
  
  local_20 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xc0);
  if (local_20 != 0) {
    local_30 = &local_18;
    local_40 = &PTR_FUN_04993858;
    plStack_28 = &local_20;
    uStack_38 = param_2;
    local_18 = param_1;
    FUN_01377ef0(&local_40);
  }
  return;
}

