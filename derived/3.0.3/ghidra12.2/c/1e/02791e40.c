
void FUN_02791e40(short *param_1,long param_2,undefined8 param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ushort uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined3 uVar11;
  uint *puVar12;
  undefined *puVar13;
  bool bVar14;
  undefined2 uVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  ulong uVar23;
  short sVar24;
  uint extraout_w8;
  long lVar25;
  short *psVar26;
  uint *puVar27;
  uint *puVar28;
  char cVar29;
  uint uVar30;
  int *piVar31;
  char *pcVar32;
  long *plVar33;
  short sVar34;
  uint uVar35;
  undefined8 uVar36;
  undefined *puVar37;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  int local_a8;
  undefined *local_a0;
  char *local_98;
  int local_7c;
  undefined4 local_78;
  undefined8 local_70;
  
  puVar37 = PTR_DAT_04bb2020;
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  local_98 = "TodayGrowUp";
  iVar16 = FUN_0274ce10(param_3,&local_a0);
  puVar13 = PTR_DAT_04bb6428;
  if (iVar16 == 0) {
    uVar20 = *(uint *)(*(long *)PTR_DAT_04bb2208 + 0x1b20);
    if ((0 < (int)uVar20) ||
       (((lVar25 = *(long *)(*(long *)PTR_DAT_04bb2208 + 0x1a10), lVar25 != 0 &&
         (puVar27 = *(uint **)(lVar25 + 8), puVar27 != (uint *)0x0)) &&
        (uVar20 = *puVar27, uVar20 != 0)))) {
      psVar1 = param_1 + 0x400;
      psVar2 = param_1 + 0x620;
      uVar21 = 0;
      psVar3 = param_1 + 0x2a54;
      puVar4 = puVar37 + 0x10;
      puVar5 = PTR_DAT_04bc32d0 + 0x10;
      plVar33 = (long *)PTR_DAT_04bb2208;
      do {
        lVar25 = *plVar33;
        if ((int)*(uint *)(lVar25 + 0x1b20) < 1) {
          if (((((*(long *)(lVar25 + 0x1a10) != 0) &&
                (puVar27 = *(uint **)(*(long *)(lVar25 + 0x1a10) + 8), puVar27 != (uint *)0x0)) &&
               ((*(uint *)(lVar25 + 0x1a28) <= uVar21 ||
                (*(char *)(*(long *)(lVar25 + 0x1a30) + (long)(int)uVar21) != '\0')))) &&
              ((uVar21 < *puVar27 && (puVar27[1] != 0)))) && ((ushort)puVar27[2] != 0)) {
            iVar16 = 0xc;
            if (*(char *)((long)puVar27 + 10) != '\0') {
              iVar16 = 0x1c;
            }
            puVar27 = (uint *)((ulong)(puVar27[1] * uVar21 + (uint)(ushort)puVar27[2] * 8 + iVar16)
                              + (long)puVar27);
            if (puVar27 != (uint *)0x0) {
LAB_02791f80:
              uVar30 = *puVar27;
              if (uVar30 != 0) {
                cVar29 = *PTR_DAT_04bb6420;
                do {
                  puVar6 = PTR_DAT_04bb6420;
                  if (cVar29 == '\0') {
                    cVar29 = '\x01';
                    *(undefined8 *)puVar13 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                    *(undefined4 *)(puVar13 + 0x50) = 0xffffffff;
                    *puVar6 = 1;
                    *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                    uVar30 = *puVar27;
                  }
                  else {
                    uVar35 = *(uint *)(puVar13 + 0x3c);
                    if (-1 < (int)uVar35) {
                      pcVar32 = (char *)((ulong)uVar35 + (long)puVar27);
                      goto LAB_0279205c;
                    }
                    if (uVar35 != 0xffffffff) break;
                  }
                  puVar22 = (uint *)(ulong)uVar30;
                  pcVar32 = (char *)0x0;
                  if ((puVar22 == (uint *)0x0) || (pcVar32 = (char *)0x0, puVar27 == puVar22))
                  goto LAB_0279205c;
                  lVar7 = 0xc;
                  if (*(char *)((long)puVar27 + (10 - (long)puVar22)) != '\0') {
                    lVar7 = 0x1c;
                  }
                  lVar7 = (long)puVar27 + (lVar7 - (long)puVar22);
                  pcVar32 = (char *)0x0;
                  if (lVar7 == 0) goto LAB_0279205c;
                  uVar23 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar22));
                  *(undefined4 *)(puVar13 + 0x3c) = 0xfffffffe;
                  if (uVar23 == 0) break;
                  piVar31 = (int *)(lVar7 + 4);
                  while (piVar31[-1] != 0x45f320f2) {
                    piVar31 = piVar31 + 2;
                    uVar23 = uVar23 - 1;
                    if (uVar23 == 0) goto LAB_02792058;
                  }
                  iVar16 = 0;
                  if (*piVar31 != -1) {
                    iVar16 = *piVar31;
                  }
                  *(int *)(puVar13 + 0x3c) = iVar16;
                  uVar30 = *puVar27;
                  if (uVar30 == 0) break;
                } while( true );
              }
LAB_02792058:
              pcVar32 = (char *)0x0;
LAB_0279205c:
              local_c0 = *(char **)PTR_PTR_04bb6418;
              if (pcVar32 != (char *)0x0) {
                local_c0 = pcVar32;
              }
              local_c8 = puVar4;
              uVar17 = FUN_006bd550(local_c0,0);
              local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar17);
              puVar27 = (uint *)FUN_00ad5fc0(lVar25 + 0x1960,&local_a0);
              if (puVar27 != (uint *)0x0) {
                uVar30 = *puVar27;
                psVar26 = psVar1;
                if (uVar30 != 0) {
                  cVar29 = *PTR_DAT_04bb6420;
                  do {
                    puVar6 = PTR_DAT_04bb6420;
                    if (cVar29 == '\0') {
                      cVar29 = '\x01';
                      *(undefined8 *)puVar13 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                      *(undefined4 *)(puVar13 + 0x50) = 0xffffffff;
                      *puVar6 = 1;
                      *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                      uVar30 = *puVar27;
                    }
                    else {
                      uVar35 = *(uint *)(puVar13 + 0x20);
                      if (-1 < (int)uVar35) {
                        if (((ushort *)((ulong)uVar35 + (long)puVar27) != (ushort *)0x0) &&
                           (uVar8 = *(ushort *)((ulong)uVar35 + (long)puVar27), uVar8 < 0x200)) {
                          psVar26 = (short *)((long)psVar1 + (ulong)uVar8);
                        }
                        break;
                      }
                      if (uVar35 != 0xffffffff) break;
                    }
                    puVar22 = (uint *)(ulong)uVar30;
                    if ((puVar22 == (uint *)0x0) || (puVar27 == puVar22)) break;
                    lVar25 = 0xc;
                    if (*(char *)((long)puVar27 + (10 - (long)puVar22)) != '\0') {
                      lVar25 = 0x1c;
                    }
                    lVar25 = (long)puVar27 + (lVar25 - (long)puVar22);
                    if (lVar25 == 0) break;
                    uVar23 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar22));
                    *(undefined4 *)(puVar13 + 0x20) = 0xfffffffe;
                    if (uVar23 == 0) break;
                    piVar31 = (int *)(lVar25 + 4);
                    while (piVar31[-1] != 0x54706054) {
                      piVar31 = piVar31 + 2;
                      uVar23 = uVar23 - 1;
                      if (uVar23 == 0) goto LAB_0279218c;
                    }
                    iVar16 = 0;
                    if (*piVar31 != -1) {
                      iVar16 = *piVar31;
                    }
                    *(int *)(puVar13 + 0x20) = iVar16;
                    uVar30 = *puVar27;
                    if (uVar30 == 0) break;
                  } while( true );
                }
LAB_0279218c:
                if ((char)*psVar26 == '\0') {
                  uVar30 = *puVar27;
                  if (uVar30 != 0) {
                    cVar29 = *PTR_DAT_04bb6420;
                    do {
                      puVar37 = PTR_DAT_04bb6420;
                      if (cVar29 == '\0') {
                        cVar29 = '\x01';
                        *(undefined8 *)puVar13 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                        *(undefined4 *)(puVar13 + 0x50) = 0xffffffff;
                        *puVar37 = 1;
                        *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                        uVar30 = *puVar27;
                      }
                      else {
                        uVar35 = *(uint *)(puVar13 + 0x3c);
                        if (-1 < (int)uVar35) {
                          lVar25 = (ulong)uVar35 + (long)puVar27;
                          goto LAB_0279227c;
                        }
                        if (uVar35 != 0xffffffff) break;
                      }
                      puVar22 = (uint *)(ulong)uVar30;
                      lVar25 = 0;
                      if ((puVar22 == (uint *)0x0) || (lVar25 = 0, puVar27 == puVar22))
                      goto LAB_0279227c;
                      lVar25 = 0xc;
                      if (*(char *)((long)puVar27 + (10 - (long)puVar22)) != '\0') {
                        lVar25 = 0x1c;
                      }
                      lVar7 = (long)puVar27 + (lVar25 - (long)puVar22);
                      lVar25 = 0;
                      if (lVar7 == 0) goto LAB_0279227c;
                      uVar23 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar22));
                      *(undefined4 *)(puVar13 + 0x3c) = 0xfffffffe;
                      if (uVar23 == 0) break;
                      piVar31 = (int *)(lVar7 + 4);
                      while (piVar31[-1] != 0x45f320f2) {
                        piVar31 = piVar31 + 2;
                        uVar23 = uVar23 - 1;
                        if (uVar23 == 0) goto LAB_02792278;
                      }
                      iVar16 = 0;
                      if (*piVar31 != -1) {
                        iVar16 = *piVar31;
                      }
                      *(int *)(puVar13 + 0x3c) = iVar16;
                      uVar30 = *puVar27;
                      if (uVar30 == 0) break;
                    } while( true );
                  }
LAB_02792278:
                  lVar25 = 0;
LAB_0279227c:
                  lVar7 = *(long *)PTR_PTR_04bb6418;
                  if (lVar25 != 0) {
                    lVar7 = lVar25;
                  }
                  lVar25 = *plVar33;
                  uVar17 = FUN_006bd550(lVar7,0);
                  local_a0._0_4_ = uVar17;
                  puVar22 = (uint *)FUN_00ad5fc0(lVar25 + 0x1960,&local_a0);
                  puVar37 = PTR_DAT_04bb2208;
                  if ((puVar22 == (uint *)0x0) || (uVar30 = *puVar22, uVar30 == 0)) {
                    sVar34 = 0;
                  }
                  else {
                    cVar29 = *PTR_DAT_04bb6420;
                    do {
                      puVar6 = PTR_DAT_04bb6420;
                      puVar28 = (uint *)(ulong)uVar30;
                      if (cVar29 != '\0') {
                        uVar30 = *(uint *)(puVar13 + 0x14);
                        if ((int)uVar30 < 0) {
                          if (uVar30 == 0xffffffff) {
                            sVar34 = 0;
                            if (puVar28 != (uint *)0x0) goto LAB_02792328;
                            break;
                          }
                        }
                        else if ((short *)((ulong)uVar30 + (long)puVar22) != (short *)0x0) {
                          sVar34 = *(short *)((ulong)uVar30 + (long)puVar22);
                          break;
                        }
LAB_02792484:
                        sVar34 = 0;
                        break;
                      }
                      cVar29 = '\x01';
                      *(undefined8 *)puVar13 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                      *(undefined4 *)(puVar13 + 0x50) = 0xffffffff;
                      *puVar6 = 1;
                      *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                      puVar28 = (uint *)(ulong)*puVar22;
                      sVar34 = 0;
                      if (puVar28 == (uint *)0x0) break;
LAB_02792328:
                      sVar34 = 0;
                      if (puVar22 == puVar28) break;
                      lVar25 = 0xc;
                      if (*(char *)((long)puVar22 + (10 - (long)puVar28)) != '\0') {
                        lVar25 = 0x1c;
                      }
                      lVar25 = (long)puVar22 + (lVar25 - (long)puVar28);
                      if (lVar25 == 0) goto LAB_02792484;
                      uVar23 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar28));
                      *(undefined4 *)(puVar13 + 0x14) = 0xfffffffe;
                      if (uVar23 == 0) goto LAB_02792484;
                      piVar31 = (int *)(lVar25 + 4);
                      while (piVar31[-1] != 0x110b14c) {
                        piVar31 = piVar31 + 2;
                        uVar23 = uVar23 - 1;
                        if (uVar23 == 0) goto LAB_02792484;
                      }
                      sVar34 = 0;
                      iVar16 = 0;
                      if (*piVar31 != -1) {
                        iVar16 = *piVar31;
                      }
                      *(int *)(puVar13 + 0x14) = iVar16;
                      uVar30 = *puVar22;
                    } while (uVar30 != 0);
                  }
                  uVar30 = *puVar27;
                  if (uVar30 != 0) {
                    cVar29 = *PTR_DAT_04bb6420;
                    do {
                      puVar6 = PTR_DAT_04bb6420;
                      if (cVar29 == '\0') {
                        cVar29 = '\x01';
                        *(undefined8 *)puVar13 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                        *(undefined4 *)(puVar13 + 0x50) = 0xffffffff;
                        *puVar6 = 1;
                        *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                        uVar30 = *puVar27;
                      }
                      else {
                        uVar35 = *(uint *)(puVar13 + 0x3c);
                        if (-1 < (int)uVar35) {
                          lVar25 = (ulong)uVar35 + (long)puVar27;
                          goto LAB_0279256c;
                        }
                        if (uVar35 != 0xffffffff) break;
                      }
                      puVar22 = (uint *)(ulong)uVar30;
                      lVar25 = 0;
                      if ((puVar22 == (uint *)0x0) || (lVar25 = 0, puVar27 == puVar22))
                      goto LAB_0279256c;
                      lVar25 = 0xc;
                      if (*(char *)((long)puVar27 + (10 - (long)puVar22)) != '\0') {
                        lVar25 = 0x1c;
                      }
                      lVar7 = (long)puVar27 + (lVar25 - (long)puVar22);
                      lVar25 = 0;
                      if (lVar7 == 0) goto LAB_0279256c;
                      uVar23 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar22));
                      *(undefined4 *)(puVar13 + 0x3c) = 0xfffffffe;
                      if (uVar23 == 0) break;
                      piVar31 = (int *)(lVar7 + 4);
                      while (piVar31[-1] != 0x45f320f2) {
                        piVar31 = piVar31 + 2;
                        uVar23 = uVar23 - 1;
                        if (uVar23 == 0) goto LAB_02792568;
                      }
                      iVar16 = 0;
                      if (*piVar31 != -1) {
                        iVar16 = *piVar31;
                      }
                      *(int *)(puVar13 + 0x3c) = iVar16;
                      uVar30 = *puVar27;
                      if (uVar30 == 0) break;
                    } while( true );
                  }
