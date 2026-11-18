
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_036cf070(uint *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  short *psVar8;
  ushort *puVar9;
  char *pcVar10;
  uint *puVar11;
  char cVar12;
  uint *puVar13;
  int *piVar14;
  byte bVar15;
  ushort uVar16;
  long lVar17;
  undefined *local_70;
  uint local_68;
  uint uStack_64;
  long local_60;
  uint local_58;
  uint local_54;
  
  uVar3 = DAT_0558600c;
  puVar11 = *(uint **)(param_2 + 8);
  if (puVar11 == (uint *)0x0) {
LAB_036cf278:
    *param_1 = _DAT_05586008;
    param_1[1] = uVar3;
    return;
  }
  if (*puVar11 == 0) {
LAB_036cf2a0:
    puVar11 = *(uint **)(param_2 + 8);
    if (*puVar11 != 0) {
      cVar12 = DAT_05ab4368;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          DAT_05ab436c = -1;
          DAT_05ab4374 = 0xffffffffffffffff;
          DAT_05ab4368 = '\x01';
          DAT_05ab43bc = 0xffffffff;
          DAT_05ab437c = 0xffffffffffffffff;
          DAT_05ab4384 = 0xffffffffffffffff;
          _DAT_05ab438c = 0xffffffffffffffff;
          DAT_05ab4394 = -1;
          DAT_05ab439c = 0xffffffffffffffff;
          DAT_05ab43a4 = 0xffffffffffffffff;
          DAT_05ab43ac = 0xffffffffffffffff;
          DAT_05ab43b4 = 0xffffffffffffffff;
        }
        else {
          if (-1 < DAT_05ab436c) {
            if ((ushort *)((ulong)DAT_05ab436c._4_4_ + (long)puVar11) == (ushort *)0x0) break;
            uVar16 = *(ushort *)((ulong)DAT_05ab436c._4_4_ + (long)puVar11);
            goto LAB_036cf394;
          }
          if (DAT_05ab436c._4_4_ != 0xffffffff) break;
        }
        puVar13 = (uint *)(ulong)*puVar11;
        uVar16 = 0xfffe;
        if ((*puVar11 == 0) || (puVar11 == puVar13)) goto LAB_036cf394;
        lVar17 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)puVar11 + (lVar17 - (long)puVar13);
        if (lVar17 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
        DAT_05ab436c = CONCAT44(0xfffffffe,(undefined4)DAT_05ab436c);
        if (uVar7 == 0) break;
        piVar14 = (int *)(lVar17 + 4);
        while (piVar14[-1] != -0x3cc576b2) {
          piVar14 = piVar14 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) goto LAB_036cf390;
        }
        iVar4 = 0;
        if (*piVar14 != -1) {
          iVar4 = *piVar14;
        }
        DAT_05ab436c = CONCAT44(iVar4,(undefined4)DAT_05ab436c);
        uVar16 = 0xfffe;
        if (*puVar11 == 0) goto LAB_036cf394;
      } while( true );
    }
  }
  else {
    cVar12 = DAT_05ab4368;
LAB_036cf0d0:
    if (cVar12 == '\0') {
      cVar12 = '\x01';
      DAT_05ab436c = -1;
      DAT_05ab4374 = 0xffffffffffffffff;
      DAT_05ab4368 = '\x01';
      DAT_05ab43bc = 0xffffffff;
      DAT_05ab437c = 0xffffffffffffffff;
      DAT_05ab4384 = 0xffffffffffffffff;
      _DAT_05ab438c = 0xffffffffffffffff;
      DAT_05ab4394 = -1;
      DAT_05ab439c = 0xffffffffffffffff;
      DAT_05ab43a4 = 0xffffffffffffffff;
      DAT_05ab43ac = 0xffffffffffffffff;
      DAT_05ab43b4 = 0xffffffffffffffff;
      uVar1 = *puVar11;
joined_r0x036cf114:
      if ((uVar1 == 0) || (puVar13 = (uint *)(ulong)uVar1, puVar11 == puVar13)) goto LAB_036cf1a0;
      lVar17 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
        lVar17 = 0x1c;
      }
      lVar17 = (long)puVar11 + (lVar17 - (long)puVar13);
      if (lVar17 == 0) goto LAB_036cf1a0;
      uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
      _DAT_05ab4390 = (uint)(_DAT_05ab438c >> 0x20);
      _DAT_05ab438c = CONCAT44(_DAT_05ab4390,0xfffffffe);
      if (uVar7 == 0) goto LAB_036cf1a0;
      piVar14 = (int *)(lVar17 + 4);
      while (piVar14[-1] != 0x54706054) {
        piVar14 = piVar14 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_036cf1a0;
      }
      iVar4 = 0;
      if (*piVar14 != -1) {
        iVar4 = *piVar14;
      }
      _DAT_05ab438c = CONCAT44(_DAT_05ab4390,iVar4);
      if (*puVar11 == 0) goto LAB_036cf1a0;
      goto LAB_036cf0d0;
    }
    if (DAT_05ab438c < 0) {
      if (DAT_05ab438c != -1) goto LAB_036cf1a0;
      uVar1 = *puVar11;
      goto joined_r0x036cf114;
    }
    psVar8 = (short *)((_DAT_05ab438c & 0xffffffff) + (long)puVar11);
    if ((psVar8 != (short *)0x0) && (*psVar8 == -1)) goto LAB_036cf278;
