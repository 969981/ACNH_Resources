
undefined4 FUN_0218dae0(long param_1,long param_2)

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
  char *pcVar10;
  uint *puVar11;
  char cVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  
  lVar13 = *(long *)(param_1 + 8);
  if (lVar13 == 0) {
    return 0;
  }
  uVar3 = *(uint *)(lVar13 + 0x1c0);
  uVar15 = uVar3;
  if ((0 < (int)uVar3) ||
     (((*(long *)(lVar13 + 0xb0) != 0 &&
       (puVar11 = *(uint **)(*(long *)(lVar13 + 0xb0) + 8), puVar11 != (uint *)0x0)) &&
      (uVar15 = *puVar11, uVar15 != 0)))) {
    uVar16 = 0;
    cVar12 = DAT_053fbe38;
    do {
      if ((int)uVar3 < 1) {
        if (((((*(long *)(lVar13 + 0xb0) != 0) &&
              (puVar11 = *(uint **)(*(long *)(lVar13 + 0xb0) + 8), puVar11 != (uint *)0x0)) &&
             ((*(uint *)(lVar13 + 200) <= uVar16 ||
              (*(char *)(*(long *)(lVar13 + 0xd0) + (long)(int)uVar16) != '\0')))) &&
            ((uVar16 < *puVar11 && (puVar11[1] != 0)))) && ((ushort)puVar11[2] != 0)) {
          iVar5 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            iVar5 = 0x1c;
          }
          puVar11 = (uint *)((ulong)(puVar11[1] * uVar16 + (uint)(ushort)puVar11[2] * 8 + iVar5) +
                            (long)puVar11);
          goto joined_r0x0218dcd0;
        }
      }
      else if (uVar16 < uVar3) {
        uVar1 = uVar16;
        if (*(uint *)(lVar13 + 0x1b0) <= uVar16) {
          uVar1 = 0;
        }
        puVar11 = *(uint **)(*(long *)(lVar13 + 0x1b8) + (ulong)uVar1 * 8);
joined_r0x0218dcd0:
        if (puVar11 != (uint *)0x0) {
          uVar1 = *puVar11;
          lVar2 = DAT_053fbe7c;
          while (DAT_053fbe7c = lVar2, uVar1 != 0) {
            if (cVar12 == '\0') {
              cVar12 = '\x01';
              DAT_053fbe3c = 0xffffffffffffffff;
              DAT_053fbe44 = -1;
              DAT_053fbe38 = '\x01';
              DAT_053fbe7c = -1;
              DAT_053fbe84 = 0xffffffff;
              DAT_053fbe4c = 0xffffffffffffffff;
              DAT_053fbe54 = 0xffffffffffffffff;
              DAT_053fbe5c = 0xffffffffffffffff;
              DAT_053fbe64 = 0xffffffffffffffff;
              DAT_053fbe6c = 0xffffffffffffffff;
              DAT_053fbe74 = 0xffffffffffffffff;
              uVar1 = *puVar11;
            }
            else {
              DAT_053fbe7c._4_4_ = (uint)((ulong)lVar2 >> 0x20);
              if (-1 < lVar2) {
                pcVar8 = (char *)((ulong)DAT_053fbe7c._4_4_ + (long)puVar11);
                goto LAB_0218dc3c;
              }
              bVar4 = DAT_053fbe7c._4_4_ != 0xffffffff;
              if (bVar4) break;
              uVar1 = *puVar11;
            }
            if ((uVar1 == 0) || (puVar7 = (uint *)(ulong)uVar1, puVar11 == puVar7)) break;
            lVar2 = 0xc;
            if (*(char *)((long)puVar11 + (10 - (long)puVar7)) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar11 + (lVar2 - (long)puVar7);
            if (lVar2 == 0) break;
            uVar14 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar7));
            DAT_053fbe7c = CONCAT44(0xfffffffe,(undefined4)DAT_053fbe7c);
            pcVar8 = (char *)0x0;
            if (uVar14 == 0) goto LAB_0218dc3c;
            piVar6 = (int *)(lVar2 + 4);
            while (piVar6[-1] != -0x7840ff18) {
              piVar6 = piVar6 + 2;
              uVar14 = uVar14 - 1;
              if (uVar14 == 0) {
                pcVar8 = (char *)0x0;
                goto LAB_0218dc3c;
              }
            }
            iVar5 = 0;
            if (*piVar6 != -1) {
              iVar5 = *piVar6;
            }
            DAT_053fbe7c = CONCAT44(iVar5,(undefined4)DAT_053fbe7c);
            lVar2 = DAT_053fbe7c;
            uVar1 = *puVar11;
          }
          pcVar8 = (char *)0x0;
LAB_0218dc3c:
          pcVar10 = PTR_DAT_04c48730;
          if (pcVar8 != (char *)0x0) {
            pcVar10 = pcVar8;
          }
          cVar9 = *pcVar10;
          if (cVar9 == '\0') {
LAB_0218dcf0:
            if (*puVar11 == 0) {
              return 0;
            }
            goto LAB_0218dd1c;
          }
          pcVar8 = *(char **)(param_2 + 8);
          while( true ) {
            pcVar10 = pcVar10 + 1;
            if (*pcVar8 != cVar9) break;
            cVar9 = *pcVar10;
            pcVar8 = pcVar8 + 1;
            if (cVar9 == '\0') goto LAB_0218dcf0;
          }
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar15);
  }
  return 0;