LAB_02792568:
                  lVar25 = 0;
LAB_0279256c:
                  lVar7 = *(long *)PTR_PTR_04bb6418;
                  if (lVar25 != 0) {
                    lVar7 = lVar25;
                  }
                  lVar25 = *(long *)puVar37;
                  uVar17 = FUN_006bd550(lVar7,0);
                  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar17);
                  puVar22 = (uint *)FUN_00ad5fc0(lVar25 + 0x1960,&local_a0);
                  plVar33 = (long *)PTR_DAT_04bb2208;
                  if (puVar22 == (uint *)0x0) {
                    sVar24 = 0;
                  }
                  else {
                    uVar30 = *puVar22;
                    psVar26 = param_1;
                    if (uVar30 != 0) {
                      cVar29 = *PTR_DAT_04bb6420;
                      do {
                        puVar37 = PTR_DAT_04bb6420;
                        if (cVar29 == '\0') {
                          cVar29 = '\x01';
                          *(undefined8 *)puVar13 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                          *(undefined4 *)(puVar13 + 0x50) = 0xffffffff;
                          *puVar37 = 1;
                          *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                          uVar30 = *puVar22;
                        }
                        else {
                          uVar35 = *(uint *)(puVar13 + 0x20);
                          if (-1 < (int)uVar35) {
                            if (((ushort *)((ulong)uVar35 + (long)puVar22) != (ushort *)0x0) &&
                               (uVar8 = *(ushort *)((ulong)uVar35 + (long)puVar22), uVar8 < 0x200))
                            {
                              psVar26 = param_1 + uVar8;
                            }
                            break;
                          }
                          if (uVar35 != 0xffffffff) break;
                        }
                        puVar28 = (uint *)(ulong)uVar30;
                        if ((puVar28 == (uint *)0x0) || (puVar22 == puVar28)) break;
                        lVar25 = 0xc;
                        if (*(char *)((long)puVar22 + (10 - (long)puVar28)) != '\0') {
                          lVar25 = 0x1c;
                        }
                        lVar25 = (long)puVar22 + (lVar25 - (long)puVar28);
                        if (lVar25 == 0) break;
                        uVar23 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar28));
                        *(undefined4 *)(puVar13 + 0x20) = 0xfffffffe;
                        if (uVar23 == 0) break;
                        piVar31 = (int *)(lVar25 + 4);
                        while (piVar31[-1] != 0x54706054) {
                          piVar31 = piVar31 + 2;
                          uVar23 = uVar23 - 1;
                          if (uVar23 == 0) goto LAB_0279268c;
                        }
                        iVar16 = 0;
                        if (*piVar31 != -1) {
                          iVar16 = *piVar31;
                        }
                        *(int *)(puVar13 + 0x20) = iVar16;
                        uVar30 = *puVar22;
                        if (uVar30 == 0) break;
                      } while( true );
                    }