LAB_036cf1a0:
    puVar11 = *(uint **)(param_2 + 8);
    if (puVar11 != (uint *)0x0) {
      if (*puVar11 != 0) {
        cVar12 = DAT_05ab4368;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            DAT_05ab436c = -1;
            DAT_05ab4374 = 0xffffffffffffffff;
            DAT_05ab4368 = '\x01';
            DAT_05ab43bc = 0xffffffff;
            DAT_05ab437c = 0xffffffffffffffff;
            DAT_05ab4384 = 0xffffffffffffffff;
            _DAT_05ab438c = 0xffffffffffffffff;
            DAT_05ab4394 = -1;
            DAT_05ab439c = 0xffffffffffffffff;
            DAT_05ab43a4 = 0xffffffffffffffff;
            DAT_05ab43ac = 0xffffffffffffffff;
            DAT_05ab43b4 = 0xffffffffffffffff;
            uVar3 = *puVar11;
          }
          else {
            if (-1 < DAT_05ab438c) {
              psVar8 = (short *)((_DAT_05ab438c & 0xffffffff) + (long)puVar11);
              if ((psVar8 != (short *)0x0) && (*psVar8 == -1)) goto LAB_036cf390;
              break;
            }
            if (DAT_05ab438c != -1) break;
            uVar3 = *puVar11;
          }
          if ((uVar3 == 0) || (puVar13 = (uint *)(ulong)uVar3, puVar11 == puVar13)) break;
          lVar17 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar11 + (lVar17 - (long)puVar13);
          if (lVar17 == 0) break;
          uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
          _DAT_05ab4390 = (uint)(_DAT_05ab438c >> 0x20);
          _DAT_05ab438c = CONCAT44(_DAT_05ab4390,0xfffffffe);
          if (uVar7 == 0) break;
          piVar14 = (int *)(lVar17 + 4);
          while (piVar14[-1] != 0x54706054) {
            piVar14 = piVar14 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_036cf2a0;
          }
          iVar4 = 0;
          if (*piVar14 != -1) {
            iVar4 = *piVar14;
          }
          _DAT_05ab438c = CONCAT44(_DAT_05ab4390,iVar4);
          if (*puVar11 == 0) break;
        } while( true );
      }
      goto LAB_036cf2a0;
    }
  }
LAB_036cf390:
  uVar16 = 0xfffe;
