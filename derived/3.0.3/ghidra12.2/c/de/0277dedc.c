
bool FUN_0277dedc(short *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  short local_28;
  short local_26;
  undefined4 local_24;
  
  local_28 = *param_1;
  if ((ushort)(local_28 + 3U) < 2) {
    return false;
  }
  local_26 = param_1[1];
  local_24 = *(undefined4 *)(param_1 + 2);
  iVar2 = FUN_0277d6c4(&local_28);
  lVar4 = DAT_05150358;
  if (iVar2 - 0xf619U < 7) {
LAB_0277df4c:
    bVar1 = false;
  }
  else {
    if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
        ((*(long *)(DAT_05150358 + 0x488) != 0 &&
         (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
       ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
        (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))) {
      uVar3 = FUN_0277d6c4(param_1);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) goto LAB_0277df4c;
    }
    lVar4 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(param_1);
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if (uVar3 < *(uint *)(lVar4 + 0x1d8)) {
        return *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) == 0;
      }
    }
    bVar1 = true;
  }
  return bVar1;
}

