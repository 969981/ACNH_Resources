
void FUN_024af464(byte *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 local_4;
  byte local_3;
  undefined1 local_2;
  
  lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_1 * 0x740;
  if (7 < *param_1) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_2 + 1) == *(short *)PTR_DAT_04bb6298) {
    *(undefined4 *)(lVar1 + 0x11c) = 3;
    FUN_01393458(lVar1 + 0x1c0);
  }
  else {
    *(undefined4 *)(lVar1 + 0x11c) = 4;
  }
  local_3 = *param_1;
  if (local_3 < 8) {
    uVar2 = FUN_02582d8c(param_1,1);
    if ((uVar2 < 8) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) {
      local_4 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0';
      goto LAB_024af540;
    }
  }
  else {
    local_3 = 0xff;
  }
  local_4 = false;
LAB_024af540:
  local_2 = 1;
  FUN_02308c94(&local_4);
  return;
}

