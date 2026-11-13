
/* WARNING: Removing unreachable block (ram,0x0133a920) */
/* WARNING: Removing unreachable block (ram,0x0133ab30) */
/* WARNING: Removing unreachable block (ram,0x0133a940) */
/* WARNING: Removing unreachable block (ram,0x0133a80c) */
/* WARNING: Removing unreachable block (ram,0x0133a95c) */
/* WARNING: Removing unreachable block (ram,0x0133aaf0) */
/* WARNING: Removing unreachable block (ram,0x0133ab14) */
/* WARNING: Removing unreachable block (ram,0x0133a840) */
/* WARNING: Removing unreachable block (ram,0x0133ab6c) */
/* WARNING: Removing unreachable block (ram,0x0133a978) */
/* WARNING: Removing unreachable block (ram,0x0133ab50) */
/* WARNING: Removing unreachable block (ram,0x0133ab84) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff66 : 0x0133ab8c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0133a5c0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined1 uVar16;
  long lVar17;
  short *psVar18;
  ushort uVar19;
  ushort uVar20;
  uint *puVar21;
  char cVar22;
  int *piVar23;
  long lVar24;
  ulong uVar25;
  undefined *local_fd98;
  char *pcStack_fd90;
  byte local_fd75;
  undefined *local_fcd8 [4038];
  void *local_7ea8;
  undefined *local_7ea0;
  undefined8 local_7e98;
  undefined4 local_7e90;
  undefined1 local_7e8c [255];
  undefined1 local_7d8d;
  undefined8 local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined *local_90;
  char *local_88;
  undefined *local_80;
  undefined8 *local_78;
  undefined4 local_70;
  
  if (*param_2 != 0) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_fd90 = "FieldPresetParamsLandMakingHeap";
    lVar24 = 1;
    local_fd98 = puVar1;
    plVar10 = (long *)FUN_038c6d48(&LAB_00500000,&local_fd98,*param_2,8,1,0);
    if (plVar10 != (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar24 = *(long *)(lVar11 + 0xa8);
      *(long **)(lVar11 + 0xa8) = plVar10;
    }
    FUN_00751ec0(&local_fd98,&DAT_05195770,param_1 + 0x10,0);
    local_98 = 0x40d9e41;
    uStack_94 = 0;
    local_88 = "PlacementDataBuffer";
    local_fd98 = PTR_DAT_04bbc3b8 + 0x10;
    local_78 = &DAT_0407ebb1;
    local_70 = 8;
    local_90 = puVar1;
    local_80 = puVar1;
    local_a0 = puVar1;
    memset(&local_7ea0,0,0x7e00);
    FUN_013294c0(local_fcd8,&local_a0,&local_7ea0,&local_fd98);
    local_7e98 = local_7e8c;
    local_7d8d = 0;
    local_7e8c[0] = 0;
    local_7e90 = 0x100;
    local_fcd8[0] = PTR_DAT_04bbc3c0 + 0x10;
    local_7ea0 = PTR_DAT_04bb21f8 + 0x10;
    uVar12 = (**(code **)(local_fd98 + 0xf0))(&local_fd98,&local_7ea0,1);
    if ((uVar12 & 1) != 0) {
      FUN_03c27e60(&local_fd98,&local_7ea0,plVar10);
    }
    puVar1 = PTR_DAT_04bbbde0;
    if (((local_fd75 & 1) != 0) && (lVar11 = *(long *)(param_2[1] + 0xa8), lVar11 != 0)) {
      uVar12 = 0;
      puVar2 = (undefined8 *)(lVar11 + 0x38);
      puVar3 = PTR_DAT_04bb2018 + 0x10;
      do {
        uVar25 = 0;
        do {
          plVar13 = (long *)(**(code **)*puVar2)(puVar2);
          uVar14 = (**(code **)(*plVar13 + 0x18))();
          if (uVar25 < (uVar14 & 0xffffffff)) {
            plVar13 = (long *)(**(code **)*puVar2)(puVar2);
            uVar14 = (**(code **)(*plVar13 + 0x20))();
            if (uVar12 < (uVar14 & 0xffffffff)) {
              lVar4 = uVar25 + uVar12 * 0x30;
              local_a0._4_4_ = 0xffff0000;
              local_98 = 0;
              local_a0._0_4_ = 0xffff;
              uStack_94 = uStack_94 & 0xffffff00;
              lVar15 = (**(code **)(local_fcd8[0] + 0xf0))(local_fcd8);
              psVar18 = (short *)(lVar15 + 8 + lVar4 * 0xe);
              if (*psVar18 == -1) {
                local_a0._0_4_ = (uint)local_a0._2_2_ << 0x10;
              }
              else {
                local_a0._0_4_ = CONCAT22(local_a0._2_2_,*psVar18);
              }
              lVar17 = *(long *)PTR_DAT_04bb27a8;
              uVar8 = ((uint)local_a0 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x408);
              if (((uVar8 < *(uint *)(lVar17 + 1000)) &&
                  (puVar21 = *(uint **)(*(long *)(lVar17 + 0x3f0) + (long)(int)uVar8 * 8),
                  puVar21 != (uint *)0x0)) && (uVar8 = *puVar21, uVar8 != 0)) {
                cVar22 = *PTR_DAT_04bbbdd8;
                do {
                  if (cVar22 == '\0') {
                    cVar22 = '\x01';
                    *PTR_DAT_04bbbdd8 = 1;
                    *(undefined8 *)(puVar1 + 0xa0) = 0xffffffffffffffff;
                    *(undefined8 *)puVar1 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x58) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x60) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x68) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x70) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x78) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x80) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x88) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x90) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar1 + 0x98) = 0xffffffffffffffff;
                    uVar8 = *puVar21;
                  }
                  else if ((-1 < *(int *)(puVar1 + 0x20)) || (*(int *)(puVar1 + 0x20) != -1)) break;
                  puVar9 = (uint *)(ulong)uVar8;
                  if ((puVar9 == (uint *)0x0) || (puVar21 == puVar9)) break;
                  lVar6 = 0xc;
                  if (*(char *)((long)puVar21 + (10 - (long)puVar9)) != '\0') {
                    lVar6 = 0x1c;
                  }
                  lVar6 = (long)puVar21 + (lVar6 - (long)puVar9);
                  if (lVar6 == 0) break;
                  uVar14 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar9));
                  *(undefined4 *)(puVar1 + 0x20) = 0xfffffffe;
                  if (uVar14 == 0) break;
                  piVar23 = (int *)(lVar6 + 4);
                  while (piVar23[-1] != -0x38cc5589) {
                    piVar23 = piVar23 + 2;
                    uVar14 = uVar14 - 1;
                    if (uVar14 == 0) goto LAB_0133aabc;
                  }
                  iVar5 = 0;
                  if (*piVar23 != -1) {
                    iVar5 = *piVar23;
                  }
                  *(int *)(puVar1 + 0x20) = iVar5;
                  uVar8 = *puVar21;
                  if (uVar8 == 0) break;
                } while( true );
              }
LAB_0133aabc:
              if (psVar18[3] == 0xffff) {
                local_a0._4_4_ = 0;
              }
              else {
                local_a0._4_4_ = (uint)(ushort)psVar18[3];
              }
              if ((-(uint)*(ushort *)(lVar17 + 0x408) < *(uint *)(lVar17 + 1000)) &&
                 (puVar21 = *(uint **)(*(long *)(lVar17 + 0x3f0) +
                                      (long)(int)-(uint)*(ushort *)(lVar17 + 0x408) * 8),
                 puVar21 != (uint *)0x0)) {
                uVar8 = *puVar21;
                uVar19 = psVar18[4];
                if (uVar8 != 0) {
                  cVar22 = *PTR_DAT_04bbbdd8;
                  do {
                    if (cVar22 == '\0') {
                      cVar22 = '\x01';
                      *PTR_DAT_04bbbdd8 = 1;
                      *(undefined8 *)(puVar1 + 0xa0) = 0xffffffffffffffff;
                      *(undefined8 *)puVar1 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x50) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x58) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x60) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x68) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x70) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x78) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x80) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x88) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x90) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x98) = 0xffffffffffffffff;
                      uVar8 = *puVar21;
                    }
                    else {
                      uVar7 = *(uint *)(puVar1 + 0x20);
                      if (-1 < (int)uVar7) {
                        uVar20 = 0;
                        if ((ushort *)((ulong)uVar7 + (long)puVar21) != (ushort *)0x0) {
                          uVar20 = *(ushort *)((ulong)uVar7 + (long)puVar21);
                        }
                        goto LAB_0133acbc;
                      }
                      if (uVar7 != 0xffffffff) break;
                    }
                    puVar9 = (uint *)(ulong)uVar8;
                    if ((puVar9 == (uint *)0x0) || (puVar21 == puVar9)) break;
                    lVar17 = 0xc;
                    if (*(char *)((long)puVar21 + (10 - (long)puVar9)) != '\0') {
                      lVar17 = 0x1c;
                    }
                    lVar17 = (long)puVar21 + (lVar17 - (long)puVar9);
                    if (lVar17 == 0) break;
                    uVar14 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar9));
                    *(undefined4 *)(puVar1 + 0x20) = 0xfffffffe;
                    if (uVar14 == 0) break;
                    piVar23 = (int *)(lVar17 + 4);
                    while (piVar23[-1] != -0x38cc5589) {
                      piVar23 = piVar23 + 2;
                      uVar14 = uVar14 - 1;
                      if (uVar14 == 0) goto LAB_0133aca8;
                    }
                    iVar5 = 0;
                    if (*piVar23 != -1) {
                      iVar5 = *piVar23;
                    }
                    *(int *)(puVar1 + 0x20) = iVar5;
                    uVar8 = *puVar21;
                    if (uVar8 == 0) break;
                  } while( true );
                }
LAB_0133aca8:
                uVar20 = 0;
              }
              else {
                uVar20 = 0;
                uVar19 = psVar18[4];
              }
LAB_0133acbc:
              if (uVar20 < uVar19) {
                uVar16 = 0;
              }
              else {
                uVar16 = (undefined1)psVar18[4];
              }
              local_98 = CONCAT12(local_98._3_1_,CONCAT11((char)psVar18[5],uVar16));
              uStack_94 = CONCAT31(uStack_94._1_3_,*(undefined1 *)(lVar15 + 8 + lVar4 * 0xe + 0xc));
              local_7e98 = (undefined1 *)
                           CONCAT44(*(int *)(lVar11 + 0x1c) + (int)uVar12,
                                    *(int *)(lVar11 + 0x18) + (int)uVar25);
              local_7ea0 = puVar3;
              FUN_01309ff0(lVar11,&local_a0,&local_7ea0);
            }
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 != 0x30);
        uVar12 = uVar12 + 1;
      } while (uVar12 != 0x30);
    }
    (**(code **)(local_fd98 + 0x20))(&local_fd98);
    local_fd98 = PTR_DAT_04bbc3b8 + 0x10;
    local_fcd8[0] = PTR_DAT_04bbc3c8 + 0x10;
    uVar12 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                       (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),local_7ea8);
    if (((uVar12 & 1) != 0) && (local_7ea8 != (void *)0x0)) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(local_7ea8);
      }
      else {
        plVar13 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_7ea8);
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x38))(plVar13,local_7ea8);
        }
      }
    }
    if (lVar24 != 1) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      *(long *)(lVar11 + 0xa8) = lVar24;
    }
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  return;
}

