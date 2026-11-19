
void FUN_03c85ee0(long param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  float fVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  ushort uVar14;
  undefined8 uVar15;
  int iVar16;
  code *pcVar17;
  long lVar18;
  undefined4 uVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined1 uVar23;
  undefined8 local_210;
  undefined **local_1f8;
  ushort *local_1f0;
  int local_1e8;
  undefined **local_1e0;
  ushort *local_1d8;
  undefined **local_1d0;
  ushort *local_1c8;
  undefined8 local_1c0;
  ushort *local_1b8;
  undefined **local_1b0;
  undefined1 *puStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [223];
  undefined1 local_bd;
  undefined **local_b8;
  undefined2 *local_b0;
  undefined **local_a8;
  byte *local_a0;
  undefined **local_98;
  byte *local_90;
  undefined **local_88;
  byte *local_80;
  undefined **local_78;
  char *local_70;
  
  plVar11 = (long *)(**(code **)**(undefined8 **)(param_1 + 0x10))();
  if ((int)plVar11[1] < *(int *)(*plVar11 + 8)) {
    puVar1 = (ushort *)((long)&local_1c0 + 4);
    uVar22 = 1;
    do {
      plVar12 = *(long **)(param_1 + 8);
      if (*(char *)((long)plVar12 + 0xc) != '\0') {
        return;
      }
      if ((*(byte *)(plVar12 + 1) & 0xf) != 0) {
        return;
      }
      plVar21 = (long *)*plVar11;
      iVar16 = (int)plVar11[1];
      puVar3 = (ushort *)(*plVar21 + (long)iVar16 * 2);
      uVar14 = *puVar3;
      if (uVar14 == 0) {
        return;
      }
      if (uVar14 < 0x20) {
        switch(uVar14) {
        case 10:
          *(int *)(plVar11 + 1) = iVar16 + 1;
          plVar12 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x18))();
          (**(code **)(*plVar12 + 0x20))();
          break;
        default:
          goto switchD_03c85fc8_caseD_b;
        case 0xd:
          *(int *)(plVar11 + 1) = iVar16 + 1;
          break;
        case 0xe:
          if ((uint)((int)plVar21[1] - iVar16) < 3) {
LAB_03c86bc8:
            uVar22 = 2;
switchD_03c85fc8_caseD_b:
            (**(code **)(*plVar12 + 0x28))(plVar12,uVar22);
            return;
          }
          *(int *)(plVar11 + 1) = iVar16 + 3;
          uVar14 = puVar3[1];
          uVar8 = puVar3[2];
          plVar12 = (long *)(**(code **)**(undefined8 **)(param_1 + 0x10))();
          if (uVar8 == 0 && uVar14 == 0) {
            local_1e8 = 0;
            local_1f8 = &PTR_LAB_04b84b80;
            local_1f0 = (ushort *)0x0;
            local_a0._0_4_ = (uint)(uint3)local_a0;
            local_19c[0] = 0;
            local_1e0 = &PTR_LAB_04b84b98;
            local_1d8 = (ushort *)0x0;
            local_1d0 = &PTR_LAB_04b84b98;
            local_1c8 = (ushort *)0x0;
            local_1c0 = &PTR_LAB_04b84bc8;
            local_1b8 = (ushort *)0x0;
            local_1a0 = 0x100;
            local_1b0 = &PTR_LAB_048f9a70;
            uVar9 = (int)((long *)*plVar12)[1] - (int)plVar12[1];
            puStack_1a8 = local_19c;
            if (uVar9 != 0) {
              puVar3 = (ushort *)(*(long *)*plVar12 + (long)(int)plVar12[1] * 2);
              uVar14 = *puVar3;
              if (((uVar14 & 1) == 0) && ((ulong)uVar14 + 2 <= (ulong)uVar9 * 2)) {
                local_1d8 = puVar3 + 1;
                puVar5 = (ushort *)((long)local_1d8 + (ulong)uVar14);
                local_1e8 = 2;
                puVar4 = puVar3 + 2;
                if ((puVar4 <= puVar5) &&
                   (((puVar2 = puVar3 + 3, local_1c8 = puVar4, puVar2 <= puVar5 &&
                     (puVar4 = (ushort *)((long)puVar2 + (ulong)(ushort)(*puVar2 + 2)),
                     local_1b8 = puVar2, puVar4 <= puVar5)) &&
                    ((ushort *)(((ulong)puVar4 & 1) + (long)puVar4) == puVar5)))) {
                  local_1e8 = 1;
                }
                local_19c[0] = 0;
                *(uint *)(plVar12 + 1) = (int)plVar12[1] + (*puVar3 + 2 >> 1);
                plVar12 = *(long **)(param_1 + 8);
                lVar18 = *plVar12;
                local_1f0 = puVar3;
                if (local_1e8 == 2) goto LAB_03c86450;
                plVar12 = (long *)(**(code **)(lVar18 + 0x18))();
                (**(code **)(*plVar12 + 0x30))(plVar12,local_1b8 + 1,*local_1b8 >> 1);
                break;
              }
            }
LAB_03c86b10:
            plVar12 = *(long **)(param_1 + 8);
            uVar15 = 2;
          }
          else {
            if ((uVar14 == 0) && (uVar8 == 1)) {
              iVar16 = (int)plVar12[1];
              uVar9 = (int)((long *)*plVar12)[1] - iVar16;
              if (uVar9 != 0) {
                puVar3 = (ushort *)(*(long *)*plVar12 + (long)iVar16 * 2);
                uVar14 = *puVar3;
                uVar20 = (ulong)uVar14;
                if (((uVar14 & 1) == 0) && (uVar20 + 2 <= (ulong)uVar9 * 2)) {
                  puVar4 = (ushort *)((long)(puVar3 + 1) + uVar20);
                  if (puVar4 < puVar3 + 2 ||
                      (ushort *)(((ulong)puVar3 & 1) + (long)(puVar3 + 2)) != puVar4) {
LAB_03c8643c:
                    *(uint *)(plVar12 + 1) = iVar16 + ((int)uVar20 + 2U >> 1);
                    goto LAB_03c86448;
                  }
                  *(uint *)(plVar12 + 1) = iVar16 + (uVar14 + 2 >> 1);
                  plVar12 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x18))();
                  uVar14 = puVar3[1];
                  pcVar17 = *(code **)(*plVar12 + 0x40);
                  goto LAB_03c86018;
                }
              }
              goto LAB_03c86b10;
            }
            if ((uVar14 == 0) && (uVar8 == 2)) {
              iVar16 = (int)plVar12[1];
              uVar9 = (int)((long *)*plVar12)[1] - iVar16;
              if (uVar9 != 0) {
                puVar3 = (ushort *)(*(long *)*plVar12 + (long)iVar16 * 2);
                uVar14 = *puVar3;
                uVar20 = (ulong)uVar14;
                if (((uVar14 & 1) == 0) && (uVar20 + 2 <= (ulong)uVar9 * 2)) {
                  puVar4 = (ushort *)((long)(puVar3 + 1) + uVar20);
                  if ((puVar4 < puVar3 + 2) ||
                     ((ushort *)(((ulong)puVar3 & 1) + (long)(puVar3 + 2)) != puVar4))
                  goto LAB_03c8643c;
                  *(uint *)(plVar12 + 1) = iVar16 + (uVar14 + 2 >> 1);
                  plVar12 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x18))();
                  fVar10 = (float)NEON_ucvtf((uint)puVar3[1]);
                  (**(code **)(*plVar12 + 0x48))(SUB42(fVar10 * 0.01,0));
                  break;
                }
              }
              goto LAB_03c86b10;
            }
            if ((uVar14 == 0) && (uVar8 == 3)) {
              iVar16 = (int)plVar12[1];
              uVar9 = (int)((long *)*plVar12)[1] - iVar16;
              if (uVar9 != 0) {
                puVar3 = (ushort *)(*(long *)*plVar12 + (long)iVar16 * 2);
                uVar14 = *puVar3;
                uVar20 = (ulong)uVar14;
                if (((uVar14 & 1) == 0) && (uVar20 + 2 <= (ulong)uVar9 * 2)) {
                  puVar4 = (ushort *)((long)(puVar3 + 1) + uVar20);
                  if ((puVar4 < puVar3 + 2) ||
                     ((ushort *)(((ulong)puVar3 & 1) + (long)(puVar3 + 2)) != puVar4))
                  goto LAB_03c8643c;
                  *(uint *)(plVar12 + 1) = iVar16 + (uVar14 + 2 >> 1);
                  plVar12 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x18))();
                  (**(code **)(*plVar12 + 0x50))(plVar12,puVar3[1]);
                  break;
                }
              }
              goto LAB_03c86b10;
            }
            if ((uVar14 == 0) && (uVar8 == 4)) {
              iVar16 = (int)plVar12[1];
              uVar9 = (int)((long *)*plVar12)[1] - iVar16;
              if (uVar9 != 0) {
                puVar3 = (ushort *)(*(long *)*plVar12 + (long)iVar16 * 2);
                uVar14 = *puVar3;
                if (((uVar14 & 1) == 0) && ((ulong)uVar14 + 2 <= (ulong)uVar9 * 2)) {
                  *(uint *)(plVar12 + 1) = iVar16 + (uVar14 + 2 >> 1);
                  plVar12 = *(long **)(param_1 + 8);
                  lVar18 = *plVar12;
                  if (((ulong)puVar3 & 1) == (ulong)uVar14) {
                    plVar12 = (long *)(**(code **)(lVar18 + 0x18))();
                    (**(code **)(*plVar12 + 0x58))();
                    break;
                  }
                  goto LAB_03c86450;
                }
              }
              goto LAB_03c86b10;
            }
            if ((uVar14 == 300) && (uVar8 == 0)) {
              local_1e8 = 0;
              local_1f8 = &PTR_LAB_04b84c10;
              local_1f0 = (ushort *)0x0;
              local_bd = 0;
              local_1c0 = (undefined **)((ulong)local_1c0._5_3_ << 0x28);
              local_1e0 = &PTR_LAB_04b84bc8;
              local_1d8 = (ushort *)0x0;
              local_1c0 = (undefined **)CONCAT44(local_1c0._4_4_,0x100);
              local_1d0 = &PTR_LAB_048f9a70;
              local_1c8 = puVar1;
              FUN_03d55a70(&local_1f8,*(long *)*plVar12 + (long)(int)plVar12[1] * 2,
                           (int)((long *)*plVar12)[1] - (int)plVar12[1]);
              if (local_1e8 != 0) {
                *(uint *)(plVar12 + 1) = (int)plVar12[1] + (*local_1f0 + 2 >> 1);
                plVar12 = *(long **)(param_1 + 8);
                lVar18 = *plVar12;
                if (local_1e8 != 2) {
                  plVar12 = (long *)(**(code **)(lVar18 + 0x18))();
                  uVar15 = FUN_03c86c00(&local_1e0);
                  pcVar17 = *(code **)(*plVar12 + 0x60);
                  goto LAB_03c8651c;
                }
                goto LAB_03c86450;
              }
              goto LAB_03c86b10;
            }
            if ((uVar14 != 300) || (uVar8 != 1)) {
              if ((uVar14 == 300) && (uVar8 == 2)) {
                local_1e8 = 0;
                local_1f8 = &PTR_LAB_04b84c70;
                local_1f0 = (ushort *)0x0;
                local_1e0 = &PTR_LAB_04b84bc8;
                local_1d8 = (ushort *)0x0;
                local_bd = 0;
                local_1c0 = (undefined **)CONCAT35(local_1c0._5_3_,0x100);
                local_1d0 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
                local_a8 = &PTR_LAB_04b84c88;
                local_a0 = (byte *)0x0;
                local_b8 = &PTR_LAB_04b84c40;
                local_b0 = (undefined2 *)0x0;
                local_98 = &PTR_LAB_04b84c40;
                local_90 = (byte *)0x0;
                local_88 = &PTR_LAB_04b84c40;
                local_80 = (byte *)0x0;
                local_78 = &PTR_LAB_04b84c40;
                local_70 = (char *)0x0;
                local_1c8 = puVar1;
                FUN_03d55a70(&local_1f8,*(long *)*plVar12 + (long)(int)plVar12[1] * 2,
                             (int)((long *)*plVar12)[1] - (int)plVar12[1]);
                if (local_1e8 != 0) {
                  *(uint *)(plVar12 + 1) = (int)plVar12[1] + (*local_1f0 + 2 >> 1);
                  if (local_1e8 == 2) goto LAB_03c86448;
                  bVar6 = *local_90;
                  if ((bVar6 < 4) && ((bVar7 = *local_80, bVar7 == 0 || (bVar7 == 1)))) {
                    if (*local_70 == '\0') {
                      local_210 = 0;
                    }
                    else {
                      if (*local_70 != '\x01') goto LAB_03c86a9c;
                      local_210 = 1;
                    }
                    plVar12 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x18))();
                    uVar15 = FUN_03c86c00(&local_1e0);
                    (**(code **)(*plVar12 + 0x70))
                              (plVar12,uVar15,*(undefined1 *)local_b0,*local_a0,bVar6,bVar7,
                               local_210);
                    break;
                  }
                  goto LAB_03c86a9c;
                }
              }
              else if ((uVar14 == 300) && (uVar8 == 3)) {
                local_1e8 = 0;
                local_1f8 = &PTR_LAB_04b84c10;
                local_1f0 = (ushort *)0x0;
                local_bd = 0;
                local_1c0 = (undefined **)((ulong)local_1c0._5_3_ << 0x28);
                local_1e0 = &PTR_LAB_04b84bc8;
                local_1d8 = (ushort *)0x0;
                local_1c0 = (undefined **)CONCAT44(local_1c0._4_4_,0x100);
                local_1d0 = &PTR_LAB_048f9a70;
                local_1c8 = puVar1;
                FUN_03d55a70(&local_1f8,*(long *)*plVar12 + (long)(int)plVar12[1] * 2,
                             (int)((long *)*plVar12)[1] - (int)plVar12[1]);
                if (local_1e8 != 0) {
                  *(uint *)(plVar12 + 1) = (int)plVar12[1] + (*local_1f0 + 2 >> 1);
                  plVar12 = *(long **)(param_1 + 8);
                  lVar18 = *plVar12;
                  if (local_1e8 != 2) {
                    plVar12 = (long *)(**(code **)(lVar18 + 0x18))();
                    uVar15 = FUN_03c86c00(&local_1e0);
                    pcVar17 = *(code **)(*plVar12 + 0x78);
                    goto LAB_03c8651c;
                  }
                  goto LAB_03c86450;
                }
              }
              else if ((uVar14 == 300) && (uVar8 == 4)) {
                local_1e8 = 0;
                local_1f8 = &PTR_LAB_04b84cb8;
                local_1f0 = (ushort *)0x0;
                local_bd = 0;
                local_1c0 = (undefined **)((ulong)local_1c0._5_3_ << 0x28);
                local_1e0 = &PTR_LAB_04b84bc8;
                local_1d8 = (ushort *)0x0;
                local_1c0 = (undefined **)CONCAT44(local_1c0._4_4_,0x100);
                local_1d0 = &PTR_LAB_048f9a70;
                local_b8 = &PTR_LAB_04b84b98;
                local_b0 = (undefined2 *)0x0;
                local_a8 = &PTR_LAB_04b84c40;
                local_a0 = (byte *)0x0;
                local_98 = &PTR_LAB_04b84c40;
                local_90 = (byte *)0x0;
                local_1c8 = puVar1;
                FUN_03d55a70(&local_1f8,*(long *)*plVar12 + (long)(int)plVar12[1] * 2,
                             (int)((long *)*plVar12)[1] - (int)plVar12[1]);
                if (local_1e8 != 0) {
                  *(uint *)(plVar12 + 1) = (int)plVar12[1] + (*local_1f0 + 2 >> 1);
                  if (local_1e8 != 2) {
                    uVar23 = 0;
                    if (*local_a0 != 0) {
                      if (*local_a0 != 1) goto LAB_03c86a9c;
                      uVar23 = 1;
                    }
                    if (*local_90 == 0) {
                      uVar15 = 0;
                    }
                    else {
                      if (*local_90 != 1) goto LAB_03c86a9c;
                      uVar15 = 1;
                    }
                    plVar12 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x18))();
                    uVar13 = FUN_03c86c00(&local_1e0);
                    (**(code **)(*plVar12 + 0x80))(plVar12,uVar13,*local_b0,uVar23,uVar15);
                    break;
                  }
                  goto LAB_03c86448;
                }
              }
              else if ((uVar14 == 300) && (uVar8 == 5)) {
                local_1e8 = 0;
                local_1f8 = &PTR_LAB_04b84c10;
                local_1f0 = (ushort *)0x0;
                local_bd = 0;
                local_1c0 = (undefined **)((ulong)local_1c0._5_3_ << 0x28);
                local_1e0 = &PTR_LAB_04b84bc8;
                local_1d8 = (ushort *)0x0;
                local_1c0 = (undefined **)CONCAT44(local_1c0._4_4_,0x100);
                local_1d0 = &PTR_LAB_048f9a70;
                local_1c8 = puVar1;
                FUN_03d55a70(&local_1f8,*(long *)*plVar12 + (long)(int)plVar12[1] * 2,
                             (int)((long *)*plVar12)[1] - (int)plVar12[1]);
                if (local_1e8 != 0) {
                  *(uint *)(plVar12 + 1) = (int)plVar12[1] + (*local_1f0 + 2 >> 1);
                  plVar12 = *(long **)(param_1 + 8);
                  lVar18 = *plVar12;
                  if (local_1e8 != 2) {
                    plVar12 = (long *)(**(code **)(lVar18 + 0x18))();
                    uVar15 = FUN_03c86c00(&local_1e0);
                    pcVar17 = *(code **)(*plVar12 + 0x88);
LAB_03c8651c:
                    (*pcVar17)(plVar12,uVar15);
                    break;
                  }
LAB_03c86450:
                  (**(code **)(lVar18 + 0x28))(plVar12,6);
                  break;
                }
              }
              else if ((uVar14 == 300) && (uVar8 == 6)) {
                local_1e8 = 0;
                local_1f8 = &PTR_LAB_04b84c10;
                local_1f0 = (ushort *)0x0;
                local_bd = 0;
                local_1c0 = (undefined **)((ulong)local_1c0._5_3_ << 0x28);
                local_1e0 = &PTR_LAB_04b84bc8;
                local_1d8 = (ushort *)0x0;
                local_1c0 = (undefined **)CONCAT44(local_1c0._4_4_,0x100);
                local_1d0 = &PTR_LAB_048f9a70;
                local_1c8 = puVar1;
                FUN_03d55a70(&local_1f8,*(long *)*plVar12 + (long)(int)plVar12[1] * 2,
                             (int)((long *)*plVar12)[1] - (int)plVar12[1]);
                if (local_1e8 != 0) {
                  *(uint *)(plVar12 + 1) = (int)plVar12[1] + (*local_1f0 + 2 >> 1);
                  plVar12 = *(long **)(param_1 + 8);
                  lVar18 = *plVar12;
                  if (local_1e8 != 2) {
                    plVar12 = (long *)(**(code **)(lVar18 + 0x18))();
                    uVar15 = FUN_03c86c00(&local_1e0);
                    pcVar17 = *(code **)(*plVar12 + 0x98);
                    goto LAB_03c8651c;
                  }
                  goto LAB_03c86450;
                }
              }
              else {
                local_1e8 = 0;
                local_1f8 = &PTR_LAB_04b84bf8;
                local_1f0 = (ushort *)0x0;
                FUN_03d55a70(&local_1f8,*(long *)*plVar12 + (long)(int)plVar12[1] * 2,
                             (int)((long *)*plVar12)[1] - (int)plVar12[1]);
                if (local_1e8 != 0) {
                  *(uint *)(plVar12 + 1) = (int)plVar12[1] + (*local_1f0 + 2 >> 1);
                  plVar12 = *(long **)(param_1 + 8);
                  lVar18 = *plVar12;
                  goto LAB_03c86b00;
                }
              }
              goto LAB_03c86b10;
            }
            local_1e8 = 0;
            local_1f8 = &PTR_LAB_04b84c28;
            local_1f0 = (ushort *)0x0;
            local_bd = 0;
            local_1c0 = (undefined **)((ulong)local_1c0._5_3_ << 0x28);
            local_1e0 = &PTR_LAB_04b84bc8;
            local_1d8 = (ushort *)0x0;
            local_1c0 = (undefined **)CONCAT44(local_1c0._4_4_,0x100);
            local_1d0 = &PTR_LAB_048f9a70;
            local_b8 = &PTR_LAB_04b84c40;
            local_b0 = (undefined2 *)0x0;
            local_a8 = &PTR_LAB_04b84c40;
            local_a0 = (byte *)0x0;
            local_98 = &PTR_LAB_04b84c40;
            local_90 = (byte *)0x0;
            local_88 = &PTR_LAB_04b84c40;
            local_80 = (byte *)0x0;
            local_1c8 = puVar1;
            FUN_03d55a70(&local_1f8,*(long *)*plVar12 + (long)(int)plVar12[1] * 2,
                         (int)((long *)*plVar12)[1] - (int)plVar12[1]);
            if (local_1e8 == 0) goto LAB_03c86b10;
            *(uint *)(plVar12 + 1) = (int)plVar12[1] + (*local_1f0 + 2 >> 1);
            if (local_1e8 == 2) {
LAB_03c86448:
              plVar12 = *(long **)(param_1 + 8);
              lVar18 = *plVar12;
              goto LAB_03c86450;
            }
            bVar6 = *local_a0;
            if (bVar6 < 4) {
              if (*local_90 == 0) {
                uVar19 = 0;
              }
              else {
                if (*local_90 != 1) goto LAB_03c86a9c;
                uVar19 = 1;
              }
              bVar7 = *local_80;
              if (bVar7 < 3) {
                plVar12 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x18))();
                uVar15 = FUN_03c86c00(&local_1e0);
                (**(code **)(*plVar12 + 0x68))
                          (plVar12,uVar15,*(undefined1 *)local_b0,bVar6,uVar19,bVar7);
                break;
              }
            }
