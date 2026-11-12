
undefined8 FUN_0068ffe0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  long lVar4;
  char cVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ushort *puVar13;
  ushort uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  char *pcVar18;
  uint uVar19;
  uint *puVar20;
  ulong uVar21;
  ushort *puVar22;
  ulong uVar23;
  int iVar24;
  ushort *puVar25;
  long lVar26;
  undefined8 *puVar27;
  ushort *puVar28;
  uint uVar29;
  long lVar30;
  int local_8f8 [8];
  int local_8d8 [8];
  undefined8 local_8b8;
  uint local_8b0;
  long local_8a8;
  undefined4 local_8a0;
  ushort *local_898;
  ulong uStack_890;
  undefined1 *local_888;
  undefined8 uStack_880;
  undefined1 auStack_878 [2048];
  long *local_78;
  long *plStack_70;
  
  *param_2 = *param_1;
  FUN_0068fb10(param_1 + 2);
  uVar6 = *(ushort *)(*param_1 + 0x16);
  local_8b8 = (**(code **)(*param_3 + 0x10))(param_3,uVar6 + 0x3f >> 3 & 0x3ff8,0x10);
  local_8b0 = (uint)uVar6;
  FUN_00690e74(&local_8b8);
  lVar10 = *(long *)(*param_2 + 0x40);
  FUN_00690ea4(local_8d8,param_1[1]);
  FUN_00690ec0(local_8f8,param_1[1]);
  if (local_8d8[0] != local_8f8[0]) {
    do {
      FUN_006905d0(param_2,&local_8b8,*(undefined2 *)(lVar10 + (long)local_8d8[0] * 0x20 + 0x1c));
      lVar15 = *param_2;
      puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x40) + (long)local_8d8[0] * 0x20);
      uVar11 = (ulong)*(ushort *)(puVar2 + 3);
      local_78 = param_4;
      plStack_70 = param_5;
      if (uVar11 != 0) {
        puVar28 = (ushort *)*puVar2;
        puVar3 = puVar28 + uVar11;
        puVar2 = *(undefined8 **)(lVar15 + 0x28);
        lVar4 = *(long *)(lVar15 + 0x30);
        uVar6 = *(ushort *)(lVar15 + 0x10);
        puVar27 = puVar2 + (ulong)uVar6 * 7;
        do {
          lVar12 = lVar4 + (ulong)*puVar28 * 0x28;
          lVar26 = *(long *)(lVar12 + 0x10);
          if (lVar26 != 0) {
            uVar14 = **(ushort **)(lVar12 + 0x18);
            lVar30 = lVar15;
            if (uVar14 != 0) {
              plVar16 = param_4;
              if (param_4 != param_5) {
                if (uVar14 == 0) {
                  do {
                    if (**(short **)(*plVar16 + 0x20) == 0) goto LAB_00690290;
                    plVar16 = plVar16 + 1;
                  } while (plVar16 != param_5);
                }
                else {
                  do {
                    if ((uint)**(ushort **)(*plVar16 + 0x20) == (uint)uVar14) {
                      puVar22 = *(ushort **)(*plVar16 + 0x20) + 1;
                      puVar13 = *(ushort **)(lVar12 + 0x18) + 1;
                      iVar24 = uVar14 + 1;
                      while( true ) {
                        cVar5 = (char)*puVar13;
                        if (cVar5 == '\0' || cVar5 != (char)*puVar22) break;
                        iVar24 = iVar24 + -1;
                        puVar13 = (ushort *)((long)puVar13 + 1);
                        puVar22 = (ushort *)((long)puVar22 + 1);
                        if (iVar24 < 2) goto LAB_00690290;
                      }
                      if (cVar5 == (char)*puVar22) goto LAB_00690290;
                    }
                    plVar16 = plVar16 + 1;
                  } while (plVar16 != param_5);
                }
                plVar16 = param_5;
              }
LAB_00690290:
              lVar30 = *plVar16;
            }
            uVar14 = *(ushort *)(lVar26 + 2);
            if (uVar14 != 0) {
              uVar11 = 0;
              puVar22 = *(ushort **)(lVar12 + 0x20) + 1;
              uVar7 = **(ushort **)(lVar12 + 0x20);
              do {
                while (pcVar18 = *(char **)(lVar26 + 0x10 + uVar11 * 8), *pcVar18 != '\f') {
                  uVar11 = uVar11 + 1;
                  if (uVar14 <= uVar11) goto LAB_00690194;
                }
                uVar11 = uVar11 + 1;
                puVar13 = *(ushort **)(*(long *)(lVar26 + 8) + uVar11 * 0x10 + 0x10);
                local_898 = puVar13 + 1;
                uStack_890 = (ulong)*puVar13;
                puVar17 = puVar2;
                if (uVar6 != 0) {
                  uVar14 = **(ushort **)(pcVar18 + 0x10);
                  puVar13 = *(ushort **)(pcVar18 + 0x18) + 1;
                  uVar8 = **(ushort **)(pcVar18 + 0x18);
                  uVar19 = (uint)uVar8;
                  if (uVar14 == 0) {
                    if (uVar8 == 0) {
                      lVar12 = (ulong)uVar6 * 0x38;
                      do {
                        if ((*(short *)*puVar17 == 0) && (*(short *)puVar17[1] == 0))
                        goto LAB_00690500;
                        puVar17 = puVar17 + 7;
                        lVar12 = lVar12 + -0x38;
                      } while (lVar12 != 0);
                    }
                    else {
                      do {
                        if ((*(short *)*puVar17 == 0) && (uVar19 == *(ushort *)puVar17[1])) {
                          puVar25 = (ushort *)puVar17[1] + 1;
                          puVar9 = puVar13;
                          iVar24 = uVar19 + 1;
                          while( true ) {
                            cVar5 = (char)*puVar9;
                            if (cVar5 == '\0' || cVar5 != (char)*puVar25) break;
                            iVar24 = iVar24 + -1;
                            puVar9 = (ushort *)((long)puVar9 + 1);
                            puVar25 = (ushort *)((long)puVar25 + 1);
                            if (iVar24 < 2) goto LAB_00690500;
                          }
                          if (cVar5 == (char)*puVar25) goto LAB_00690500;
                        }
                        puVar17 = puVar17 + 7;
                      } while (puVar17 != puVar27);
                    }
                  }
                  else {
                    do {
                      if (uVar14 == *(ushort *)*puVar17) {
                        puVar25 = (ushort *)*puVar17 + 1;
                        puVar9 = *(ushort **)(pcVar18 + 0x10) + 1;
                        iVar24 = uVar14 + 1;
                        do {
                          cVar5 = (char)*puVar9;
                          if (cVar5 == '\0' || cVar5 != (char)*puVar25) {
                            if (cVar5 != (char)*puVar25) goto LAB_00690390;
                            break;
                          }
                          iVar24 = iVar24 + -1;
                          puVar9 = (ushort *)((long)puVar9 + 1);
                          puVar25 = (ushort *)((long)puVar25 + 1);
                        } while (1 < iVar24);
                        if (uVar19 == *(ushort *)puVar17[1]) {
                          if (uVar19 == 0) goto LAB_00690500;
                          puVar25 = (ushort *)puVar17[1] + 1;
                          puVar9 = puVar13;
                          iVar24 = uVar19 + 1;
                          while( true ) {
                            cVar5 = (char)*puVar9;
                            if (cVar5 == '\0' || cVar5 != (char)*puVar25) break;
                            iVar24 = iVar24 + -1;
                            puVar9 = (ushort *)((long)puVar9 + 1);
                            puVar25 = (ushort *)((long)puVar25 + 1);
                            if (iVar24 < 2) goto LAB_00690500;
                          }
                          if (cVar5 == (char)*puVar25) goto LAB_00690500;
                        }
                      }
LAB_00690390:
                      puVar17 = puVar17 + 7;
                    } while (puVar17 != puVar27);
                  }
                  puVar17 = puVar27;
                }
LAB_00690500:
                lVar12 = *(long *)(lVar30 + 0x38);
                uVar23 = (ulong)*(ushort *)(lVar12 + 0xc);
                puVar20 = (uint *)((int *)(lVar12 + 8) + uVar23 * 4);
                uVar29 = (uint)uVar7;
                uVar19 = *puVar20;
                if (*(int *)(lVar12 + 8) < (int)*puVar20) {
                  do {
                    if ((uint)((int)uVar19 >> 3) < (uint)uVar7) {
                      uVar21 = (ulong)(*(byte *)((long)puVar22 +
                                                (long)(int)(~((int)uVar19 >> 3) + uVar29)) >>
                                      ((ulong)uVar19 & 7)) & 1;
                    }
                    else {
                      uVar21 = 0;
                    }
                    uVar23 = (ulong)*(ushort *)(lVar12 + 8 + uVar23 * 0x10 + uVar21 * 2 + 4);
                    puVar20 = (uint *)(lVar12 + 8 + uVar23 * 0x10);
                    bVar1 = (int)uVar19 < (int)*puVar20;
                    uVar19 = *puVar20;
                  } while (bVar1);
                }
                local_8a0 = 0xffffffff;
                if (uVar29 == **(ushort **)(puVar20 + 2)) {
                  if (uVar29 != 0) {
                    puVar13 = *(ushort **)(puVar20 + 2) + 1;
                    puVar25 = puVar22;
                    iVar24 = uVar7 + 1;
                    do {
                      cVar5 = (char)*puVar25;
                      if (cVar5 == '\0' || cVar5 != (char)*puVar13) {
                        local_8a0 = 0xffffffff;
                        if (cVar5 != (char)*puVar13) goto LAB_006902cc;
                        break;
                      }
                      iVar24 = iVar24 + -1;
                      puVar25 = (ushort *)((long)puVar25 + 1);
                      puVar13 = (ushort *)((long)puVar13 + 1);
                    } while (1 < iVar24);
                  }
                  local_8a0 = (undefined4)((ulong)((long)puVar20 + (-0x18 - lVar12)) >> 4);
                }
LAB_006902cc:
                uStack_880 = 0x4000000000;
                local_8a8 = lVar30;
                local_888 = auStack_878;
                FUN_006907e0(param_2 + 1,
                             (int)((ulong)((long)puVar17 - (long)puVar2) >> 3) * -0x49249249,
                             &local_78,&local_888,&local_8a8);
                uVar14 = *(ushort *)(lVar26 + 2);
              } while (uVar11 < uVar14);
            }
          }
LAB_00690194:
          puVar28 = puVar28 + 1;
        } while (puVar28 != puVar3);
      }
      *(undefined1 *)(param_2 + 5) = 1;
      FUN_00690f80(local_8d8);
    } while (local_8d8[0] != local_8f8[0]);
  }
  (**(code **)(*param_3 + 0x18))(param_3,local_8b8);
  return 1;
}

