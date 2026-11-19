
void FUN_03a7f334(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  if (*(long *)(param_1 + 0x450) == 0) {
    return;
  }
  if (*(char *)(*(long *)(param_1 + 8) + 0x690) == '\0') {
    return;
  }
  if ((*(byte *)(param_3 + 0x402) & 1) == 0) {
    return;
  }
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar2 == 0) {
    uVar1 = nn::os::GetCurrentCoreNumber();
  }
  else {
    uVar1 = (int)lVar2 - 1;
  }
  if (*(uint *)(param_1 + 0x670) <= uVar1) {
    uVar1 = 0;
  }
  *(long *)(*(long *)(param_1 + 0x678) + (long)(int)uVar1 * 8) = param_3;
  FUN_03a86dd0(*(undefined8 *)(param_1 + 0x450),param_2,*(undefined1 *)(param_3 + 8),
               *(undefined8 *)(param_3 + 800));
  lVar2 = *(long *)(param_1 + 0x450);
  uVar1 = *(uint *)(lVar2 + 0x20);
  if ((uVar1 & 1) != 0) {
    uVar3 = (uint)*(byte *)(param_3 + 8);
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(uint *)(lVar2 + 0x28) <= uVar3) {
        uVar3 = 0;
      }
      lVar2 = *(long *)(lVar2 + 0x30) + (ulong)uVar3 * 0x1d80 + 0x2b8;
      goto LAB_03a7f41c;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if ((uVar1 >> 7 & 1) == 0) {
        if (*(uint *)(lVar2 + 0x28) <= (uint)*(byte *)(param_3 + 8)) {
          uVar3 = 0;
        }
        lVar2 = *(long *)(lVar2 + 0x30) + (ulong)uVar3 * 0x1d80 + 0xff8;
      }
      else {
        if (*(uint *)(lVar2 + 0x28) <= uVar3) {
          uVar3 = 0;
        }
        if ((uVar1 >> 0x15 & 1) == 0) {
          lVar2 = *(long *)(lVar2 + 0x30) + (ulong)uVar3 * 0x1d80 + 0xca8;
        }
        else {
          lVar2 = *(long *)(lVar2 + 0x30) + (ulong)uVar3 * 0x1d80 + 0x1348;
        }
      }
      goto LAB_03a7f41c;
    }
  }
  lVar2 = lVar2 + 0x410;
LAB_03a7f41c:
  *(long *)(param_3 + 0xa0) = lVar2;
  return;
}

