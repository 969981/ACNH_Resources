
bool FUN_006f0e00(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  
  uVar2 = *param_1;
  uVar6 = 0;
  iVar7 = 0xbb;
  do {
    uVar4 = (uint)uVar6;
    iVar1 = iVar7 + uVar4;
    if (iVar1 < 0 != SCARRY4(iVar7,uVar4)) {
      iVar1 = iVar1 + 1;
    }
    uVar5 = iVar1 >> 1;
    uVar3 = uVar2;
    if (*(ushort *)
         (&DAT_041a12ca + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2)) ==
        uVar2) {
      if ((int)uVar5 < 0) goto LAB_006f0e78;
      goto LAB_006f0e68;
    }
    if (*(ushort *)
         (&DAT_041a12ca + (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2)) <
        uVar2) {
      uVar4 = uVar5 + 1;
    }
    else {
      iVar7 = uVar5 - 1;
    }
    uVar6 = (ulong)uVar4;
  } while ((int)uVar4 < iVar7);
  if ((*(ushort *)(&DAT_041a12ca + (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2)) ==
       uVar2) && (uVar5 = uVar4, -1 < (int)uVar4)) {
LAB_006f0e68:
    if (0xbb < uVar5) {
      uVar5 = 0;
    }
    uVar3 = (&DAT_041a12cc)[(ulong)uVar5 * 2];
  }
LAB_006f0e78:
  *param_1 = uVar3;
  return uVar3 != uVar2;
}

