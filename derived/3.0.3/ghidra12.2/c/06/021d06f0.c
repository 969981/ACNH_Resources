
void FUN_021d06f0(undefined8 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  char *pcVar16;
  char cVar17;
  uint *puVar18;
  char cVar19;
  undefined8 *puVar20;
  undefined2 uVar21;
  long lVar22;
  undefined8 uVar23;
  char *pcVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  
  puVar8 = PTR_PTR_04bb2238;
  puVar1 = PTR_DAT_04bb2020;
  lVar22 = *(long *)(param_2 + 8);
  if ((lVar22 != 0) &&
     ((uVar7 = *(uint *)(lVar22 + 0x1c0), uVar10 = uVar7, 0 < (int)uVar7 ||
      (((*(long *)(lVar22 + 0xb0) != 0 &&
        (puVar18 = *(uint **)(*(long *)(lVar22 + 0xb0) + 8), puVar18 != (uint *)0x0)) &&
       (uVar10 = *puVar18, uVar10 != 0)))))) {
    uVar13 = 0;
    cVar19 = DAT_05458a68;
    do {
      if ((int)uVar7 < 1) {
        if (((((*(long *)(lVar22 + 0xb0) != 0) &&
              (puVar18 = *(uint **)(*(long *)(lVar22 + 0xb0) + 8), puVar18 != (uint *)0x0)) &&
             ((*(uint *)(lVar22 + 200) <= uVar13 ||
              (*(char *)(*(long *)(lVar22 + 0xd0) + (long)(int)uVar13) != '\0')))) &&
            ((uVar13 < *puVar18 && (puVar18[1] != 0)))) && ((ushort)puVar18[2] != 0)) {
          iVar14 = 0xc;
          if (*(char *)((long)puVar18 + 10) != '\0') {
            iVar14 = 0x1c;
          }
          puVar18 = (uint *)((ulong)(puVar18[1] * uVar13 + (uint)(ushort)puVar18[2] * 8 + iVar14) +
                            (long)puVar18);
          goto joined_r0x021d08e0;
        }
      }
      else if (uVar13 < uVar7) {
        uVar4 = uVar13;
        if (*(uint *)(lVar22 + 0x1b0) <= uVar13) {
          uVar4 = 0;
        }
        puVar18 = *(uint **)(*(long *)(lVar22 + 0x1b8) + (ulong)uVar4 * 8);
joined_r0x021d08e0:
        if (puVar18 != (uint *)0x0) {
          uVar4 = *puVar18;
          uVar11 = DAT_05458adc;
          while (DAT_05458adc = uVar11, uVar4 != 0) {
            if (cVar19 == '\0') {
              cVar19 = '\x01';
              DAT_05458a6c = 0xffffffffffffffff;
              DAT_05458a74 = 0xffffffffffffffff;
              DAT_05458a68 = '\x01';
              DAT_05458adc = 0xffffffffffffffff;
              DAT_05458ae4 = 0xffffffff;
              DAT_05458a7c = 0xffffffffffffffff;
              DAT_05458a84 = 0xffffffffffffffff;
              DAT_05458a8c = 0xffffffffffffffff;
              DAT_05458a94 = 0xffffffffffffffff;
              DAT_05458a9c = 0xffffffffffffffff;
              DAT_05458aa4 = 0xffffffffffffffff;
              DAT_05458aac = 0xffffffffffffffff;
              DAT_05458ab4 = 0xffffffffffffffff;
              DAT_05458abc = 0xffffffffffffffff;
              DAT_05458ac4 = 0xffffffffffffffff;
              DAT_05458acc = 0xffffffffffffffff;
              DAT_05458ad4 = 0xffffffffffffffff;
              uVar4 = *puVar18;
            }
            else {
              DAT_05458adc._4_4_ = (uint)(uVar11 >> 0x20);
              if (-1 < (long)uVar11) {
                pcVar16 = (char *)((ulong)DAT_05458adc._4_4_ + (long)puVar18);
                goto LAB_021d084c;
              }
              bVar9 = DAT_05458adc._4_4_ != 0xffffffff;
              if (bVar9) break;
              uVar4 = *puVar18;
            }
            if ((uVar4 == 0) || (puVar15 = (uint *)(ulong)uVar4, puVar18 == puVar15)) break;
            lVar5 = 0xc;
            if (*(char *)((long)puVar18 + (10 - (long)puVar15)) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar18 + (lVar5 - (long)puVar15);
            if (lVar5 == 0) break;
            uVar11 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar15));
            DAT_05458adc = CONCAT44(0xfffffffe,(int)DAT_05458adc);
            pcVar16 = (char *)0x0;
            if (uVar11 == 0) goto LAB_021d084c;
            piVar12 = (int *)(lVar5 + 4);
            while (piVar12[-1] != 0x2f1b930d) {
              piVar12 = piVar12 + 2;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) {
                pcVar16 = (char *)0x0;
                goto LAB_021d084c;
              }
            }
            iVar14 = 0;
            if (*piVar12 != -1) {
              iVar14 = *piVar12;
            }
            DAT_05458adc = CONCAT44(iVar14,(int)DAT_05458adc);
            uVar11 = DAT_05458adc;
            uVar4 = *puVar18;
          }
          pcVar16 = (char *)0x0;
LAB_021d084c:
          pcVar24 = "";
          if (pcVar16 != (char *)0x0) {
            pcVar24 = pcVar16;
          }
          cVar17 = *pcVar24;
          if (cVar17 == '\0') {
LAB_021d08f0:
            param_1[3] = 0;
            param_1[4] = 0;
            uVar23 = *(undefined8 *)(puVar8 + 8);
            param_1[1] = puVar1 + 0x10;
            param_1[2] = uVar23;
            *(undefined1 *)(param_1 + 5) = 1;
            if (*puVar18 == 0) goto LAB_021d09f4;
            goto LAB_021d0938;
          }
          pcVar16 = *(char **)(param_3 + 8);
          while( true ) {
            pcVar24 = pcVar24 + 1;
            if (*pcVar16 != cVar17) break;
            cVar17 = *pcVar24;
            pcVar16 = pcVar16 + 1;
            if (cVar17 == '\0') goto LAB_021d08f0;
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar10);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *param_1 = 0;
  *(undefined2 *)param_1 = 0xffff;
  puVar8 = PTR_PTR_04bb2238;
  param_1[3] = 0;
  uVar23 = *(undefined8 *)(puVar8 + 8);
  param_1[1] = puVar1;
  param_1[2] = uVar23;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
LAB_021d0938:
  do {
    if (cVar19 != '\0') {
      if ((int)DAT_05458adc < 0) {
        if (((int)DAT_05458adc == -1) && (uVar7 = *puVar18, uVar7 != 0)) goto LAB_021d098c;
        goto LAB_021d0a54;
      }
      puVar2 = (undefined2 *)((DAT_05458adc & 0xffffffff) + (long)puVar18);
      uVar21 = 0;
      if (puVar2 != (undefined2 *)0x0) {
        uVar21 = *puVar2;
      }
LAB_021d0a58:
      uVar7 = *puVar18;
      *(undefined2 *)param_1 = uVar21;
      if (uVar7 == 0) goto LAB_021d0ae4;
      uVar10 = DAT_05458adc._4_4_;
      goto LAB_021d0a74;
    }
    cVar19 = '\x01';
    DAT_05458a6c = 0xffffffffffffffff;
    DAT_05458a74 = 0xffffffffffffffff;
    DAT_05458a68 = '\x01';
    DAT_05458adc = 0xffffffffffffffff;
    DAT_05458ae4 = 0xffffffff;
    DAT_05458a7c = 0xffffffffffffffff;
    DAT_05458a84 = 0xffffffffffffffff;
    DAT_05458a8c = 0xffffffffffffffff;
    DAT_05458a94 = 0xffffffffffffffff;
    DAT_05458a9c = 0xffffffffffffffff;
    DAT_05458aa4 = 0xffffffffffffffff;
    DAT_05458aac = 0xffffffffffffffff;
    DAT_05458ab4 = 0xffffffffffffffff;
    DAT_05458abc = 0xffffffffffffffff;
    DAT_05458ac4 = 0xffffffffffffffff;
    DAT_05458acc = 0xffffffffffffffff;
    DAT_05458ad4 = 0xffffffffffffffff;
    uVar7 = *puVar18;
    if (uVar7 == 0) {
LAB_021d0a54:
      uVar21 = 0;
      goto LAB_021d0a58;
    }
LAB_021d098c:
    puVar15 = (uint *)(ulong)uVar7;
    if (puVar18 == puVar15) goto LAB_021d0a54;
    lVar22 = 0xc;
    if (*(char *)((long)puVar18 + (10 - (long)puVar15)) != '\0') {
      lVar22 = 0x1c;
    }
    lVar22 = (long)puVar18 + (lVar22 - (long)puVar15);
    if (lVar22 == 0) goto LAB_021d0a54;
    uVar11 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar15));
    DAT_05458adc = CONCAT44(DAT_05458adc._4_4_,0xfffffffe);
    if (uVar11 == 0) goto LAB_021d0a54;
    piVar12 = (int *)(lVar22 + 4);
    while (piVar12[-1] != 0x54706054) {
      piVar12 = piVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_021d0a54;
    }
    iVar14 = 0;
    if (*piVar12 != -1) {
      iVar14 = *piVar12;
    }
    DAT_05458adc = CONCAT44(DAT_05458adc._4_4_,iVar14);
  } while (*puVar18 != 0);
LAB_021d09f4:
  *(undefined2 *)param_1 = 0;
  goto LAB_021d0ae4;
  while( true ) {
    uVar25 = 0;
    if ((uVar10 != 0xffffffff) || (lVar22 = (long)puVar18 - (ulong)uVar7, lVar22 == 0))
    goto LAB_021d0aec;
    lVar5 = 0xc;
    if (*(char *)(lVar22 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    if (lVar5 + lVar22 == 0) goto LAB_021d0aec;
    uVar11 = (ulong)*(ushort *)(lVar22 + 8);
    DAT_05458a84 = CONCAT44(0xfffffffe,(int)DAT_05458a84);
    if (uVar11 == 0) goto LAB_021d0aec;
    puVar15 = (uint *)(lVar5 + lVar22 + 4);
    while (puVar15[-1] != 0x9a1e596d) {
      puVar15 = puVar15 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_021d0aec;
    }
    uVar25 = 0;
    uVar10 = 0;
    if (*puVar15 != 0xffffffff) {
      uVar10 = *puVar15;
    }
    DAT_05458a84 = CONCAT44(uVar10,(int)DAT_05458a84);
    uVar7 = *puVar18;
    if (uVar7 == 0) break;
LAB_021d0c08:
    if (-1 < (int)uVar10) {
      if ((undefined4 *)((long)puVar18 + (ulong)uVar10) == (undefined4 *)0x0) goto LAB_021d0ae8;
      uVar25 = *(undefined4 *)((long)puVar18 + (ulong)uVar10);
      goto LAB_021d0aec;
    }
  }
  goto LAB_021d0e44;
  while( true ) {
    uVar28 = 0;
    if ((uVar10 != 0xffffffff) || (lVar22 = (long)puVar18 - (ulong)uVar7, lVar22 == 0))
    goto LAB_021d0d9c;
    lVar5 = 0xc;
    if (*(char *)(lVar22 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    if (lVar5 + lVar22 == 0) goto LAB_021d0d9c;
    uVar11 = (ulong)*(ushort *)(lVar22 + 8);
    DAT_05458a7c = CONCAT44(0xfffffffe,(uint)DAT_05458a7c);
    if (uVar11 == 0) goto LAB_021d0d9c;
    puVar15 = (uint *)(lVar5 + lVar22 + 4);
    while (puVar15[-1] != 0xfafeceef) {
      puVar15 = puVar15 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_021d0d9c;
    }
    uVar28 = 0;
    uVar10 = 0;
    if (*puVar15 != 0xffffffff) {
      uVar10 = *puVar15;
    }
    DAT_05458a7c = CONCAT44(uVar10,(uint)DAT_05458a7c);
    uVar7 = *puVar18;
    if (uVar7 == 0) break;
LAB_021d0cf0:
    if (-1 < (int)uVar10) {
      if ((undefined4 *)((long)puVar18 + (ulong)uVar10) == (undefined4 *)0x0) {
        uVar28 = 0;
      }
      else {
        uVar28 = *(undefined4 *)((long)puVar18 + (ulong)uVar10);
      }
LAB_021d0d9c:
      uVar7 = *puVar18;
      if (uVar7 == 0) goto LAB_021d0e44;
      uVar10 = (uint)DAT_05458a7c;
      goto LAB_021d0dc0;
    }
  }
  uVar26 = 0;
  goto LAB_021d0e44;
LAB_021d0dc0:
  if (-1 < (int)uVar10) {
    if ((undefined4 *)((long)puVar18 + (ulong)uVar10) != (undefined4 *)0x0) {
      uVar26 = *(undefined4 *)((long)puVar18 + (ulong)uVar10);
    }
    goto LAB_021d0e44;
  }
  if ((uVar10 != 0xffffffff) || (lVar22 = (long)puVar18 - (ulong)uVar7, lVar22 == 0))
  goto LAB_021d0e44;
  lVar5 = 0xc;
  if (*(char *)(lVar22 + 10) != '\0') {
    lVar5 = 0x1c;
  }
  if (lVar5 + lVar22 == 0) goto LAB_021d0e44;
  uVar11 = (ulong)*(ushort *)(lVar22 + 8);
  DAT_05458a7c = CONCAT44(DAT_05458a7c._4_4_,0xfffffffe);
  if (uVar11 == 0) goto LAB_021d0e44;
  puVar15 = (uint *)(lVar5 + lVar22 + 4);
  while (puVar15[-1] != 0xbd5eb43f) {
    puVar15 = puVar15 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_021d0e44;
  }
  uVar10 = 0;
  if (*puVar15 != 0xffffffff) {
    uVar10 = *puVar15;
  }
  DAT_05458a7c = CONCAT44(DAT_05458a7c._4_4_,uVar10);
  uVar7 = *puVar18;
  if (uVar7 == 0) goto LAB_021d0e44;
  goto LAB_021d0dc0;
LAB_021d0a74:
  do {
    if (-1 < (int)uVar10) {
      puVar20 = (undefined8 *)((long)puVar18 + (ulong)uVar10);
LAB_021d0bcc:
      uVar7 = *puVar18;
      puVar6 = &DAT_0407ebb1;
      if (puVar20 != (undefined8 *)0x0) {
        puVar6 = puVar20;
      }
      param_1[2] = puVar6;
      if (uVar7 == 0) {
        uVar25 = 0;
        goto LAB_021d0c94;
      }
      uVar28 = 0;
      uVar27 = 0;
      uVar26 = 0;
      uVar10 = DAT_05458a84._4_4_;
      goto LAB_021d0c08;
    }
    if ((uVar10 != 0xffffffff) || (lVar22 = (long)puVar18 - (ulong)uVar7, lVar22 == 0)) {
LAB_021d0bc8:
      puVar20 = (undefined8 *)0x0;
      goto LAB_021d0bcc;
    }
    lVar5 = 0xc;
    if (*(char *)(lVar22 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    if (lVar5 + lVar22 == 0) goto LAB_021d0bc8;
    uVar11 = (ulong)*(ushort *)(lVar22 + 8);
    DAT_05458adc = CONCAT44(0xfffffffe,(int)DAT_05458adc);
    if (uVar11 == 0) goto LAB_021d0bc8;
    puVar15 = (uint *)(lVar5 + lVar22 + 4);
    while (puVar15[-1] != 0x2f1b930d) {
      puVar15 = puVar15 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_021d0bc8;
    }
    uVar10 = 0;
    if (*puVar15 != 0xffffffff) {
      uVar10 = *puVar15;
    }
    DAT_05458adc = CONCAT44(uVar10,(int)DAT_05458adc);
    uVar7 = *puVar18;
  } while (uVar7 != 0);
LAB_021d0ae4:
  param_1[2] = &DAT_0407ebb1;
LAB_021d0ae8:
  uVar25 = 0;
LAB_021d0aec:
  uVar26 = 0;
  if (*puVar18 == 0) {
    uVar28 = 0;
    uVar27 = 0;
  }
  else {
    uVar27 = 0;
    do {
      if (cVar19 != '\0') {
        if ((int)DAT_05458a84 < 0) {
          if ((int)DAT_05458a84 == -1) goto LAB_021d0b5c;
LAB_021d0cc8:
          uVar27 = 0;
        }
        else {
          puVar3 = (undefined4 *)((DAT_05458a84 & 0xffffffff) + (long)puVar18);
          if (puVar3 == (undefined4 *)0x0) goto LAB_021d0cc8;
          uVar27 = *puVar3;
        }
LAB_021d0ccc:
        uVar7 = *puVar18;
        if (uVar7 == 0) {
          uVar28 = 0;
          goto LAB_021d0e44;
        }
        uVar10 = DAT_05458a7c._4_4_;
        goto LAB_021d0cf0;
      }
      cVar19 = '\x01';
      DAT_05458a6c = 0xffffffffffffffff;
      DAT_05458a74 = 0xffffffffffffffff;
      DAT_05458a68 = '\x01';
      DAT_05458adc = 0xffffffffffffffff;
      DAT_05458ae4 = 0xffffffff;
      DAT_05458a7c = 0xffffffffffffffff;
      DAT_05458a84 = 0xffffffffffffffff;
      DAT_05458a8c = 0xffffffffffffffff;
      DAT_05458a94 = 0xffffffffffffffff;
      DAT_05458a9c = 0xffffffffffffffff;
      DAT_05458aa4 = 0xffffffffffffffff;
      DAT_05458aac = 0xffffffffffffffff;
      DAT_05458ab4 = 0xffffffffffffffff;
      DAT_05458abc = 0xffffffffffffffff;
      DAT_05458ac4 = 0xffffffffffffffff;
      DAT_05458acc = 0xffffffffffffffff;
      DAT_05458ad4 = 0xffffffffffffffff;
LAB_021d0b5c:
      lVar22 = (long)puVar18 - (ulong)*puVar18;
      if ((*puVar18 == 0) || (lVar22 == 0)) goto LAB_021d0ccc;
      lVar5 = 0xc;
      if (*(char *)(lVar22 + 10) != '\0') {
        lVar5 = 0x1c;
      }
      if (lVar5 + lVar22 == 0) goto LAB_021d0ccc;
      uVar11 = (ulong)*(ushort *)(lVar22 + 8);
      DAT_05458a84 = CONCAT44(DAT_05458a84._4_4_,0xfffffffe);
      if (uVar11 == 0) goto LAB_021d0ccc;
      piVar12 = (int *)(lVar5 + lVar22 + 4);
      while (piVar12[-1] != 0x321e419f) {
        piVar12 = piVar12 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_021d0ccc;
      }
      iVar14 = 0;
      if (*piVar12 != -1) {
        iVar14 = *piVar12;
      }
      DAT_05458a84 = CONCAT44(DAT_05458a84._4_4_,iVar14);
    } while (*puVar18 != 0);
LAB_021d0c94:
    uVar28 = 0;
    uVar27 = 0;
    uVar26 = 0;
  }
LAB_021d0e44:
  *(undefined4 *)(param_1 + 3) = uVar25;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar27;
  *(undefined4 *)(param_1 + 4) = uVar28;
  *(undefined4 *)((long)param_1 + 0x24) = uVar26;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}