LAB_036cf394:
  local_58 = (uint)uVar16;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  uVar7 = FUN_0277e294(&local_58);
  puVar2 = PTR_DAT_04bb43c0;
  if ((uVar7 & 1) == 0) {
    local_68 = local_58;
    uStack_64 = local_54;
    goto LAB_036cfcd8;
  }
  local_60 = 0;
  local_70 = PTR_DAT_04bc0510 + 0x10;
  local_68 = local_58;
  uStack_64 = local_54;
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar2 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar17 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(&local_58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar17 + 0x1d8)) &&
         (lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar3 * 8), lVar17 != 0)) {
        local_60 = lVar17;
      }
    }
  }
  iVar4 = FUN_01ad7260(&local_70);
  if ((iVar4 == 0) && (iVar4 = FUN_01afcfa0(&local_70), iVar4 == 0)) {
LAB_036cf938:
    puVar11 = *(uint **)(param_2 + 8);
    if (puVar11 == (uint *)0x0) goto LAB_036cfcc0;
    if (*puVar11 != 0) {
      cVar12 = DAT_05ab4368;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          DAT_05ab436c = -1;
          DAT_05ab4374 = 0xffffffffffffffff;
          DAT_05ab4368 = '\x01';
          DAT_05ab43bc = 0xffffffff;
          DAT_05ab437c = 0xffffffffffffffff;
          DAT_05ab4384 = 0xffffffffffffffff;
          _DAT_05ab438c = 0xffffffffffffffff;
          DAT_05ab4394 = -1;
          DAT_05ab439c = 0xffffffffffffffff;
          DAT_05ab43a4 = 0xffffffffffffffff;
          DAT_05ab43ac = 0xffffffffffffffff;
          DAT_05ab43b4 = 0xffffffffffffffff;
          uVar3 = *puVar11;
        }
        else {
          if (-1 < DAT_05ab438c) {
            psVar8 = (short *)((_DAT_05ab438c & 0xffffffff) + (long)puVar11);
            if ((psVar8 != (short *)0x0) && (*psVar8 == -1)) goto LAB_036cfcc0;
            break;
          }
          if (DAT_05ab438c != -1) break;
          uVar3 = *puVar11;
        }
        if ((uVar3 == 0) || (puVar13 = (uint *)(ulong)uVar3, puVar11 == puVar13)) break;
        lVar17 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)puVar11 + (lVar17 - (long)puVar13);
        if (lVar17 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
        _DAT_05ab4390 = (uint)(_DAT_05ab438c >> 0x20);
        _DAT_05ab438c = CONCAT44(_DAT_05ab4390,0xfffffffe);
        if (uVar7 == 0) break;
        piVar14 = (int *)(lVar17 + 4);
        while (piVar14[-1] != 0x54706054) {
          piVar14 = piVar14 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) goto LAB_036cfbcc;
        }
        iVar4 = 0;
        if (*piVar14 != -1) {
          iVar4 = *piVar14;
        }
        _DAT_05ab438c = CONCAT44(_DAT_05ab4390,iVar4);
        if (*puVar11 == 0) break;
      } while( true );
    }
