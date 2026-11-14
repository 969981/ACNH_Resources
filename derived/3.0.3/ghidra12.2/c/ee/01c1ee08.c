
uint FUN_01c1ee08(undefined8 param_1,short *param_2)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  undefined2 local_828;
  undefined1 local_826;
  undefined1 local_825;
  undefined4 local_824;
  undefined *local_820;
  undefined1 auStack_818 [1876];
  uint local_c4;
  uint local_c0;
  uint local_bc;
  int local_b8;
  uint local_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint *local_98;
  undefined **local_90;
  uint *local_88;
  undefined8 local_80;
  uint local_70;
  undefined4 local_6c;
  
  if ((*param_2 == -2) || (DAT_05574040 == 0)) {
LAB_01c1eeb8:
    uVar6 = 0;
    goto LAB_01c1eebc;
  }
  puVar12 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar7 = (**(code **)(*(long *)*puVar12 + 0x38))();
    if (lVar7 == 0) goto LAB_01c1eeb8;
    lVar7 = lVar7 + 0x70;
  }
  else if (((puVar12 == (undefined8 *)0x0) || ((long *)puVar12[0x26] == (long *)0x0)) ||
          (lVar7 = (**(code **)(*(long *)puVar12[0x26] + 0x38))(), lVar7 == 0)) goto LAB_01c1eeb8;
  if ((*(long **)(lVar7 + 0x1bf1b8) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar7 + 0x1bf1b8), puVar12 == (undefined8 *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)*puVar12)();
    uVar8 = uVar8 & 0xffffffff;
  }
  puVar5 = PTR_DAT_04bc0510;
  puVar4 = PTR_DAT_04bb43c0;
  local_98 = (uint *)0x0;
  local_a8 = PTR_DAT_04bc0510 + 0x10;
  local_a0 = *(undefined4 *)param_2;
  uStack_9c = *(undefined4 *)(param_2 + 2);
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar4 == 0) {
LAB_01c1f20c:
    local_820 = (undefined *)CONCAT44(local_820._4_4_,0x70);
    local_90 = (undefined **)CONCAT44(local_90._4_4_,0xbc);
LAB_01c1f488:
    uVar6 = 0;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_01c1f20c;
    lVar16 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(param_2);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
       (puVar13 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8),
       puVar13 == (uint *)0x0)) goto LAB_01c1f20c;
    uVar14 = 0;
    local_820 = (undefined *)CONCAT44(local_820._4_4_,0x70);
    uVar6 = *puVar13;
    if ((uVar6 != 0) && (puVar13 != (uint *)(ulong)uVar6)) {
      puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar6);
      uVar14 = 0;
      if (*puVar15 != 0) {
        uVar6 = puVar15[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar16 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar15 + lVar16 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar16 != 0) {
            uVar14 = 0;
            if ((ulong)uVar6 != 0) {
              uVar14 = (uint)((ulong)((long)puVar13 - lVar16) / (ulong)uVar6);
            }
            if (*puVar15 <= uVar14) {
              uVar14 = 0xffffffff;
            }
            if ((uVar14 < DAT_05326ec0) &&
               (uVar14 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar14 * 2), uVar14 < 0xbd))
            goto LAB_01c1f020;
          }
        }
        uVar14 = 0;
      }
    }
