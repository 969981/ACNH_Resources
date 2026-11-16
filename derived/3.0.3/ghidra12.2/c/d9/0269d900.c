
void FUN_0269d900(long *param_1)

{
  undefined *puVar1;
  undefined2 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  int iVar13;
  char cVar14;
  uint *puVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  uint local_9c;
  uint local_98;
  int local_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  long local_88;
  uint local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  uint *local_68;
  
  local_98 = FUN_026946b0(1,param_1[1]);
  puVar7 = PTR_DAT_04bc2860;
  puVar1 = PTR_DAT_04bc2858;
  if (local_98 != 0) {
    lVar11 = *(long *)PTR_DAT_04bb3968;
    if ((int)*(uint *)(lVar11 + 0x16e78) < 1) {
      if (*(long *)(lVar11 + 0x16d68) == 0) {
        return;
      }
      puVar12 = *(uint **)(*(long *)(lVar11 + 0x16d68) + 8);
      if (puVar12 == (uint *)0x0) {
        return;
      }
      if ((local_98 < *(uint *)(lVar11 + 0x16d80)) &&
         (*(char *)(*(long *)(lVar11 + 0x16d88) + (long)(int)local_98) == '\0')) {
        return;
      }
      if (*puVar12 <= local_98) {
        return;
      }
      if (puVar12[1] == 0) {
        return;
      }
      if ((ushort)puVar12[2] == 0) {
        return;
      }
      iVar13 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        iVar13 = 0x1c;
      }
      puVar12 = (uint *)((ulong)(puVar12[1] * local_98 + (uint)(ushort)puVar12[2] * 8 + iVar13) +
                        (long)puVar12);
    }
    else {
      if (*(uint *)(lVar11 + 0x16e78) <= local_98) {
        return;
      }
      uVar8 = local_98;
      if (*(uint *)(lVar11 + 0x16e68) <= local_98) {
        uVar8 = 0;
      }
      puVar12 = *(uint **)(*(long *)(lVar11 + 0x16e70) + (ulong)uVar8 * 8);
    }
    if (puVar12 != (uint *)0x0) {
      if (*puVar12 == 0) {
LAB_0269dae0:
        local_9c = 0;
      }
      else {
        cVar14 = *PTR_DAT_04bc2858;
        do {
          if (cVar14 == '\0') {
            cVar14 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined4 *)(puVar7 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar8 = *(uint *)(puVar7 + 0x10);
            if (-1 < (int)uVar8) {
              if (((uint *)((ulong)uVar8 + (long)puVar12) == (uint *)0x0) ||
                 (local_9c = *(uint *)((ulong)uVar8 + (long)puVar12), 0x32 < local_9c))
              goto LAB_0269dae0;
              goto LAB_0269dae4;
            }
            if (uVar8 != 0xffffffff) goto LAB_0269dae0;
          }
          puVar15 = (uint *)(ulong)*puVar12;
          local_9c = 0;
          if ((*puVar12 == 0) || (puVar12 == puVar15)) goto LAB_0269dae4;
          lVar11 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar15)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar12 + (lVar11 - (long)puVar15);
          if (lVar11 == 0) goto LAB_0269dae0;
          uVar9 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar15));
          *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
          local_9c = 0;
          if (uVar9 == 0) goto LAB_0269dae4;
          piVar16 = (int *)(lVar11 + 4);
          while (piVar16[-1] != -0x189a4aac) {
            piVar16 = piVar16 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              local_9c = 0;
              goto LAB_0269dae4;
            }
          }
          iVar13 = 0;
          if (*piVar16 != -1) {
            iVar13 = *piVar16;
          }
          *(int *)(puVar7 + 0x10) = iVar13;
        } while (*puVar12 != 0);
        local_9c = 0;
      }