LAB_036cfbcc:
    puVar11 = *(uint **)(param_2 + 8);
    if (*puVar11 == 0) goto LAB_036cfcc0;
    cVar12 = DAT_05ab4368;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        DAT_05ab436c = -1;
        DAT_05ab4374 = 0xffffffffffffffff;
        DAT_05ab4368 = '\x01';
        DAT_05ab43bc = 0xffffffff;
        DAT_05ab437c = 0xffffffffffffffff;
        DAT_05ab4384 = 0xffffffffffffffff;
        _DAT_05ab438c = 0xffffffffffffffff;
        DAT_05ab4394 = -1;
        DAT_05ab439c = 0xffffffffffffffff;
        DAT_05ab43a4 = 0xffffffffffffffff;
        DAT_05ab43ac = 0xffffffffffffffff;
        DAT_05ab43b4 = 0xffffffffffffffff;
      }
      else {
        if (-1 < (long)_DAT_05ab438c) {
          if (((byte *)((ulong)_DAT_05ab4390 + (long)puVar11) == (byte *)0x0) ||
             (bVar15 = *(byte *)((ulong)_DAT_05ab4390 + (long)puVar11), 3 < bVar15))
          goto LAB_036cfcc0;
          goto LAB_036cfcc4;
        }
        if (_DAT_05ab4390 != 0xffffffff) goto LAB_036cfcc0;
      }
      puVar13 = (uint *)(ulong)*puVar11;
      bVar15 = 0;
      if ((*puVar11 == 0) || (puVar11 == puVar13)) goto LAB_036cfcc4;
      lVar17 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
        lVar17 = 0x1c;
      }
      lVar17 = (long)puVar11 + (lVar17 - (long)puVar13);
      if (lVar17 == 0) goto LAB_036cfcc0;
      uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
      _DAT_05ab438c = CONCAT44(0xfffffffe,DAT_05ab438c);
      bVar15 = 0;
      if (uVar7 == 0) goto LAB_036cfcc4;
      piVar14 = (int *)(lVar17 + 4);
      while (piVar14[-1] != -0x632a545a) {
        piVar14 = piVar14 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) {
          bVar15 = 0;
          goto LAB_036cfcc4;
        }
      }
      iVar4 = 0;
      if (*piVar14 != -1) {
        iVar4 = *piVar14;
      }
      _DAT_05ab438c = CONCAT44(iVar4,DAT_05ab438c);
    } while (*puVar11 != 0);
    bVar15 = 0;
  }
  else {
    iVar4 = FUN_01ad7260(&local_70);
    if (iVar4 != 0) {
      puVar11 = *(uint **)(param_2 + 8);
      if (puVar11 == (uint *)0x0) {
LAB_036cf6a8:
        iVar4 = 0;
      }
      else {
        if (*puVar11 != 0) {
          cVar12 = DAT_05ab4368;
          do {
            if (cVar12 == '\0') {
              cVar12 = '\x01';
              DAT_05ab436c = -1;
              DAT_05ab4374 = 0xffffffffffffffff;
              DAT_05ab4368 = '\x01';
              DAT_05ab43bc = 0xffffffff;
              DAT_05ab437c = 0xffffffffffffffff;
              DAT_05ab4384 = 0xffffffffffffffff;
              _DAT_05ab438c = 0xffffffffffffffff;
              DAT_05ab4394 = -1;
              DAT_05ab439c = 0xffffffffffffffff;
              DAT_05ab43a4 = 0xffffffffffffffff;
              DAT_05ab43ac = 0xffffffffffffffff;
              DAT_05ab43b4 = 0xffffffffffffffff;
              uVar3 = *puVar11;
            }
            else {
              if (-1 < DAT_05ab438c) {
                psVar8 = (short *)((_DAT_05ab438c & 0xffffffff) + (long)puVar11);
                if ((psVar8 != (short *)0x0) && (*psVar8 == -1)) goto LAB_036cf65c;
                break;
              }
              if (DAT_05ab438c != -1) break;
              uVar3 = *puVar11;
            }
            if ((uVar3 == 0) || (puVar13 = (uint *)(ulong)uVar3, puVar11 == puVar13)) break;
            lVar17 = 0xc;
            if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
              lVar17 = 0x1c;
            }
            lVar17 = (long)puVar11 + (lVar17 - (long)puVar13);
            if (lVar17 == 0) break;
            uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
            _DAT_05ab4390 = (uint)(_DAT_05ab438c >> 0x20);
            _DAT_05ab438c = CONCAT44(_DAT_05ab4390,0xfffffffe);
            if (uVar7 == 0) break;
            piVar14 = (int *)(lVar17 + 4);
            while (piVar14[-1] != 0x54706054) {
              piVar14 = piVar14 + 2;
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) goto LAB_036cf578;
            }
            iVar4 = 0;
            if (*piVar14 != -1) {
              iVar4 = *piVar14;
            }
            _DAT_05ab438c = CONCAT44(_DAT_05ab4390,iVar4);
            if (*puVar11 == 0) break;
          } while( true );
        }
LAB_036cf578:
        puVar11 = *(uint **)(param_2 + 8);
        if (*puVar11 != 0) {
          cVar12 = DAT_05ab4368;
LAB_036cf598:
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            DAT_05ab436c = -1;
            DAT_05ab4374 = 0xffffffffffffffff;
            DAT_05ab4368 = '\x01';
            DAT_05ab43bc = 0xffffffff;
            DAT_05ab437c = 0xffffffffffffffff;
            DAT_05ab4384 = 0xffffffffffffffff;
            _DAT_05ab438c = 0xffffffffffffffff;
            DAT_05ab4394 = -1;
            DAT_05ab439c = 0xffffffffffffffff;
            DAT_05ab43a4 = 0xffffffffffffffff;
            DAT_05ab43ac = 0xffffffffffffffff;
            DAT_05ab43b4 = 0xffffffffffffffff;
            uVar3 = *puVar11;
joined_r0x036cf5dc:
            if ((uVar3 == 0) || (puVar13 = (uint *)(ulong)uVar3, puVar11 == puVar13))
            goto LAB_036cf65c;
            lVar17 = 0xc;
            if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
              lVar17 = 0x1c;
            }
            lVar17 = (long)puVar11 + (lVar17 - (long)puVar13);
            if (lVar17 == 0) goto LAB_036cf65c;
            uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
            DAT_05ab4384._4_4_ = (uint)(DAT_05ab4384 >> 0x20);
            DAT_05ab4384 = CONCAT44(DAT_05ab4384._4_4_,0xfffffffe);
            if (uVar7 == 0) goto LAB_036cf65c;
            piVar14 = (int *)(lVar17 + 4);
            while (piVar14[-1] != 0xc78bf8f) {
              piVar14 = piVar14 + 2;
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) goto LAB_036cf65c;
            }
            iVar4 = 0;
            if (*piVar14 != -1) {
              iVar4 = *piVar14;
            }
            DAT_05ab4384 = CONCAT44(DAT_05ab4384._4_4_,iVar4);
            if (*puVar11 == 0) goto LAB_036cf65c;
            goto LAB_036cf598;
          }
          if ((int)DAT_05ab4384 < 0) {
            if ((int)DAT_05ab4384 != -1) goto LAB_036cf65c;
            uVar3 = *puVar11;
            goto joined_r0x036cf5dc;
          }
          psVar8 = (short *)((DAT_05ab4384 & 0xffffffff) + (long)puVar11);
          if ((psVar8 != (short *)0x0) && (*psVar8 == -1)) goto LAB_036cf6e4;