LAB_0218dd1c:
  if (cVar12 != '\0') {
    if (DAT_053fbe44 < 0) {
      if (DAT_053fbe44._4_4_ == 0xffffffff) goto LAB_0218dd54;
LAB_0218de0c:
      uVar17 = 0;
    }
    else {
      if ((undefined4 *)((ulong)DAT_053fbe44._4_4_ + (long)puVar11) == (undefined4 *)0x0)
      goto LAB_0218de0c;
      uVar17 = *(undefined4 *)((ulong)DAT_053fbe44._4_4_ + (long)puVar11);
    }
LAB_0218de10:
    uVar3 = *puVar11;
    if (uVar3 == 0) {
      return uVar17;
    }
    iVar5 = (int)DAT_053fbe44;
    goto LAB_0218de34;
  }
  cVar12 = '\x01';
  DAT_053fbe3c = 0xffffffffffffffff;
  DAT_053fbe44 = -1;
  DAT_053fbe38 = '\x01';
  DAT_053fbe7c = -1;
  DAT_053fbe84 = 0xffffffff;
  DAT_053fbe4c = 0xffffffffffffffff;
  DAT_053fbe54 = 0xffffffffffffffff;
  DAT_053fbe5c = 0xffffffffffffffff;
  DAT_053fbe64 = 0xffffffffffffffff;
  DAT_053fbe6c = 0xffffffffffffffff;
  DAT_053fbe74 = 0xffffffffffffffff;
LAB_0218dd54:
  uVar17 = 0;
  lVar13 = (long)puVar11 - (ulong)*puVar11;
  if ((*puVar11 == 0) || (lVar13 == 0)) goto LAB_0218de10;
  lVar2 = 0xc;
  if (*(char *)(lVar13 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar13 == 0) goto LAB_0218de10;
  uVar14 = (ulong)*(ushort *)(lVar13 + 8);
  DAT_053fbe44 = CONCAT44(0xfffffffe,(int)DAT_053fbe44);
  if (uVar14 == 0) goto LAB_0218de10;
  piVar6 = (int *)(lVar2 + lVar13 + 4);
  while (piVar6[-1] != -0x1f1aa7e0) {
    piVar6 = piVar6 + 2;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) goto LAB_0218de10;
  }
  iVar5 = 0;
  if (*piVar6 != -1) {
    iVar5 = *piVar6;
  }
  DAT_053fbe44 = CONCAT44(iVar5,(int)DAT_053fbe44);
  if (*puVar11 == 0) {
    return 0;
  }
  goto LAB_0218dd1c;
