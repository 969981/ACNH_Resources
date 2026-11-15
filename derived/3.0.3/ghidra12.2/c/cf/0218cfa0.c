
undefined4 FUN_0218cfa0(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  char *pcVar8;
  char cVar9;
  uint *puVar10;
  char cVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  undefined4 uVar17;
  
  lVar12 = *(long *)(param_1 + 8);
  if (lVar12 == 0) {
    return 0;
  }
  uVar3 = *(uint *)(lVar12 + 0x1c0);
  uVar14 = uVar3;
  if (((int)uVar3 < 1) &&
     (((*(long *)(lVar12 + 0xb0) == 0 ||
       (puVar10 = *(uint **)(*(long *)(lVar12 + 0xb0) + 8), puVar10 == (uint *)0x0)) ||
      (uVar14 = *puVar10, uVar14 == 0)))) {
    return 0;
  }
  uVar15 = 0;
  cVar11 = DAT_053fbe38;
  do {
    if ((int)uVar3 < 1) {
      if (((((*(long *)(lVar12 + 0xb0) != 0) &&
            (puVar10 = *(uint **)(*(long *)(lVar12 + 0xb0) + 8), puVar10 != (uint *)0x0)) &&
           ((*(uint *)(lVar12 + 200) <= uVar15 ||
            (*(char *)(*(long *)(lVar12 + 0xd0) + (long)(int)uVar15) != '\0')))) &&
          ((uVar15 < *puVar10 && (puVar10[1] != 0)))) && ((ushort)puVar10[2] != 0)) {
        iVar5 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          iVar5 = 0x1c;
        }
        puVar10 = (uint *)((ulong)(puVar10[1] * uVar15 + (uint)(ushort)puVar10[2] * 8 + iVar5) +
                          (long)puVar10);
        goto joined_r0x0218d190;
      }
    }
    else if (uVar15 < uVar3) {
      uVar1 = uVar15;
      if (*(uint *)(lVar12 + 0x1b0) <= uVar15) {
        uVar1 = 0;
      }
      puVar10 = *(uint **)(*(long *)(lVar12 + 0x1b8) + (ulong)uVar1 * 8);
joined_r0x0218d190:
      if (puVar10 != (uint *)0x0) {
        uVar1 = *puVar10;
        lVar2 = DAT_053fbe7c;
        while (DAT_053fbe7c = lVar2, uVar1 != 0) {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            DAT_053fbe3c = 0xffffffffffffffff;
            DAT_053fbe44 = 0xffffffffffffffff;
            DAT_053fbe38 = '\x01';
            DAT_053fbe7c = -1;
            DAT_053fbe84 = 0xffffffff;
            DAT_053fbe4c = 0xffffffffffffffff;
            DAT_053fbe54 = -1;
            DAT_053fbe5c = 0xffffffffffffffff;
            DAT_053fbe64 = -1;
            DAT_053fbe6c = 0xffffffffffffffff;
            DAT_053fbe74 = -1;
            uVar1 = *puVar10;
          }
          else {
            DAT_053fbe7c._4_4_ = (uint)((ulong)lVar2 >> 0x20);
            if (-1 < lVar2) {
              pcVar8 = (char *)((ulong)DAT_053fbe7c._4_4_ + (long)puVar10);
              goto LAB_0218d0fc;
            }
            bVar4 = DAT_053fbe7c._4_4_ != 0xffffffff;
            if (bVar4) break;
            uVar1 = *puVar10;
          }
          if ((uVar1 == 0) || (puVar7 = (uint *)(ulong)uVar1, puVar10 == puVar7)) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar7)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar10 + (lVar2 - (long)puVar7);
          if (lVar2 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar7));
          DAT_053fbe7c = CONCAT44(0xfffffffe,(undefined4)DAT_053fbe7c);
          pcVar8 = (char *)0x0;
          if (uVar13 == 0) goto LAB_0218d0fc;
          piVar6 = (int *)(lVar2 + 4);
          while (piVar6[-1] != -0x7840ff18) {
            piVar6 = piVar6 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) {
              pcVar8 = (char *)0x0;
              goto LAB_0218d0fc;
            }
          }
          iVar5 = 0;
          if (*piVar6 != -1) {
            iVar5 = *piVar6;
          }
          DAT_053fbe7c = CONCAT44(iVar5,(undefined4)DAT_053fbe7c);
          lVar2 = DAT_053fbe7c;
          uVar1 = *puVar10;
        }
        pcVar8 = (char *)0x0;
