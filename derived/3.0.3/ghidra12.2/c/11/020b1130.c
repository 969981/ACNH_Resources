
void FUN_020b1130(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  short sVar7;
  long lVar8;
  undefined *__s;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined **ppuVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  char *pcVar17;
  undefined8 *puVar18;
  uint *puVar19;
  int *piVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  char cVar24;
  uint *puVar25;
  undefined *local_170;
  char *local_168;
  undefined *puStack_160;
  undefined8 local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined **local_d8;
  undefined ***pppuStack_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  char **ppcStack_a8;
  char *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  
  *(undefined8 *)(param_1 + 0x2e40) = 0;
  ppcStack_a8 = &local_90;
  *(undefined8 *)(param_1 + 0x2e50) = 0;
  pcVar17 = PTR_DAT_04bbc1a0 + 0x10;
  local_80 = 0;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_b0 = &PTR_LAB_04a731c0;
  pppuStack_d0 = &local_b0;
  local_70 = 0;
  local_d8 = &PTR_FUN_04983c08;
  lVar21 = *(long *)PTR_DAT_04bb5c90;
  uVar11 = *(uint *)(lVar21 + 0x50);
  local_90 = pcVar17;
  puStack_88 = puVar1;
  local_78 = puVar1;
  if (0 < (int)uVar11) {
    uVar23 = 0;
    do {
      lVar16 = *(long *)(lVar21 + 0x58);
      if (**(int **)(lVar16 + uVar23 * 8) != 0x7e3d1e46) {
        local_170 = (undefined *)CONCAT44(**(undefined4 **)(lVar16 + uVar23 * 8),(int)uVar23);
        lVar16 = *(long *)(lVar16 + uVar23 * 8);
        local_158 = *(undefined8 *)(lVar16 + 0x18);
        local_148 = *(undefined8 *)(lVar16 + 0x28);
        local_168 = pcVar17;
        puStack_160 = puVar1;
        local_150 = puVar1;
        (*(code *)*local_d8)(&local_d8,&local_170);
      }
      uVar23 = uVar23 + 1;
    } while (uVar11 != uVar23);
  }
  puVar9 = PTR_DAT_04bb6298;
  puVar2 = PTR_DAT_04bb27d0;
  ppuVar13 = (undefined **)
             FUN_01d69460(*(undefined8 *)(*(long *)PTR_DAT_04bb27d0 + 0x10),
                          *(undefined2 *)PTR_DAT_04bb6298);
  puVar1 = PTR_DAT_04bb2020;
  lVar21 = *(long *)puVar2;
  local_b0 = ppuVar13;
  if (((lVar21 == 0) || (*(long *)(lVar21 + 0x28) == 0)) || (*(int *)(lVar21 + 0x80) != 1)) {
    sVar7 = *(short *)puVar9;
    if (sVar7 != -1) {
      local_170 = (undefined *)CONCAT44(local_170._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
      if (0xff < (uint)(int)sVar7) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_020b1650;
    }
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_168 = "TodayGlobalEventId";
    local_170 = puVar2;
    iVar10 = FUN_0273ea30(&local_170);
    puVar9 = PTR_DAT_04bb32f0;
    if (iVar10 != 0xffff) {
      local_168 = "TodayGlobalEventId";
      lVar21 = *(long *)PTR_DAT_04bb32f0;
      local_170 = puVar2;
      uVar11 = FUN_0273ea30(&local_170);
      __s = PTR_DAT_04bb3250;
      puVar2 = PTR_DAT_04bb3248;
      uVar6 = *(ushort *)(lVar21 + 0x420);
      uVar11 = (uVar11 & 0xffff) - (uint)uVar6;
      if (((uVar11 < *(uint *)(lVar21 + 0x400)) &&
          (puVar25 = *(uint **)(*(long *)(lVar21 + 0x408) + (long)(int)uVar11 * 8),
          puVar25 != (uint *)0x0)) ||
         ((-(uint)uVar6 < *(uint *)(lVar21 + 0x400) &&
          (puVar25 = *(uint **)(*(long *)(lVar21 + 0x408) + (ulong)uVar6 * -8),
          puVar25 != (uint *)0x0)))) {
        uVar22 = *(undefined8 *)puVar9;
        if (*puVar25 != 0) {
          cVar24 = *PTR_DAT_04bb3248;
          do {
            if (cVar24 == '\0') {
              cVar24 = '\x01';
              *puVar2 = 1;
              memset(__s,0xff,0x288);
            }
            else {
              uVar11 = *(uint *)(__s + 0x148);
              if (-1 < (int)uVar11) {
                pcVar17 = (char *)((ulong)uVar11 + (long)puVar25);
                goto LAB_020b1434;
              }
              if (uVar11 != 0xffffffff) break;
            }
            puVar19 = (uint *)(ulong)*puVar25;
            pcVar17 = (char *)0x0;
            if ((*puVar25 == 0) || (puVar25 == puVar19)) goto LAB_020b1434;
            lVar21 = 0xc;
            if (*(char *)((long)puVar25 + (10 - (long)puVar19)) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar25 + (lVar21 - (long)puVar19);
            if (lVar21 == 0) break;
            uVar23 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar19));
            *(undefined4 *)(__s + 0x148) = 0xfffffffe;
            pcVar17 = (char *)0x0;
            if (uVar23 == 0) goto LAB_020b1434;
            piVar20 = (int *)(lVar21 + 4);
            while (piVar20[-1] != 0x443c0fb7) {
              piVar20 = piVar20 + 2;
              uVar23 = uVar23 - 1;
              if (uVar23 == 0) {
                pcVar17 = (char *)0x0;
                goto LAB_020b1434;
              }
            }
            iVar10 = 0;
            if (*piVar20 != -1) {
              iVar10 = *piVar20;
            }
            *(int *)(__s + 0x148) = iVar10;
          } while (*puVar25 != 0);
        }
        pcVar17 = (char *)0x0;
LAB_020b1434:
        local_168 = *(char **)PTR_PTR_04bb3260;
        if (pcVar17 != (char *)0x0) {
          local_168 = pcVar17;
        }
        local_170 = puVar1 + 0x10;
        uVar23 = FUN_00884390(uVar22,&local_170,ppuVar13);
        if ((uVar23 & 1) != 0) {
          iVar10 = 0;
          ppuVar13 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
          pppuVar3 = (undefined ***)(PTR_DAT_04bb2010 + 0x10);
          do {
            local_c8 = 0;
            local_b8 = 0;
            local_d8 = ppuVar13;
            pppuStack_d0 = pppuVar3;
            local_c0 = pppuVar3;
            if (*puVar25 != 0) {
              cVar24 = *puVar2;
              do {
                if (cVar24 == '\0') {
                  cVar24 = '\x01';
                  *puVar2 = 1;
                  memset(__s,0xff,0x288);
                }
                else {
                  uVar11 = *(uint *)(__s + 0x14c);
                  if (-1 < (int)uVar11) {
                    lVar21 = (ulong)uVar11 + (long)puVar25;
                    goto LAB_020b15d4;
                  }
                  if (uVar11 != 0xffffffff) break;
                }
                puVar19 = (uint *)(ulong)*puVar25;
                lVar21 = 0;
                if ((*puVar25 == 0) || (puVar25 == puVar19)) goto LAB_020b15d4;
                lVar21 = 0xc;
                if (*(char *)((long)puVar25 + (10 - (long)puVar19)) != '\0') {
                  lVar21 = 0x1c;
                }
                lVar16 = (long)puVar25 + (lVar21 - (long)puVar19);
                if (lVar16 == 0) break;
                uVar23 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar19));
                *(undefined4 *)(__s + 0x14c) = 0xfffffffe;
                lVar21 = 0;
                if (uVar23 == 0) goto LAB_020b15d4;
                piVar20 = (int *)(lVar16 + 4);
                while (piVar20[-1] != -0x44991235) {
                  piVar20 = piVar20 + 2;
                  uVar23 = uVar23 - 1;
                  if (uVar23 == 0) {
                    lVar21 = 0;
                    goto LAB_020b15d4;
                  }
                }
                iVar5 = 0;
                if (*piVar20 != -1) {
                  iVar5 = *piVar20;
                }
                *(int *)(__s + 0x14c) = iVar5;
              } while (*puVar25 != 0);
            }
            lVar21 = 0;
LAB_020b15d4:
            lVar16 = *(long *)PTR_PTR_04bb3270;
            if (lVar21 != 0) {
              lVar16 = lVar21;
            }
            FUN_0074fda4(&local_170,"E_%s_NPC_%d",lVar16,iVar10);
            uVar23 = FUN_0118ac30(&local_d8,&local_170);
            if ((uVar23 & 1) != 0) {
              if (((int)local_80 == *(int *)(PTR_DAT_04bb5d40 + 8)) &&
                 (local_80._4_4_ == *(int *)(PTR_DAT_04bb5d40 + 0xc))) {
                local_80 = local_c8;
                iVar14 = local_b8._4_4_;
                iVar4 = (int)local_b8;
              }
              else {
                if ((int)local_c8 <= (int)local_80) {
                  local_80._0_4_ = (int)local_c8;
                }
                if (local_c8._4_4_ <= local_80._4_4_) {
                  local_80._4_4_ = local_c8._4_4_;
                }
                if ((int)local_70 <= (int)local_b8) {
                  local_70._0_4_ = (int)local_b8;
                }
                if (local_70._4_4_ <= local_b8._4_4_) {
                  local_70._4_4_ = local_b8._4_4_;
                }
                iVar5 = (int)local_80;
                if ((int)local_70 <= (int)local_80) {
                  iVar5 = (int)local_70;
                }
                iVar4 = (int)local_80;
                if ((int)local_80 <= (int)local_70) {
                  iVar4 = (int)local_70;
                }
                iVar15 = local_80._4_4_;
                if (local_70._4_4_ <= local_80._4_4_) {
                  iVar15 = local_70._4_4_;
                }
                iVar14 = local_80._4_4_;
                if (local_80._4_4_ <= local_70._4_4_) {
                  iVar14 = local_70._4_4_;
                }
                local_80 = CONCAT44(iVar15,iVar5);
              }
              local_70 = CONCAT44(iVar14,iVar4);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 != 10);
        }
      }
    }
  }
