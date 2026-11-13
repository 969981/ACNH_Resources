
/* WARNING: Removing unreachable block (ram,0x012e8878) */
/* WARNING: Removing unreachable block (ram,0x012e829c) */
/* WARNING: Removing unreachable block (ram,0x012e81f4) */
/* WARNING: Removing unreachable block (ram,0x012e8204) */
/* WARNING: Removing unreachable block (ram,0x012e8634) */
/* WARNING: Removing unreachable block (ram,0x012e8888) */
/* WARNING: Removing unreachable block (ram,0x012e8894) */

void FUN_012e81b0(uint *param_1)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  undefined8 *puVar22;
  long lVar23;
  int iVar24;
  float fVar25;
  undefined **local_a0;
  short local_98;
  undefined2 local_96;
  undefined4 local_94;
  long local_90;
  undefined8 local_88;
  uint *local_80;
  uint *local_78;
  undefined8 *local_70;
  uint local_68;
  uint local_64;
  
  if ((char)param_1[0x1a] != '\0') {
    lVar16 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    uVar4 = param_1[0x20];
    uVar5 = param_1[0x21];
    uVar17 = param_1[0x25] + 1;
    local_70 = &DAT_048f9750;
    if (uVar17 != uVar5) {
      lVar20 = DAT_0520f098 + 0x2868;
      local_80 = param_1 + 0x1e;
      local_78 = param_1 + 0x22;
      local_68 = uVar4;
      local_64 = uVar5;
      do {
        lVar19 = *(long *)(param_1 + 2);
        uVar10 = (local_64 - local_80[3]) +
                 (local_64 - local_80[3]) * (param_1[0x24] - param_1[0x20]) +
                 (local_68 - local_80[2]);
        if (*param_1 <= uVar10) {
          uVar10 = 0;
        }
        psVar1 = (short *)(lVar19 + (long)(int)uVar10 * 8);
        if (1 < (ushort)(*psVar1 + 3U)) {
          local_88 = 0xfffe;
          FUN_0277d4ac(&local_88);
          if (*(long *)(lVar16 + 0xd0) == 0) {
            sVar7 = DAT_05586008;
          }
          else {
            FUN_012e4d78(&local_a0,*(long *)(lVar16 + 0xd0),&local_70);
            sVar7 = (short)local_a0;
          }
          puVar8 = PTR_DAT_04bb43c0;
          if (sVar7 == -2) {
            lVar23 = *(long *)PTR_DAT_04bb43c0;
            uVar9 = FUN_0277d6c4(psVar1);
            lVar18 = *(long *)puVar8;
            if (lVar18 != 0) {
              lVar23 = *(long *)(lVar23 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar23 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                lVar19 = lVar19 + (long)(int)uVar10 * 8;
                local_a0 = &PTR_FUN_04a36b50;
                local_98 = *psVar1;
                local_96 = *(undefined2 *)(lVar19 + 2);
                local_94 = *(undefined4 *)(lVar19 + 4);
                local_90 = 0;
                uVar10 = FUN_0277d6c4(&local_98);
                if (DAT_053274a0 != 0) {
                  lVar19 = *(long *)(lVar18 + 0x57e58);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                  if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                    lVar19 = *(long *)PTR_DAT_04bc0428;
                    uVar10 = FUN_0277d6c4(psVar1);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                    if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
                       (lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8),
                       lVar19 != 0)) {
                      local_90 = lVar19;
                    }
                  }
                }
                uVar14 = FUN_01b0140c(&local_a0);
                if ((uVar14 & 1) != 0) {
                  FUN_014b4258(lVar20,&local_70);
                }
              }
            }
            if (*(long *)(lVar16 + 0xd0) != 0) {
              FUN_012e5290(*(long *)(lVar16 + 0xd0),psVar1,&local_70);
            }
            uVar10 = local_64;
            if (*(long *)(param_1 + 10) == 0) {
              uVar9 = 0;
              lVar19 = *(long *)(lVar16 + 0xd0);
            }
            else {
              uVar9 = 0;
              if ((local_68 - local_80[2] < param_1[0xe]) && (local_64 - local_80[3] < param_1[0xf])
                 ) {
                uVar11 = (local_68 - local_80[2]) + param_1[0xe] * (local_64 - local_80[3]);
                uVar12 = param_1[0xd];
                uVar9 = 0;
                param_1[0xd] = uVar12 + 1;
                if ((-1 < (int)uVar11) && ((int)uVar11 < (int)param_1[0xc])) {
                  uVar9 = *(uint *)(*(long *)(param_1 + 10) + (ulong)(uVar11 >> 5) * 4) >>
                          (ulong)(uVar11 & 0x1f) & 1;
                }
                param_1[0xd] = uVar12;
              }
              lVar19 = *(long *)(lVar16 + 0xd0);
            }
            if (lVar19 != 0) {
              puVar22 = (undefined8 *)(lVar19 + 0x28);
              iVar13 = *(int *)(lVar19 + 0x14);
              uVar12 = local_68 - *(int *)(lVar19 + 0x10);
              plVar15 = (long *)(**(code **)*puVar22)(puVar22);
              uVar11 = (**(code **)(*plVar15 + 0x18))();
              if (uVar12 < uVar11) {
                uVar10 = uVar10 - iVar13;
                plVar15 = (long *)(**(code **)*puVar22)(puVar22);
                uVar11 = (**(code **)(*plVar15 + 0x20))();
                if (uVar10 < uVar11) {
                  plVar15 = (long *)(*(code *)**(undefined8 **)(lVar19 + 0x28))(puVar22);
                  iVar13 = (**(code **)(*plVar15 + 0x18))();
                  plVar15 = (long *)(lVar19 + 0x70);
                  uVar14 = (**(code **)(*plVar15 + 0x10))(plVar15);
                  if ((uVar14 & 1) != 0) {
                    (**(code **)*plVar15)(plVar15,uVar12 + iVar13 * uVar10,uVar9);
                  }
                }
              }
            }
          }
        }
        if ((int)local_68 < (int)local_78[2]) {
          local_68 = local_68 + 1;
        }
        else {
          local_64 = local_64 + 1;
          local_68 = local_80[2];
        }
      } while ((uVar4 != local_68) || (uVar17 != local_64));
    }
    local_70 = &DAT_048f9750;
    local_80 = param_1 + 0x1e;
    local_78 = param_1 + 0x22;
    local_68 = uVar4;
    local_64 = uVar5;
    while (uVar17 != local_64) {
      do {
        uVar5 = (local_64 - local_80[3]) +
                (local_64 - local_80[3]) * (param_1[0x24] - param_1[0x20]) +
                (local_68 - local_80[2]);
        if (param_1[4] <= uVar5) {
          uVar5 = 0;
        }
        psVar1 = (short *)(*(long *)(param_1 + 6) + (long)(int)uVar5 * 8);
        if (1 < (ushort)(*psVar1 + 3U)) {
          local_88 = 0xfffe;
          FUN_0277d4ac(&local_88);
          sVar7 = DAT_05586008;
          if (*(long *)(lVar16 + 0xe0) != 0) {
            FUN_012e4d78(&local_a0,*(long *)(lVar16 + 0xe0),&local_70);
            sVar7 = (short)local_a0;
          }
          if (sVar7 == -2) {
            if (*(long *)(lVar16 + 0xe0) != 0) {
              FUN_012e5290(*(long *)(lVar16 + 0xe0),psVar1,&local_70);
            }
            uVar5 = local_64;
            if (*(long *)(param_1 + 0x12) == 0) {
              uVar10 = 0;
              lVar20 = *(long *)(lVar16 + 0xe0);
            }
            else {
              uVar10 = 0;
              if ((local_68 - local_80[2] < param_1[0x16]) &&
                 (local_64 - local_80[3] < param_1[0x17])) {
                uVar12 = (local_68 - local_80[2]) + param_1[0x16] * (local_64 - local_80[3]);
                uVar9 = param_1[0x15];
                uVar10 = 0;
                param_1[0x15] = uVar9 + 1;
                if ((-1 < (int)uVar12) && ((int)uVar12 < (int)param_1[0x14])) {
                  uVar10 = *(uint *)(*(long *)(param_1 + 0x12) + (ulong)(uVar12 >> 5) * 4) >>
                           (ulong)(uVar12 & 0x1f) & 1;
                }
                param_1[0x15] = uVar9;
              }
              lVar20 = *(long *)(lVar16 + 0xe0);
            }
            if (lVar20 != 0) {
              puVar22 = (undefined8 *)(lVar20 + 0x28);
              iVar13 = *(int *)(lVar20 + 0x14);
              uVar9 = local_68 - *(int *)(lVar20 + 0x10);
              plVar15 = (long *)(**(code **)*puVar22)(puVar22);
              uVar12 = (**(code **)(*plVar15 + 0x18))();
              if (uVar9 < uVar12) {
                uVar5 = uVar5 - iVar13;
                plVar15 = (long *)(**(code **)*puVar22)(puVar22);
                uVar12 = (**(code **)(*plVar15 + 0x20))();
                if (uVar5 < uVar12) {
                  plVar15 = (long *)(*(code *)**(undefined8 **)(lVar20 + 0x28))(puVar22);
                  iVar13 = (**(code **)(*plVar15 + 0x18))();
                  plVar15 = (long *)(lVar20 + 0x70);
                  uVar14 = (**(code **)(*plVar15 + 0x10))(plVar15);
                  if ((uVar14 & 1) != 0) {
                    (**(code **)*plVar15)(plVar15,uVar9 + iVar13 * uVar5,uVar10);
                  }
                }
              }
            }
          }
        }
        if ((int)local_68 < (int)local_78[2]) {
          local_68 = local_68 + 1;
        }
        else {
          local_64 = local_64 + 1;
          local_68 = local_80[2];
        }
      } while (uVar4 != local_68);
    }
    local_80 = (uint *)((ulong)local_80 & 0xffffffff00000000);
    if ((*(long *)(DAT_0519d040 + 0x1f8) != 0) &&
       (lVar16 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xb0), lVar16 != 0)) {
      fVar25 = (float)(int)param_1[0x20] * 0.5;
      uVar17 = 0;
      if (fVar25 != (float)(int)fVar25) {
        uVar17 = (uint)(fVar25 < 0.0);
      }
      iVar13 = (int)fVar25 - uVar17;
      fVar25 = (float)(int)param_1[0x21] * 0.5;
      uVar17 = 0;
      if (fVar25 != (float)(int)fVar25) {
        uVar17 = (uint)(fVar25 < 0.0);
      }
      iVar21 = (int)fVar25 - uVar17;
      fVar25 = (float)(int)param_1[0x24] * 0.5;
      uVar17 = 0;
      if (fVar25 != (float)(int)fVar25) {
        uVar17 = (uint)(fVar25 < 0.0);
      }
      iVar6 = (int)fVar25 - uVar17;
      fVar25 = (float)(int)param_1[0x25] * 0.5;
      uVar17 = 0;
      if (fVar25 != (float)(int)fVar25) {
        uVar17 = (uint)(fVar25 < 0.0);
      }
      iVar24 = (int)fVar25 - uVar17;
      iVar3 = iVar13;
      if (iVar6 <= iVar13) {
        iVar3 = iVar6;
      }
      if (iVar13 <= iVar6) {
        iVar13 = iVar6;
      }
      iVar6 = iVar21;
      if (iVar21 <= iVar24) {
        iVar6 = iVar24;
      }
      if (iVar24 <= iVar21) {
        iVar21 = iVar24;
      }
      if (iVar6 + 1 != iVar21) {
        iVar24 = iVar3;
        do {
          uVar17 = iVar24 - *(int *)(lVar16 + 0x28);
          uVar4 = iVar21 - *(int *)(lVar16 + 0x2c);
          if ((uVar17 < *(uint *)(lVar16 + 0x18) && uVar4 <= *(uint *)(lVar16 + 0x1c)) &&
              (*(uint *)(lVar16 + 0x18) <= uVar17 || *(uint *)(lVar16 + 0x1c) != uVar4)) {
            lVar20 = lVar16 + 0x40;
LAB_012e89e8:
            FUN_0138367c(lVar20);
          }
          else if (((*(char *)(lVar16 + 0x88) != '\0') &&
                   ((uint)(iVar24 - *(int *)(lVar16 + 0x98)) < *(uint *)(lVar16 + 0xa0))) &&
                  ((uint)(iVar21 - *(int *)(lVar16 + 0x9c)) < *(uint *)(lVar16 + 0xa4))) {
            lVar20 = lVar16 + 0xa8;
            goto LAB_012e89e8;
          }
          if (iVar24 < iVar13) {
            iVar24 = iVar24 + 1;
          }
          else {
            iVar21 = iVar21 + 1;
            iVar24 = iVar3;
          }
        } while ((iVar3 != iVar24) || (iVar6 + 1 != iVar21));
      }
    }
    puVar8 = PTR_DAT_04bb37e0;
    if ((*(long *)(param_1 + 2) != 0) && (uVar17 = *param_1, 0 < (int)uVar17)) {
      lVar16 = 0;
      do {
        puVar2 = (undefined2 *)(*(long *)(param_1 + 2) + lVar16);
        lVar16 = lVar16 + 8;
        *puVar2 = *(undefined2 *)puVar8;
        *(undefined *)(puVar2 + 1) = puVar8[2];
        *(undefined *)((long)puVar2 + 3) = puVar8[3];
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar8 + 4);
      } while ((ulong)uVar17 * 8 != lVar16);
    }
    puVar8 = PTR_DAT_04bb37e0;
    if ((*(long *)(param_1 + 6) != 0) && (uVar17 = param_1[4], 0 < (int)uVar17)) {
      lVar16 = 0;
      do {
        puVar2 = (undefined2 *)(*(long *)(param_1 + 6) + lVar16);
        lVar16 = lVar16 + 8;
        *puVar2 = *(undefined2 *)puVar8;
        *(undefined *)(puVar2 + 1) = puVar8[2];
        *(undefined *)((long)puVar2 + 3) = puVar8[3];
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar8 + 4);
      } while ((ulong)uVar17 * 8 != lVar16);
    }
    if (*(void **)(param_1 + 10) != (void *)0x0) {
      uVar17 = param_1[0xc];
      iVar13 = uVar17 + 0x1e;
      if (0 < (int)uVar17) {
        iVar13 = uVar17 - 1;
      }
      uVar17 = (iVar13 >> 5) + 1;
      memset(*(void **)(param_1 + 10),0,
             -(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar17 << 2);
    }
    if (*(void **)(param_1 + 0x12) != (void *)0x0) {
      uVar17 = param_1[0x14];
      iVar13 = uVar17 + 0x1e;
      if (0 < (int)uVar17) {
        iVar13 = uVar17 - 1;
      }
      uVar17 = (iVar13 >> 5) + 1;
      memset(*(void **)(param_1 + 0x12),0,
             -(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar17 << 2);
    }
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  return;
}