LAB_0218d0fc:
        pcVar16 = PTR_DAT_04c48730;
        if (pcVar8 != (char *)0x0) {
          pcVar16 = pcVar8;
        }
        cVar9 = *pcVar16;
        if (cVar9 == '\0') {
LAB_0218d1b0:
          if (**(char **)(param_3 + 8) == 'L') {
            if (*puVar10 == 0) {
              return 0;
            }
            break;
          }
          if (**(char **)(param_3 + 8) == 'H') {
            if (*puVar10 == 0) {
              return 0;
            }
            goto LAB_0218d1f4;
          }
          if (*puVar10 == 0) {
            return 0;
          }
          goto LAB_0218d3c8;
        }
        pcVar8 = *(char **)(param_2 + 8);
        while( true ) {
          pcVar16 = pcVar16 + 1;
          if (*pcVar8 != cVar9) break;
          cVar9 = *pcVar16;
          pcVar8 = pcVar8 + 1;
          if (cVar9 == '\0') goto LAB_0218d1b0;
        }
      }
    }
    uVar15 = uVar15 + 1;
    if (uVar15 == uVar14) {
      return 0;
    }
  } while( true );
LAB_0218d2e8:
  if (cVar11 != '\0') {
    if (DAT_053fbe64 < 0) {
      if (DAT_053fbe64._4_4_ == 0xffffffff) goto LAB_0218d320;
LAB_0218d55c:
      uVar17 = 0;
    }
    else {
      if ((undefined4 *)((ulong)DAT_053fbe64._4_4_ + (long)puVar10) == (undefined4 *)0x0)
      goto LAB_0218d55c;
      uVar17 = *(undefined4 *)((ulong)DAT_053fbe64._4_4_ + (long)puVar10);
    }
LAB_0218d560:
    uVar3 = *puVar10;
    if (uVar3 == 0) {
      return uVar17;
    }
    iVar5 = (int)DAT_053fbe64;
    goto LAB_0218d584;
  }
  cVar11 = '\x01';
  DAT_053fbe3c = 0xffffffffffffffff;
  DAT_053fbe44 = 0xffffffffffffffff;
  DAT_053fbe38 = '\x01';
  DAT_053fbe7c = -1;
  DAT_053fbe84 = 0xffffffff;
  DAT_053fbe4c = 0xffffffffffffffff;
  DAT_053fbe54 = -1;
  DAT_053fbe5c = 0xffffffffffffffff;
  DAT_053fbe64 = -1;
  DAT_053fbe6c = 0xffffffffffffffff;
  DAT_053fbe74 = -1;
LAB_0218d320:
  uVar17 = 0;
  lVar12 = (long)puVar10 - (ulong)*puVar10;
  if ((*puVar10 == 0) || (lVar12 == 0)) goto LAB_0218d560;
  lVar2 = 0xc;
  if (*(char *)(lVar12 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar12 == 0) goto LAB_0218d560;
  uVar13 = (ulong)*(ushort *)(lVar12 + 8);
  DAT_053fbe64 = CONCAT44(0xfffffffe,(int)DAT_053fbe64);
  if (uVar13 == 0) goto LAB_0218d560;
  piVar6 = (int *)(lVar2 + lVar12 + 4);
  while (piVar6[-1] != 0x2d250dd8) {
    piVar6 = piVar6 + 2;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) goto LAB_0218d560;
  }
  iVar5 = 0;
  if (*piVar6 != -1) {
    iVar5 = *piVar6;
  }
  DAT_053fbe64 = CONCAT44(iVar5,(int)DAT_053fbe64);
  if (*puVar10 == 0) {
    return 0;
  }
  goto LAB_0218d2e8;