LAB_0218de34:
  if (((-1 < iVar5) || (iVar5 != -1)) || (lVar13 = (long)puVar11 - (ulong)uVar3, lVar13 == 0)) {
LAB_0218dec8:
    uVar3 = *puVar11;
    if (uVar3 == 0) {
      return uVar17;
    }
    iVar5 = DAT_053fbe3c._4_4_;
    goto LAB_0218deec;
  }
  lVar2 = 0xc;
  if (*(char *)(lVar13 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar13 == 0) goto LAB_0218dec8;
  uVar14 = (ulong)*(ushort *)(lVar13 + 8);
  DAT_053fbe44 = CONCAT44(DAT_053fbe44._4_4_,0xfffffffe);
  if (uVar14 == 0) goto LAB_0218dec8;
  piVar6 = (int *)(lVar2 + lVar13 + 4);
  while (piVar6[-1] != 0x48e540d2) {
    piVar6 = piVar6 + 2;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) goto LAB_0218dec8;
  }
  iVar5 = 0;
  if (*piVar6 != -1) {
    iVar5 = *piVar6;
  }
  DAT_053fbe44 = CONCAT44(DAT_053fbe44._4_4_,iVar5);
  uVar3 = *puVar11;
  if (uVar3 == 0) {
    return uVar17;
  }
  goto LAB_0218de34;
LAB_0218deec:
  if (((-1 < iVar5) || (iVar5 != -1)) || (lVar13 = (long)puVar11 - (ulong)uVar3, lVar13 == 0)) {
LAB_0218df80:
    uVar3 = *puVar11;
    if (uVar3 == 0) {
      return uVar17;
    }
    uVar15 = (uint)DAT_053fbe3c;
    while( true ) {
      if (-1 < (int)uVar15) {
        if ((long)puVar11 + (ulong)uVar15 == 0) {
          return uVar17;
        }
        return uVar17;
      }
      if (uVar15 != 0xffffffff) {
        return uVar17;
      }
      lVar13 = (long)puVar11 - (ulong)uVar3;
      if (lVar13 == 0) {
        return uVar17;
      }
      lVar2 = 0xc;
      if (*(char *)(lVar13 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar13 == 0) break;
      uVar14 = (ulong)*(ushort *)(lVar13 + 8);
      DAT_053fbe3c = CONCAT44(DAT_053fbe3c._4_4_,0xfffffffe);
      if (uVar14 == 0) {
        return uVar17;
      }
      puVar7 = (uint *)(lVar2 + lVar13 + 4);
      while (puVar7[-1] != 0xc7a5b572) {
        puVar7 = puVar7 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) {
          return uVar17;
        }
      }
      uVar15 = 0;
      if (*puVar7 != 0xffffffff) {
        uVar15 = *puVar7;
      }
      DAT_053fbe3c = CONCAT44(DAT_053fbe3c._4_4_,uVar15);
      uVar3 = *puVar11;
      if (uVar3 == 0) {
        return uVar17;
      }
    }
    return uVar17;
  }
  lVar2 = 0xc;
  if (*(char *)(lVar13 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar13 == 0) goto LAB_0218df80;
  uVar14 = (ulong)*(ushort *)(lVar13 + 8);
  DAT_053fbe3c = CONCAT44(0xfffffffe,(uint)DAT_053fbe3c);
  if (uVar14 == 0) goto LAB_0218df80;
  piVar6 = (int *)(lVar2 + lVar13 + 4);
  while (piVar6[-1] != -0x7ffa305e) {
    piVar6 = piVar6 + 2;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) goto LAB_0218df80;
  }
  iVar5 = 0;
  if (*piVar6 != -1) {
    iVar5 = *piVar6;
  }
  DAT_053fbe3c = CONCAT44(iVar5,(uint)DAT_053fbe3c);
  uVar3 = *puVar11;
  if (uVar3 == 0) {
    return uVar17;
  }
  goto LAB_0218deec;
}

