
void FUN_03741f10(long *param_1,long param_2)

{
  short *psVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  char cVar14;
  ulong uVar15;
  uint uVar16;
  
  puVar6 = PTR_DAT_04bbc1a0;
  puVar5 = PTR_DAT_04bb2010;
  puVar12 = *(uint **)(param_2 + 8);
  if (puVar12 == (uint *)0x0) {
    iVar9 = 0;
    iVar10 = 0;
    iVar13 = 0;
    iVar11 = 0;
    goto LAB_037420ec;
  }
  iVar9 = 0;
  if (*puVar12 == 0) {
LAB_037420d8:
    iVar10 = 0;
LAB_037420dc:
    iVar11 = 0;
  }
  else {
    cVar14 = DAT_05abc380;
    do {
      if (cVar14 != '\0') {
        if ((int)DAT_05abc394 < 0) {
          if ((int)DAT_05abc394 == -1) goto LAB_03741f8c;
LAB_0374201c:
          iVar9 = 0;
        }
        else {
          psVar1 = (short *)((DAT_05abc394 & 0xffffffff) + (long)puVar12);
          iVar9 = 0;
          if (psVar1 != (short *)0x0) {
            iVar9 = (int)*psVar1 << 1;
          }
        }
        goto LAB_03742034;
      }
      cVar14 = '\x01';
      DAT_05abc384 = 0xffffffffffffffff;
      DAT_05abc38c = 0xffffffffffffffff;
      DAT_05abc380 = '\x01';
      DAT_05abc3f4 = 0xffffffffffffffff;
      DAT_05abc394 = 0xffffffffffffffff;
      DAT_05abc39c = 0xffffffffffffffff;
      DAT_05abc3a4 = 0xffffffffffffffff;
      DAT_05abc3ac = 0xffffffffffffffff;
      DAT_05abc3b4 = 0xffffffffffffffff;
      DAT_05abc3bc = 0xffffffffffffffff;
      DAT_05abc3c4 = 0xffffffffffffffff;
      DAT_05abc3cc = 0xffffffffffffffff;
      DAT_05abc3d4 = 0xffffffffffffffff;
      DAT_05abc3dc = 0xffffffffffffffff;
      DAT_05abc3e4 = 0xffffffffffffffff;
      DAT_05abc3ec = 0xffffffffffffffff;
LAB_03741f8c:
      puVar7 = (uint *)(ulong)*puVar12;
      iVar9 = 0;
      if ((*puVar12 == 0) || (puVar12 == puVar7)) goto LAB_03742034;
      lVar4 = 0xc;
      if (*(char *)((long)puVar12 + (10 - (long)puVar7)) != '\0') {
        lVar4 = 0x1c;
      }
      lVar4 = (long)puVar12 + (lVar4 - (long)puVar7);
      if (lVar4 == 0) goto LAB_0374201c;
      uVar15 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar7));
      DAT_05abc394 = CONCAT44(DAT_05abc394._4_4_,0xfffffffe);
      iVar9 = 0;
      if (uVar15 == 0) goto LAB_03742034;
      piVar8 = (int *)(lVar4 + 4);
      while (piVar8[-1] != -0xf1748ef) {
        piVar8 = piVar8 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) {
          iVar9 = 0;
          goto LAB_03742034;
        }
      }
      iVar10 = 0;
      if (*piVar8 != -1) {
        iVar10 = *piVar8;
      }
      DAT_05abc394 = CONCAT44(DAT_05abc394._4_4_,iVar10);
    } while (*puVar12 != 0);
    iVar9 = 0;