LAB_0218d584:
  if (((-1 < iVar5) || (iVar5 != -1)) || (lVar12 = (long)puVar10 - (ulong)uVar3, lVar12 == 0)) {
LAB_0218d790:
    uVar3 = *puVar10;
    if (uVar3 == 0) {
      return uVar17;
    }
    iVar5 = DAT_053fbe5c._4_4_;
    goto LAB_0218d7b4;
  }
  lVar2 = 0xc;
  if (*(char *)(lVar12 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar12 == 0) goto LAB_0218d790;
  uVar13 = (ulong)*(ushort *)(lVar12 + 8);
  DAT_053fbe64 = CONCAT44(DAT_053fbe64._4_4_,0xfffffffe);
  if (uVar13 == 0) goto LAB_0218d790;
  piVar6 = (int *)(lVar2 + lVar12 + 4);
  while (piVar6[-1] != -0x7adaead6) {
    piVar6 = piVar6 + 2;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) goto LAB_0218d790;
  }
  iVar5 = 0;
  if (*piVar6 != -1) {
    iVar5 = *piVar6;
  }
  DAT_053fbe64 = CONCAT44(DAT_053fbe64._4_4_,iVar5);
  uVar3 = *puVar10;
  if (uVar3 == 0) {
    return uVar17;
  }
  goto LAB_0218d584;
LAB_0218d7b4:
  if (((-1 < iVar5) || (iVar5 != -1)) || (lVar12 = (long)puVar10 - (ulong)uVar3, lVar12 == 0)) {
LAB_0218d98c:
    uVar3 = *puVar10;
    if (uVar3 == 0) {
      return uVar17;
    }
    uVar14 = (uint)DAT_053fbe5c;
    while ((int)uVar14 < 0) {
      if (uVar14 != 0xffffffff) {
        return uVar17;
      }
      lVar12 = (long)puVar10 - (ulong)uVar3;
      if (lVar12 == 0) {
        return uVar17;
      }
      lVar2 = 0xc;
      if (*(char *)(lVar12 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar12 == 0) {
        return uVar17;
      }
      uVar13 = (ulong)*(ushort *)(lVar12 + 8);
      DAT_053fbe5c = CONCAT44(DAT_053fbe5c._4_4_,0xfffffffe);
      if (uVar13 == 0) {
        return uVar17;
      }
      puVar7 = (uint *)(lVar2 + lVar12 + 4);
      while (puVar7[-1] != 0xa65e08a) {
        puVar7 = puVar7 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          return uVar17;
        }
      }
      uVar14 = 0;
      if (*puVar7 != 0xffffffff) {
        uVar14 = *puVar7;
      }
      DAT_053fbe5c = CONCAT44(DAT_053fbe5c._4_4_,uVar14);
      uVar3 = *puVar10;
      if (uVar3 == 0) {
        return uVar17;
      }
    }
    goto LAB_0218dac8;
  }
  lVar2 = 0xc;
  if (*(char *)(lVar12 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar12 == 0) goto LAB_0218d98c;
  uVar13 = (ulong)*(ushort *)(lVar12 + 8);
  DAT_053fbe5c = CONCAT44(0xfffffffe,(uint)DAT_053fbe5c);
  if (uVar13 == 0) goto LAB_0218d98c;
  piVar6 = (int *)(lVar2 + lVar12 + 4);
  while (piVar6[-1] != 0x4dc59a5a) {
    piVar6 = piVar6 + 2;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) goto LAB_0218d98c;
  }
  iVar5 = 0;
  if (*piVar6 != -1) {
    iVar5 = *piVar6;
  }
  DAT_053fbe5c = CONCAT44(iVar5,(uint)DAT_053fbe5c);
  uVar3 = *puVar10;
  if (uVar3 == 0) {
    return uVar17;
  }
  goto LAB_0218d7b4;
