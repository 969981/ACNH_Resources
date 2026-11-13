
/* WARNING: Removing unreachable block (ram,0x0132edb0) */
/* WARNING: Removing unreachable block (ram,0x0132ec80) */
/* WARNING: Removing unreachable block (ram,0x0132edec) */
/* WARNING: Removing unreachable block (ram,0x0132ed90) */
/* WARNING: Removing unreachable block (ram,0x0132f4b4) */
/* WARNING: Removing unreachable block (ram,0x0132f5c4) */
/* WARNING: Removing unreachable block (ram,0x0132f7b8) */
/* WARNING: Removing unreachable block (ram,0x0132f5e0) */
/* WARNING: Removing unreachable block (ram,0x0132f588) */
/* WARNING: Removing unreachable block (ram,0x0132f5a8) */
/* WARNING: Removing unreachable block (ram,0x0132f778) */
/* WARNING: Removing unreachable block (ram,0x0132f480) */
/* WARNING: Removing unreachable block (ram,0x0132f7f4) */
/* WARNING: Removing unreachable block (ram,0x0132f79c) */
/* WARNING: Removing unreachable block (ram,0x0132edcc) */
/* WARNING: Removing unreachable block (ram,0x0132ef78) */
/* WARNING: Removing unreachable block (ram,0x0132ef9c) */
/* WARNING: Removing unreachable block (ram,0x0132ecb4) */
/* WARNING: Removing unreachable block (ram,0x0132f00c) */
/* WARNING: Removing unreachable block (ram,0x0132efb8) */
/* WARNING: Removing unreachable block (ram,0x0132f7d8) */
/* WARNING: Removing unreachable block (ram,0x0132eff4) */
/* WARNING: Removing unreachable block (ram,0x0132efd8) */
/* WARNING: Removing unreachable block (ram,0x0132ead0) */
/* WARNING: Removing unreachable block (ram,0x0132f200) */
/* WARNING: Removing unreachable block (ram,0x0132eae0) */
/* WARNING: Removing unreachable block (ram,0x0132eaec) */
/* WARNING: Removing unreachable block (ram,0x0132f80c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff5e : 0x0132f014 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0132e920(long param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 uVar17;
  long lVar18;
  short *psVar19;
  ushort uVar20;
  ushort uVar21;
  uint *puVar22;
  char cVar23;
  int *piVar24;
  ulong uVar25;
  long lVar26;
  undefined **ppuStack_3d5a0;
  char *pcStack_3d598;
  byte bStack_3d57d;
  undefined **ppuStack_3d4e0;
  char *pcStack_3d4d8;
  undefined8 uStack_3d4d0;
  undefined8 uStack_3d4c8;
  uint uStack_3d4c0;
  undefined **ppuStack_3d4b8;
  void *pvStack_356b0;
  undefined *puStack_1eaa8;
  undefined8 uStack_1eaa0;
  undefined4 uStack_1ea98;
  undefined1 auStack_1ea94 [255];
  undefined1 uStack_1e995;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined4 local_78;
  undefined8 local_70;
  
  puVar2 = PTR_DAT_04bb2020;
  if (*param_2 == 0) {
    return;
  }
  lVar26 = 1;
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  pcStack_3d598 = "FieldPresetParamsLandMakingHeap";
  ppuStack_3d5a0 = ppuVar1;
  plVar9 = (long *)FUN_038c6d48(&LAB_00500000,&ppuStack_3d5a0,*param_2,8,1,0);
  if (plVar9 != (long *)0x0) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar26 = *(long *)(lVar10 + 0xa8);
    *(long **)(lVar10 + 0xa8) = plVar9;
  }
  pcStack_3d598 = "CommuneExpanded";
  ppuStack_3d5a0 = ppuVar1;
  uVar11 = FUN_0273f0a0(&ppuStack_3d5a0);
  if ((uVar11 & 1) == 0) {
    FUN_00751ec0(&ppuStack_3d5a0,&DAT_05193250,param_1 + 8,0);
    local_98 = puVar2 + 0x10;
    local_a0 = 0x40d9e41;
    local_9c = 0;
    pcStack_90 = "PlacementDataBuffer";
    ppuStack_3d5a0 = (undefined **)(PTR_DAT_04bbc3b8 + 0x10);
    puStack_80 = &DAT_0407ebb1;
    local_78 = 8;
    local_88 = local_98;
    local_a8 = local_98;
    memset(&puStack_1eaa8,0,0x7e00);
    FUN_013294c0(&ppuStack_3d4e0,&local_a8,&puStack_1eaa8,&ppuStack_3d5a0);
    uStack_1e995 = 0;
    uStack_1eaa0 = auStack_1ea94;
    uStack_1ea98 = 0x100;
    auStack_1ea94[0] = 0;
    ppuStack_3d4e0 = (undefined **)(PTR_DAT_04bbc3c0 + 0x10);
    puStack_1eaa8 = PTR_DAT_04bb21f8 + 0x10;
    uVar11 = (*(code *)ppuStack_3d5a0[0x1e])(&ppuStack_3d5a0,&puStack_1eaa8,1);
    if ((uVar11 & 1) != 0) {
      FUN_03c27e60(&ppuStack_3d5a0,&puStack_1eaa8,plVar9);
    }
    if (((bStack_3d57d & 1) != 0) && (lVar10 = *(long *)(param_2[1] + 0xa8), lVar10 != 0)) {
      uVar11 = 0;
      puVar14 = (undefined8 *)(lVar10 + 0x38);
      puVar2 = PTR_DAT_04bb2018 + 0x10;
      do {
        uVar25 = 0;
        do {
          plVar12 = (long *)(**(code **)*puVar14)(puVar14);
          uVar15 = (**(code **)(*plVar12 + 0x18))();
          if (uVar25 < (uVar15 & 0xffffffff)) {
            plVar12 = (long *)(**(code **)*puVar14)(puVar14);
            uVar15 = (**(code **)(*plVar12 + 0x20))();
            if (uVar11 < (uVar15 & 0xffffffff)) {
              local_9c = local_9c & 0xffffff00;
              lVar13 = uVar25 + uVar11 * 0x30;
              local_a8._4_4_ = 0xffff0000;
              local_a0 = 0;
              local_a8._0_4_ = 0xffff;
              lVar16 = (*(code *)ppuStack_3d4e0[0x1e])(&ppuStack_3d4e0);
              psVar19 = (short *)(lVar16 + 8 + lVar13 * 0xe);
              if (*psVar19 == -1) {
                local_a8._0_4_ = (uint)local_a8._2_2_ << 0x10;
              }
              else {
                local_a8._0_4_ = CONCAT22(local_a8._2_2_,*psVar19);
              }
              lVar18 = *(long *)PTR_DAT_04bb27a8;
              uVar3 = ((uint)local_a8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x408);
              if (((uVar3 < *(uint *)(lVar18 + 1000)) &&
                  (puVar22 = *(uint **)(*(long *)(lVar18 + 0x3f0) + (long)(int)uVar3 * 8),
                  puVar22 != (uint *)0x0)) && (uVar3 = *puVar22, uVar3 != 0)) {
                cVar23 = *PTR_DAT_04bbbdd8;
                do {
                  if (cVar23 == '\0') {
                    cVar23 = '\x01';
                    *PTR_DAT_04bbbdd8 = 1;
                    puVar8 = PTR_DAT_04bbbde0;
                    *(undefined8 *)PTR_DAT_04bbbde0 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0xa0) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x80) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x88) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x90) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x98) = 0xffffffffffffffff;
                    uVar3 = *puVar22;
                  }
                  else if ((-1 < *(int *)(PTR_DAT_04bbbde0 + 0x20)) ||
                          (*(int *)(PTR_DAT_04bbbde0 + 0x20) != -1)) break;
                  puVar7 = (uint *)(ulong)uVar3;
                  if ((puVar7 == (uint *)0x0) || (puVar22 == puVar7)) break;
                  lVar5 = 0xc;
                  if (*(char *)((long)puVar22 + (10 - (long)puVar7)) != '\0') {
                    lVar5 = 0x1c;
                  }
                  lVar5 = (long)puVar22 + (lVar5 - (long)puVar7);
                  if (lVar5 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar7));
                  *(undefined4 *)(PTR_DAT_04bbbde0 + 0x20) = 0xfffffffe;
                  if (uVar15 == 0) break;
                  piVar24 = (int *)(lVar5 + 4);
                  while (piVar24[-1] != -0x38cc5589) {
                    piVar24 = piVar24 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_0132ef44;
                  }
                  iVar4 = 0;
                  if (*piVar24 != -1) {
                    iVar4 = *piVar24;
                  }
                  *(int *)(PTR_DAT_04bbbde0 + 0x20) = iVar4;
                  uVar3 = *puVar22;
                  if (uVar3 == 0) break;
                } while( true );
              }
LAB_0132ef44:
              local_70 = CONCAT44((int)(local_70 >> 0x20),1);
              if (psVar19[3] == 0xffff) {
                local_a8._4_4_ = 0;
              }
              else {
                local_a8._4_4_ = (uint)(ushort)psVar19[3];
              }
              if ((-(uint)*(ushort *)(lVar18 + 0x408) < *(uint *)(lVar18 + 1000)) &&
                 (puVar22 = *(uint **)(*(long *)(lVar18 + 0x3f0) +
                                      (long)(int)-(uint)*(ushort *)(lVar18 + 0x408) * 8),
                 puVar22 != (uint *)0x0)) {
                uVar3 = *puVar22;
                uVar20 = psVar19[4];
                if (uVar3 != 0) {
                  cVar23 = *PTR_DAT_04bbbdd8;
                  do {
                    if (cVar23 == '\0') {
                      cVar23 = '\x01';
                      *PTR_DAT_04bbbdd8 = 1;
                      puVar8 = PTR_DAT_04bbbde0;
                      *(undefined8 *)PTR_DAT_04bbbde0 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0xa0) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x80) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x88) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x90) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x98) = 0xffffffffffffffff;
                      uVar3 = *puVar22;
                    }
                    else {
                      uVar6 = *(uint *)(PTR_DAT_04bbbde0 + 0x20);
                      if (-1 < (int)uVar6) {
                        uVar21 = 0;
                        if ((ushort *)((ulong)uVar6 + (long)puVar22) != (ushort *)0x0) {
                          uVar21 = *(ushort *)((ulong)uVar6 + (long)puVar22);
                        }
                        goto LAB_0132f164;
                      }
                      if (uVar6 != 0xffffffff) break;
                    }
                    puVar7 = (uint *)(ulong)uVar3;
                    if ((puVar7 == (uint *)0x0) || (puVar22 == puVar7)) break;
                    lVar18 = 0xc;
                    if (*(char *)((long)puVar22 + (10 - (long)puVar7)) != '\0') {
                      lVar18 = 0x1c;
                    }
                    lVar18 = (long)puVar22 + (lVar18 - (long)puVar7);
                    if (lVar18 == 0) break;
                    uVar15 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar7));
                    *(undefined4 *)(PTR_DAT_04bbbde0 + 0x20) = 0xfffffffe;
                    if (uVar15 == 0) break;
                    piVar24 = (int *)(lVar18 + 4);
                    while (piVar24[-1] != -0x38cc5589) {
                      piVar24 = piVar24 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_0132f150;
                    }
                    iVar4 = 0;
                    if (*piVar24 != -1) {
                      iVar4 = *piVar24;
                    }
                    *(int *)(PTR_DAT_04bbbde0 + 0x20) = iVar4;
                    uVar3 = *puVar22;
                    if (uVar3 == 0) break;
                  } while( true );
                }
LAB_0132f150:
                uVar21 = 0;
              }
              else {
                uVar21 = 0;
                uVar20 = psVar19[4];
              }
LAB_0132f164:
              if (uVar21 < uVar20) {
                uVar17 = 0;
              }
              else {
                uVar17 = (undefined1)psVar19[4];
              }
              local_a0._0_2_ = CONCAT11((char)psVar19[5],uVar17);
              local_a0 = CONCAT12(local_a0._3_1_,(undefined2)local_a0);
              local_9c = CONCAT31(local_9c._1_3_,*(undefined1 *)(lVar16 + 8 + lVar13 * 0xe + 0xc));
              uStack_1eaa0 = (undefined1 *)
                             CONCAT44(*(int *)(lVar10 + 0x1c) + (int)uVar11,
                                      *(int *)(lVar10 + 0x18) + (int)uVar25);
              puStack_1eaa8 = puVar2;
              FUN_01309ff0(lVar10,&local_a8,&puStack_1eaa8);
            }
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 != 0x30);
        uVar11 = uVar11 + 1;
      } while (uVar11 != 0x30);
    }
    (*(code *)ppuStack_3d5a0[4])(&ppuStack_3d5a0);
    ppuStack_3d5a0 = (undefined **)(PTR_DAT_04bbc3b8 + 0x10);
    ppuStack_3d4e0 = (undefined **)(PTR_DAT_04bbc3c8 + 0x10);
    uVar11 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                       (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),pvStack_356b0);
    if (((uVar11 & 1) != 0) && (pvStack_356b0 != (void *)0x0)) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvStack_356b0);
      }
      else {
        plVar12 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvStack_356b0);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x38))(plVar12,pvStack_356b0);
        }
      }
    }
    goto LAB_0132fa30;
  }
  FUN_00751ec0(&ppuStack_3d5a0,&DAT_05193250,param_1 + 8,0);
  ppuStack_3d5a0 = &PTR_FUN_0498f020;
  memset(&puStack_1eaa8,0,0x1ea00);
  ppuStack_3d4e0 = &PTR_FUN_0498f2d0;
  pcStack_3d4d8 = "mData";
  uStack_3d4c0 = 8;
  ppuStack_3d4b8 = &PTR_LAB_0498f410;
  uStack_3d4d0 = 0;
  uStack_3d4c8 = 0;
  FUN_03c28900(&ppuStack_3d5a0,&ppuStack_3d4e0);
  lVar10 = (*(code *)ppuStack_3d4e0[0x1e])(&ppuStack_3d4e0);
  memcpy((void *)(lVar10 + 8),&uStack_1eaa0,0x1ea00);
  puVar2 = PTR_DAT_04bb3058;
  uVar6 = uStack_3d4c0 | 0x1000000;
  uVar3 = uStack_3d4c0 >> 7;
  uStack_3d4c0 = uVar6;
  if ((uVar3 & 1) == 0) {
    (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
              (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),0);
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    local_70 = 0;
    nn::os::GetCurrentStackInfo(&local_a8,&local_70);
    if ((&puStack_1eaa8 < (undefined **)CONCAT44(local_a8._4_4_,(uint)local_a8)) ||
       ((undefined **)(local_70 + (long)CONCAT44(local_a8._4_4_,(uint)local_a8)) <= &puStack_1eaa8))
    {
      if (*(long *)PTR_DAT_04bb2698 != 0) {
        if (*(int *)PTR_DAT_04bd0ca0 != 0) {
          puVar14 = *(undefined8 **)(PTR_DAT_04bd0ca0 + 8);
          lVar10 = (long)*(int *)PTR_DAT_04bd0ca0 << 3;
          do {
            uVar11 = (**(code **)(*(long *)*puVar14 + 0x88))((long *)*puVar14,&puStack_1eaa8);
            if ((uVar11 & 1) != 0) goto LAB_0132f248;
            puVar14 = puVar14 + 1;
            lVar10 = lVar10 + -8;
          } while (lVar10 != 0);
        }
        if (*(int *)PTR_DAT_04bd0d70 != 0) {
          puVar14 = *(undefined8 **)(PTR_DAT_04bd0d70 + 8);
          lVar10 = (long)*(int *)PTR_DAT_04bd0d70 << 3;
          do {
            uVar11 = (**(code **)(*(long *)*puVar14 + 0x88))((long *)*puVar14,&puStack_1eaa8);
            if ((uVar11 & 1) != 0) goto LAB_0132f248;
            puVar14 = puVar14 + 1;
            lVar10 = lVar10 + -8;
          } while (lVar10 != 0);
        }
      }
    }
    else {
LAB_0132f248:
      lVar10 = *(long *)PTR_DAT_04bb2698;
      if (lVar10 == 0) {
        puVar14 = malloc(0x1ea08);
      }
      else {
        plVar12 = *(long **)(*(long *)puVar2 + 0x330);
        if (plVar12 == (long *)0x0) {
          lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar12 = (long *)(lVar10 + 8);
          if (lVar13 != 0) {
            plVar12 = (long *)(lVar13 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) {
            puVar14 = (undefined8 *)0x0;
            goto LAB_0132f35c;
          }
        }
        puVar14 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,0x1ea08,8);
      }
LAB_0132f35c:
      *puVar14 = &PTR_LAB_0498f410;
      memcpy(puVar14 + 1,&uStack_1eaa0,0x1ea00);
    }
  }
  uStack_3d4c0 = uStack_3d4c0 & 0xfeffffff;
  uStack_1e995 = 0;
  ppuStack_3d4e0 = &PTR_FUN_0498f190;
  uStack_1eaa0 = auStack_1ea94;
  uStack_1ea98 = 0x100;
  auStack_1ea94[0] = 0;
  puStack_1eaa8 = PTR_DAT_04bb21f8 + 0x10;
  uVar11 = (*(code *)ppuStack_3d5a0[0x1e])(&ppuStack_3d5a0,&puStack_1eaa8,1);
  if ((uVar11 & 1) != 0) {
    FUN_03c27e60(&ppuStack_3d5a0,&puStack_1eaa8,plVar9);
  }
  if (((bStack_3d57d & 1) != 0) && (lVar10 = *(long *)(param_2[1] + 0xa8), lVar10 != 0)) {
    uVar11 = 0;
    puVar14 = (undefined8 *)(lVar10 + 0x38);
    puVar2 = PTR_DAT_04bb2018 + 0x10;
    do {
      uVar25 = 0;
      do {
        plVar12 = (long *)(**(code **)*puVar14)(puVar14);
        uVar15 = (**(code **)(*plVar12 + 0x18))();
        if (uVar25 < (uVar15 & 0xffffffff)) {
          plVar12 = (long *)(**(code **)*puVar14)(puVar14);
          uVar15 = (**(code **)(*plVar12 + 0x20))();
          if (uVar11 < (uVar15 & 0xffffffff)) {
            local_a8._0_4_ = 0xffff;
            local_9c = local_9c & 0xffffff00;
            lVar13 = uVar25 + uVar11 * 0x70;
            local_a8._4_4_ = 0xffff0000;
            local_a0 = 0;
            lVar16 = (*(code *)ppuStack_3d4e0[0x1e])(&ppuStack_3d4e0);
            psVar19 = (short *)(lVar16 + 8 + lVar13 * 0xe);
            if (*psVar19 == -1) {
              local_a8._0_4_ = (uint)local_a8._2_2_ << 0x10;
            }
            else {
              local_a8._0_4_ = CONCAT22(local_a8._2_2_,*psVar19);
            }
            lVar18 = *(long *)PTR_DAT_04bb27a8;
            uVar3 = ((uint)local_a8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x408);
            if (((uVar3 < *(uint *)(lVar18 + 1000)) &&
                (puVar22 = *(uint **)(*(long *)(lVar18 + 0x3f0) + (long)(int)uVar3 * 8),
                puVar22 != (uint *)0x0)) && (uVar3 = *puVar22, uVar3 != 0)) {
              cVar23 = *PTR_DAT_04bbbdd8;
              do {
                if (cVar23 == '\0') {
                  cVar23 = '\x01';
                  *PTR_DAT_04bbbdd8 = 1;
                  puVar8 = PTR_DAT_04bbbde0;
                  *(undefined8 *)PTR_DAT_04bbbde0 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0xa0) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x98) = 0xffffffffffffffff;
                  uVar3 = *puVar22;
                }
                else if ((-1 < *(int *)(PTR_DAT_04bbbde0 + 0x20)) ||
                        (*(int *)(PTR_DAT_04bbbde0 + 0x20) != -1)) break;
                puVar7 = (uint *)(ulong)uVar3;
                if ((puVar7 == (uint *)0x0) || (puVar22 == puVar7)) break;
                lVar5 = 0xc;
                if (*(char *)((long)puVar22 + (10 - (long)puVar7)) != '\0') {
                  lVar5 = 0x1c;
                }
                lVar5 = (long)puVar22 + (lVar5 - (long)puVar7);
                if (lVar5 == 0) break;
                uVar15 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar7));
                *(undefined4 *)(PTR_DAT_04bbbde0 + 0x20) = 0xfffffffe;
                if (uVar15 == 0) break;
                piVar24 = (int *)(lVar5 + 4);
                while (piVar24[-1] != -0x38cc5589) {
                  piVar24 = piVar24 + 2;
                  uVar15 = uVar15 - 1;
                  if (uVar15 == 0) goto LAB_0132f744;
                }
                iVar4 = 0;
                if (*piVar24 != -1) {
                  iVar4 = *piVar24;
                }
                *(int *)(PTR_DAT_04bbbde0 + 0x20) = iVar4;
                uVar3 = *puVar22;
                if (uVar3 == 0) break;
              } while( true );
            }
LAB_0132f744:
            local_70 = CONCAT44((int)(local_70 >> 0x20),1);
            if (psVar19[3] == 0xffff) {
              local_a8._4_4_ = 0;
            }
            else {
              local_a8._4_4_ = (uint)(ushort)psVar19[3];
            }
            if ((-(uint)*(ushort *)(lVar18 + 0x408) < *(uint *)(lVar18 + 1000)) &&
               (puVar22 = *(uint **)(*(long *)(lVar18 + 0x3f0) +
                                    (long)(int)-(uint)*(ushort *)(lVar18 + 0x408) * 8),
               puVar22 != (uint *)0x0)) {
              uVar3 = *puVar22;
              uVar20 = psVar19[4];
              if (uVar3 != 0) {
                cVar23 = *PTR_DAT_04bbbdd8;
                do {
                  if (cVar23 == '\0') {
                    cVar23 = '\x01';
                    *PTR_DAT_04bbbdd8 = 1;
                    puVar8 = PTR_DAT_04bbbde0;
                    *(undefined8 *)PTR_DAT_04bbbde0 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0xa0) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x80) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x88) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x90) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar8 + 0x98) = 0xffffffffffffffff;
                    uVar3 = *puVar22;
                  }
                  else {
                    uVar6 = *(uint *)(PTR_DAT_04bbbde0 + 0x20);
                    if (-1 < (int)uVar6) {
                      uVar21 = 0;
                      if ((ushort *)((ulong)uVar6 + (long)puVar22) != (ushort *)0x0) {
                        uVar21 = *(ushort *)((ulong)uVar6 + (long)puVar22);
                      }
                      goto LAB_0132f964;
                    }
                    if (uVar6 != 0xffffffff) break;
                  }
                  puVar7 = (uint *)(ulong)uVar3;
                  if ((puVar7 == (uint *)0x0) || (puVar22 == puVar7)) break;
                  lVar18 = 0xc;
                  if (*(char *)((long)puVar22 + (10 - (long)puVar7)) != '\0') {
                    lVar18 = 0x1c;
                  }
                  lVar18 = (long)puVar22 + (lVar18 - (long)puVar7);
                  if (lVar18 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar7));
                  *(undefined4 *)(PTR_DAT_04bbbde0 + 0x20) = 0xfffffffe;
                  if (uVar15 == 0) break;
                  piVar24 = (int *)(lVar18 + 4);
                  while (piVar24[-1] != -0x38cc5589) {
                    piVar24 = piVar24 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_0132f950;
                  }
                  iVar4 = 0;
                  if (*piVar24 != -1) {
                    iVar4 = *piVar24;
                  }
                  *(int *)(PTR_DAT_04bbbde0 + 0x20) = iVar4;
                  uVar3 = *puVar22;
                  if (uVar3 == 0) break;
                } while( true );
              }
LAB_0132f950:
              uVar21 = 0;
            }
            else {
              uVar21 = 0;
              uVar20 = psVar19[4];
            }
LAB_0132f964:
            if (uVar21 < uVar20) {
              uVar17 = 0;
            }
            else {
              uVar17 = (undefined1)psVar19[4];
            }
            local_a0._0_2_ = CONCAT11((char)psVar19[5],uVar17);
            local_a0 = CONCAT12(local_a0._3_1_,(undefined2)local_a0);
            local_9c = CONCAT31(local_9c._1_3_,*(undefined1 *)(lVar16 + 8 + lVar13 * 0xe + 0xc));
            uStack_1eaa0 = (undefined1 *)
                           CONCAT44(*(int *)(lVar10 + 0x1c) + (int)uVar11,
                                    *(int *)(lVar10 + 0x18) + (int)uVar25);
            puStack_1eaa8 = puVar2;
            FUN_01309ff0(lVar10,&local_a8,&puStack_1eaa8);
          }
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 != 0x70);
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x50);
  }
  (*(code *)ppuStack_3d5a0[4])(&ppuStack_3d5a0);
  ppuStack_3d5a0 = &PTR_FUN_0498f020;
  ppuStack_3d4e0 = &PTR_FUN_0498f2d0;
  uVar11 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                     (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),0);
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,(uint)local_a8);
  if ((uVar11 & 1) != 0) {
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,(uint)local_a8);
  }
LAB_0132fa30:
  if (lVar26 != 1) {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar10 + 0xa8) = lVar26;
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  return;
}