LAB_03742034:
    puVar12 = *(uint **)(param_2 + 8);
    iVar10 = 0;
    if (puVar12 == (uint *)0x0) goto LAB_037420dc;
    uVar3 = *puVar12;
    if (uVar3 == 0) goto LAB_037420d8;
    uVar16 = DAT_05abc39c._4_4_;
    while ((int)uVar16 < 0) {
      if ((uVar16 != 0xffffffff) || (lVar4 = (long)puVar12 - (ulong)uVar3, lVar4 == 0))
      goto LAB_03742128;
      lVar2 = 0xc;
      if (*(char *)(lVar4 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar4 == 0) goto LAB_03742128;
      uVar15 = (ulong)*(ushort *)(lVar4 + 8);
      DAT_05abc39c = CONCAT44(0xfffffffe,(undefined4)DAT_05abc39c);
      if (uVar15 == 0) goto LAB_03742128;
      puVar7 = (uint *)(lVar2 + lVar4 + 4);
      while (puVar7[-1] != 0xb3e69752) {
        puVar7 = puVar7 + 2;
        uVar15 = uVar15 - 1;
        if (uVar15 == 0) goto LAB_03742128;
      }
      uVar16 = 0;
      if (*puVar7 != 0xffffffff) {
        uVar16 = *puVar7;
      }
      DAT_05abc39c = CONCAT44(uVar16,(undefined4)DAT_05abc39c);
      uVar3 = *puVar12;
      if (uVar3 == 0) goto LAB_03742128;
    }
    if ((short *)((long)puVar12 + (ulong)uVar16) != (short *)0x0) {
      iVar10 = (int)*(short *)((long)puVar12 + (ulong)uVar16);
      goto LAB_0374212c;
    }
LAB_03742128:
    iVar10 = 0;
LAB_0374212c:
    puVar12 = *(uint **)(param_2 + 8);
    iVar9 = iVar10 + iVar9;
    iVar10 = 0;
    if (puVar12 == (uint *)0x0) goto LAB_037420dc;
    uVar3 = *puVar12;
    if (uVar3 != 0) {
      uVar16 = DAT_05abc394._4_4_;
      while( true ) {
        if (-1 < (int)uVar16) {
          iVar10 = 0;
          if ((short *)((long)puVar12 + (ulong)uVar16) != (short *)0x0) {
            iVar10 = (int)*(short *)((long)puVar12 + (ulong)uVar16) << 1;
          }
          goto LAB_037421cc;
        }
        if ((uVar16 != 0xffffffff) || (lVar4 = (long)puVar12 - (ulong)uVar3, lVar4 == 0)) break;
        lVar2 = 0xc;
        if (*(char *)(lVar4 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        if (lVar2 + lVar4 == 0) break;
        uVar15 = (ulong)*(ushort *)(lVar4 + 8);
        DAT_05abc394 = CONCAT44(0xfffffffe,(int)DAT_05abc394);
        if (uVar15 == 0) break;
        puVar7 = (uint *)(lVar2 + lVar4 + 4);
        while (puVar7[-1] != 0x8a28e471) {
          puVar7 = puVar7 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_037421c8;
        }
        uVar16 = 0;
        if (*puVar7 != 0xffffffff) {
          uVar16 = *puVar7;
        }
        DAT_05abc394 = CONCAT44(uVar16,(int)DAT_05abc394);
        uVar3 = *puVar12;
        if (uVar3 == 0) break;
      }
    }
LAB_037421c8:
    iVar10 = 0;
LAB_037421cc:
    puVar12 = *(uint **)(param_2 + 8);
    iVar11 = 0;
    if (puVar12 != (uint *)0x0) {
      uVar3 = *puVar12;
      if (uVar3 != 0) {
        uVar16 = (uint)DAT_05abc3a4;
        while( true ) {
          if (-1 < (int)uVar16) {
            iVar11 = 0;
            if ((short *)((long)puVar12 + (ulong)uVar16) != (short *)0x0) {
              iVar11 = (int)*(short *)((long)puVar12 + (ulong)uVar16);
            }
            goto LAB_037420e0;
          }
          if ((uVar16 != 0xffffffff) || (lVar4 = (long)puVar12 - (ulong)uVar3, lVar4 == 0)) break;
          lVar2 = 0xc;
          if (*(char *)(lVar4 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          if (lVar2 + lVar4 == 0) break;
          uVar15 = (ulong)*(ushort *)(lVar4 + 8);
          DAT_05abc3a4 = CONCAT44(DAT_05abc3a4._4_4_,0xfffffffe);
          if (uVar15 == 0) break;
          puVar7 = (uint *)(lVar2 + lVar4 + 4);
          while (puVar7[-1] != 0xc926c432) {
            puVar7 = puVar7 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_037420dc;
          }
          uVar16 = 0;
          if (*puVar7 != 0xffffffff) {
            uVar16 = *puVar7;
          }
          DAT_05abc3a4 = CONCAT44(DAT_05abc3a4._4_4_,uVar16);
          uVar3 = *puVar12;
          if (uVar3 == 0) break;
        }
      }
      goto LAB_037420dc;
    }
  }
LAB_037420e0:
  iVar11 = iVar11 + iVar10;
  iVar10 = iVar9 + 5;
  iVar13 = iVar11 + 5;
LAB_037420ec:
  *(int *)(param_1 + 2) = iVar9;
  *(int *)((long)param_1 + 0x14) = iVar11;
  *(int *)(param_1 + 4) = iVar10;
  *(int *)((long)param_1 + 0x24) = iVar13;
  param_1[3] = (long)(puVar5 + 0x10);
  *param_1 = (long)(puVar6 + 0x10);
  param_1[1] = (long)(puVar5 + 0x10);
  return;
}