LAB_020b1650:
  lVar21 = *(long *)PTR_DAT_04bb46b0;
  if (lVar21 == 0) goto LAB_020b18b0;
  puVar18 = *(undefined8 **)(lVar21 + 0x10);
  if ((*(byte *)(lVar21 + 0x453) & 1) == 0) {
    lVar21 = (**(code **)(*(long *)*puVar18 + 0x38))();
    if (lVar21 == 0) goto LAB_020b18b0;
    lVar21 = lVar21 + 0x70;
  }
  else if (((puVar18 == (undefined8 *)0x0) || ((long *)puVar18[0x26] == (long *)0x0)) ||
          (lVar21 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(), lVar21 == 0)) goto LAB_020b18b0;
  if ((*(long **)(lVar21 + 0x1bf260) == (long *)0x0) ||
     (puVar18 = (undefined8 *)**(long **)(lVar21 + 0x1bf260), puVar18 == (undefined8 *)0x0)) {
    uVar11 = 1;
  }
  else {
    uVar11 = (**(code **)*puVar18)();
    uVar11 = uVar11 ^ 1;
  }
  uVar12 = FUN_028d6b0c(*(long *)(lVar21 + 0x1bf248) + *(long *)(lVar21 + 0x1bf240));
  if (uVar12 < 0xc) {
    pcVar17 = *(char **)(PTR_DAT_04bbbac0 + (ulong)uVar12 * 8 + 0x38);
    local_170 = PTR_DAT_04bb2020 + 0x10;
    local_168 = pcVar17;
    uVar23 = FUN_028d4a98(&local_b0,&local_170);
    if ((uVar23 & 1) != 0) goto LAB_020b1750;
  }
  else {
    local_170 = PTR_DAT_04bb2020 + 0x10;
    local_168 = "";
    uVar23 = FUN_028d4a98(&local_b0,&local_170);
    if ((uVar23 & 1) != 0) {
      pcVar17 = "";
LAB_020b1750:
      if (pcVar17 != "hgc") {
        if (*pcVar17 != 'h') goto LAB_020b1890;
        lVar16 = 0;
        do {
          if ((lVar16 == 0x80000) || (lVar8 = lVar16 + 1, pcVar17[lVar8] != (&DAT_040d4702)[lVar16])
             ) goto LAB_020b1890;
          lVar16 = lVar16 + 1;
        } while (pcVar17[lVar8] != '\0');
      }
      local_c8 = 0;
      local_d8 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
      pppuStack_d0 = (undefined ***)(PTR_DAT_04bb2010 + 0x10);
      local_b8 = 0;
      if (uVar12 < 0xc) {
        puVar18 = *(undefined8 **)(PTR_DAT_04bbbac0 + (ulong)uVar12 * 8 + 0x38);
      }
      else {
        puVar18 = &DAT_0407ebb1;
      }
      local_c0 = pppuStack_d0;
      FUN_0074fda4(&local_170,"V_%s_EventObj_0",puVar18);
      uVar23 = FUN_0118ac30(&local_d8,&local_170);
      if ((uVar23 & 1) != 0) {
        local_c8._0_4_ = (int)local_c8 + -2;
        iVar10 = (int)local_b8 + -2;
        local_b8 = CONCAT44(local_b8._4_4_,iVar10);
        if (((int)local_80 == *(int *)(PTR_DAT_04bb5d40 + 8)) &&
           (local_80._4_4_ == *(int *)(PTR_DAT_04bb5d40 + 0xc))) {
          local_80 = CONCAT44(local_c8._4_4_,(int)local_c8);
          iVar15 = local_b8._4_4_;
        }
        else {
          if ((int)local_c8 <= (int)local_80) {
            local_80._0_4_ = (int)local_c8;
          }
          if (local_c8._4_4_ <= local_80._4_4_) {
            local_80._4_4_ = local_c8._4_4_;
          }
          if ((int)local_70 <= iVar10) {
            local_70._0_4_ = iVar10;
          }
          if (local_70._4_4_ <= local_b8._4_4_) {
            local_70._4_4_ = local_b8._4_4_;
          }
          iVar5 = (int)local_80;
          if ((int)local_70 <= (int)local_80) {
            iVar5 = (int)local_70;
          }
          iVar10 = (int)local_80;
          if ((int)local_80 <= (int)local_70) {
            iVar10 = (int)local_70;
          }
          iVar4 = local_80._4_4_;
          if (local_70._4_4_ <= local_80._4_4_) {
            iVar4 = local_70._4_4_;
          }
          iVar15 = local_80._4_4_;
          if (local_80._4_4_ <= local_70._4_4_) {
            iVar15 = local_70._4_4_;
          }
          local_80 = CONCAT44(iVar4,iVar5);
        }
        local_70 = CONCAT44(iVar15,iVar10);
      }
    }
  }
