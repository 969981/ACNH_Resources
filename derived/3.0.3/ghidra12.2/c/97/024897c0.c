
void FUN_024897c0(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined1 local_8 [4];
  undefined1 local_4;
  byte local_3;
  undefined1 local_2;
  
  uVar4 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar4 & 0xfffffffe;
  if ((uVar4 & 1) == 0) {
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x1ee8);
  uVar4 = (uint)bVar2;
  bVar3 = 7 < uVar4;
  if (bVar3) {
    uVar4 = 0xff;
  }
  local_8[0] = (undefined1)uVar4;
  lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar4 * 0x740;
  if (bVar3) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
    *(undefined4 *)(lVar1 + 0x11c) = 3;
    FUN_01393458(lVar1 + 0x1c0);
  }
  else {
    *(undefined4 *)(lVar1 + 0x11c) = 4;
  }
  if (bVar2 < 8) {
    local_3 = bVar2;
    uVar4 = FUN_02582d8c(local_8,1);
    if ((uVar4 < 8) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) {
      local_4 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0';
      goto LAB_024898b8;
    }
  }
  else {
    local_3 = 0xff;
  }
  local_4 = false;
LAB_024898b8:
  local_2 = 1;
  FUN_02308be0(&local_4);
  return;
}