LAB_03c86a9c:
            plVar12 = *(long **)(param_1 + 8);
            uVar15 = 7;
          }
          (**(code **)(*plVar12 + 0x28))(plVar12,uVar15);
          break;
        case 0xf:
          if ((uint)((int)plVar21[1] - iVar16) < 3) goto LAB_03c86bc8;
          *(int *)(plVar11 + 1) = iVar16 + 3;
          uVar14 = puVar3[1];
          uVar8 = puVar3[2];
          (**(code **)**(undefined8 **)(param_1 + 0x10))();
          if ((uVar14 == 300) && (uVar8 == 5)) {
            plVar12 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x18))();
            (**(code **)(*plVar12 + 0x90))();
          }
          else {
            plVar12 = *(long **)(param_1 + 8);
            lVar18 = *plVar12;
            if ((uVar14 == 300) && (uVar8 == 6)) {
              plVar12 = (long *)(**(code **)(lVar18 + 0x18))();
              (**(code **)(*plVar12 + 0xa0))();
            }
            else {
LAB_03c86b00:
              (**(code **)(lVar18 + 0x28))(plVar12,5);
            }
          }
        }
      }
      else {
        *(int *)(plVar11 + 1) = iVar16 + 1;
        plVar12 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x18))();
        pcVar17 = *(code **)(*plVar12 + 0x28);
LAB_03c86018:
        (*pcVar17)(plVar12,uVar14);
      }
    } while ((int)plVar11[1] < *(int *)(*plVar11 + 8));
  }
  return;
}

