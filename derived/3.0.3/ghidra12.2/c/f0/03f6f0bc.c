
int FUN_03f6f0bc(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar4 = *(ushort *)(param_1 + 0x50);
  uVar3 = (uint)uVar4;
  if (uVar4 >> 6 < 0x3ff || *(char *)(param_1 + 0x3d) == '\0') {
    if (uVar3 - 0xfd < 3) {
      lVar1 = param_1 + (ulong)uVar4;
      uVar3 = (uint)*(byte *)(lVar1 + 0x58);
      *(undefined1 *)(lVar1 + 0x58) = 0;
    }
    else if (uVar3 == 0xf3) {
      uVar3 = FUN_03f855f0(param_1 + 0x10058,*(byte *)(param_1 + 0x14a) & 0x7f);
      uVar4 = *(ushort *)(param_1 + 0x50);
    }
    else {
      uVar3 = (uint)*(byte *)(param_1 + (ulong)uVar4 + 0x58);
    }
  }
  else {
    uVar3 = (uint)(byte)PTR_DAT_04bdf208[uVar3 - 0xffc0];
  }
  *(ushort *)(param_1 + 0x50) = uVar4 + 1;
  iVar2 = FUN_03f6eb50(param_1,uVar3 & 0xff | ((*(byte *)(param_1 + 0x48) & 0x20) >> 5) << 8);
  return iVar2 + (uint)*(byte *)(param_1 + 0x53);
}

