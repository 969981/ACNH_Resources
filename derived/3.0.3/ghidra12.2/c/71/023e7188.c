
void FUN_023e7188(byte *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 local_8;
  byte local_7;
  undefined4 local_4;
  
  lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_1 * 0x740;
  if (7 < *param_1) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_2 + 1) == DAT_04c487d4) {
    *(undefined4 *)(lVar1 + 0x5b4) = 3;
    FUN_01393458(lVar1 + 0x658);
  }
  else {
    *(undefined4 *)(lVar1 + 0x5b4) = 4;
  }
  local_4 = 2;
  if (((*param_1 < 8) && (uVar2 = FUN_02582d8c(param_1,1), uVar2 < 8)) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) {
    local_8 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0';
  }
  else {
    local_8 = false;
  }
  local_7 = *param_1;
  if (7 < local_7) {
    local_7 = 0xff;
  }
  FUN_02308d48(&local_8);
  return;
}

