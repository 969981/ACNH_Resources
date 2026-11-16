
bool FUN_0277da10(short *param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  short local_38;
  short local_36;
  undefined4 local_34;
  
  sVar1 = *param_1;
  if ((ushort)(sVar1 + 3U) < 2) {
    return false;
  }
  lVar5 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar5 == 0) || (*(long *)(lVar5 + 0xb0) == 0)) ||
       (*(long *)(*(long *)(lVar5 + 0xb0) + 8) == 0)) ||
      ((*(long *)(lVar5 + 0x488) == 0 || (*(long *)(*(long *)(lVar5 + 0x488) + 8) == 0)))) ||
     ((*(long *)(lVar5 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar5 + 0x2b0) + 8) == 0)))) {
LAB_0277dab0:
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(param_1);
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) goto LAB_0277daf8;
    }
    local_36 = param_1[1];
    local_34 = *(undefined4 *)(param_1 + 2);
    local_38 = sVar1;
    iVar4 = FUN_0277d6c4(&local_38);
    bVar2 = iVar4 - 0xf619U < 7;
  }
  else {
    uVar3 = FUN_0277d6c4(param_1);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0277dab0;
LAB_0277daf8:
    bVar2 = true;
  }
  return bVar2;
}

