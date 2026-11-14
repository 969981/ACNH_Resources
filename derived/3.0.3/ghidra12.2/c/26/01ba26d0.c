
void FUN_01ba26d0(long param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  
  uVar4 = *param_2;
  uVar10 = (uint)uVar4;
  if (uVar4 == 0) goto LAB_01ba28e0;
  if (*(char *)(param_1 + 0x249) == '\0') {
    bVar5 = false;
    if ((uVar4 == 0x6a) && (*(char *)(param_1 + 0x24a) != '\0')) {
      uVar7 = 0;
      iVar9 = 0xbb;
      do {
        uVar10 = (uint)uVar7;
        iVar1 = iVar9 + uVar10;
        if (iVar1 < 0 != SCARRY4(iVar9,uVar10)) {
          iVar1 = iVar1 + 1;
        }
        uVar6 = iVar1 >> 1;
        if (*(ushort *)
             (&DAT_041a0fda + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2)) ==
            0x6a) goto joined_r0x01ba2818;
        if (*(ushort *)
             (&DAT_041a0fda + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2)) <
            0x6a) {
          uVar10 = uVar6 + 1;
        }
        else {
          iVar9 = uVar6 - 1;
        }
        uVar7 = (ulong)uVar10;
      } while ((int)uVar10 < iVar9);
      uVar6 = uVar10;
      if (*(short *)(&DAT_041a0fda + (-(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2))
          == 0x6a) {
joined_r0x01ba2818:
        if (-1 < (int)uVar6) {
          bVar5 = false;
          if (0xbb < uVar6) {
            uVar6 = 0;
          }
          uVar10 = (uint)(ushort)(&DAT_041a0fdc)[(ulong)uVar6 * 2];
          goto LAB_01ba2824;
        }
      }
      bVar5 = false;
      uVar10 = 0x6a;
    }
  }
  else {
    uVar7 = 0;
    iVar9 = 0xbb;
    do {
      uVar6 = (uint)uVar7;
      iVar1 = iVar9 + uVar6;
      if (iVar1 < 0 != SCARRY4(iVar9,uVar6)) {
        iVar1 = iVar1 + 1;
      }
      uVar2 = iVar1 >> 1;
      if (*(ushort *)
           (&DAT_041a0fda + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2)) ==
          uVar4) goto joined_r0x01ba2804;
      if (*(ushort *)
           (&DAT_041a0fda + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2)) <
          uVar4) {
        uVar6 = uVar2 + 1;
      }
      else {
        iVar9 = uVar2 - 1;
      }
      uVar7 = (ulong)uVar6;
    } while ((int)uVar6 < iVar9);
    uVar2 = uVar6;
    if (*(ushort *)(&DAT_041a0fda + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2)) ==
        uVar4) {
joined_r0x01ba2804:
      if (-1 < (int)uVar2) {
        if (0xbb < uVar2) {
          uVar2 = 0;
        }
        uVar10 = (uint)(ushort)(&DAT_041a0fdc)[(ulong)uVar2 * 2];
      }
    }
    if (uVar10 == 0x49) {
      bVar5 = *DAT_04ccdcc0 == 0xb;
    }
    else {
      bVar5 = false;
    }
  }
LAB_01ba2824:
  puVar8 = *(undefined2 **)(param_1 + 0x230);
  *(undefined1 *)(param_1 + 0x249) = 0;
  *(bool *)(param_1 + 0x24a) = bVar5;
  if ((puVar8 == (undefined2 *)0x0) || (uVar10 == 0)) {
LAB_01ba285c:
    cVar3 = *(char *)(param_1 + 0x240);
  }
  else {
    if (*(undefined2 **)(param_1 + 0x238) < puVar8 + 1) {
      *(undefined1 *)(param_1 + 0x240) = 0;
      if (*(long *)(param_1 + 0x220) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x220) + 0x200) = 2;
      }
      goto LAB_01ba285c;
    }
    *puVar8 = (short)uVar10;
    *(undefined2 **)(param_1 + 0x230) = puVar8 + 1;
    *(int *)(param_1 + 0x244) = *(int *)(param_1 + 0x244) + 1;
    cVar3 = *(char *)(param_1 + 0x240);
  }
  if (cVar3 == '\0') {
LAB_01ba28e0:
    *(undefined1 *)(param_1 + 0x210) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x211) != '\0') {
    return;
  }
  if ((0x55 < uVar10 - 0x3041) && (0x55 < (uVar10 - 0x30a1 & 0xffff))) {
    if (((((uVar10 & 0xffffffdf) == 0xd7) ||
         (399 < uVar10 - 0xc0 && 0x19 < ((uVar10 & 0xffffffdf) - 0x41 & 0xffff))) &&
        (((((0x3f < (uVar10 - 0x410 & 0xffff) && (0xae8 < (uVar10 + 0x5400 >> 2 & 0x3fff))) &&
           ((uVar10 & 0xff00) != 0x1100)) &&
          ((0x5d < (uVar10 - 0x3131 & 0xffff) && (uVar10 != 0x401)))) && (uVar10 != 0x451)))) &&
       ((uVar7 = FUN_006f0db0(uVar10), 0x28 < (uVar10 - 0x4e00 >> 9 & 0x7f) && ((uVar7 & 1) == 0))))
    goto LAB_01ba28e0;
  }
  *(undefined1 *)(param_1 + 0x211) = 1;
  return;
}