LAB_0279268c:
                    sVar24 = *psVar26;
                  }
                  puVar37 = PTR_DAT_04bb2020;
                  if (sVar34 == sVar24) {
                    uVar30 = *puVar27;
                    psVar26 = psVar1;
                    if (uVar30 != 0) {
                      cVar29 = *PTR_DAT_04bb6420;
                      do {
                        puVar6 = PTR_DAT_04bb6420;
                        if (cVar29 == '\0') {
                          cVar29 = '\x01';
                          *(undefined8 *)puVar13 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                          *(undefined4 *)(puVar13 + 0x50) = 0xffffffff;
                          *puVar6 = 1;
                          *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                          uVar30 = *puVar27;
                        }
                        else {
                          uVar35 = *(uint *)(puVar13 + 0x20);
                          if (-1 < (int)uVar35) {
                            if (((ushort *)((ulong)uVar35 + (long)puVar27) != (ushort *)0x0) &&
                               (uVar8 = *(ushort *)((ulong)uVar35 + (long)puVar27), uVar8 < 0x200))
                            {
                              psVar26 = (short *)((long)psVar1 + (ulong)uVar8);
                            }
                            break;
                          }
                          if (uVar35 != 0xffffffff) break;
                        }
                        puVar22 = (uint *)(ulong)uVar30;
                        if ((puVar22 == (uint *)0x0) || (puVar27 == puVar22)) break;
                        lVar25 = 0xc;
                        if (*(char *)((long)puVar27 + (10 - (long)puVar22)) != '\0') {
                          lVar25 = 0x1c;
                        }
                        lVar25 = (long)puVar27 + (lVar25 - (long)puVar22);
                        if (lVar25 == 0) break;
                        uVar23 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar22));
                        *(undefined4 *)(puVar13 + 0x20) = 0xfffffffe;
                        if (uVar23 == 0) break;
                        piVar31 = (int *)(lVar25 + 4);
                        while (piVar31[-1] != 0x54706054) {
                          piVar31 = piVar31 + 2;
                          uVar23 = uVar23 - 1;
                          if (uVar23 == 0) goto LAB_02792798;
                        }
                        iVar16 = 0;
                        if (*piVar31 != -1) {
                          iVar16 = *piVar31;
                        }
                        *(int *)(puVar13 + 0x20) = iVar16;
                        uVar30 = *puVar27;
                        if (uVar30 == 0) break;
                      } while( true );
                    }
