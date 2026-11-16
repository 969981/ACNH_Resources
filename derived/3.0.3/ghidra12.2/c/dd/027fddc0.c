
void FUN_027fddc0(long *param_1,uint param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  ulong uVar3;
  short sVar4;
  long *plVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  int local_b4;
  uint local_a4;
  undefined **local_90;
  long *local_88;
  uint *local_80;
  undefined8 uStack_78;
  short local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  long *local_68;
  
  uVar10 = *(uint *)(param_1 + 0x2e);
  iVar11 = 0;
  if ((*(byte *)((long)param_1 + 0x177) != 0 ||
       (((ulong)uVar10 != 0 || *(ushort *)((long)param_1 + 0x174) != 0) ||
       *(byte *)((long)param_1 + 0x176) != 0)) &&
     ((uint)*(byte *)((long)param_1 + 0x177) ==
      ((uVar10 + (uVar10 >> 0x10) + (uVar10 >> 0x18) + (uVar10 >> 8)) - 0x2d & 0xff))) {
    lVar15 = (ulong)uVar10 << ((ulong)(0x1d - *(byte *)((long)param_1 + 0x176)) & 0x3f);
    iVar11 = ((int)lVar15 - (uint)*(ushort *)((long)param_1 + 0x174)) + -0x7f1cd4ef +
             (int)((ulong)lVar15 >> 0x20);
  }
  plVar1 = param_1 + 0x17;
  local_90 = &PTR_LAB_04a915d0;
  uVar10 = *(uint *)(param_1 + 0x2b);
  local_80 = (uint *)&LAB_028012e0;
  uStack_78 = 0;
  if (0x13 < uVar10) {
    uVar10 = 0x14;
  }
  local_88 = plVar1;
  iVar7 = FUN_0277c8f0(uVar10,&local_90);
  uVar10 = *(uint *)(param_1 + 0x14);
  local_90 = &PTR_LAB_04a915f8;
  local_80 = (uint *)&LAB_028012f0;
  uStack_78 = 0;
  if (0x13 < uVar10) {
    uVar10 = 0x14;
  }
  local_88 = param_1;
  iVar8 = FUN_0277c8f0(uVar10,&local_90);
  if ((uint)(iVar7 + iVar11 + iVar8) <= param_2) {
    uVar10 = *(uint *)(param_1 + 0x2e);
    iVar7 = 0;
    if ((*(byte *)((long)param_1 + 0x177) != 0 ||
         (((ulong)uVar10 != 0 || *(ushort *)((long)param_1 + 0x174) != 0) ||
         *(byte *)((long)param_1 + 0x176) != 0)) &&
       ((uint)*(byte *)((long)param_1 + 0x177) ==
        ((uVar10 + (uVar10 >> 0x10) + (uVar10 >> 0x18) + (uVar10 >> 8)) - 0x2d & 0xff))) {
      lVar15 = (ulong)uVar10 << ((ulong)(0x1d - *(byte *)((long)param_1 + 0x176)) & 0x3f);
      iVar7 = ((int)lVar15 - (uint)*(ushort *)((long)param_1 + 0x174)) + -0x7f1cd4ef +
              (int)((ulong)lVar15 >> 0x20);
    }
    local_80 = (uint *)&LAB_028012e0;
    uStack_78 = 0;
    local_90 = &PTR_LAB_04a915d0;
    uVar10 = *(uint *)(param_1 + 0x2b);
    if (0x13 < uVar10) {
      uVar10 = 0x14;
    }
    local_88 = plVar1;
    iVar8 = FUN_0277c8f0(uVar10,&local_90);
    uVar10 = *(uint *)(param_1 + 0x14);
    local_90 = &PTR_LAB_04a915f8;
    local_80 = (uint *)&LAB_028012f0;
    uStack_78 = 0;
    if (0x13 < uVar10) {
      uVar10 = 0x14;
    }
    local_88 = param_1;
    iVar9 = FUN_0277c8f0(uVar10,&local_90);
    param_2 = iVar8 + iVar7 + iVar9;
  }
  puVar6 = PTR_DAT_04bb43c0;
  if (iVar11 < (int)param_2) {
    ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    do {
      uVar10 = 0;
      if (*(byte *)(param_1 + 0x2f) < 3) {
        uVar10 = (uint)*(byte *)(param_1 + 0x2f);
      }
      local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar10);
      uVar17 = 0x1e;
      if (uVar10 != 1) {
        uVar17 = 0x14;
      }
      uVar3 = 0x28;
      if (uVar10 != 2) {
        uVar3 = uVar17;
      }
      local_a4 = DAT_0559bc2c;
      local_68 = (long *)0x8a4;
      FUN_0277d4ac(&local_68);
      local_80 = (uint *)0x0;
      lVar15 = *(long *)puVar6;
      local_88 = local_68;
      local_90 = ppuVar2;
      uVar10 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar6 != 0) {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          lVar15 = *(long *)PTR_DAT_04bc0428;
          uVar10 = FUN_0277d6c4(&local_68);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
             (puVar12 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8),
             puVar12 != (uint *)0x0)) {
            local_80 = puVar12;
          }
        }
      }
      param_2 = param_2 - iVar11;
      local_b4 = FUN_01aed730(&local_90);
      uVar17 = 0;
      local_b4 = local_b4 + 1;
      plVar18 = plVar1;
      do {
        uVar10 = *(uint *)(param_1 + 0x2b);
        if (0x13 < uVar10) {
          uVar10 = 0x14;
        }
        if (uVar17 < uVar10) {
          sVar4 = (short)*plVar18;
          plVar5 = plVar18;
joined_r0x027fe16c:
          plVar13 = plVar5;
          if (sVar4 != -2) {
            lVar15 = *(long *)puVar6;
            uVar10 = FUN_0277d6c4(plVar5);
            if (*(long *)puVar6 == 0) goto LAB_027fe1d0;
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            plVar13 = (long *)PTR_DAT_04bb37e0;
            if (uVar10 < *(uint *)(lVar15 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0) {
                plVar13 = plVar5;
              }
            }
          }
        }
        else {
          uVar14 = (uint)(uVar17 + -uVar10);
          if ((int)uVar14 < 0) {
LAB_027fe1d0:
            plVar13 = (long *)PTR_DAT_04bb37e0;
          }
          else {
            uVar16 = *(uint *)(param_1 + 0x14);
            if (0x13 < uVar16) {
              uVar16 = 0x14;
            }
            plVar13 = (long *)PTR_DAT_04bb37e0;
            if (uVar14 < uVar16) {
              sVar4 = (short)param_1[uVar17 + -uVar10 & 0xffffffff];
              plVar5 = param_1 + (uVar17 + -uVar10 & 0xffffffff);
              goto joined_r0x027fe16c;
            }
          }
        }
        local_70 = (short)*plVar13;
        local_6e = *(undefined1 *)((long)plVar13 + 2);
        local_6d = *(undefined1 *)((long)plVar13 + 3);
        local_6c = *(undefined4 *)((long)plVar13 + 4);
        plVar13 = (long *)*plVar13;
        lVar15 = *(long *)puVar6;
        uVar10 = FUN_0277d6c4(&local_70);
        lVar19 = *(long *)puVar6;
        if (lVar19 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            local_90 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
            local_80 = (uint *)0x0;
            local_88 = plVar13;
            uVar10 = FUN_0277d6c4(&local_88);
            if (*(long *)puVar6 == 0) {
LAB_027fe2e0:
              if (local_80 == (uint *)0x0) goto LAB_027fe0e4;
            }
            else {
              lVar15 = *(long *)(lVar19 + 0x57e58);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((*(uint *)(lVar15 + 0x1d8) <= uVar10) ||
                 (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
              goto LAB_027fe2e0;
              lVar15 = *(long *)PTR_DAT_04bc0428;
              uVar10 = FUN_0277d6c4(&local_70);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((*(uint *)(lVar15 + 0x1d8) <= uVar10) ||
                 (puVar12 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8),
                 puVar12 == (uint *)0x0)) goto LAB_027fe2e0;
              local_80 = puVar12;
            }
            puVar12 = (uint *)((long)local_80 - (ulong)*local_80);
            if ((((*local_80 != 0) && (puVar12 != (uint *)0x0)) && (*puVar12 != 0)) &&
               ((uVar10 = puVar12[1], uVar10 != 0 && ((ulong)(ushort)puVar12[2] != 0)))) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar12 + lVar15 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar15 != 0) {
                uVar14 = 0;
                if ((ulong)uVar10 != 0) {
                  uVar14 = (uint)((ulong)((long)local_80 - lVar15) / (ulong)uVar10);
                }
                if (*puVar12 <= uVar14) {
                  uVar14 = 0xffffffff;
                }
                if (((uVar14 < *(uint *)PTR_DAT_04bc00c8) &&
                    (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar14 * 2) == 0x86))
                   && (iVar11 = FUN_01aed730(&local_90), iVar11 < local_b4)) {
                  local_b4 = FUN_01aed730(&local_90);
                  local_a4 = (uint)uVar17;
                }
              }
            }
          }
        }