LAB_036cf65c:
          puVar11 = *(uint **)(param_2 + 8);
          if (puVar11 == (uint *)0x0) goto LAB_036cf6a8;
        }
        psVar8 = (short *)FUN_036d1f50(puVar11,8,0x54706054,DAT_05ab4360);
        if (((psVar8 != (short *)0x0) && (*psVar8 == -1)) ||
           (psVar8 = (short *)FUN_036d1f50(*(undefined8 *)(param_2 + 8),6,0xc78bf8f,0),
           psVar8 == (short *)0x0)) goto LAB_036cf6a8;
        iVar4 = (int)*psVar8;
      }
      iVar5 = FUN_01ad7260(&local_70);
      if (((iVar5 != 0) && ((iVar4 == 0 || (iVar5 = FUN_01ad7260(&local_70), iVar4 < iVar5)))) &&
         (puVar9 = (ushort *)FUN_01afd600(&local_70), puVar9 != (ushort *)0x0)) {
        *puVar9 = *puVar9 & 0xfff8 | (ushort)iVar4 & 7;
      }
    }
LAB_036cf6e4:
    iVar4 = FUN_01afcfa0(&local_70);
    if (iVar4 == 0) goto LAB_036cf938;
    puVar11 = *(uint **)(param_2 + 8);
    if (puVar11 != (uint *)0x0) {
      if (*puVar11 != 0) {
        cVar12 = DAT_05ab4368;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            DAT_05ab436c = -1;
            DAT_05ab4374 = 0xffffffffffffffff;
            DAT_05ab4368 = '\x01';
            DAT_05ab43bc = 0xffffffff;
            DAT_05ab437c = 0xffffffffffffffff;
            DAT_05ab4384 = 0xffffffffffffffff;
            _DAT_05ab438c = 0xffffffffffffffff;
            DAT_05ab4394 = -1;
            DAT_05ab439c = 0xffffffffffffffff;
            DAT_05ab43a4 = 0xffffffffffffffff;
            DAT_05ab43ac = 0xffffffffffffffff;
            DAT_05ab43b4 = 0xffffffffffffffff;
            uVar3 = *puVar11;
          }
          else {
            if (-1 < DAT_05ab438c) {
              psVar8 = (short *)((_DAT_05ab438c & 0xffffffff) + (long)puVar11);
              if ((psVar8 != (short *)0x0) && (*psVar8 == -1)) goto LAB_036cf8cc;
              break;
            }
            if (DAT_05ab438c != -1) break;
            uVar3 = *puVar11;
          }
          if ((uVar3 == 0) || (puVar13 = (uint *)(ulong)uVar3, puVar11 == puVar13)) break;
          lVar17 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar11 + (lVar17 - (long)puVar13);
          if (lVar17 == 0) break;
          uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
          _DAT_05ab4390 = (uint)(_DAT_05ab438c >> 0x20);
          _DAT_05ab438c = CONCAT44(_DAT_05ab4390,0xfffffffe);
          if (uVar7 == 0) break;
          piVar14 = (int *)(lVar17 + 4);
          while (piVar14[-1] != 0x54706054) {
            piVar14 = piVar14 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_036cf7dc;
          }
          iVar4 = 0;
          if (*piVar14 != -1) {
            iVar4 = *piVar14;
          }
          _DAT_05ab438c = CONCAT44(_DAT_05ab4390,iVar4);
          if (*puVar11 == 0) break;
        } while( true );
      }