LAB_02792798:
                    *(char *)psVar26 = '\x01';
                    uVar30 = *puVar27;
                    if (uVar30 != 0) {
                      cVar29 = *PTR_DAT_04bb6420;
                      do {
                        puVar6 = PTR_DAT_04bb6420;
                        if (cVar29 == '\0') {
                          cVar29 = '\x01';
                          *(undefined8 *)puVar13 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                          *(undefined4 *)(puVar13 + 0x50) = 0xffffffff;
                          *puVar6 = 1;
                          *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                          uVar30 = *puVar27;
                        }
                        else {
                          uVar35 = *(uint *)(puVar13 + 0x1c);
                          if (-1 < (int)uVar35) {
                            if ((ushort *)((ulong)uVar35 + (long)puVar27) != (ushort *)0x0) {
                              uVar30 = (uint)*(ushort *)((ulong)uVar35 + (long)puVar27);
                              goto LAB_027928ec;
                            }
                            break;
                          }
                          if (uVar35 != 0xffffffff) break;
                        }
                        puVar22 = (uint *)(ulong)uVar30;
                        uVar30 = 0;
                        if ((puVar22 == (uint *)0x0) || (uVar30 = 0, puVar27 == puVar22))
                        goto LAB_027928ec;
                        lVar25 = 0xc;
                        if (*(char *)((long)puVar27 + (10 - (long)puVar22)) != '\0') {
                          lVar25 = 0x1c;
                        }
                        lVar25 = (long)puVar27 + (lVar25 - (long)puVar22);
                        uVar30 = 0;
                        if (lVar25 == 0) goto LAB_027928ec;
                        uVar23 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar22));
                        *(undefined4 *)(puVar13 + 0x1c) = 0xfffffffe;
                        if (uVar23 == 0) break;
                        piVar31 = (int *)(lVar25 + 4);
                        while (piVar31[-1] != 0x127ccfd9) {
                          piVar31 = piVar31 + 2;
                          uVar23 = uVar23 - 1;
                          if (uVar23 == 0) goto LAB_027928e8;
                        }
                        iVar16 = 0;
                        if (*piVar31 != -1) {
                          iVar16 = *piVar31;
                        }
                        *(int *)(puVar13 + 0x1c) = iVar16;
                        uVar30 = *puVar27;
                        if (uVar30 == 0) break;
                      } while( true );
                    }
LAB_027928e8:
                    uVar30 = 0;
LAB_027928ec:
                    lVar25 = *plVar33;
                    (**(code **)(local_c8 + 0x18))(&local_c8);
                    uVar17 = FUN_006bd550(local_c0,0);
                    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar17);
                    puVar22 = (uint *)FUN_00ad5fc0(lVar25 + 0x1960,&local_a0);
                    if (puVar22 == (uint *)0x0) {
LAB_02792fb0:
                      lVar25 = *plVar33;
                      (**(code **)(local_c8 + 0x18))(&local_c8);
                      uVar17 = FUN_006bd550(local_c0,0);
                      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar17);
                      puVar22 = (uint *)FUN_00ad5fc0(lVar25 + 0x1960,&local_a0);
                      uVar35 = extraout_w8;
                      if (puVar22 != (uint *)0x0) {
                        uVar35 = *puVar22;
                        psVar26 = psVar2;
                        if (uVar35 != 0) {
                          cVar29 = *PTR_DAT_04bb6420;
                          do {
                            puVar6 = PTR_DAT_04bb6420;
                            if (cVar29 == '\0') {
                              cVar29 = '\x01';
                              *(undefined8 *)puVar13 = 0xffffffffffffffff;
                              *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                              *(undefined4 *)(puVar13 + 0x50) = 0xffffffff;
                              *puVar6 = 1;
                              *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                              uVar35 = *puVar22;
                            }
                            else {
                              uVar18 = *(uint *)(puVar13 + 0x20);
                              if (-1 < (int)uVar18) {
                                if (((ushort *)((ulong)uVar18 + (long)puVar22) != (ushort *)0x0) &&
                                   (uVar8 = *(ushort *)((ulong)uVar18 + (long)puVar22),
                                   uVar8 < 0x200)) {
                                  psVar26 = (short *)((long)psVar2 + (ulong)uVar8);
                                }
                                break;
                              }
                              if (uVar18 != 0xffffffff) break;
                            }
                            puVar28 = (uint *)(ulong)uVar35;
                            if ((puVar28 == (uint *)0x0) || (puVar22 == puVar28)) break;
                            lVar25 = 0xc;
                            if (*(char *)((long)puVar22 + (10 - (long)puVar28)) != '\0') {
                              lVar25 = 0x1c;
                            }
                            lVar25 = (long)puVar22 + (lVar25 - (long)puVar28);
                            if (lVar25 == 0) break;
                            uVar23 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar28));
                            *(undefined4 *)(puVar13 + 0x20) = 0xfffffffe;
                            if (uVar23 == 0) break;
                            piVar31 = (int *)(lVar25 + 4);
                            while (piVar31[-1] != 0x54706054) {
                              piVar31 = piVar31 + 2;
                              uVar23 = uVar23 - 1;
                              if (uVar23 == 0) goto LAB_027930c8;
                            }
                            iVar16 = 0;
                            if (*piVar31 != -1) {
                              iVar16 = *piVar31;
                            }
                            *(int *)(puVar13 + 0x20) = iVar16;
                            uVar35 = *puVar22;
                            if (uVar35 == 0) break;
                          } while( true );
                        }