LAB_027fe0e4:
        uVar17 = uVar17 + 1;
        plVar18 = plVar18 + 1;
      } while (uVar3 != uVar17);
      if (0x27 < local_a4) {
        iVar11 = 0;
        break;
      }
      uVar10 = *(uint *)(param_1 + 0x2b);
      if (0x13 < uVar10) {
        uVar10 = 0x14;
      }
      uVar14 = local_a4 - uVar10;
      if (local_a4 < uVar10) {
        plVar13 = plVar1 + local_a4;
LAB_027fe3ec:
        plVar18 = plVar13;
        if ((short)*plVar13 != -2) {
          lVar15 = *(long *)puVar6;
          uVar10 = FUN_0277d6c4(plVar13);
          if (*(long *)puVar6 == 0) goto LAB_027fe460;
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          plVar18 = (long *)PTR_DAT_04bb37e0;
          if (uVar10 < *(uint *)(lVar15 + 0x1d8)) {
            if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0) {
              plVar18 = plVar13;
            }
          }
        }
      }
      else if ((int)uVar14 < 0) {
LAB_027fe460:
        plVar18 = (long *)PTR_DAT_04bb37e0;
      }
      else {
        uVar10 = *(uint *)(param_1 + 0x14);
        if (0x13 < uVar10) {
          uVar10 = 0x14;
        }
        plVar18 = (long *)PTR_DAT_04bb37e0;
        if (uVar14 < uVar10) {
          plVar13 = param_1 + uVar14;
          goto LAB_027fe3ec;
        }
      }
      local_88 = (long *)*plVar18;
      local_80 = (uint *)0x0;
      lVar15 = *(long *)puVar6;
      local_90 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      uVar10 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar6 != 0) {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          lVar15 = *(long *)PTR_DAT_04bc0428;
          uVar10 = FUN_0277d6c4(plVar18);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
             (puVar12 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8),
             puVar12 != (uint *)0x0)) {
            local_80 = puVar12;
          }
        }
      }
      iVar11 = FUN_01aed730(&local_90);
      FUN_027fa2dc(param_1,(ulong)local_a4,PTR_DAT_04bb37e0,0);
    } while (iVar11 < (int)param_2);
    uVar10 = nn::os::GetSystemTick();
    uVar14 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
    uVar10 = uVar14 ^ uVar14 * 0x800;
    uVar16 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 2;
    uVar14 = uVar16 ^ uVar16 * 0x800;
    uVar16 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 3;
    uVar16 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 4;
    uVar10 = uVar10 >> 8 ^ uVar16 >> 0x13 ^ uVar10 ^ uVar16;
    *(short *)((long)param_1 + 0x174) = (short)(uVar10 >> 0x10);
    uVar17 = (ulong)(uVar14 >> 8 ^ uVar10 >> 0x13 ^ uVar14 ^ uVar10) * 0x1b;
    *(char *)((long)param_1 + 0x176) = (char)(uVar17 >> 0x20);
    lVar15 = (ulong)((iVar11 - param_2) + 0x7f1cd4ef + (uVar10 >> 0x10)) << (uVar17 >> 0x20) + 3;
    iVar11 = (int)((ulong)lVar15 >> 0x20) + (int)lVar15;
    *(int *)(param_1 + 0x2e) = iVar11;
    *(char *)((long)param_1 + 0x177) =
         (char)iVar11 + (char)((uint)iVar11 >> 0x10) + (char)((uint)iVar11 >> 0x18) +
         (char)((uint)iVar11 >> 8) + -0x2d;
  }
  else {
    FUN_0285dd6c(param_1 + 0x2e,param_2);
  }
  return;
}

