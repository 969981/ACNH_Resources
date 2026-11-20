
void FUN_03f6f000(long param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar3 = *(ushort *)(param_1 + 0x50);
  uVar2 = (uint)uVar3;
  if (uVar3 >> 6 < 0x3ff || *(char *)(param_1 + 0x3d) == '\0') {
    if (uVar2 - 0xfd < 3) {
      lVar1 = param_1 + (ulong)uVar3;
      uVar2 = (uint)*(byte *)(lVar1 + 0x58);
      *(undefined1 *)(lVar1 + 0x58) = 0;
    }
    else if (uVar2 == 0xf3) {
      uVar2 = FUN_03f855f0(param_1 + 0x10058,*(byte *)(param_1 + 0x14a) & 0x7f);
      uVar3 = *(ushort *)(param_1 + 0x50);
    }
    else {
      uVar2 = (uint)*(byte *)(param_1 + (ulong)uVar3 + 0x58);
    }
  }
  else {
    uVar2 = (uint)(byte)PTR_DAT_04bdf208[uVar2 - 0xffc0];
  }
  *(ushort *)(param_1 + 0x50) = uVar3 + 1;
  FUN_03f6eb50(param_1,*(byte *)(param_1 + 0x54) + uVar2 & 0xff |
                       ((*(byte *)(param_1 + 0x48) & 0x20) >> 5) << 8);
  return;
}

