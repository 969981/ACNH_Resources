
bool FUN_027bf810(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  void *__s;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  uint *puVar16;
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
  undefined8 local_98;
  undefined **local_90;
  uint *local_88;
  undefined8 local_80;
  uint local_70 [4];
  
  puVar5 = PTR_DAT_04bc0510;
  puVar3 = PTR_DAT_04bb43c0;
  local_98 = 0;
  local_a8 = PTR_DAT_04bc0510 + 0x10;
  local_a0 = *(undefined4 *)param_2;
  uStack_9c = *(undefined4 *)((long)param_2 + 4);
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_a0);
  puVar4 = PTR_DAT_04bc0428;
  if (*(long *)puVar3 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(param_2);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
         ((puVar16 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8),
          puVar16 != (uint *)0x0 &&
          (uVar7 = *puVar16, uVar7 != 0 && puVar16 != (uint *)(ulong)uVar7)))) {
        puVar13 = (uint *)((long)puVar16 - (long)(ulong)uVar7);
        if ((*puVar13 != 0) &&
           ((uVar7 = puVar13[1], uVar7 != 0 && ((ulong)(ushort)puVar13[2] != 0)))) {
          lVar15 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar15 != 0) {
            uVar1 = 0;
            if ((ulong)uVar7 != 0) {
              uVar1 = (uint)((ulong)((long)puVar16 - lVar15) / (ulong)uVar7);
            }
            if (*puVar13 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if (((uVar1 < DAT_05326fd0) &&
                (uVar2 = *(ushort *)(DAT_05326fd8 + (long)(int)uVar1 * 2), local_ac = (uint)uVar2,
                uVar2 < 0x24)) && (local_ac != 0)) {
              local_820 = PTR_DAT_04bbfe60 + 0x10;
              memset(auStack_818,0,0x754);
              uVar7 = nn::os::GetSystemTick();
              local_c4 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
              local_c0 = (local_c4 ^ local_c4 >> 0x1e) * 0x6c078965 + 2;
              local_bc = (local_c0 ^ local_c0 >> 0x1e) * 0x6c078965 + 3;
              local_b8 = (local_bc ^ local_bc >> 0x1e) * 0x6c078965 + 4;
              __s = (void *)FUN_01a451fc(&local_820);
              memset(__s,0,0x754);
              uVar7 = *puVar16;
              local_70[0] = 0;
              if ((uVar7 != 0) && (puVar16 != (uint *)(ulong)uVar7)) {
                puVar13 = (uint *)((long)puVar16 - (long)(ulong)uVar7);
                local_70[0] = 0;
                if (*puVar13 != 0) {
                  uVar7 = puVar13[1];
                  if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                    lVar15 = 0xc;
                    if (*(char *)((long)puVar13 + 10) != '\0') {
                      lVar15 = 0x1c;
                    }
                    lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
                    if (lVar15 != 0) {
                      uVar1 = 0;
                      if ((ulong)uVar7 != 0) {
                        uVar1 = (uint)((ulong)((long)puVar16 - lVar15) / (ulong)uVar7);
                      }
                      if (*puVar13 <= uVar1) {
                        uVar1 = 0xffffffff;
                      }
                      if ((uVar1 < DAT_05326ec0) &&
                         (local_70[0] = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                         local_70[0] < 0xbd)) goto LAB_027bfa80;
                    }
                  }
                  local_70[0] = 0;
                }
              }
LAB_027bfa80:
              local_88 = local_70;
              local_90 = &PTR_FUN_049ff448;
              FUN_008a1ba0(&local_820,&local_90);
              uVar7 = 0;
              local_88 = &local_ac;
              local_90 = &PTR_FUN_049ff5d8;
              do {
                (**(code **)(local_820 + 0x10))(local_70,&local_820,uVar7);
                lVar15 = (**(code **)(local_820 + 0x20))(&local_820);
                uVar1 = 1 << (ulong)(uVar7 & 0x1f);
                if ((*(uint *)(lVar15 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
                  lVar15 = *(long *)puVar3;
                  uVar8 = FUN_0277d6c4(local_70);
                  if (*(long *)puVar3 != 0) {
                    lVar15 = *(long *)(lVar15 + 0x57e58);
                    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                    if (((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
                        (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) &&
                       (uVar11 = (*(code *)*local_90)(&local_90,local_70), (uVar11 & 1) != 0))
                    goto LAB_027bfb00;
                  }
                  lVar15 = (**(code **)(local_820 + 0x18))(&local_820);
                  lVar12 = (ulong)(uVar7 >> 5) * 4;
                  *(uint *)(lVar15 + lVar12) = *(uint *)(lVar15 + lVar12) & (uVar1 ^ 0xffffffff);
                }
LAB_027bfb00:
                uVar7 = uVar7 + 1;
              } while (uVar7 != 15000);
              lVar12 = (**(code **)(local_820 + 0x20))(&local_820);
              lVar15 = 0;
              uVar7 = 0;
              do {
                uVar8 = uVar7;
                puVar16 = (uint *)(lVar12 + lVar15);
                lVar15 = lVar15 + 4;
                uVar7 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
                uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
                uVar1 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
                uVar1 = uVar1 + (uVar1 >> 8);
                uVar1 = uVar1 + (uVar1 >> 0x10);
                uVar7 = (uVar1 & 0x3f) + uVar8;
              } while (lVar15 != 0x754);
              if (uVar7 == 0) {
                return true;
              }
              bVar6 = false;
              uVar14 = 0;
              do {
                uVar14 = uVar14 + 1;
                FUN_00889f80(local_70,&local_820,uVar14);
                local_88 = (uint *)*param_2;
                local_80 = 0;
                lVar15 = *(long *)puVar3;
                local_90 = (undefined **)(puVar5 + 0x10);
                uVar9 = FUN_0277d6c4(&local_88);
                uVar10 = 0;
                if (*(long *)puVar3 != 0) {
                  lVar15 = *(long *)(lVar15 + 0x57e58);
                  uVar10 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                  if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                    lVar15 = *(long *)puVar4;
                    uVar10 = FUN_0277d6c4(param_2);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                    if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
                       ((puVar16 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8),
                        puVar16 != (uint *)0x0 &&
                        (uVar10 = *puVar16, uVar10 != 0 && puVar16 != (uint *)(ulong)uVar10)))) {
                      puVar13 = (uint *)((long)puVar16 - (long)(ulong)uVar10);
                      if ((*puVar13 != 0) &&
                         ((uVar10 = puVar13[1], uVar10 != 0 && ((ulong)(ushort)puVar13[2] != 0)))) {
                        lVar15 = 0xc;
                        if (*(char *)((long)puVar13 + 10) != '\0') {
                          lVar15 = 0x1c;
                        }
                        lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
                        if (lVar15 != 0) {
                          uVar9 = 0;
                          if ((ulong)uVar10 != 0) {
                            uVar9 = (uint)((ulong)((long)puVar16 - lVar15) / (ulong)uVar10);
                          }
                          if (*puVar13 <= uVar9) {
                            uVar9 = 0xffffffff;
                          }
                          if ((uVar9 < DAT_05326fd0) &&
                             (uVar2 = *(ushort *)(DAT_05326fd8 + (long)(int)uVar9 * 2),
                             uVar10 = (uint)uVar2, uVar2 < 0x24)) goto LAB_027bfd78;
                        }
                      }
                    }
                  }
                  uVar10 = 0;
                }
LAB_027bfd78:
                uVar11 = FUN_0277d7b4(local_70,param_2);
                if ((((uVar11 & 1) == 0) && (local_ac == uVar10)) &&
                   (uVar11 = FUN_027bf130(param_1,local_70), (uVar11 & 1) == 0)) {
                  return bVar6;
                }
                bVar6 = uVar7 <= uVar14;
                if (uVar8 + (uVar1 & 0x3f) == uVar14) {
                  return bVar6;
                }
              } while( true );
            }
          }
        }
      }
    }
  }
  return false;
}

