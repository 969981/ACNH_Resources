
void FUN_0148071c(undefined4 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  
  if (((DAT_051dda48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051dda48), iVar1 != 0)) {
    DAT_051dda38 = PTR_DAT_04bb2020 + 0x10;
    DAT_051dda40 = "material_game_fill_ratio";
    __cxa_guard_release(&DAT_051dda48);
  }
  if (((DAT_051dda60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051dda60), iVar1 != 0)) {
    DAT_051dda50 = PTR_DAT_04bb2020 + 0x10;
    DAT_051dda58 = "material_game_fill_color";
    __cxa_guard_release(&DAT_051dda60);
  }
  FUN_0073d560(param_1,*(undefined8 *)(param_2 + 0xa80),&DAT_051dda38);
  *(undefined4 *)(param_2 + 0x980) = param_1;
  FUN_0073d3f0(*(undefined8 *)(param_2 + 0xa80),&DAT_051dda50,param_3);
  return;
}

