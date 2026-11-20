
uint FUN_03f6eb50(long param_1,ulong param_2)

{
  uint uVar1;
  byte *pbVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar1 = (uint)param_2;
  param_2 = param_2 & 0xffff;
  if (((uVar1 >> 6 & 0x3ff) < 0x3ff) || (*(char *)(param_1 + 0x3d) == '\0')) {
    if ((uVar1 & 0xffff) - 0xfd < 3) {
      uVar4 = (uint)*(byte *)(param_1 + param_2 + 0x58);
      *(undefined1 *)(param_1 + param_2 + 0x58) = 0;
    }
    else {
      if ((uVar1 & 0xffff) != 0xf3) {
        pbVar2 = (byte *)(param_1 + param_2 + 0x58);
        goto LAB_03f6eb94;
      }
      uVar4 = FUN_03f855f0(param_1 + 0x10058,*(byte *)(param_1 + 0x14a) & 0x7f);
    }
    uVar4 = uVar4 & 0xff;
    uVar3 = (ulong)(uVar1 + 1) & 0xffff;
  }
  else {
    pbVar2 = (byte *)((long)&DAT_041eb5c4 + (ulong)((int)param_2 - 0xffc0));
LAB_03f6eb94:
    uVar4 = (uint)*pbVar2;
    uVar3 = (ulong)(uVar1 + 1) & 0xffff;
    if ((0x3fe < (uVar1 + 1 >> 6 & 0x3ff)) && (*(char *)(param_1 + 0x3d) != '\0')) {
      uVar1 = (uint)(byte)PTR_DAT_04bdf208[(int)uVar3 - 0xffc0];
      goto LAB_03f6ec58;
    }
  }
  uVar1 = uVar1 + 1 & 0xffff;
  if (uVar1 - 0xfd < 3) {
    uVar1 = (uint)*(byte *)(param_1 + uVar3 + 0x58);
    *(undefined1 *)(param_1 + uVar3 + 0x58) = 0;
  }
  else if (uVar1 == 0xf3) {
    uVar1 = FUN_03f855f0(param_1 + 0x10058,*(byte *)(param_1 + 0x14a) & 0x7f);
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + uVar3 + 0x58);
  }
LAB_03f6ec58:
  return uVar4 | uVar1 << 8;
}

