
/* WARNING: Removing unreachable block (ram,0x023c897c) */

void FUN_023c88d0(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  undefined8 local_88;
  undefined4 local_80;
  int local_7c;
  uint *local_78;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  
  puVar2 = (undefined4 *)(param_1 + 0x21cc);
  if ((*(byte *)(param_1 + 0x17d2) >> 4 & 1) == 0) {
    if (**(char **)(param_1 + 0x21e0) != '\0') {
      puVar17 = *(undefined8 **)(param_1 + 0x60);
      if (puVar17 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar12 = __cxa_guard_acquire(&DAT_052461c0);
          puVar17 = &DAT_05240280;
          if (iVar12 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar17 = &DAT_05240280;
        }
      }
      lVar13 = puVar17[0x227];
      if (lVar13 == 0) {
        local_88 = (undefined *)((ulong)local_88._4_4_ << 0x20);
        plVar18 = &DAT_04c931a0;
      }
      else {
        uVar11 = *(uint *)(puVar17 + 0x2d3) >> 1 & 1;
        local_88 = (undefined *)
                   (CONCAT44(local_88._4_4_,*(uint *)(puVar17 + 0x2d3) >> 1) & 0xffffffff00000001);
        uVar15 = 0;
        if (*(long *)(lVar13 + 0x78) != 0) {
          uVar15 = *(uint *)(*(long *)(lVar13 + 0x78) + 0x18);
        }
        if (uVar15 <= uVar11) {
          uVar11 = 0;
        }
        if (*(uint *)(lVar13 + 0x80) <= uVar11) {
          uVar11 = 0;
        }
        plVar18 = (long *)(*(long *)(lVar13 + 0x88) + (long)(int)uVar11 * 0xe8 + 0x60);
      }
      (**(code **)(*(long *)(param_1 + 0x21d8) + 0x18))(param_1 + 0x21d8);
      (**(code **)(*(long *)(param_1 + 0x21d8) + 0x18))(param_1 + 0x21d8);
      lVar13 = *(long *)(param_1 + 0x21e0);
      (**(code **)(*plVar18 + 0x18))(plVar18);
      if (lVar13 != plVar18[1]) {
        uVar16 = 0;
        bVar9 = true;
        do {
          cVar4 = *(char *)(*(long *)(param_1 + 0x21e0) + uVar16);
          if (cVar4 != *(char *)(plVar18[1] + uVar16)) break;
          if (cVar4 == '\0') {
            if (bVar9) goto LAB_023c8a54;
            break;
          }
          bVar9 = uVar16 < 0x80000;
          uVar16 = uVar16 + 1;
        } while (uVar16 != 0x80001);
        goto LAB_023c8a40;
      }
    }
  }
  else {
LAB_023c8a40:
    if ((*(int *)(param_1 + 0x21d4) != 0) &&
       (iVar12 = *(int *)(param_1 + 0x21d4) + -1, *(int *)(param_1 + 0x21d4) = iVar12, iVar12 == 0))
    {
      if (*(long *)(param_1 + 0x298) != 0) {
        puVar14 = (uint *)(*(long *)(param_1 + 0x298) + 0xc1f4);
        *puVar14 = *puVar14 | 0x400;
        *puVar14 = *puVar14 | 0x800;
      }
      puVar7 = PTR_DAT_04bb37e0;
      *(undefined4 *)(param_1 + 0x21d4) = 0;
      *(undefined2 *)puVar2 = *(undefined2 *)puVar7;
      *(undefined *)(param_1 + 0x21ce) = puVar7[2];
      *(undefined *)(param_1 + 0x21cf) = puVar7[3];
      *(undefined4 *)(param_1 + 0x21d0) = *(undefined4 *)(puVar7 + 4);
      return;
    }
  }
LAB_023c8a54:
  puVar7 = PTR_DAT_04bb43c0;
  lVar19 = *(long *)PTR_DAT_04bb43c0;
  uVar11 = FUN_0277d6c4(puVar2);
  lVar13 = *(long *)puVar7;
  if (lVar13 != 0) {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar19 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      puVar17 = *(undefined8 **)(param_1 + 0x60);
      if (puVar17 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar12 = __cxa_guard_acquire(&DAT_052461c0);
          puVar17 = &DAT_05240280;
          if (iVar12 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar17 = &DAT_05240280;
        }
      }
      iVar12 = *(int *)(param_1 + 0x21d0);
      lVar19 = *(long *)puVar7;
      lVar13 = puVar17[0x290] + ((ulong)*(uint *)(puVar17[0x290] + 0x10) & 1) * 0x20;
      uVar6 = *puVar2;
      local_70 = *puVar2;
      puVar1 = (undefined4 *)(lVar13 + 0x14);
      uVar5 = *puVar1;
      local_68 = *puVar1;
      iVar3 = *(int *)(lVar13 + 0x18);
      local_6c = iVar12;
      local_64 = iVar3;
      uVar11 = FUN_0277d6c4(&local_68);
      lVar13 = *(long *)puVar7;
      if (lVar13 != 0) {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar19 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          local_88 = PTR_DAT_04bc0510 + 0x10;
          local_78 = (uint *)0x0;
          local_80 = uVar5;
          local_7c = iVar3;
          uVar11 = FUN_0277d6c4(&local_80);
          if (*(long *)puVar7 != 0) {
            lVar13 = *(long *)(lVar13 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar13 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
              lVar13 = *(long *)PTR_DAT_04bc0428;
              uVar11 = FUN_0277d6c4(&local_68);
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if ((uVar11 < *(uint *)(lVar13 + 0x1d8)) &&
                 (puVar14 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar11 * 8),
                 puVar14 != (uint *)0x0)) {
                local_78 = puVar14;
              }
            }
          }
          uVar16 = FUN_01af0020(&local_88);
          if ((uVar16 & 1) != 0) {
            FUN_01af2bc0(&local_88,1);
            local_68 = local_80;
            local_64 = local_7c;
          }
          if (local_78 != (uint *)0x0) {
            uVar11 = *local_78;
            uVar10 = 0;
            if ((uVar11 != 0) && (local_78 != (uint *)(ulong)uVar11)) {
              puVar14 = (uint *)((long)local_78 - (long)(ulong)uVar11);
              if ((*puVar14 != 0) &&
                 ((uVar11 = puVar14[1], uVar11 != 0 && ((ulong)(ushort)puVar14[2] != 0)))) {
                lVar13 = 0xc;
                if (*(char *)((long)puVar14 + 10) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar13 = (long)puVar14 + lVar13 + (ulong)(ushort)puVar14[2] * 8;
                if (lVar13 != 0) {
                  uVar15 = 0;
                  if ((ulong)uVar11 != 0) {
                    uVar15 = (uint)((ulong)((long)local_78 - lVar13) / (ulong)uVar11);
                  }
                  if (*puVar14 <= uVar15) {
                    uVar15 = 0xffffffff;
                  }
                  if ((uVar15 < *(uint *)PTR_DAT_04bc0148) &&
                     (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar15 * 2),
                     uVar10 < 0xa2)) goto LAB_023c8d5c;
                }
              }
              uVar10 = 0;
            }
LAB_023c8d5c:
            uVar16 = FUN_01ae5024(uVar10);
            if ((uVar16 & 1) != 0) {
              FUN_01ae4f34(&local_88,1);
              local_68 = local_80;
              local_64 = local_7c;
            }
          }
          lVar13 = *(long *)puVar7;
        }
      }
      uVar11 = FUN_0277d6c4(&local_70);
      lVar19 = *(long *)puVar7;
      if (lVar19 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          local_78 = (uint *)0x0;
          local_88 = PTR_DAT_04bc0510 + 0x10;
          local_80 = uVar6;
          local_7c = iVar12;
          uVar11 = FUN_0277d6c4(&local_80);
          if (*(long *)puVar7 != 0) {
            lVar13 = *(long *)(lVar19 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar13 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
              lVar13 = *(long *)PTR_DAT_04bc0428;
              uVar11 = FUN_0277d6c4(&local_70);
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if ((uVar11 < *(uint *)(lVar13 + 0x1d8)) &&
                 (puVar14 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar11 * 8),
                 puVar14 != (uint *)0x0)) {
                local_78 = puVar14;
              }
            }
          }
          uVar16 = FUN_01af0020(&local_88);
          if ((uVar16 & 1) != 0) {
            FUN_01af2bc0(&local_88,1);
            local_70 = local_80;
            local_6c = local_7c;
          }
          if (local_78 != (uint *)0x0) {
            uVar11 = *local_78;
            uVar10 = 0;
            if ((uVar11 != 0) && (local_78 != (uint *)(ulong)uVar11)) {
              puVar14 = (uint *)((long)local_78 - (long)(ulong)uVar11);
              if ((*puVar14 != 0) &&
                 ((uVar11 = puVar14[1], uVar11 != 0 && ((ulong)(ushort)puVar14[2] != 0)))) {
                lVar13 = 0xc;
                if (*(char *)((long)puVar14 + 10) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar13 = (long)puVar14 + lVar13 + (ulong)(ushort)puVar14[2] * 8;
                if (lVar13 != 0) {
                  uVar15 = 0;
                  if ((ulong)uVar11 != 0) {
                    uVar15 = (uint)((ulong)((long)local_78 - lVar13) / (ulong)uVar11);
                  }
                  if (*puVar14 <= uVar15) {
                    uVar15 = 0xffffffff;
                  }
                  if ((uVar15 < *(uint *)PTR_DAT_04bc0148) &&
                     (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar15 * 2),
                     uVar10 < 0xa2)) goto LAB_023c8f24;
                }
              }
              uVar10 = 0;
            }
LAB_023c8f24:
            uVar16 = FUN_01ae5024(uVar10);
            if ((uVar16 & 1) != 0) {
              FUN_01ae4f34(&local_88,1);
              local_70 = local_80;
              local_6c = local_7c;
            }
          }
        }
      }
      uVar16 = FUN_0277d7b4(&local_68,&local_70);
      puVar8 = PTR_DAT_04bb37e0;
      if ((uVar16 & 1) != 0) {
        if ((local_68._3_1_ == local_70._3_1_) && (local_64 == local_6c)) {
          *(undefined2 *)puVar2 = *(undefined2 *)PTR_DAT_04bb37e0;
          *(undefined *)(param_1 + 0x21ce) = puVar8[2];
          *(undefined *)(param_1 + 0x21cf) = puVar8[3];
          *(undefined4 *)(param_1 + 0x21d0) = *(undefined4 *)(puVar8 + 4);
          *(undefined4 *)(param_1 + 0x21d4) = 1;
        }
      }
      lVar13 = *(long *)puVar7;
    }
  }
  uVar11 = FUN_0277d6c4(puVar2);
  bVar9 = false;
  if (*(long *)puVar7 == 0) {
LAB_023c8fe8:
    if (bVar9) goto LAB_023c9000;
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if (uVar11 < *(uint *)(lVar13 + 0x1d8)) {
      bVar9 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar11 * 8) != 0;
      goto LAB_023c8fe8;
    }
  }
  if (*(int *)(param_1 + 0x21d4) == 0) {
    return;
  }
LAB_023c9000:
  if (*(long *)(param_1 + 0x298) != 0) {
    puVar14 = (uint *)(*(long *)(param_1 + 0x298) + 0xc1f4);
    *puVar14 = *puVar14 & 0xfffffbff;
    *puVar14 = *puVar14 & 0xfffff7ff;
  }
  return;
}