LAB_0218d3c8:
  if (cVar11 != '\0') {
    if (DAT_053fbe74 < 0) {
      if (DAT_053fbe74._4_4_ == 0xffffffff) goto LAB_0218d400;
LAB_0218d60c:
      uVar17 = 0;
    }
    else {
      if ((undefined4 *)((ulong)DAT_053fbe74._4_4_ + (long)puVar10) == (undefined4 *)0x0)
      goto LAB_0218d60c;
      uVar17 = *(undefined4 *)((ulong)DAT_053fbe74._4_4_ + (long)puVar10);
    }
LAB_0218d610:
    uVar3 = *puVar10;
    if (uVar3 == 0) {
      return uVar17;
    }
    iVar5 = (int)DAT_053fbe74;
    goto LAB_0218d634;
  }
  cVar11 = '\x01';
  DAT_053fbe3c = 0xffffffffffffffff;
  DAT_053fbe44 = 0xffffffffffffffff;
  DAT_053fbe38 = '\x01';
  DAT_053fbe7c = -1;
  DAT_053fbe84 = 0xffffffff;
  DAT_053fbe4c = 0xffffffffffffffff;
  DAT_053fbe54 = -1;
  DAT_053fbe5c = 0xffffffffffffffff;
  DAT_053fbe64 = -1;
  DAT_053fbe6c = 0xffffffffffffffff;
  DAT_053fbe74 = -1;
LAB_0218d400:
  uVar17 = 0;
  lVar12 = (long)puVar10 - (ulong)*puVar10;
  if ((*puVar10 == 0) || (lVar12 == 0)) goto LAB_0218d610;
  lVar2 = 0xc;
  if (*(char *)(lVar12 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar12 == 0) goto LAB_0218d610;
  uVar13 = (ulong)*(ushort *)(lVar12 + 8);
  DAT_053fbe74 = CONCAT44(0xfffffffe,(int)DAT_053fbe74);
  if (uVar13 == 0) goto LAB_0218d610;
  piVar6 = (int *)(lVar2 + lVar12 + 4);
  while (piVar6[-1] != 0x60edacd3) {
    piVar6 = piVar6 + 2;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) goto LAB_0218d610;
  }
  iVar5 = 0;
  if (*piVar6 != -1) {
    iVar5 = *piVar6;
  }
  DAT_053fbe74 = CONCAT44(iVar5,(int)DAT_053fbe74);
  if (*puVar10 == 0) {
    return 0;
  }
  goto LAB_0218d3c8;
LAB_0218d634:
  if (((-1 < iVar5) || (iVar5 != -1)) || (lVar12 = (long)puVar10 - (ulong)uVar3, lVar12 == 0)) {
LAB_0218d840:
    uVar3 = *puVar10;
    if (uVar3 == 0) {
      return uVar17;
    }
    iVar5 = DAT_053fbe6c._4_4_;
    goto LAB_0218d864;
  }
  lVar2 = 0xc;
  if (*(char *)(lVar12 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar12 == 0) goto LAB_0218d840;
  uVar13 = (ulong)*(ushort *)(lVar12 + 8);
  DAT_053fbe74 = CONCAT44(DAT_053fbe74._4_4_,0xfffffffe);
  if (uVar13 == 0) goto LAB_0218d840;
  piVar6 = (int *)(lVar2 + lVar12 + 4);
  while (piVar6[-1] != -0x37124bdf) {
    piVar6 = piVar6 + 2;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) goto LAB_0218d840;
  }
  iVar5 = 0;
  if (*piVar6 != -1) {
    iVar5 = *piVar6;
  }
  DAT_053fbe74 = CONCAT44(DAT_053fbe74._4_4_,iVar5);
  uVar3 = *puVar10;
  if (uVar3 == 0) {
    return uVar17;
  }
  goto LAB_0218d634;