LAB_020b1890:
  if ((((uVar11 & 1) == 0) && (*(long *)(lVar21 + 0x1bf260) != 0)) &&
     (puVar18 = *(undefined8 **)(*(long *)(lVar21 + 0x1bf260) + 8), puVar18 != (undefined8 *)0x0)) {
    (**(code **)*puVar18)();
  }
LAB_020b18b0:
  if ((int)local_80 != *(int *)(PTR_DAT_04bb5d40 + 8) ||
      local_80._4_4_ != *(int *)(PTR_DAT_04bb5d40 + 0xc)) {
    local_80._0_4_ = (int)local_80 + -2;
    local_80._4_4_ = local_80._4_4_ + -2;
    local_70._0_4_ = (int)local_70 + 2;
    local_70._4_4_ = local_70._4_4_ + 2;
    iVar10 = (int)local_80;
    if ((int)local_70 <= (int)local_80) {
      iVar10 = (int)local_70;
    }
    if ((int)local_80 <= (int)local_70) {
      local_80._0_4_ = (int)local_70;
    }
    *(int *)(param_1 + 0x2e50) = (int)local_80;
    iVar5 = local_80._4_4_;
    if (local_70._4_4_ <= local_80._4_4_) {
      iVar5 = local_70._4_4_;
    }
    *(int *)(param_1 + 0x2e40) = iVar10;
    *(int *)(param_1 + 0x2e44) = iVar5;
    if (local_80._4_4_ <= local_70._4_4_) {
      local_80._4_4_ = local_70._4_4_;
    }
    *(int *)(param_1 + 0x2e54) = local_80._4_4_;
  }
  return;
}

