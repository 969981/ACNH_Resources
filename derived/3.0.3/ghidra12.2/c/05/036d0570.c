
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_036d0570(undefined8 *param_1,long param_2)

{
  short *psVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  char cVar12;
  
  puVar11 = *(uint **)(param_2 + 8);
  iVar10 = 0;
  if (puVar11 == (uint *)0x0) goto LAB_036d08f8;
  if (*puVar11 != 0) {
    cVar12 = DAT_05ab4368;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        DAT_05ab436c = 0xffffffffffffffff;
        DAT_05ab4374 = 0xffffffffffffffff;
        DAT_05ab4368 = '\x01';
        DAT_05ab43bc = 0xffffffff;
        DAT_05ab437c = 0xffffffffffffffff;
        DAT_05ab4384 = 0xffffffffffffffff;
        _DAT_05ab438c = 0xffffffffffffffff;
        DAT_05ab4394 = 0xffffffffffffffff;
        DAT_05ab439c = 0xffffffffffffffff;
        DAT_05ab43a4 = 0xffffffffffffffff;
        DAT_05ab43ac = 0xffffffffffffffff;
        DAT_05ab43b4 = 0xffffffffffffffff;
        uVar3 = *puVar11;
      }
      else {
        if (-1 < (int)DAT_05ab438c) {
          psVar1 = (short *)((_DAT_05ab438c & 0xffffffff) + (long)puVar11);
          if ((psVar1 != (short *)0x0) && (*psVar1 == -1)) goto LAB_036d075c;
          break;
        }
        if (DAT_05ab438c != -1) break;
        uVar3 = *puVar11;
      }
      if ((uVar3 == 0) || (puVar5 = (uint *)(ulong)uVar3, puVar11 == puVar5)) break;
      lVar4 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar5)) != '\0') {
        lVar4 = 0x1c;
      }
      lVar4 = (long)puVar11 + (lVar4 - (long)puVar5);
      if (lVar4 == 0) break;
      uVar6 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar5));
      _DAT_05ab4390 = (undefined4)(_DAT_05ab438c >> 0x20);
      _DAT_05ab438c = CONCAT44(_DAT_05ab4390,0xfffffffe);
      if (uVar6 == 0) break;
      piVar8 = (int *)(lVar4 + 4);
      while (piVar8[-1] != 0x54706054) {
        piVar8 = piVar8 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) goto LAB_036d0680;
      }
      iVar10 = 0;
      if (*piVar8 != -1) {
        iVar10 = *piVar8;
      }
      _DAT_05ab438c = CONCAT44(_DAT_05ab4390,iVar10);
      if (*puVar11 == 0) break;
    } while( true );
  }
LAB_036d0680:
  puVar11 = *(uint **)(param_2 + 8);
  iVar10 = 0;
  if (*puVar11 != 0) {
    cVar12 = DAT_05ab4368;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        DAT_05ab436c = 0xffffffffffffffff;
        DAT_05ab4374 = 0xffffffffffffffff;
        DAT_05ab4368 = '\x01';
        DAT_05ab43bc = 0xffffffff;
        DAT_05ab437c = 0xffffffffffffffff;
        DAT_05ab4384 = 0xffffffffffffffff;
        _DAT_05ab438c = 0xffffffffffffffff;
        DAT_05ab4394 = 0xffffffffffffffff;
        DAT_05ab439c = 0xffffffffffffffff;
        DAT_05ab43a4 = 0xffffffffffffffff;
        DAT_05ab43ac = 0xffffffffffffffff;
        DAT_05ab43b4 = 0xffffffffffffffff;
      }
      else {
        if (-1 < (int)DAT_05ab437c) {
          psVar1 = (short *)((DAT_05ab437c & 0xffffffff) + (long)puVar11);
          iVar10 = 0;
          if (psVar1 != (short *)0x0) {
            iVar10 = (int)*psVar1;
          }
          goto LAB_036d0760;
        }
        if ((int)DAT_05ab437c != -1) goto LAB_036d075c;
      }
      puVar5 = (uint *)(ulong)*puVar11;
      iVar10 = 0;
      if ((*puVar11 == 0) || (puVar11 == puVar5)) goto LAB_036d0760;
      lVar4 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar5)) != '\0') {
        lVar4 = 0x1c;
      }
      lVar4 = (long)puVar11 + (lVar4 - (long)puVar5);
      if (lVar4 == 0) goto LAB_036d075c;
      uVar6 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar5));
      DAT_05ab437c = CONCAT44(DAT_05ab437c._4_4_,0xfffffffe);
      iVar10 = 0;
      if (uVar6 == 0) goto LAB_036d0760;
      piVar8 = (int *)(lVar4 + 4);
      while (piVar8[-1] != 0x4154052c) {
        piVar8 = piVar8 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          iVar10 = 0;
          goto LAB_036d0760;
        }
      }
      iVar10 = 0;
      if (*piVar8 != -1) {
        iVar10 = *piVar8;
      }
      DAT_05ab437c = CONCAT44(DAT_05ab437c._4_4_,iVar10);
    } while (*puVar11 != 0);
    iVar10 = 0;
    goto LAB_036d0760;
  }
  goto LAB_036d0820;
