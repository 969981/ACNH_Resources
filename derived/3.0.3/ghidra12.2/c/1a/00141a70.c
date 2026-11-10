
undefined8 FUN_00141a70(long param_1)

{
  long lVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  short *psVar10;
  long lVar11;
  ushort uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  short *psVar16;
  int iVar17;
  
  iVar7 = (int)(short)(*(short *)(param_1 + 0x70) + -1);
  *(undefined8 *)(param_1 + 0xda) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  if (-1 < iVar7) {
    psVar10 = (short *)(param_1 + (long)iVar7 * 2);
    bVar5 = false;
    iVar15 = 0;
    iVar14 = 0;
    do {
      while( true ) {
        sVar3 = *psVar10;
        iVar17 = (int)sVar3;
        sVar4 = (short)iVar14;
        sVar9 = (short)iVar15;
        if (8 < (int)sVar3 - 1U) break;
        puVar6 = (ushort *)(param_1 + ((long)sVar4 + (long)sVar9) * 2 + 0x74);
        uVar12 = *puVar6;
        if (0x21 < uVar12 || (1L << ((ulong)uVar12 & 0x3f) & 0x300000001U) == 0) {
          return 0xffff;
        }
        if ((bVar5) && (sVar3 != 3)) {
          return 0xffff;
        }
        bVar5 = false;
        *puVar6 = sVar3 + 0x30U & 0xff;
joined_r0x00141b98:
        iVar7 = (int)(short)((short)iVar7 + -1);
        psVar10 = psVar10 + -1;
        if (iVar7 < 0) goto LAB_00141bd4;
      }
      if ((int)sVar3 - 0x65U < 4) {
        iVar15 = 0x67;
        if (iVar17 != 0x68) {
          iVar15 = (int)sVar3;
        }
        iVar15 = iVar15 + -100;
        if (iVar17 == 0x68) {
          bVar5 = true;
        }
        if (iVar15 <= sVar9) {
          return 0xffff;
        }
        psVar16 = (short *)(param_1 + (long)((int)(short)iVar15 + (int)sVar4) * 2 + 0x74);
        if (*psVar16 != 0) {
          return 0xffff;
        }
        *psVar16 = 0x21;
        goto joined_r0x00141b98;
      }
      iVar14 = iVar17 + -1000;
      if (iVar14 <= sVar4) {
        return 0xffff;
      }
      psVar16 = (short *)(param_1 + (long)(int)(short)iVar14 * 2 + 0x74);
      if (*psVar16 != 0) {
        return 0xffff;
      }
      *psVar16 = 0x20;
      iVar7 = (int)(short)((short)iVar7 + -1);
      psVar10 = psVar10 + -1;
      iVar15 = 0;
    } while (-1 < iVar7);
LAB_00141bd4:
    if (bVar5) {
      return 0xffff;
    }
    if ((((*(short *)(param_1 + 0x7c) == 0x20) && (*(short *)(param_1 + 0x7e) == 0)) &&
        (*(short *)(param_1 + 0x80) == 0)) && (*(short *)(param_1 + 0x82) == 0)) {
      return 0xffff;
    }
  }
  if (((*(short *)(param_1 + 0x84) == 0x20) && (*(short *)(param_1 + 0x86) == 0)) &&
     ((*(short *)(param_1 + 0x88) == 0 && (*(short *)(param_1 + 0x8a) == 0)))) {
    return 0xffff;
  }
  if (((*(short *)(param_1 + 0x8c) == 0x20) && (*(short *)(param_1 + 0x8e) == 0)) &&
     ((*(short *)(param_1 + 0x90) == 0 && (*(short *)(param_1 + 0x92) == 0)))) {
    return 0xffff;
  }
  lVar11 = 0;
  uVar8 = 0;
  do {
    lVar1 = param_1 + lVar11 * 2;
    sVar3 = *(short *)(lVar1 + 0xe0);
    *(short *)(lVar1 + 0x150) = sVar3;
    lVar1 = lVar11 + 0x36;
    lVar11 = lVar11 + -1;
    sVar9 = (short)lVar1;
    if (sVar3 == 0 || (uVar8 & 0xffff) != 0) {
      sVar9 = (short)uVar8;
    }
    uVar8 = (uint)sVar9;
  } while (0 < lVar1);
  sVar9 = 0;
  if (-1 < (int)uVar8) {
    lVar11 = (long)(int)uVar8 + 0x72;
    do {
      uVar2 = *(ushort *)(param_1 + lVar11 * 2);
      uVar12 = 0;
      if ((uVar2 != 0) && (uVar2 != 0x20)) {
        if (uVar2 == 0x21) {
          uVar12 = 1;
        }
        else {
          uVar12 = uVar2 & 0xf;
        }
      }
      lVar1 = (long)sVar9;
      lVar13 = lVar11 + -0x72;
      sVar9 = sVar9 + 1;
      lVar11 = lVar11 + -1;
      *(ushort *)(param_1 + lVar1 * 2 + 0x74) = uVar12;
    } while (0 < lVar13);
  }
  *(short *)(param_1 + 0x72) = sVar9;
  return 0;
}

