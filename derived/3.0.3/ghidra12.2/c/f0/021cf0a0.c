
void FUN_021cf0a0(undefined8 *param_1,long param_2,long param_3)

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
          goto joined_r0x021cf290;
        }
      }
      else if (uVar13 < uVar7) {
        uVar4 = uVar13;
        if (*(uint *)(lVar22 + 0x1b0) <= uVar13) {
          uVar4 = 0;
        }
        puVar18 = *(uint **)(*(long *)(lVar22 + 0x1b8) + (ulong)uVar4 * 8);
joined_r0x021cf290:
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
                goto LAB_021cf1fc;
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
            if (uVar11 == 0) goto LAB_021cf1fc;
            piVar12 = (int *)(lVar5 + 4);
            while (piVar12[-1] != 0x2f1b930d) {
              piVar12 = piVar12 + 2;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) {
                pcVar16 = (char *)0x0;
                goto LAB_021cf1fc;
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
LAB_021cf1fc:
          pcVar24 = "";
          if (pcVar16 != (char *)0x0) {
            pcVar24 = pcVar16;
          }
          cVar17 = *pcVar24;
          if (cVar17 == '\0') {
LAB_021cf2a0:
            param_1[3] = 0;
            param_1[4] = 0;
            uVar23 = *(undefined8 *)(puVar8 + 8);
            param_1[1] = puVar1 + 0x10;
            param_1[2] = uVar23;
            *(undefined1 *)(param_1 + 5) = 1;
            if (*puVar18 == 0) goto LAB_021cf3a4;
            goto LAB_021cf2e8;
          }
          pcVar16 = *(char **)(param_3 + 8);
          while( true ) {
            pcVar24 = pcVar24 + 1;
            if (*pcVar16 != cVar17) break;
            cVar17 = *pcVar24;
            pcVar16 = pcVar16 + 1;
            if (cVar17 == '\0') goto LAB_021cf2a0;
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
LAB_021cf2e8:
  do {
    if (cVar19 != '\0') {
      if ((int)DAT_05458adc < 0) {
        if (((int)DAT_05458adc == -1) && (uVar7 = *puVar18, uVar7 != 0)) goto LAB_021cf33c;
        goto LAB_021cf404;
      }
      puVar2 = (undefined2 *)((DAT_05458adc & 0xffffffff) + (long)puVar18);
      uVar21 = 0;
      if (puVar2 != (undefined2 *)0x0) {
        uVar21 = *puVar2;
      }
LAB_021cf408:
      uVar7 = *puVar18;
      *(undefined2 *)param_1 = uVar21;
      if (uVar7 == 0) goto LAB_021cf494;
      uVar10 = DAT_05458adc._4_4_;
      goto LAB_021cf424;
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
LAB_021cf404:
      uVar21 = 0;
      goto LAB_021cf408;
    }
LAB_021cf33c:
    puVar15 = (uint *)(ulong)uVar7;
    if (puVar18 == puVar15) goto LAB_021cf404;
    lVar22 = 0xc;
    if (*(char *)((long)puVar18 + (10 - (long)puVar15)) != '\0') {
      lVar22 = 0x1c;
    }
    lVar22 = (long)puVar18 + (lVar22 - (long)puVar15);
    if (lVar22 == 0) goto LAB_021cf404;
    uVar11 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar15));
    DAT_05458adc = CONCAT44(DAT_05458adc._4_4_,0xfffffffe);
    if (uVar11 == 0) goto LAB_021cf404;
    piVar12 = (int *)(lVar22 + 4);
    while (piVar12[-1] != 0x54706054) {
      piVar12 = piVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_021cf404;
    }
    iVar14 = 0;
    if (*piVar12 != -1) {
      iVar14 = *piVar12;
    }
    DAT_05458adc = CONCAT44(DAT_05458adc._4_4_,iVar14);
  } while (*puVar18 != 0);
LAB_021cf3a4:
  *(undefined2 *)param_1 = 0;
  goto LAB_021cf494;
  while( true ) {
    uVar25 = 0;
    if ((uVar10 != 0xffffffff) || (lVar22 = (long)puVar18 - (ulong)uVar7, lVar22 == 0))
    goto LAB_021cf49c;
    lVar5 = 0xc;
    if (*(char *)(lVar22 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    if (lVar5 + lVar22 == 0) goto LAB_021cf49c;
    uVar11 = (ulong)*(ushort *)(lVar22 + 8);
    DAT_05458ac4 = CONCAT44(0xfffffffe,(int)DAT_05458ac4);
    if (uVar11 == 0) goto LAB_021cf49c;
    puVar15 = (uint *)(lVar5 + lVar22 + 4);
    while (puVar15[-1] != 0xe7fdbff7) {
      puVar15 = puVar15 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_021cf49c;
    }
    uVar25 = 0;
    uVar10 = 0;
    if (*puVar15 != 0xffffffff) {
      uVar10 = *puVar15;
    }
    DAT_05458ac4 = CONCAT44(uVar10,(int)DAT_05458ac4);
    uVar7 = *puVar18;
    if (uVar7 == 0) break;
LAB_021cf5b8:
    if (-1 < (int)uVar10) {
      if ((undefined4 *)((long)puVar18 + (ulong)uVar10) == (undefined4 *)0x0) goto LAB_021cf498;
      uVar25 = *(undefined4 *)((long)puVar18 + (ulong)uVar10);
      goto LAB_021cf49c;
    }
  }
  goto LAB_021cf7f4;
  while( true ) {
    uVar28 = 0;
    if ((uVar10 != 0xffffffff) || (lVar22 = (long)puVar18 - (ulong)uVar7, lVar22 == 0))
    goto LAB_021cf74c;
    lVar5 = 0xc;
    if (*(char *)(lVar22 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    if (lVar5 + lVar22 == 0) goto LAB_021cf74c;
    uVar11 = (ulong)*(ushort *)(lVar22 + 8);
    DAT_05458abc = CONCAT44(0xfffffffe,(uint)DAT_05458abc);
    if (uVar11 == 0) goto LAB_021cf74c;
    puVar15 = (uint *)(lVar5 + lVar22 + 4);
    while (puVar15[-1] != 0x871d2875) {
      puVar15 = puVar15 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_021cf74c;
    }
    uVar28 = 0;
    uVar10 = 0;
    if (*puVar15 != 0xffffffff) {
      uVar10 = *puVar15;
    }
    DAT_05458abc = CONCAT44(uVar10,(uint)DAT_05458abc);
    uVar7 = *puVar18;
    if (uVar7 == 0) break;
LAB_021cf6a0:
    if (-1 < (int)uVar10) {
      if ((undefined4 *)((long)puVar18 + (ulong)uVar10) == (undefined4 *)0x0) {
        uVar28 = 0;
      }
      else {
        uVar28 = *(undefined4 *)((long)puVar18 + (ulong)uVar10);
      }
LAB_021cf74c:
      uVar7 = *puVar18;
      if (uVar7 == 0) goto LAB_021cf7f4;
      uVar10 = (uint)DAT_05458abc;
      goto LAB_021cf770;
    }
  }
  uVar26 = 0;
  goto LAB_021cf7f4;
LAB_021cf770:
  if (-1 < (int)uVar10) {
    if ((undefined4 *)((long)puVar18 + (ulong)uVar10) != (undefined4 *)0x0) {
      uVar26 = *(undefined4 *)((long)puVar18 + (ulong)uVar10);
    }
    goto LAB_021cf7f4;
  }
  if ((uVar10 != 0xffffffff) || (lVar22 = (long)puVar18 - (ulong)uVar7, lVar22 == 0))
  goto LAB_021cf7f4;
  lVar5 = 0xc;
  if (*(char *)(lVar22 + 10) != '\0') {
    lVar5 = 0x1c;
  }
  if (lVar5 + lVar22 == 0) goto LAB_021cf7f4;
  uVar11 = (ulong)*(ushort *)(lVar22 + 8);
  DAT_05458abc = CONCAT44(DAT_05458abc._4_4_,0xfffffffe);
  if (uVar11 == 0) goto LAB_021cf7f4;
  puVar15 = (uint *)(lVar5 + lVar22 + 4);
  while (puVar15[-1] != 0xc0bd52a5) {
    puVar15 = puVar15 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_021cf7f4;
  }
  uVar10 = 0;
  if (*puVar15 != 0xffffffff) {
    uVar10 = *puVar15;
  }
  DAT_05458abc = CONCAT44(DAT_05458abc._4_4_,uVar10);
  uVar7 = *puVar18;
  if (uVar7 == 0) goto LAB_021cf7f4;
  goto LAB_021cf770;
LAB_021cf424:
  do {
    if (-1 < (int)uVar10) {
      puVar20 = (undefined8 *)((long)puVar18 + (ulong)uVar10);
LAB_021cf57c:
      uVar7 = *puVar18;
      puVar6 = &DAT_0407ebb1;
      if (puVar20 != (undefined8 *)0x0) {
        puVar6 = puVar20;
      }
      param_1[2] = puVar6;
      if (uVar7 == 0) {
        uVar25 = 0;
        goto LAB_021cf644;
      }
      uVar28 = 0;
      uVar27 = 0;
      uVar26 = 0;
      uVar10 = DAT_05458ac4._4_4_;
      goto LAB_021cf5b8;
    }
    if ((uVar10 != 0xffffffff) || (lVar22 = (long)puVar18 - (ulong)uVar7, lVar22 == 0)) {
LAB_021cf578:
      puVar20 = (undefined8 *)0x0;
      goto LAB_021cf57c;
    }
    lVar5 = 0xc;
    if (*(char *)(lVar22 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    if (lVar5 + lVar22 == 0) goto LAB_021cf578;
    uVar11 = (ulong)*(ushort *)(lVar22 + 8);
    DAT_05458adc = CONCAT44(0xfffffffe,(int)DAT_05458adc);
    if (uVar11 == 0) goto LAB_021cf578;
    puVar15 = (uint *)(lVar5 + lVar22 + 4);
    while (puVar15[-1] != 0x2f1b930d) {
      puVar15 = puVar15 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_021cf578;
    }
    uVar10 = 0;
    if (*puVar15 != 0xffffffff) {
      uVar10 = *puVar15;
    }
    DAT_05458adc = CONCAT44(uVar10,(int)DAT_05458adc);
    uVar7 = *puVar18;
  } while (uVar7 != 0);
LAB_021cf494:
  param_1[2] = &DAT_0407ebb1;
LAB_021cf498:
  uVar25 = 0;
LAB_021cf49c:
  uVar26 = 0;
  if (*puVar18 == 0) {
    uVar28 = 0;
    uVar27 = 0;
  }
  else {
    uVar27 = 0;
    do {
      if (cVar19 != '\0') {
        if ((int)DAT_05458ac4 < 0) {
          if ((int)DAT_05458ac4 == -1) goto LAB_021cf50c;
LAB_021cf678:
          uVar27 = 0;
        }
        else {
          puVar3 = (undefined4 *)((DAT_05458ac4 & 0xffffffff) + (long)puVar18);
          if (puVar3 == (undefined4 *)0x0) goto LAB_021cf678;
          uVar27 = *puVar3;
        }
LAB_021cf67c:
        uVar7 = *puVar18;
        if (uVar7 == 0) {
          uVar28 = 0;
          goto LAB_021cf7f4;
        }
        uVar10 = DAT_05458abc._4_4_;
        goto LAB_021cf6a0;
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
LAB_021cf50c:
      lVar22 = (long)puVar18 - (ulong)*puVar18;
      if ((*puVar18 == 0) || (lVar22 == 0)) goto LAB_021cf67c;
      lVar5 = 0xc;
      if (*(char *)(lVar22 + 10) != '\0') {
        lVar5 = 0x1c;
      }
      if (lVar5 + lVar22 == 0) goto LAB_021cf67c;
      uVar11 = (ulong)*(ushort *)(lVar22 + 8);
      DAT_05458ac4 = CONCAT44(DAT_05458ac4._4_4_,0xfffffffe);
      if (uVar11 == 0) goto LAB_021cf67c;
      piVar12 = (int *)(lVar5 + lVar22 + 4);
      while (piVar12[-1] != 0x4ffda705) {
        piVar12 = piVar12 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_021cf67c;
      }
      iVar14 = 0;
      if (*piVar12 != -1) {
        iVar14 = *piVar12;
      }
      DAT_05458ac4 = CONCAT44(DAT_05458ac4._4_4_,iVar14);
    } while (*puVar18 != 0);
LAB_021cf644:
    uVar28 = 0;
    uVar27 = 0;
    uVar26 = 0;
  }
LAB_021cf7f4:
  *(undefined4 *)(param_1 + 3) = uVar25;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar27;
  *(undefined4 *)(param_1 + 4) = uVar28;
  *(undefined4 *)((long)param_1 + 0x24) = uVar26;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}