LAB_027930c8:
                        uVar35 = (uint)((char)*psVar26 != '\0');
                      }
                      iVar16 = uVar30 << (ulong)(puVar22 != (uint *)0x0 & uVar35);
                    }
                    else {
                      lVar25 = *plVar33;
                      (**(code **)(local_c8 + 0x18))(&local_c8);
                      uVar17 = FUN_006bd550(local_c0,0);
                      puVar37 = PTR_DAT_04bb2020;
                      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar17);
                      puVar28 = (uint *)FUN_00ad5fc0(lVar25 + 0x1960,&local_a0);
                      if (puVar28 == (uint *)0x0) goto LAB_02792fb0;
                      uVar35 = *puVar28;
                      psVar26 = psVar2;
                      if (uVar35 != 0) {
                        cVar29 = *PTR_DAT_04bb6420;
                        do {
                          puVar6 = PTR_DAT_04bb6420;
                          if (cVar29 == '\0') {
                            cVar29 = '\x01';
                            *(undefined8 *)puVar13 = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                            *(undefined4 *)(puVar13 + 0x50) = 0xffffffff;
                            *puVar6 = 1;
                            *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                            uVar35 = *puVar28;
                          }
                          else {
                            uVar18 = *(uint *)(puVar13 + 0x20);
                            if (-1 < (int)uVar18) {
                              if (((ushort *)((ulong)uVar18 + (long)puVar28) != (ushort *)0x0) &&
                                 (uVar8 = *(ushort *)((ulong)uVar18 + (long)puVar28), uVar8 < 0x200)
                                 ) {
                                psVar26 = (short *)((long)psVar2 + (ulong)uVar8);
                              }
                              break;
                            }
                            if (uVar18 != 0xffffffff) break;
                          }
                          puVar12 = (uint *)(ulong)uVar35;
                          if ((puVar12 == (uint *)0x0) || (puVar28 == puVar12)) break;
                          lVar25 = 0xc;
                          if (*(char *)((long)puVar28 + (10 - (long)puVar12)) != '\0') {
                            lVar25 = 0x1c;
                          }
                          lVar25 = (long)puVar28 + (lVar25 - (long)puVar12);
                          if (lVar25 == 0) break;
                          uVar23 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar12));
                          *(undefined4 *)(puVar13 + 0x20) = 0xfffffffe;
                          if (uVar23 == 0) break;
                          piVar31 = (int *)(lVar25 + 4);
                          while (piVar31[-1] != 0x54706054) {
                            piVar31 = piVar31 + 2;
                            uVar23 = uVar23 - 1;
                            if (uVar23 == 0) goto LAB_02792a58;
                          }
                          iVar16 = 0;
                          if (*piVar31 != -1) {
                            iVar16 = *piVar31;
                          }
                          *(int *)(puVar13 + 0x20) = iVar16;
                          uVar35 = *puVar28;
                          if (uVar35 == 0) break;
                        } while( true );
                      }
LAB_02792a58:
                      plVar33 = (long *)PTR_DAT_04bb2208;
                      if ((char)*psVar26 == '\0') goto LAB_02792fb0;
                      uVar35 = *puVar22;
                      psVar26 = psVar3;
                      if (uVar35 != 0) {
                        cVar29 = *PTR_DAT_04bb6420;
                        do {
                          puVar37 = PTR_DAT_04bb6420;
                          if (cVar29 == '\0') {
                            cVar29 = '\x01';
                            *(undefined8 *)puVar13 = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                            *(undefined4 *)(puVar13 + 0x50) = 0xffffffff;
                            *puVar37 = 1;
                            *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                            uVar35 = *puVar22;
                          }
                          else {
                            uVar18 = *(uint *)(puVar13 + 0x20);
                            if (-1 < (int)uVar18) {
                              if (((ushort *)((ulong)uVar18 + (long)puVar22) != (ushort *)0x0) &&
                                 (uVar8 = *(ushort *)((ulong)uVar18 + (long)puVar22), uVar8 < 0x200)
                                 ) {
                                psVar26 = (short *)((long)psVar3 + (ulong)uVar8);
                              }
                              break;
                            }
                            if (uVar18 != 0xffffffff) break;
                          }
                          puVar28 = (uint *)(ulong)uVar35;
                          if ((puVar28 == (uint *)0x0) || (puVar22 == puVar28)) break;
                          lVar25 = 0xc;
                          if (*(char *)((long)puVar22 + (10 - (long)puVar28)) != '\0') {
                            lVar25 = 0x1c;
                          }
                          lVar25 = (long)puVar22 + (lVar25 - (long)puVar28);
                          if (lVar25 == 0) break;
                          uVar23 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar28));
                          *(undefined4 *)(puVar13 + 0x20) = 0xfffffffe;
                          if (uVar23 == 0) break;
                          piVar31 = (int *)(lVar25 + 4);
                          while (piVar31[-1] != 0x54706054) {
                            piVar31 = piVar31 + 2;
                            uVar23 = uVar23 - 1;
                            if (uVar23 == 0) goto LAB_02792b48;
                          }
                          iVar16 = 0;
                          if (*piVar31 != -1) {
                            iVar16 = *piVar31;
                          }
                          *(int *)(puVar13 + 0x20) = iVar16;
                          uVar35 = *puVar22;
                          if (uVar35 == 0) break;
                        } while( true );
                      }
LAB_02792b48:
                      if ((char)*psVar26 == '\0') {
                        uVar35 = *puVar22;
                        if (uVar35 != 0) {
                          cVar29 = *PTR_DAT_04bb6420;
                          do {
                            puVar37 = PTR_DAT_04bb6420;
                            if (cVar29 == '\0') {
                              cVar29 = '\x01';
                              *(undefined8 *)puVar13 = 0xffffffffffffffff;
                              *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                              *(undefined4 *)(puVar13 + 0x50) = 0xffffffff;
                              *puVar37 = 1;
                              *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                              uVar35 = *puVar22;
                            }
                            else {
                              uVar18 = *(uint *)(puVar13 + 0x20);
                              if (-1 < (int)uVar18) {
                                if ((ushort *)((ulong)uVar18 + (long)puVar22) != (ushort *)0x0) {
                                  uVar35 = (uint)*(ushort *)((ulong)uVar18 + (long)puVar22);
                                  goto LAB_02792ca4;
                                }
                                break;
                              }
                              if (uVar18 != 0xffffffff) break;
                            }
                            puVar28 = (uint *)(ulong)uVar35;
                            uVar35 = 0;
                            if ((puVar28 == (uint *)0x0) || (puVar22 == puVar28)) goto LAB_02792ca4;
                            lVar25 = 0xc;
                            if (*(char *)((long)puVar22 + (10 - (long)puVar28)) != '\0') {
                              lVar25 = 0x1c;
                            }
                            lVar25 = (long)puVar22 + (lVar25 - (long)puVar28);
                            if (lVar25 == 0) break;
                            uVar23 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar28));
                            *(undefined4 *)(puVar13 + 0x20) = 0xfffffffe;
                            if (uVar23 == 0) break;
                            piVar31 = (int *)(lVar25 + 4);
                            while (piVar31[-1] != 0x54706054) {
                              piVar31 = piVar31 + 2;
                              uVar23 = uVar23 - 1;
                              if (uVar23 == 0) goto LAB_02792ca0;
                            }
                            iVar16 = 0;
                            if (*piVar31 != -1) {
                              iVar16 = *piVar31;
                            }
                            *(int *)(puVar13 + 0x20) = iVar16;
                            uVar35 = *puVar22;
                            if (uVar35 == 0) break;
                          } while( true );
                        }