LAB_0218d864:
  if (((-1 < iVar5) || (iVar5 != -1)) || (lVar12 = (long)puVar10 - (ulong)uVar3, lVar12 == 0)) {
LAB_0218da2c:
    uVar3 = *puVar10;
    if (uVar3 == 0) {
      return uVar17;
    }
    uVar14 = (uint)DAT_053fbe6c;
    while ((int)uVar14 < 0) {
      if (uVar14 != 0xffffffff) {
        return uVar17;
      }
      lVar12 = (long)puVar10 - (ulong)uVar3;
      if (lVar12 == 0) {
        return uVar17;
      }
      lVar2 = 0xc;
      if (*(char *)(lVar12 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar12 == 0) {
        return uVar17;
      }
      uVar13 = (ulong)*(ushort *)(lVar12 + 8);
      DAT_053fbe6c = CONCAT44(DAT_053fbe6c._4_4_,0xfffffffe);
      if (uVar13 == 0) {
        return uVar17;
      }
      puVar7 = (uint *)(lVar2 + lVar12 + 4);
      while (puVar7[-1] != 0x47ad4181) {
        puVar7 = puVar7 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          return uVar17;
        }
      }
      uVar14 = 0;
      if (*puVar7 != 0xffffffff) {
        uVar14 = *puVar7;
      }
      DAT_053fbe6c = CONCAT44(DAT_053fbe6c._4_4_,uVar14);
      uVar3 = *puVar10;
      if (uVar3 == 0) {
        return uVar17;
      }
    }
    goto LAB_0218dac8;
  }
  lVar2 = 0xc;
  if (*(char *)(lVar12 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar12 == 0) goto LAB_0218da2c;
  uVar13 = (ulong)*(ushort *)(lVar12 + 8);
  DAT_053fbe6c = CONCAT44(0xfffffffe,(uint)DAT_053fbe6c);
  if (uVar13 == 0) goto LAB_0218da2c;
  piVar6 = (int *)(lVar2 + lVar12 + 4);
  while (piVar6[-1] != 0xd3b51) {
    piVar6 = piVar6 + 2;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) goto LAB_0218da2c;
  }
  iVar5 = 0;
  if (*piVar6 != -1) {
    iVar5 = *piVar6;
  }
  DAT_053fbe6c = CONCAT44(iVar5,(uint)DAT_053fbe6c);
  uVar3 = *puVar10;
  if (uVar3 == 0) {
    return uVar17;
  }
  goto LAB_0218d864;
LAB_0218d1f4:
  if (cVar11 != '\0') {
    if (DAT_053fbe54 < 0) {
      if (DAT_053fbe54._4_4_ == 0xffffffff) goto LAB_0218d22c;
LAB_0218d4a4:
      uVar17 = 0;
    }
    else {
      if ((undefined4 *)((ulong)DAT_053fbe54._4_4_ + (long)puVar10) == (undefined4 *)0x0)
      goto LAB_0218d4a4;
      uVar17 = *(undefined4 *)((ulong)DAT_053fbe54._4_4_ + (long)puVar10);
    }
LAB_0218d4a8:
    uVar3 = *puVar10;
    if (uVar3 == 0) {
      return uVar17;
    }
    iVar5 = (int)DAT_053fbe54;
    goto LAB_0218d4cc;
  }
  cVar11 = '\x01';
  DAT_053fbe3c = 0xffffffffffffffff;
  DAT_053fbe44 = 0xffffffffffffffff;
  DAT_053fbe38 = '\x01';
  DAT_053fbe7c = -1;
  DAT_053fbe84 = 0xffffffff;
  DAT_053fbe4c = 0xffffffffffffffff;
  DAT_053fbe54 = -1;
  DAT_053fbe5c = 0xffffffffffffffff;
  DAT_053fbe64 = -1;
  DAT_053fbe6c = 0xffffffffffffffff;
  DAT_053fbe74 = -1;
LAB_0218d22c:
  uVar17 = 0;
  lVar12 = (long)puVar10 - (ulong)*puVar10;
  if ((*puVar10 == 0) || (lVar12 == 0)) goto LAB_0218d4a8;
  lVar2 = 0xc;
  if (*(char *)(lVar12 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar12 == 0) goto LAB_0218d4a8;
  uVar13 = (ulong)*(ushort *)(lVar12 + 8);
  DAT_053fbe54 = CONCAT44(0xfffffffe,(int)DAT_053fbe54);
  if (uVar13 == 0) goto LAB_0218d4a8;
  piVar6 = (int *)(lVar2 + lVar12 + 4);
  while (piVar6[-1] != -0x494bb032) {
    piVar6 = piVar6 + 2;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) goto LAB_0218d4a8;
  }
  iVar5 = 0;
  if (*piVar6 != -1) {
    iVar5 = *piVar6;
  }
  DAT_053fbe54 = CONCAT44(iVar5,(int)DAT_053fbe54);
  if (*puVar10 == 0) {
    return 0;
  }
  goto LAB_0218d1f4;