LAB_01c1f020:
    local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar14);
    local_98 = puVar13;
    if (uVar14 != 0x70) goto LAB_01c1f488;
    uVar6 = *puVar13;
    if ((uVar6 != 0) && (puVar13 != (uint *)(ulong)uVar6)) {
      puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar6);
      if ((*puVar15 != 0) && ((uVar6 = puVar15[1], uVar6 != 0 && ((ulong)(ushort)puVar15[2] != 0))))
      {
        lVar16 = 0xc;
        if (*(char *)((long)puVar15 + 10) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar15 + lVar16 + (ulong)(ushort)puVar15[2] * 8;
        if (lVar16 != 0) {
          uVar14 = 0;
          if ((ulong)uVar6 != 0) {
            uVar14 = (uint)((ulong)((long)puVar13 - lVar16) / (ulong)uVar6);
          }
          if (*puVar15 <= uVar14) {
            uVar14 = 0xffffffff;
          }
          if (((uVar14 < DAT_05326fd0) &&
              (uVar3 = *(ushort *)(DAT_05326fd8 + (long)(int)uVar14 * 2), uVar6 = (uint)uVar3,
              uVar3 < 0x24)) && (local_ac = uVar6, uVar6 != 0)) {
            local_820 = PTR_DAT_04bbfe60 + 0x10;
            memset(auStack_818,0,0x754);
            uVar6 = nn::os::GetSystemTick();
            local_c4 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
            local_c0 = (local_c4 ^ local_c4 >> 0x1e) * 0x6c078965 + 2;
            local_bc = (local_c0 ^ local_c0 >> 0x1e) * 0x6c078965 + 3;
            local_b8 = (local_bc ^ local_bc >> 0x1e) * 0x6c078965 + 4;
            pvVar9 = (void *)FUN_01a451fc(&local_820);
            memset(pvVar9,0,0x754);
            pvVar9 = (void *)(**(code **)(local_820 + 0x18))(&local_820);
            memset(pvVar9,0,0x754);
            local_88 = &local_ac;
            local_90 = &PTR_FUN_049ff5d8;
            FUN_008a1ba0(&local_820,&local_90);
            lVar16 = (**(code **)(local_820 + 0x20))(&local_820);
            uVar18 = 0;
            do {
              if ((*(uint *)(lVar16 + (uVar18 >> 5) * 4) >> (ulong)((uint)uVar18 & 0x1f) & 1) != 0)
              goto LAB_01c1f1c4;
              uVar6 = (uint)uVar18 + 1;
              uVar18 = (ulong)uVar6;
            } while (uVar6 != 15000);
            uVar18 = 0;
LAB_01c1f1c4:
            lVar10 = (**(code **)(local_820 + 0x20))(&local_820);
            iVar17 = 15000;
            do {
              if ((*(uint *)(lVar10 + (ulong)(iVar17 - 1U >> 5) * 4) >> (ulong)(iVar17 - 1U & 0x1f)
                  & 1) != 0) break;
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
            if (iVar17 != (int)uVar18) {
LAB_01c1f258:
              plVar1 = (long *)(PTR_DAT_04bbfe58 + uVar18 * 8);
              if (0x752 < (uint)(uVar18 >> 3)) {
                plVar1 = (long *)PTR_DAT_04bbfe58;
              }
              lVar10 = *(long *)puVar4;
              local_80 = 0;
              plVar2 = (long *)&DAT_05586008;
              if ((uint)uVar18 < 0x3a99) {
                plVar2 = plVar1;
              }
              local_828 = (undefined2)*plVar2;
              local_826 = *(undefined1 *)((long)plVar2 + 2);
              local_825 = *(undefined1 *)((long)plVar2 + 3);
              local_824 = *(undefined4 *)((long)plVar2 + 4);
              local_88 = (uint *)*plVar2;
              local_90 = (undefined **)(puVar5 + 0x10);
              uVar6 = FUN_0277d6c4(&local_88);
              if (*(long *)puVar4 == 0) {
LAB_01c1f3d8:
                local_70 = 0xbc;
              }
              else {
                lVar10 = *(long *)(lVar10 + 0x57e58);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
                   (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0))
                goto LAB_01c1f3d8;
                lVar10 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(&local_828);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
                   (puVar13 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8),
                   puVar13 == (uint *)0x0)) goto LAB_01c1f3d8;
                local_70 = 0;
                uVar6 = *puVar13;
                if ((uVar6 != 0) && (puVar13 != (uint *)(ulong)uVar6)) {
                  puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar6);
                  local_70 = 0;
                  if (*puVar15 != 0) {
                    uVar6 = puVar15[1];
                    if ((uVar6 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                      lVar10 = 0xc;
                      if (*(char *)((long)puVar15 + 10) != '\0') {
                        lVar10 = 0x1c;
                      }
                      lVar10 = (long)puVar15 + lVar10 + (ulong)(ushort)puVar15[2] * 8;
                      if (lVar10 != 0) {
                        uVar14 = 0;
                        if ((ulong)uVar6 != 0) {
                          uVar14 = (uint)((ulong)((long)puVar13 - lVar10) / (ulong)uVar6);
                        }
                        if (*puVar15 <= uVar14) {
                          uVar14 = 0xffffffff;
                        }
                        if ((uVar14 < DAT_05326ec0) &&
                           (local_70 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar14 * 2),
                           local_70 < 0xbd)) goto LAB_01c1f3e4;
                      }
                    }
                    local_70 = 0;
                  }
                }
              }
LAB_01c1f3e4:
              local_6c = 0x70;
              if (local_70 == 0x70) {
                local_90 = (undefined **)*plVar2;
                uVar11 = FUN_027bf130(*(long *)(lVar7 + 0x1bf1a0) + *(long *)(lVar7 + 0x1bf198),
                                      &local_90);
                if ((uVar11 & 1) != 0) {
                  uVar6 = 1;
                  goto joined_r0x01c1f4b4;
                }
              }
              do {
                uVar6 = (int)uVar18 + 1;
                uVar18 = (ulong)uVar6;
                if (0x752 < uVar6 >> 3) {
                  uVar6 = 0x3a95;
                  goto LAB_01c1f43c;
                }
              } while ((*(uint *)(lVar16 + (ulong)(uVar6 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) ==
                       0);
              goto LAB_01c1f250;
            }
            goto LAB_01c1f488;
          }
        }
      }
    }
    uVar6 = FUN_027bf130(*(long *)(lVar7 + 0x1bf1a0) + *(long *)(lVar7 + 0x1bf198),param_2);
  }
joined_r0x01c1f4b4:
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar7 + 0x1bf1b8) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar7 + 0x1bf1b8) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
LAB_01c1eebc:
  return uVar6 & 1;
  while( true ) {
    if ((*(uint *)(lVar16 + (ulong)(uVar6 >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) != 0)
    goto LAB_01c1f24c;
    uVar6 = uVar6 - 3;
    if (uVar6 == 0xfffffffd) break;
LAB_01c1f43c:
    uVar14 = uVar6 + 2;
    if (((*(uint *)(lVar16 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0) ||
       (uVar14 = uVar6 + 1,
       (*(uint *)(lVar16 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0)) {
      uVar6 = uVar14;
LAB_01c1f24c:
      uVar18 = (ulong)(uVar6 + 1);
      goto LAB_01c1f250;
    }
  }
  uVar18 = 0;
LAB_01c1f250:
  if (iVar17 == (int)uVar18) goto LAB_01c1f488;
  goto LAB_01c1f258;
}