LAB_02792ca0:
                        uVar35 = 0;
LAB_02792ca4:
                        puVar37 = PTR_DAT_04bb2020;
                        local_a0 = PTR_DAT_04bb2020 + 0x10;
                        local_98 = "DailyQuestFivePointQuest";
                        uVar18 = FUN_0274ce10(param_3,&local_a0);
                        plVar33 = (long *)PTR_DAT_04bb2208;
                        if (uVar18 != uVar35) goto LAB_02792fb0;
                      }
                      iVar16 = uVar30 * 5;
                      lVar25 = *(long *)PTR_DAT_04bb2208;
                      (**(code **)(local_c8 + 0x18))(&local_c8);
                      uVar17 = FUN_006bd550(local_c0,0);
                      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar17);
                      puVar22 = (uint *)FUN_00ad5fc0(lVar25 + 0x1960,&local_a0);
                      if (puVar22 == (uint *)0x0) {
                        puVar37 = PTR_DAT_04bb2020;
                      }
                      else {
                        uVar36 = *(undefined8 *)PTR_DAT_04bb32f0;
                        local_a0 = PTR_DAT_04bb2020 + 0x10;
                        local_98 = "EarthDay";
                        local_70 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
                        if ((char)(local_70 >> 0x20) < '\x05') {
                          lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
                          local_b8 = (undefined *)(lVar25 + -0x15180);
                          local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
                        }
                        uVar9 = local_70;
                        uVar23 = local_70 >> 0x30;
                        local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
                        local_70 = CONCAT26((short)uVar23,(undefined6)local_70) & 0xff00ffffffffffff
                        ;
                        uVar23 = FUN_00879dd0(uVar36,&local_a0,uVar9,uVar9 >> 0x10,uVar9 >> 0x18,0);
                        puVar37 = PTR_DAT_04bb2020;
                        if ((uVar23 & 1) != 0) {
                          uVar30 = *puVar22;
                          psVar26 = psVar3;
                          if (uVar30 != 0) {
                            cVar29 = *PTR_DAT_04bb6420;
                            do {
                              puVar6 = PTR_DAT_04bb6420;
                              if (cVar29 == '\0') {
                                cVar29 = '\x01';
                                *(undefined8 *)puVar13 = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                                *(undefined4 *)(puVar13 + 0x50) = 0xffffffff;
                                *puVar6 = 1;
                                *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                                uVar30 = *puVar22;
                              }
                              else {
                                uVar35 = *(uint *)(puVar13 + 0x20);
                                if (-1 < (int)uVar35) {
                                  if (((ushort *)((ulong)uVar35 + (long)puVar22) != (ushort *)0x0)
                                     && (uVar8 = *(ushort *)((ulong)uVar35 + (long)puVar22),
                                        uVar8 < 0x200)) {
                                    psVar26 = (short *)((long)psVar3 + (ulong)uVar8);
                                  }
                                  break;
                                }
                                if (uVar35 != 0xffffffff) break;
                              }
                              puVar28 = (uint *)(ulong)uVar30;
                              if ((puVar28 == (uint *)0x0) || (puVar22 == puVar28)) break;
                              lVar25 = 0xc;
                              if (*(char *)((long)puVar22 + (10 - (long)puVar28)) != '\0') {
                                lVar25 = 0x1c;
                              }
                              lVar25 = (long)puVar22 + (lVar25 - (long)puVar28);
                              if (lVar25 == 0) break;
                              uVar23 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar28));
                              *(undefined4 *)(puVar13 + 0x20) = 0xfffffffe;
                              if (uVar23 == 0) break;
                              piVar31 = (int *)(lVar25 + 4);
                              while (piVar31[-1] != 0x54706054) {
                                piVar31 = piVar31 + 2;
                                uVar23 = uVar23 - 1;
                                if (uVar23 == 0) goto LAB_02792ea8;
                              }
                              iVar19 = 0;
                              if (*piVar31 != -1) {
                                iVar19 = *piVar31;
                              }
                              *(int *)(puVar13 + 0x20) = iVar19;
                              uVar30 = *puVar22;
                              if (uVar30 == 0) break;
                            } while( true );
                          }
