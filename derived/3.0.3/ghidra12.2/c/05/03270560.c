
void FUN_03270560(long param_1)

{
  int *piVar1;
  long lVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  long lVar17;
  int *piVar18;
  char *pcVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  byte local_e4;
  undefined4 *local_e0;
  undefined1 local_d8;
  undefined *local_d0;
  long lStack_c8;
  uint local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined4 local_94;
  undefined2 local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  int local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined8 local_70;
  char *pcStack_68;
  
  lVar17 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
  if (lVar17 == 0) {
    uVar20 = 0xffffffff;
  }
  else {
    cVar6 = *(char *)(param_1 + 0xaa9e9);
    uVar20 = 0xffffffff;
    if (-1 < cVar6) {
      iVar11 = *(int *)(lVar17 + 0x2e8);
      iVar12 = 0;
      if (iVar11 != 0) {
        iVar12 = (int)cVar6 / iVar11;
      }
      iVar8 = *(int *)(lVar17 + 0x430) - *(int *)(lVar17 + 0x438);
      iVar13 = iVar8 + iVar12;
      if ((*(byte *)(lVar17 + 1000) >> 1 & 1) != 0) {
        uVar10 = *(uint *)(lVar17 + 0x434);
        uVar20 = 0;
        if ((int)uVar10 < iVar8) {
          uVar20 = ~uVar10;
        }
        if (iVar8 < 0) {
          uVar20 = uVar10 + 1;
        }
        iVar13 = iVar13 + uVar20;
        iVar5 = *(int *)(lVar17 + 0x3d0);
        iVar8 = 0;
        if (iVar5 <= iVar13) {
          iVar8 = iVar5;
        }
        if (-1 < iVar13) {
          iVar5 = -iVar8;
        }
        iVar13 = iVar5 + iVar13;
      }
      uVar20 = ((int)cVar6 - iVar12 * iVar11) + iVar13 * iVar11;
      if (*(int *)(lVar17 + 0x3cc) <= (int)uVar20 || 0x7fffffff < uVar20) {
        uVar20 = 0xffffffff;
      }
    }
  }
  piVar1 = (int *)(param_1 + 0x228);
  FUN_03264a78(&local_7c,piVar1,uVar20);
  puVar14 = PTR_DAT_04bb43c0;
  local_84 = uStack_78;
  uStack_80 = local_74;
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(&local_84);
  if (*(long *)puVar14 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar17 = *(long *)PTR_DAT_04bb5ce0;
      puVar14 = PTR_DAT_04bb37e0;
      if ((lVar17 != 0) && (*(char *)(lVar17 + 0xe9e) != '\0')) {
        puVar14 = (undefined *)(lVar17 + 0xe94);
      }
      uVar10 = FUN_0277d7b4(&local_84,puVar14);
      uVar10 = uVar10 & 1;
      iVar11 = FUN_0267c230(param_1 + 0x1f8);
      iVar12 = FUN_03264b90(piVar1);
      if (iVar12 < (int)uVar10) {
        uVar16 = 0x50;
      }
      else {
        local_88 = 0;
        local_f8 = 0xfffe;
        FUN_0277d4ac(&local_f8);
        local_f0 = 0xfffe;
        FUN_0277d4ac(&local_f0);
        local_e0 = (undefined4 *)0x0;
        local_d8 = 0;
        local_e4 = 0xff;
        local_d0 = PTR_DAT_04bbba70 + 0x10;
        local_b0 = 0;
        uStack_a8 = 0xfffe;
        FUN_0277d4ac(&uStack_a8);
        puVar14 = PTR_DAT_04bb37e0;
        local_a0 = 0xfffe;
        FUN_0277d4ac(&local_a0);
        local_94 = 0xffffffff;
        local_90 = 0;
        local_8c = 0;
        puVar22 = (undefined8 *)puVar14;
        if (*(long *)PTR_DAT_04bb5ce0 != 0) {
          puVar22 = (undefined8 *)(*(long *)PTR_DAT_04bb5ce0 + 0xe70);
        }
        local_f8 = CONCAT44(uStack_80,local_84);
        local_98 = *(undefined2 *)PTR_DAT_04bb3170;
        local_f0 = *puVar22;
        lVar17 = *(long *)PTR_DAT_04bb2720;
        if (lVar17 == 0) {
          puVar22 = &DAT_055c04a0;
        }
        else {
          puVar22 = &DAT_055c04a0;
          if (*(long *)(lVar17 + 0x330) != 0) {
            puVar22 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
            iVar13 = FUN_006bd550(*puVar22,0);
            puVar22 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar13 != 0x758f7eaf) {
              puVar22 = &DAT_055c04a0;
            }
          }
        }
        local_e0 = &local_88;
        local_e4 = *(byte *)(param_1 + 0x1f8);
        local_d0 = &DAT_04b16538;
        local_e8 = *(undefined4 *)(puVar22 + 7);
        if (7 < local_e4) {
          local_e4 = 0xff;
        }
        local_8c = (iVar11 + uVar10) - iVar12;
        lStack_c8 = param_1;
        local_c0 = uVar20;
        iVar11 = FUN_0152352c(&local_f8);
        if (iVar11 != 2) {
          if (iVar11 == 1) {
            lVar17 = *(long *)PTR_DAT_04bb4860;
            sVar7 = *(short *)PTR_DAT_04bb6298;
            pcVar19 = "0201_01";
            if (sVar7 != -1) {
              local_70 = (undefined *)CONCAT44(local_70._4_4_,6);
              puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
              if (0xff < (uint)(int)sVar7) {
                puVar3 = (uint *)PTR_DAT_04bc39f8;
              }
              pcVar19 = "0201_01";
              if ((*puVar3 & 0x40) != 0) {
                pcVar19 = "0201";
              }
            }
            if (((*(char *)(lVar17 + 0x34) == '\0') || (2 < *(int *)(lVar17 + 0x10))) &&
               ((*(char *)(lVar17 + 100) == '\0' || (3 < *(int *)(lVar17 + 0x40))))) {
              *(char **)(lVar17 + 0x50) = pcVar19;
              *(undefined8 *)(lVar17 + 0x38) = 0;
              *(undefined4 *)(lVar17 + 0x40) = 3;
              *(undefined1 *)(lVar17 + 100) = 1;
              *(undefined8 *)(lVar17 + 0x5c) = 0;
              *(undefined1 *)(lVar17 + 0x58) = 0;
            }
            if (uVar10 != 0) {
              lVar17 = *(long *)PTR_DAT_04bb5ce0;
              if ((lVar17 != 0) && (*(char *)(lVar17 + 0xee4) != '\0')) {
                uVar16 = *(undefined4 *)puVar14;
                uVar4 = *(undefined4 *)(puVar14 + 4);
                *(undefined1 *)(lVar17 + 0xe9e) = 0;
                lVar2 = lVar17 + 0xda0;
                *(undefined4 *)(lVar17 + 0xe94) = uVar16;
                *(undefined4 *)(lVar17 + 0xe98) = uVar4;
                puVar14 = PTR_DAT_04bb3170;
                *(undefined4 *)(lVar17 + 0xf9c) = 0xffffffff;
                *(undefined2 *)(lVar17 + 0xe9c) = *(undefined2 *)puVar14;
                FUN_017ef108(lVar2,0,0);
                FUN_017eff3c(lVar2,0,0);
                FUN_017f0b3c(lVar2);
              }
              if ((local_7c != 6) && (0 < *piVar1)) {
                uVar21 = 0;
                do {
                  FUN_03264a78(&local_70,piVar1,uVar21 & 0xffffffff);
                  if ((int)local_70 == 6) {
                    if (((int)uVar21 < *piVar1) &&
                       (piVar18 = *(int **)(*(long *)(param_1 + 0x230) + uVar21 * 8), *piVar18 != 3)
                       ) {
                      *piVar18 = 3;
                    }
                    break;
                  }
                  uVar21 = uVar21 + 1;
                } while ((int)uVar21 < *piVar1);
              }
            }
            uVar20 = *(uint *)(param_1 + 0xaa8e8);
            uVar16 = 0xffffffff;
            if ((-1 < (int)uVar20) && ((int)uVar20 < *(int *)(param_1 + 0xaa8d0))) {
              lVar17 = param_1 + 0xaa8c0;
              uVar10 = uVar20 + 1 & 3;
              if (2 < uVar20) {
                uVar20 = uVar20 + 1 & 0xfffffffc;
                do {
                  uVar20 = uVar20 - 4;
                  lVar17 = *(long *)(*(long *)(*(long *)(*(long *)(lVar17 + 8) + 8) + 8) + 8);
                } while (uVar20 != 0);
              }
              for (; uVar10 != 0; uVar10 = uVar10 - 1) {
                lVar17 = *(long *)(lVar17 + 8);
              }
              uVar16 = 0xffffffff;
              if ((lVar17 != 0) && (lVar17 = lVar17 - *(int *)(param_1 + 0xaa8d4), lVar17 != 0)) {
                uVar16 = *(undefined4 *)(lVar17 + 0x270);
              }
            }
            local_70 = PTR_DAT_04bb2020 + 0x10;
            pcStack_68 = "/L_SortWin_00";
            lVar17 = FUN_02bb21c8(**(long **)(*(long *)(param_1 + 0x210) + 0x3f8) + 0x38,&local_70);
            bVar9 = *(int *)(param_1 + 0x220) == 1;
            uVar15 = 0x1f;
            if (!bVar9) {
              uVar15 = 1;
            }
            local_70 = (undefined *)
                       CONCAT17(bVar9,CONCAT16(uVar15,CONCAT24(*(undefined2 *)(lVar17 + 0x2aa),
                                                               uVar16)));
            FUN_03263030(piVar1,&local_70);
            FUN_03270ef0(param_1,0xffffffff);
            FUN_03271190(param_1,0);
            FUN_0345b4a0(*(undefined8 *)(*(long *)(param_1 + 0x210) + 0x588),0);
            return;
          }
          if (iVar11 != 0) {
            return;
          }
          if (uVar10 != 0) {
            lVar17 = *(long *)PTR_DAT_04bb5ce0;
            if ((lVar17 != 0) && (*(char *)(lVar17 + 0xee4) != '\0')) {
              *(undefined1 *)(lVar17 + 0xe9e) = 0;
              lVar2 = lVar17 + 0xda0;
              uVar16 = *(undefined4 *)(puVar14 + 4);
              *(undefined4 *)(lVar17 + 0xe94) = *(undefined4 *)puVar14;
              *(undefined4 *)(lVar17 + 0xe98) = uVar16;
              puVar14 = PTR_DAT_04bb3170;
              *(undefined4 *)(lVar17 + 0xf9c) = 0xffffffff;
              *(undefined2 *)(lVar17 + 0xe9c) = *(undefined2 *)puVar14;
              FUN_017ef108(lVar2,0,0);
              FUN_017eff3c(lVar2,0,0);
              FUN_017f0b3c(lVar2);
            }
            if ((local_7c != 6) && (0 < *piVar1)) {
              uVar21 = 0;
              do {
                FUN_03264a78(&local_70,piVar1,uVar21 & 0xffffffff);
                if ((int)local_70 == 6) {
                  if (((int)uVar21 < *piVar1) &&
                     (piVar18 = *(int **)(*(long *)(param_1 + 0x230) + uVar21 * 8), *piVar18 != 3))
                  {
                    *piVar18 = 3;
                  }
                  break;
                }
                uVar21 = uVar21 + 1;
              } while ((int)uVar21 < *piVar1);
            }
          }
          local_70 = (undefined *)CONCAT44(local_70._4_4_,1);
          FUN_032646b0(piVar1,uVar20,&local_70);
          return;
        }
        uVar16 = 0xc;
      }
      *(undefined4 *)(param_1 + 0xaa9f8) = uVar16;
      if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
        *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 8;
      }
    }
  }
  return;
}