LAB_036cf7dc:
      puVar11 = *(uint **)(param_2 + 8);
      if (*puVar11 != 0) {
        cVar12 = DAT_05ab4368;
LAB_036cf804:
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          DAT_05ab436c = -1;
          DAT_05ab4374 = 0xffffffffffffffff;
          DAT_05ab4368 = '\x01';
          DAT_05ab43bc = 0xffffffff;
          DAT_05ab437c = 0xffffffffffffffff;
          DAT_05ab4384 = 0xffffffffffffffff;
          _DAT_05ab438c = 0xffffffffffffffff;
          DAT_05ab4394 = -1;
          DAT_05ab439c = 0xffffffffffffffff;
          DAT_05ab43a4 = 0xffffffffffffffff;
          DAT_05ab43ac = 0xffffffffffffffff;
          DAT_05ab43b4 = 0xffffffffffffffff;
          uVar3 = *puVar11;
joined_r0x036cf848:
          if ((uVar3 == 0) || (puVar13 = (uint *)(ulong)uVar3, puVar11 == puVar13))
          goto LAB_036cf8cc;
          lVar17 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar11 + (lVar17 - (long)puVar13);
          if (lVar17 == 0) goto LAB_036cf8cc;
          uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
          DAT_05ab4384 = CONCAT44(0xfffffffe,(int)DAT_05ab4384);
          if (uVar7 == 0) goto LAB_036cf8cc;
          piVar14 = (int *)(lVar17 + 4);
          while (piVar14[-1] != 0x20a27847) {
            piVar14 = piVar14 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_036cf8cc;
          }
          iVar4 = 0;
          if (*piVar14 != -1) {
            iVar4 = *piVar14;
          }
          DAT_05ab4384 = CONCAT44(iVar4,(int)DAT_05ab4384);
          if (*puVar11 == 0) goto LAB_036cf8cc;
          goto LAB_036cf804;
        }
        if ((long)DAT_05ab4384 < 0) {
          if (DAT_05ab4384._4_4_ != 0xffffffff) goto LAB_036cf8cc;
          uVar3 = *puVar11;
          goto joined_r0x036cf848;
        }
        if (((short *)((ulong)DAT_05ab4384._4_4_ + (long)puVar11) != (short *)0x0) &&
           (*(short *)((ulong)DAT_05ab4384._4_4_ + (long)puVar11) == -1)) goto LAB_036cf938;
LAB_036cf8cc:
        puVar11 = *(uint **)(param_2 + 8);
        if (puVar11 == (uint *)0x0) goto LAB_036cfcc0;
      }
      psVar8 = (short *)FUN_036d1f50(puVar11,8,0x54706054,DAT_05ab4360);
      if ((((psVar8 == (short *)0x0) || (*psVar8 != -1)) &&
          (pcVar10 = (char *)FUN_036d1f50(*(undefined8 *)(param_2 + 8),0xb,0xee34baae,0),
          pcVar10 != (char *)0x0)) && (*pcVar10 == '\x01')) {
        uVar6 = FUN_036cfd30(param_2);
        FUN_01afdcc4(&local_70,uVar6);
        goto LAB_036cf938;
      }
      puVar11 = *(uint **)(param_2 + 8);
      if (puVar11 == (uint *)0x0) goto LAB_036cfcc0;
      uVar3 = *puVar11;
      if (uVar3 != 0) {
        cVar12 = DAT_05ab4368;
        do {
          if (cVar12 == '\0') {
            DAT_05ab436c = -1;
            DAT_05ab4374 = 0xffffffffffffffff;
            cVar12 = '\x01';
            DAT_05ab43bc = 0xffffffff;
            DAT_05ab4368 = '\x01';
            DAT_05ab437c = 0xffffffffffffffff;
            DAT_05ab4384 = 0xffffffffffffffff;
            _DAT_05ab438c = 0xffffffffffffffff;
            DAT_05ab4394 = -1;
            DAT_05ab439c = 0xffffffffffffffff;
            DAT_05ab43a4 = 0xffffffffffffffff;
            DAT_05ab43ac = 0xffffffffffffffff;
            DAT_05ab43b4 = 0xffffffffffffffff;
            uVar3 = *puVar11;
          }
          else {
            if (-1 < DAT_05ab438c) {
              psVar8 = (short *)((_DAT_05ab438c & 0xffffffff) + (long)puVar11);
              if ((psVar8 != (short *)0x0) && (*psVar8 == -1)) goto LAB_036cf938;
              break;
            }
            if (DAT_05ab438c != -1) break;
          }
          puVar13 = (uint *)(ulong)uVar3;
          if ((puVar13 == (uint *)0x0) || (puVar11 == puVar13)) break;
          lVar17 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar11 + (lVar17 - (long)puVar13);
          if (lVar17 == 0) break;
          uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
          _DAT_05ab438c = CONCAT44(_DAT_05ab4390,0xfffffffe);
          if (uVar7 == 0) break;
          piVar14 = (int *)(lVar17 + 4);
          while (piVar14[-1] != 0x54706054) {
            piVar14 = piVar14 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_036cfb04;
          }
          iVar4 = 0;
          if (*piVar14 != -1) {
            iVar4 = *piVar14;
          }
          _DAT_05ab438c = CONCAT44(_DAT_05ab4390,iVar4);
          uVar3 = *puVar11;
          if (uVar3 == 0) break;
        } while( true );
      }
