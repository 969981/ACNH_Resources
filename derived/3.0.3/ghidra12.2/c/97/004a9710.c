
undefined8 FUN_004a9710(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  int iVar22;
  char *local_b0;
  char *pcStack_a8;
  ulong local_a0;
  int local_6c;
  int local_68 [2];
  
  local_b0 = (char *)0x0;
  pcStack_a8 = (char *)0x0;
  iVar7 = FUN_0049da40(param_2,&DAT_040ae7f4,&local_b0);
  if (-1 < iVar7) {
    if ((local_b0 != pcStack_a8) && (*local_b0 == '\"')) {
      local_b0 = local_b0 + 1;
      pcStack_a8 = pcStack_a8 + -1;
    }
    uVar10 = FUN_0043a780(local_b0,(long)pcStack_a8 - (long)local_b0,"object");
    if ((uVar10 & 1) != 0) {
      iVar7 = FUN_0043a2d0("object");
      local_b0 = local_b0 + iVar7;
      iVar8 = FUN_0049db00(&local_b0,local_68);
      iVar7 = local_68[0];
      if (-1 < iVar8) {
        local_b0 = (char *)0x0;
        pcStack_a8 = (char *)0x0;
        iVar8 = FUN_0049da40(param_2,"typeid",&local_b0);
        if (-1 < iVar8) {
          if ((local_b0 != pcStack_a8) && (*local_b0 == '\"')) {
            local_b0 = local_b0 + 1;
            pcStack_a8 = pcStack_a8 + -1;
          }
          uVar10 = FUN_0043a780(local_b0,(long)pcStack_a8 - (long)local_b0,&DAT_040dd778);
          if ((uVar10 & 1) != 0) {
            iVar8 = FUN_0043a2d0(&DAT_040dd778);
            local_b0 = local_b0 + iVar8;
            uVar11 = FUN_0049db00(&local_b0,local_68);
            iVar8 = local_68[0];
            if (-1 < (int)uVar11) {
              local_6c = 0;
              if ((param_3 & 1) == 0) {
LAB_004a98e4:
                puVar3 = PTR_DAT_048607b8;
                pcVar2 = "note";
                if ((param_3 & 1) == 0) {
                  pcVar2 = "object";
                }
                do {
                  iVar9 = FUN_004a8280(uVar11,param_2,pcVar2);
                  if (iVar9 < 0) {
                    return 0;
                  }
                  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar8 * 8);
                  FUN_0044e160(&local_b0,uVar11);
                  iVar9 = local_6c;
                  pcVar4 = local_b0;
                  if (local_6c == 0) {
                    uVar14 = *(uint *)(param_1 + 0x90);
                    uVar13 = uVar14;
                    if ((int)uVar14 <= (int)(iVar7 + 1U)) {
                      uVar13 = iVar7 + 1U;
                    }
                    if ((int)(*(uint *)(param_1 + 0x94) & 0x3fffffff) < (int)uVar13) {
                      uVar12 = FUN_00426720(puVar3,uVar13,0x18,*(undefined8 *)(param_1 + 0x88),
                                            uVar14,param_1 + 0x94);
                      uVar14 = *(uint *)(param_1 + 0x90);
                      *(undefined8 *)(param_1 + 0x88) = uVar12;
                    }
                    if (uVar13 - uVar14 == 0 || (int)uVar13 < (int)uVar14) {
                      if ((int)uVar14 <= (int)uVar13) goto LAB_004a9bcc;
                      uVar15 = 0;
                      iVar9 = 0;
                      *(uint *)(param_1 + 0x90) = uVar13;
                    }
                    else {
                      puVar20 = (undefined8 *)(*(long *)(param_1 + 0x88) + (long)(int)uVar14 * 0x18)
                      ;
                      uVar1 = uVar13 - uVar14 & 7;
                      *(uint *)(param_1 + 0x90) = uVar13;
                      if (6 < uVar13 + ~uVar14) {
                        iVar9 = (uVar14 + uVar1) - uVar13;
                        puVar18 = puVar20;
                        do {
                          puVar20 = puVar18 + 0x18;
                          *(undefined4 *)((long)puVar18 + 0x14) = 0;
                          *(undefined1 *)(puVar18 + 2) = 0;
                          *puVar18 = 0;
                          puVar18[1] = 0;
                          iVar9 = iVar9 + 8;
                          *(undefined4 *)((long)puVar18 + 0x2c) = 0;
                          *(undefined1 *)(puVar18 + 5) = 0;
                          *(undefined4 *)((long)puVar18 + 0x44) = 0;
                          *(undefined1 *)(puVar18 + 8) = 0;
                          *(undefined4 *)((long)puVar18 + 0x5c) = 0;
                          *(undefined1 *)(puVar18 + 0xb) = 0;
                          *(undefined4 *)((long)puVar18 + 0x74) = 0;
                          *(undefined1 *)(puVar18 + 0xe) = 0;
                          *(undefined4 *)((long)puVar18 + 0x8c) = 0;
                          *(undefined1 *)(puVar18 + 0x11) = 0;
                          *(undefined4 *)((long)puVar18 + 0xa4) = 0;
                          *(undefined1 *)(puVar18 + 0x14) = 0;
                          *(undefined4 *)((long)puVar18 + 0xbc) = 0;
                          *(undefined1 *)(puVar18 + 0x17) = 0;
                          puVar18[3] = 0;
                          puVar18[4] = 0;
                          puVar18[6] = 0;
                          puVar18[7] = 0;
                          puVar18[9] = 0;
                          puVar18[10] = 0;
                          puVar18[0xc] = 0;
                          puVar18[0xd] = 0;
                          puVar18[0xf] = 0;
                          puVar18[0x10] = 0;
                          puVar18[0x12] = 0;
                          puVar18[0x13] = 0;
                          puVar18[0x15] = 0;
                          puVar18[0x16] = 0;
                          puVar18 = puVar20;
                        } while (iVar9 != 0);
                      }
                      if (uVar1 != 0) {
                        iVar9 = -uVar1;
                        do {
                          *(undefined4 *)((long)puVar20 + 0x14) = 0;
                          *(undefined1 *)(puVar20 + 2) = 0;
                          iVar9 = iVar9 + 1;
                          *puVar20 = 0;
                          puVar20[1] = 0;
                          puVar20 = puVar20 + 3;
                        } while (iVar9 != 0);
                      }
LAB_004a9bcc:
                      uVar15 = 0;
                      iVar9 = 0;
                    }
LAB_004a9bd0:
                    lVar17 = *(long *)(param_1 + 0x88);
                  }
                  else {
                    uVar13 = *(uint *)(param_1 + 0x90);
                    iVar22 = iVar7;
                    if (iVar7 <= local_6c) {
                      iVar22 = local_6c;
                    }
                    uVar14 = uVar13;
                    if ((int)uVar13 <= iVar22 + 1) {
                      uVar14 = iVar22 + 1;
                    }
                    if ((int)(*(uint *)(param_1 + 0x94) & 0x3fffffff) < (int)uVar14) {
                      uVar12 = FUN_00426720(puVar3,uVar14,0x18,*(undefined8 *)(param_1 + 0x88),
                                            uVar13,param_1 + 0x94);
                      uVar13 = *(uint *)(param_1 + 0x90);
                      *(undefined8 *)(param_1 + 0x88) = uVar12;
                    }
                    lVar16 = (long)iVar9;
                    if (uVar14 - uVar13 == 0 || (int)uVar14 < (int)uVar13) {
                      if ((int)uVar13 <= (int)uVar14) goto LAB_004a9b18;
                      *(uint *)(param_1 + 0x90) = uVar14;
                      lVar17 = *(long *)(param_1 + 0x88);
                      lVar21 = *(long *)(lVar17 + lVar16 * 0x18);
                    }
                    else {
                      puVar20 = (undefined8 *)(*(long *)(param_1 + 0x88) + (long)(int)uVar13 * 0x18)
                      ;
                      uVar1 = uVar14 - uVar13 & 7;
                      *(uint *)(param_1 + 0x90) = uVar14;
                      if (6 < uVar14 + ~uVar13) {
                        iVar22 = (uVar13 + uVar1) - uVar14;
                        puVar18 = puVar20;
                        do {
                          puVar20 = puVar18 + 0x18;
                          *(undefined4 *)((long)puVar18 + 0x14) = 0;
                          *(undefined1 *)(puVar18 + 2) = 0;
                          *puVar18 = 0;
                          puVar18[1] = 0;
                          iVar22 = iVar22 + 8;
                          *(undefined4 *)((long)puVar18 + 0x2c) = 0;
                          *(undefined1 *)(puVar18 + 5) = 0;
                          *(undefined4 *)((long)puVar18 + 0x44) = 0;
                          *(undefined1 *)(puVar18 + 8) = 0;
                          *(undefined4 *)((long)puVar18 + 0x5c) = 0;
                          *(undefined1 *)(puVar18 + 0xb) = 0;
                          *(undefined4 *)((long)puVar18 + 0x74) = 0;
                          *(undefined1 *)(puVar18 + 0xe) = 0;
                          *(undefined4 *)((long)puVar18 + 0x8c) = 0;
                          *(undefined1 *)(puVar18 + 0x11) = 0;
                          *(undefined4 *)((long)puVar18 + 0xa4) = 0;
                          *(undefined1 *)(puVar18 + 0x14) = 0;
                          *(undefined4 *)((long)puVar18 + 0xbc) = 0;
                          *(undefined1 *)(puVar18 + 0x17) = 0;
                          puVar18[3] = 0;
                          puVar18[4] = 0;
                          puVar18[6] = 0;
                          puVar18[7] = 0;
                          puVar18[9] = 0;
                          puVar18[10] = 0;
                          puVar18[0xc] = 0;
                          puVar18[0xd] = 0;
                          puVar18[0xf] = 0;
                          puVar18[0x10] = 0;
                          puVar18[0x12] = 0;
                          puVar18[0x13] = 0;
                          puVar18[0x15] = 0;
                          puVar18[0x16] = 0;
                          puVar18 = puVar20;
                        } while (iVar22 != 0);
                      }
                      if (uVar1 != 0) {
                        iVar22 = -uVar1;
                        do {
                          *(undefined4 *)((long)puVar20 + 0x14) = 0;
                          *(undefined1 *)(puVar20 + 2) = 0;
                          iVar22 = iVar22 + 1;
                          *puVar20 = 0;
                          puVar20[1] = 0;
                          puVar20 = puVar20 + 3;
                        } while (iVar22 != 0);
                      }
LAB_004a9b18:
                      lVar17 = *(long *)(param_1 + 0x88);
                      lVar21 = *(long *)(lVar17 + lVar16 * 0x18);
                    }
                    if (lVar21 == 0) {
                      *(int *)(lVar17 + lVar16 * 0x18 + 0x14) = iVar7;
                      uVar15 = 2;
                      goto LAB_004a9bd0;
                    }
                    uVar15 = 2;
                  }
                  pcVar5 = local_b0;
                  plVar19 = (long *)(lVar17 + (long)iVar7 * 0x18);
                  lVar16 = *(long *)(*(long *)(param_1 + 0x78) + (long)iVar8 * 8);
                  *plVar19 = (long)pcVar4;
                  plVar19[1] = lVar16;
                  *(undefined1 *)(plVar19 + 2) = uVar15;
                  *(int *)((long)plVar19 + 0x14) = iVar9;
                  iVar9 = FUN_00426fc0(uVar11);
                  FUN_0043a810(pcVar5,0,(long)iVar9);
                  uVar12 = FUN_004a9f60(param_1,param_2,&local_b0);
                  uVar11 = uVar12;
                  if ((local_a0 & 1) != 0) {
                    uVar11 = FUN_0043dd50(local_a0 & 0xfffffffffffffffe);
                  }
                  if ((int)uVar12 < 0) {
                    return 0x80040200;
                  }
                } while( true );
              }
              cVar6 = FUN_0049dd00(param_2,"annotates");
              if (cVar6 == '\0') {
                local_b0 = (char *)0x0;
                pcStack_a8 = (char *)0x0;
                iVar7 = FUN_0049da40(param_2,&DAT_040ae7f4,&local_b0);
                if (-1 < iVar7) {
                  if ((local_b0 != pcStack_a8) && (*local_b0 == '\"')) {
                    local_b0 = local_b0 + 1;
                    pcStack_a8 = pcStack_a8 + -1;
                  }
                  uVar10 = FUN_0043a780(local_b0,(long)pcStack_a8 - (long)local_b0,&DAT_0408adeb);
                  if ((uVar10 & 1) != 0) {
                    iVar7 = FUN_0043a2d0(&DAT_0408adeb);
                    local_b0 = local_b0 + iVar7;
                    iVar7 = FUN_0049db00(&local_b0,local_68);
                    if (-1 < iVar7) {
                      if (DAT_04c71448 < 2) {
                        return 0x80040200;
                      }
                      FUN_00444bc0(&local_b0,&DAT_04c713f8,2);
                      lVar16 = FUN_004446b0(&local_b0,
                                            "Found deprecated note \'note{}\'. Must be assigned an explicit unique id and an \'annotates\' attribute, e.g. \'<note id=\"object99\" annotates=\"object{}\">\'"
                                            ,&DAT_048534b8,&local_6c,&local_6c);
                      *(char **)(lVar16 + 0x28) =
                           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Xml/hkXmlReadFormat.cpp"
                      ;
                      *(undefined8 *)(lVar16 + 0x30) = 0x371;
                      FUN_00444c00(&local_b0);
                      return 0x80040200;
                    }
                  }
                }
              }
              else {
                local_b0 = (char *)0x0;
                pcStack_a8 = (char *)0x0;
                iVar9 = FUN_0049da40(param_2,"annotates",&local_b0);
                if (-1 < iVar9) {
                  if ((local_b0 != pcStack_a8) && (*local_b0 == '\"')) {
                    local_b0 = local_b0 + 1;
                    pcStack_a8 = pcStack_a8 + -1;
                  }
                  uVar10 = FUN_0043a780(local_b0,(long)pcStack_a8 - (long)local_b0,"object");
                  if ((uVar10 & 1) != 0) {
                    iVar9 = FUN_0043a2d0("object");
                    local_b0 = local_b0 + iVar9;
                    uVar11 = FUN_0049db00(&local_b0,local_68);
                    if (-1 < (int)uVar11) {
                      local_6c = local_68[0];
                      goto LAB_004a98e4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0x80040200;
}