LAB_02792ea8:
                          if ((char)*psVar26 != '\0') {
                            puVar6 = puVar37 + 0x10;
                            local_98 = "EarthdayDailyClearNum";
                            local_a0 = puVar6;
                            FUN_0274dc60(param_3,&local_a0,1);
                            puVar37 = PTR_DAT_04bb2020;
                            local_98 = "EarthdayDailyClearNum";
                            local_a0 = puVar6;
                            iVar19 = FUN_0274ce10(param_3,&local_a0);
                            if (0 < iVar19) {
                              local_98 = "EarthdayDailyAllClear";
                              local_a0 = puVar6;
                              FUN_0274d104(param_3,&local_a0,1);
                            }
                          }
                        }
                        (**(code **)(local_c8 + 0x18))(&local_c8);
                        (**(code **)(local_c8 + 0x18))(&local_c8);
                        if (local_c0 == "EDDIYCorolla") {
LAB_02793440:
                          puVar6 = PTR_DAT_04bb2020 + 0x10;
                          local_98 = "EDDIYCorollaOrderYear";
                          local_a0 = puVar6;
                          uVar15 = FUN_0274ce10(param_3,&local_a0);
                          puVar37 = PTR_DAT_04bb2020;
                          local_98 = "EDDIYCorollaClearYear";
                          local_a0 = puVar6;
                          FUN_0274d104(param_3,&local_a0,uVar15);
                        }
                        else {
                          uVar23 = 0;
                          bVar14 = true;
                          do {
                            if (local_c0[uVar23] != "EDDIYCorolla"[uVar23]) break;
                            if (local_c0[uVar23] == '\0') {
                              if (bVar14) goto LAB_02793440;
                              break;
                            }
                            if (local_c0[uVar23 + 1] != "EDDIYCorolla"[uVar23 + 1]) break;
                            if (local_c0[uVar23 + 1] == '\0') goto LAB_02793440;
                            if (local_c0[uVar23 + 2] != "EDDIYCorolla"[uVar23 + 2]) break;
                            if (local_c0[uVar23 + 2] == '\0') goto LAB_02793440;
                            bVar14 = uVar23 < 0x7fffe;
                            uVar23 = uVar23 + 3;
                          } while (uVar23 != 0x80001);
                        }
                        (**(code **)(local_c8 + 0x18))(&local_c8);
                        (**(code **)(local_c8 + 0x18))(&local_c8);
                        if (local_c0 == "EDDIYFlowerWreath") {
LAB_0279353c:
                          puVar6 = PTR_DAT_04bb2020 + 0x10;
                          local_98 = "EDDIYFlowerWreathOrderYear";
                          local_a0 = puVar6;
                          uVar15 = FUN_0274ce10(param_3,&local_a0);
                          puVar37 = PTR_DAT_04bb2020;
                          local_98 = "EDDIYFlowerWreathClearYear";
                          local_a0 = puVar6;
                          FUN_0274d104(param_3,&local_a0,uVar15);
                        }
                        else {
                          uVar23 = 0;
                          bVar14 = true;
                          do {
                            if (local_c0[uVar23] != "EDDIYFlowerWreath"[uVar23]) break;
                            if (local_c0[uVar23] == '\0') {
                              if (bVar14) goto LAB_0279353c;
                              break;
                            }
                            if (local_c0[uVar23 + 1] != "EDDIYFlowerWreath"[uVar23 + 1]) break;
                            if (local_c0[uVar23 + 1] == '\0') goto LAB_0279353c;
                            if (local_c0[uVar23 + 2] != "EDDIYFlowerWreath"[uVar23 + 2]) break;
                            if (local_c0[uVar23 + 2] == '\0') goto LAB_0279353c;
                            bVar14 = uVar23 < 0x7fffe;
                            uVar23 = uVar23 + 3;
                          } while (uVar23 != 0x80001);
                        }
                      }
                    }
                    FUN_027a19d8(param_3,iVar16);
                    local_70 = CONCAT44(local_70._4_4_,2);
                    local_b0 = PTR_s_get_mile_daily_04a85990;
                    local_b8 = puVar37 + 0x10;
                    FUN_026012f4(&local_a0,&local_b8,param_3);
                    local_78 = (undefined4)local_70;
                    uVar11 = (undefined3)((ulong)local_b0 >> 0x28);
                    uVar30 = *puVar27;
                    if (uVar30 != 0) {
                      cVar29 = *PTR_DAT_04bb6420;
                      do {
                        puVar6 = PTR_DAT_04bb6420;
                        puVar22 = (uint *)(ulong)uVar30;
                        psVar26 = psVar2;
                        if (cVar29 != '\0') {
                          uVar23 = (ulong)*(uint *)(puVar13 + 0x20);
                          plVar33 = (long *)PTR_DAT_04bb2208;
                          if ((int)*(uint *)(puVar13 + 0x20) < 0) {
                            if (uVar23 == 0xffffffff) {
                              if (puVar22 != (uint *)0x0) goto LAB_027931c8;
                              goto LAB_02793320;
                            }
                          }
                          else if ((ushort *)(uVar23 + (long)puVar27) != (ushort *)0x0) {
                            uVar8 = *(ushort *)(uVar23 + (long)puVar27);
                            if (0x1ff < uVar8) {
                              local_b0 = (undefined *)
                                         CONCAT35(uVar11,CONCAT14((char)*psVar2,iVar16));
                              goto LAB_02793274;
                            }
                            psVar26 = (short *)((long)psVar2 + (ulong)uVar8);
                          }
LAB_02793264:
                          puVar22 = (uint *)(ulong)*puVar27;
                          local_b0 = (undefined *)CONCAT35(uVar11,CONCAT14((char)*psVar26,iVar16));
                          if (*puVar27 == 0) goto LAB_02793368;
                          goto LAB_02793274;
                        }
                        cVar29 = '\x01';
                        *(undefined8 *)puVar13 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                        *(undefined4 *)(puVar13 + 0x50) = 0xffffffff;
                        *puVar6 = 1;
                        *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                        puVar22 = (uint *)(ulong)*puVar27;
                        if (puVar22 == (uint *)0x0) {
LAB_02793320:
                          uVar23 = 0xffffffff;
                          plVar33 = (long *)PTR_DAT_04bb2208;
                          goto LAB_02793264;
                        }
LAB_027931c8:
                        plVar33 = (long *)PTR_DAT_04bb2208;
                        if (puVar27 == puVar22) goto LAB_02793320;
                        lVar25 = 0xc;
                        if (*(char *)((long)puVar27 + (10 - (long)puVar22)) != '\0') {
                          lVar25 = 0x1c;
                        }
                        lVar25 = (long)puVar27 + (lVar25 - (long)puVar22);
                        if (lVar25 == 0) goto LAB_02793320;
                        uVar23 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar22));
                        *(undefined4 *)(puVar13 + 0x20) = 0xfffffffe;
                        if (uVar23 == 0) {
LAB_0279325c:
                          uVar23 = 0xfffffffe;
                          goto LAB_02793264;
                        }
                        piVar31 = (int *)(lVar25 + 4);
                        while (piVar31[-1] != 0x54706054) {
                          piVar31 = piVar31 + 2;
                          uVar23 = uVar23 - 1;
                          if (uVar23 == 0) goto LAB_0279325c;
                        }
                        iVar19 = 0;
                        if (*piVar31 != -1) {
                          iVar19 = *piVar31;
                        }
                        *(int *)(puVar13 + 0x20) = iVar19;
                        uVar30 = *puVar27;
                      } while (uVar30 != 0);
                    }
                    uVar30 = 0;
                    local_b0 = (undefined *)CONCAT35(uVar11,CONCAT14((char)*psVar2,iVar16));
                    plVar33 = (long *)PTR_DAT_04bb2208;