LAB_036d075c:
  iVar10 = 0;
LAB_036d0760:
  puVar11 = *(uint **)(param_2 + 8);
  if (puVar11 == (uint *)0x0) goto LAB_036d08f8;
  uVar3 = *puVar11;
  if (uVar3 != 0) {
    uVar7 = DAT_05ab438c;
    while ((int)uVar7 < 0) {
      if ((uVar7 != 0xffffffff) || (lVar4 = (long)puVar11 - (ulong)uVar3, lVar4 == 0))
      goto LAB_036d0820;
      lVar2 = 0xc;
      if (*(char *)(lVar4 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar4 == 0) goto LAB_036d0820;
      uVar6 = (ulong)*(ushort *)(lVar4 + 8);
      _DAT_05ab438c = CONCAT44(_DAT_05ab4390,0xfffffffe);
      if (uVar6 == 0) goto LAB_036d0820;
      puVar5 = (uint *)(lVar2 + lVar4 + 4);
      while (puVar5[-1] != 0x54706054) {
        puVar5 = puVar5 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) goto LAB_036d0820;
      }
      uVar7 = 0;
      if (*puVar5 != 0xffffffff) {
        uVar7 = *puVar5;
      }
      _DAT_05ab438c = CONCAT44(_DAT_05ab4390,uVar7);
      uVar3 = *puVar11;
      if (uVar3 == 0) goto LAB_036d0820;
    }
    if (((short *)((long)puVar11 + (ulong)uVar7) != (short *)0x0) &&
       (*(short *)((long)puVar11 + (ulong)uVar7) == -1)) goto LAB_036d08f8;
  }
LAB_036d0820:
  puVar11 = *(uint **)(param_2 + 8);
  if (*puVar11 != 0) {
    cVar12 = DAT_05ab4368;
    while( true ) {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        DAT_05ab436c = 0xffffffffffffffff;
        DAT_05ab4374 = 0xffffffffffffffff;
        DAT_05ab4368 = '\x01';
        DAT_05ab43bc = 0xffffffff;
        DAT_05ab437c = 0xffffffffffffffff;
        DAT_05ab4384 = 0xffffffffffffffff;
        _DAT_05ab438c = 0xffffffffffffffff;
        DAT_05ab4394 = 0xffffffffffffffff;
        DAT_05ab439c = 0xffffffffffffffff;
        DAT_05ab43a4 = 0xffffffffffffffff;
        DAT_05ab43ac = 0xffffffffffffffff;
        DAT_05ab43b4 = 0xffffffffffffffff;
        uVar3 = *puVar11;
      }
      else {
        if (-1 < (long)DAT_05ab437c) {
          iVar9 = 0;
          if ((short *)((ulong)DAT_05ab437c._4_4_ + (long)puVar11) != (short *)0x0) {
            iVar9 = (int)*(short *)((ulong)DAT_05ab437c._4_4_ + (long)puVar11);
          }
          goto LAB_036d08fc;
        }
        if (DAT_05ab437c._4_4_ != 0xffffffff) break;
        uVar3 = *puVar11;
      }
      if ((uVar3 == 0) || (puVar5 = (uint *)(ulong)uVar3, puVar11 == puVar5)) break;
      lVar4 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar5)) != '\0') {
        lVar4 = 0x1c;
      }
      lVar4 = (long)puVar11 + (lVar4 - (long)puVar5);
      if (lVar4 == 0) break;
      uVar6 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar5));
      DAT_05ab437c = CONCAT44(0xfffffffe,(int)DAT_05ab437c);
      if (uVar6 == 0) break;
      piVar8 = (int *)(lVar4 + 4);
      while (piVar8[-1] != 0x3b94564c) {
        piVar8 = piVar8 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) goto LAB_036d08f8;
      }
      iVar9 = 0;
      if (*piVar8 != -1) {
        iVar9 = *piVar8;
      }
      DAT_05ab437c = CONCAT44(iVar9,(int)DAT_05ab437c);
      if (*puVar11 == 0) break;
    }
  }
LAB_036d08f8:
  iVar9 = 0;
LAB_036d08fc:
  *(int *)(param_1 + 1) = iVar10;
  *(int *)((long)param_1 + 0xc) = iVar9;
  *param_1 = &DAT_048f9750;
  return;
}