LAB_036cfb04:
      puVar11 = *(uint **)(param_2 + 8);
      uVar3 = *puVar11;
      if (uVar3 != 0) {
        cVar12 = DAT_05ab4368;
        do {
          if (cVar12 == '\0') {
            DAT_05ab436c = -1;
            DAT_05ab4374 = 0xffffffffffffffff;
            cVar12 = '\x01';
            DAT_05ab43bc = 0xffffffff;
            DAT_05ab4368 = '\x01';
            DAT_05ab437c = 0xffffffffffffffff;
            DAT_05ab4384 = 0xffffffffffffffff;
            _DAT_05ab438c = 0xffffffffffffffff;
            DAT_05ab4394 = -1;
            DAT_05ab439c = 0xffffffffffffffff;
            DAT_05ab43a4 = 0xffffffffffffffff;
            DAT_05ab43ac = 0xffffffffffffffff;
            DAT_05ab43b4 = 0xffffffffffffffff;
            uVar3 = *puVar11;
          }
          else {
            if (-1 < DAT_05ab4394) {
              if (((char *)((ulong)DAT_05ab4394._4_4_ + (long)puVar11) != (char *)0x0) &&
                 (*(char *)((ulong)DAT_05ab4394._4_4_ + (long)puVar11) == '\x02')) {
                uVar6 = FUN_036cfd30(param_2);
                FUN_01afdd70(&local_70,uVar6);
              }
              goto LAB_036cf938;
            }
            if (DAT_05ab4394._4_4_ != 0xffffffff) goto LAB_036cf938;
          }
          puVar13 = (uint *)(ulong)uVar3;
          if ((puVar13 == (uint *)0x0) || (puVar11 == puVar13)) goto LAB_036cf938;
          lVar17 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar11 + (lVar17 - (long)puVar13);
          if (lVar17 == 0) goto LAB_036cf938;
          uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
          DAT_05ab4394 = CONCAT44(0xfffffffe,(undefined4)DAT_05ab4394);
          if (uVar7 == 0) goto LAB_036cf938;
          piVar14 = (int *)(lVar17 + 4);
          while (piVar14[-1] != -0x11cb4552) {
            piVar14 = piVar14 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_036cf938;
          }
          iVar4 = 0;
          if (*piVar14 != -1) {
            iVar4 = *piVar14;
          }
          DAT_05ab4394 = CONCAT44(iVar4,(undefined4)DAT_05ab4394);
          uVar3 = *puVar11;
          if (uVar3 == 0) goto LAB_036cf938;
        } while( true );
      }
      goto LAB_036cfbcc;
    }
LAB_036cfcc0:
    bVar15 = 0;
  }
LAB_036cfcc4:
  FUN_01afade0(&local_70,bVar15);
LAB_036cfcd8:
  *param_1 = local_68;
  param_1[1] = uStack_64;
  return;
}