LAB_0218d4cc:
  if (((-1 < iVar5) || (iVar5 != -1)) || (lVar12 = (long)puVar10 - (ulong)uVar3, lVar12 == 0)) {
LAB_0218d6e0:
    uVar3 = *puVar10;
    if (uVar3 == 0) {
      return uVar17;
    }
    iVar5 = DAT_053fbe4c._4_4_;
    goto LAB_0218d704;
  }
  lVar2 = 0xc;
  if (*(char *)(lVar12 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar12 == 0) goto LAB_0218d6e0;
  uVar13 = (ulong)*(ushort *)(lVar12 + 8);
  DAT_053fbe54 = CONCAT44(DAT_053fbe54._4_4_,0xfffffffe);
  if (uVar13 == 0) goto LAB_0218d6e0;
  piVar6 = (int *)(lVar2 + lVar12 + 4);
  while (piVar6[-1] != 0x1eb4573c) {
    piVar6 = piVar6 + 2;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) goto LAB_0218d6e0;
  }
  iVar5 = 0;
  if (*piVar6 != -1) {
    iVar5 = *piVar6;
  }
  DAT_053fbe54 = CONCAT44(DAT_053fbe54._4_4_,iVar5);
  uVar3 = *puVar10;
  if (uVar3 == 0) {
    return uVar17;
  }
  goto LAB_0218d4cc;
LAB_0218d704:
  if (((-1 < iVar5) || (iVar5 != -1)) || (lVar12 = (long)puVar10 - (ulong)uVar3, lVar12 == 0)) {
LAB_0218d8f0:
    uVar3 = *puVar10;
    if (uVar3 == 0) {
      return uVar17;
    }
    uVar14 = (uint)DAT_053fbe4c;
    while ((int)uVar14 < 0) {
      if (uVar14 != 0xffffffff) {
        return uVar17;
      }
      lVar12 = (long)puVar10 - (ulong)uVar3;
      if (lVar12 == 0) {
        return uVar17;
      }
      lVar2 = 0xc;
      if (*(char *)(lVar12 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar12 == 0) {
        return uVar17;
      }
      uVar13 = (ulong)*(ushort *)(lVar12 + 8);
      DAT_053fbe4c = CONCAT44(DAT_053fbe4c._4_4_,0xfffffffe);
      if (uVar13 == 0) {
        return uVar17;
      }
      puVar7 = (uint *)(lVar2 + lVar12 + 4);
      while (puVar7[-1] != 0x91f4a29c) {
        puVar7 = puVar7 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          return uVar17;
        }
      }
      uVar14 = 0;
      if (*puVar7 != 0xffffffff) {
        uVar14 = *puVar7;
      }
      DAT_053fbe4c = CONCAT44(DAT_053fbe4c._4_4_,uVar14);
      uVar3 = *puVar10;
      if (uVar3 == 0) {
        return uVar17;
      }
    }
LAB_0218dac8:
    if ((long)puVar10 + (ulong)uVar14 == 0) {
      return uVar17;
    }
    return uVar17;
  }
  lVar2 = 0xc;
  if (*(char *)(lVar12 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar12 == 0) goto LAB_0218d8f0;
  uVar13 = (ulong)*(ushort *)(lVar12 + 8);
  DAT_053fbe4c = CONCAT44(0xfffffffe,(uint)DAT_053fbe4c);
  if (uVar13 == 0) goto LAB_0218d8f0;
  piVar6 = (int *)(lVar2 + lVar12 + 4);
  while (piVar6[-1] != -0x29ab27b4) {
    piVar6 = piVar6 + 2;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) goto LAB_0218d8f0;
  }
  iVar5 = 0;
  if (*piVar6 != -1) {
    iVar5 = *piVar6;
  }
  DAT_053fbe4c = CONCAT44(iVar5,(uint)DAT_053fbe4c);
  uVar3 = *puVar10;
  if (uVar3 == 0) {
    return uVar17;
  }
  goto LAB_0218d704;
}