LAB_0269dae4:
      puVar7 = PTR_DAT_04bb43c0;
      lVar11 = -0x1b0;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      do {
        lVar3 = *param_1 + lVar11;
        lVar17 = *(long *)puVar7;
        puVar2 = (undefined2 *)(lVar3 + 0x1c4);
        uVar8 = FUN_0277d6c4(puVar2);
        lVar18 = *(long *)puVar7;
        if (lVar18 != 0) {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            local_70 = *puVar2;
            local_6e = *(undefined2 *)(lVar3 + 0x1c6);
            local_6c = *(undefined4 *)(lVar3 + 0x1c8);
            local_68 = (uint *)0x0;
            local_78 = puVar1;
            uVar8 = FUN_0277d6c4(&local_70);
            if (*(long *)puVar7 == 0) {
LAB_0269dbfc:
              puVar12 = (uint *)0x0;
            }
            else {
              lVar17 = *(long *)(lVar18 + 0x57e58);
              uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
              if ((*(uint *)(lVar17 + 0x1d8) <= uVar8) ||
                 (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
              goto LAB_0269dbfc;
              lVar17 = *(long *)PTR_DAT_04bc0428;
              uVar8 = FUN_0277d6c4(puVar2);
              uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
              if (*(uint *)(lVar17 + 0x1d8) <= uVar8) goto LAB_0269dbfc;
              puVar12 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8);
              if (puVar12 != (uint *)0x0) {
                local_68 = puVar12;
              }
            }
            uVar9 = FUN_01ad9cb4(&local_78);
            if ((uVar9 & 1) == 0) {
              if (puVar12 == (uint *)0x0) {
                local_7c = 0;
              }
              else {
                puVar15 = (uint *)((long)puVar12 - (ulong)*puVar12);
                if (((*puVar12 == 0) || (puVar15 == (uint *)0x0)) || (uVar8 = *puVar15, uVar8 == 0))
                {
                  uVar10 = 0;
LAB_0269dd04:
                  local_7c = 0;
                }
                else {
                  uVar5 = puVar15[1];
                  uVar10 = 0;
                  if (uVar5 != 0) {
                    if ((ulong)(ushort)puVar15[2] != 0) {
                      lVar17 = 0xc;
                      if (*(char *)((long)puVar15 + 10) != '\0') {
                        lVar17 = 0x1c;
                      }
                      lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
                      if (lVar17 != 0) {
                        uVar10 = 0;
                        if ((ulong)uVar5 != 0) {
                          uVar10 = (uint)((ulong)((long)puVar12 - lVar17) / (ulong)uVar5);
                        }
                        if (uVar8 <= uVar10) {
                          uVar10 = 0xffffffff;
                        }
                        if ((uVar10 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar6 = *(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar10 * 2),
                           uVar10 = (uint)uVar6, uVar6 < 0xbd)) goto LAB_0269dc94;
                      }
                    }
                    uVar10 = 0;
                  }
LAB_0269dc94:
                  uVar5 = puVar15[1];
                  if ((uVar5 == 0) || ((ulong)(ushort)puVar15[2] == 0)) goto LAB_0269dd04;
                  lVar17 = 0xc;
                  if (*(char *)((long)puVar15 + 10) != '\0') {
                    lVar17 = 0x1c;
                  }
                  lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
                  local_7c = 0;
                  if (lVar17 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar4 = (uint)((ulong)((long)puVar12 - lVar17) / (ulong)uVar5);
                    }
                    if (uVar8 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if ((*(uint *)PTR_DAT_04bc01a0 <= uVar4) ||
                       (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc01a0 + 8) + (long)(int)uVar4 * 2),
                       local_7c = (uint)uVar6, 0x14 < uVar6)) goto LAB_0269dd04;
                  }
                }
                if ((uVar10 - 9 < 2) || (local_7c != 0)) {
                  local_90 = *puVar2;
                  lVar17 = *(long *)puVar7;
                  local_8e = *(undefined1 *)(lVar3 + 0x1c6);
                  local_8d = *(undefined1 *)(lVar3 + 0x1c7);
                  local_8c = *(undefined4 *)(lVar3 + 0x1c8);
                  local_88 = 0;
                  uVar8 = FUN_0277d6c4(&local_90);
                  if (*(long *)puVar7 != 0) {
                    lVar17 = *(long *)(lVar17 + 0x57e58);
                    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                    if (((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
                        (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) &&
                       (lVar17 = *(long *)PTR_DAT_04bb43a8, lVar17 != 0)) {
                      uVar9 = FUN_0277d6c4(puVar2);
                      local_88 = lVar17 + (uVar9 & 0xffffffff) * 0x23;
                      if (0x752 < ((uint)(uVar9 >> 3) & 0x1fffffff)) {
                        local_88 = lVar17;
                      }
                    }
                  }
                  local_94 = FUN_007b0ea4(&local_90,&local_9c);
                  if (local_94 != 4) {
                    local_78 = (undefined *)0xfffe;
                    FUN_0277d4ac(&local_78);
                    *puVar2 = (undefined2)local_78;
                    *(undefined1 *)(lVar3 + 0x1c6) = local_78._2_1_;
                    *(undefined1 *)(lVar3 + 0x1c7) = local_78._3_1_;
                    *(undefined4 *)(lVar3 + 0x1c8) = local_78._4_4_;
                    *(undefined4 *)(lVar3 + 0x1cc) = 0xffff;
                  }
                }
              }
            }
          }
        }
        lVar11 = lVar11 + 0xc;
      } while (lVar11 != 0);
      FUN_027cdae0(*param_1);
    }
  }
  return;
}