LAB_0279336c:
                    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar30);
                    local_a8 = 0;
                    uVar30 = *(uint *)(param_1 + 0x2a4c);
                    if ((*(byte *)((long)param_1 + 0x549f) != 0 ||
                         (((ulong)uVar30 != 0 || param_1[0x2a4e] != 0) ||
                         *(byte *)(param_1 + 0x2a4f) != 0)) &&
                       ((uint)*(byte *)((long)param_1 + 0x549f) ==
                        ((uVar30 + (uVar30 >> 0x10) + (uVar30 >> 0x18) + (uVar30 >> 8)) - 0x2d &
                        0xff))) {
                      lVar25 = (ulong)uVar30 << ((ulong)(0x1d - *(byte *)(param_1 + 0x2a4f)) & 0x3f)
                      ;
                      local_a8 = ((int)lVar25 - (uint)(ushort)param_1[0x2a4e]) +
                                 (int)((ulong)lVar25 >> 0x20) + -0x7f1cd4ef;
                    }
                    local_a0 = puVar5;
                    FUN_025a1d7c(&local_a0,&local_b8);
                    local_a0 = PTR_DAT_04bc32d0 + 0x10;
                    iVar16 = FUN_025a1ff0(&local_a0);
                    if (iVar16 == -1) {
LAB_02793428:
                      if (local_7c == 0) {
                        local_7c = 1;
                      }
                    }
                    else {
                      iVar16 = (**(code **)(local_a0 + 0x20))(&local_a0);
                      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,iVar16);
                      if (0xc < iVar16) goto LAB_02793428;
                    }
                    FUN_02601530(&local_a0);
                  }
                }
              }
            }
          }
        }
        else if (uVar21 < *(uint *)(lVar25 + 0x1b20)) {
          uVar30 = uVar21;
          if (*(uint *)(lVar25 + 0x1b10) <= uVar21) {
            uVar30 = 0;
          }
          puVar27 = *(uint **)(*(long *)(lVar25 + 0x1b18) + (ulong)uVar30 * 8);
          if (puVar27 != (uint *)0x0) goto LAB_02791f80;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar20);
    }
    local_a0 = puVar37 + 0x10;
    local_98 = "EarthdayDailyClearNum";
    FUN_0274d104(param_3,&local_a0,0);
    uVar23 = 0;
    do {
      uVar9 = uVar23 << 1;
      uVar10 = uVar23 >> 0x1f;
      uVar20 = (int)uVar23 + 1;
      uVar23 = (ulong)uVar20;
      *(undefined2 *)((long)param_1 + (-uVar10 & 0xfffffffe00000000 | uVar9)) = 0;
    } while (uVar20 != 0x200);
    iVar16 = 0;
    do {
      *(undefined1 *)((long)param_1 + (long)iVar16 + 0x400) = 0;
      iVar16 = iVar16 + 1;
    } while (iVar16 != 0x200);
    iVar16 = 0;
    do {
      *(undefined1 *)((long)param_1 + (long)iVar16 + 0x800) = 0;
      puVar13 = PTR_DAT_04bb32f0;
      iVar16 = iVar16 + 1;
    } while (iVar16 != 0x200);
    iVar16 = 0;
    do {
      *(undefined1 *)((long)param_1 + (long)iVar16 + 0x600) = 0;
      iVar16 = iVar16 + 1;
    } while (iVar16 != 0x200);
    iVar16 = 0;
    do {
      *(undefined1 *)((long)param_1 + (long)iVar16 + 0xc40) = 0;
      iVar16 = iVar16 + 1;
    } while (iVar16 != 0x200);
    iVar16 = 0;
    do {
      *(undefined1 *)((long)param_1 + (long)iVar16 + 0x54a8) = 0;
      iVar16 = iVar16 + 1;
    } while (iVar16 != 0x200);
    puVar4 = puVar37 + 0x10;
    param_1[0x722] = -1;
    param_1[0x723] = -1;
    param_1[0x724] = -1;
    param_1[0x725] = -1;
    param_1[0x726] = -1;
    param_1[0x727] = -1;
    param_1[0x728] = -1;
    param_1[0x729] = -1;
    local_98 = "SelectedDoRadioGymnastics";
    local_a0 = puVar4;
    iVar16 = FUN_0274ce10(param_3,&local_a0);
    if (0 < iVar16) {
      local_98 = "SelectedDoRadioGymnastics";
      local_a0 = puVar4;
      FUN_0274dc60(param_3,&local_a0,0xffffffff);
    }
    param_1[0x720] = 5;
    param_1[0x721] = 0;
    uVar36 = *(undefined8 *)puVar13;
    local_98 = "EarthDay";
    local_c8 = *(undefined **)(param_2 + 0x10);
    local_a0 = puVar4;
    if ((char)((ulong)local_c8 >> 0x20) < '\x05') {
      lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
      local_b8 = (undefined *)(lVar25 + -0x15180);
      local_c8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
    }
    uVar23 = (ulong)local_c8;
    local_c8._7_1_ = SUB81(uVar23,7);
    local_c8._0_7_ = (uint7)CONCAT24(5,(undefined4)local_c8);
    uVar23 = FUN_00879dd0(uVar36,&local_a0,uVar23,uVar23 >> 0x10,uVar23 >> 0x18,0);
    uVar17 = 0;
    if ((uVar23 & 1) != 0) {
      local_98 = "EarthDay";
      local_a0 = puVar37 + 0x10;
      uVar20 = FUN_0087ce40(*(undefined8 *)puVar13,&local_a0,(ulong *)(param_2 + 0x10));
      local_98 = "EarthDayBonus";
      local_a0 = puVar37 + 0x10;
      uVar21 = FUN_0274ce10(param_3,&local_a0);
      if ((uVar20 < 0x10) && ((uVar21 >> (ulong)(uVar20 & 0x1f) & 1) != 0)) {
        uVar17 = 0;
      }
      else {
        uVar17 = 1;
      }
    }
    *(undefined4 *)(param_1 + 0x2b54) = uVar17;
  }
  return;
LAB_02793274:
  if (-1 < (int)uVar23) {
    if ((ushort *)(uVar23 + (long)puVar27) == (ushort *)0x0) {
LAB_02793368:
      uVar30 = 0;
    }
    else {
      uVar30 = (uint)*(ushort *)(uVar23 + (long)puVar27);
    }
    goto LAB_0279336c;
  }
  if (uVar23 != 0xffffffff) goto LAB_02793368;
  uVar30 = 0;
  if ((puVar22 == (uint *)0x0) || (puVar27 == puVar22)) goto LAB_0279336c;
  lVar25 = 0xc;
  if (*(char *)((long)puVar27 + (10 - (long)puVar22)) != '\0') {
    lVar25 = 0x1c;
  }
  lVar25 = (long)puVar27 + (lVar25 - (long)puVar22);
  uVar30 = 0;
  if (lVar25 == 0) goto LAB_0279336c;
  uVar23 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar22));
  *(undefined4 *)(puVar13 + 0x20) = 0xfffffffe;
  if (uVar23 == 0) goto LAB_02793368;
  puVar22 = (uint *)(lVar25 + 4);
  while (puVar22[-1] != 0x54706054) {
    puVar22 = puVar22 + 2;
    uVar23 = uVar23 - 1;
    if (uVar23 == 0) goto LAB_02793368;
  }
  uVar30 = 0;
  uVar23 = 0;
  if (*puVar22 != 0xffffffff) {
    uVar23 = (ulong)*puVar22;
  }
  *(int *)(puVar13 + 0x20) = (int)uVar23;
  puVar22 = (uint *)(ulong)*puVar27;
  if (*puVar27 == 0) goto LAB_0279336c;
  goto LAB_02793274;
}

