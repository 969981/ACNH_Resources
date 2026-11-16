
void FUN_0277ba50(int param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  undefined *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  uint *local_68;
  
  puVar4 = PTR_DAT_04bb43c0;
  if (param_1 != 0) {
    iVar10 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar7 = (undefined4 *)(**(code **)*param_3)(param_3,iVar10);
      lVar9 = *(long *)puVar4;
      uVar5 = FUN_0277d6c4();
      lVar11 = *(long *)puVar4;
      if (lVar11 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          local_70 = *(undefined2 *)puVar7;
          local_6e = *(undefined1 *)((long)puVar7 + 2);
          local_6d = *(undefined1 *)((long)puVar7 + 3);
          local_6c = puVar7[1];
          local_68 = (uint *)0x0;
          local_78 = puVar1;
          uVar5 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar4 == 0) {
LAB_0277bbdc:
            if (local_68 == (uint *)0x0) goto LAB_0277bae0;
          }
          else {
            lVar9 = *(long *)(lVar11 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((*(uint *)(lVar9 + 0x1d8) <= uVar5) ||
               (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_0277bbdc;
            lVar9 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(puVar7);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((*(uint *)(lVar9 + 0x1d8) <= uVar5) ||
               (puVar8 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar8 == (uint *)0x0)) goto LAB_0277bbdc;
            local_68 = puVar8;
          }
          puVar3 = PTR_DAT_04bb37e0;
          puVar8 = (uint *)((long)local_68 - (ulong)*local_68);
          if (((*local_68 != 0) && (puVar8 != (uint *)0x0)) && (*puVar8 != 0)) {
            uVar5 = puVar8[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar2 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar2 = (uint)((ulong)((long)local_68 - lVar9) / (ulong)uVar5);
                }
                if (*puVar8 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                   (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 0x89)) {
                  *(undefined2 *)puVar7 = *(undefined2 *)PTR_DAT_04bb37e0;
                  *(undefined *)((long)puVar7 + 2) = puVar3[2];
                  *(undefined *)((long)puVar7 + 3) = puVar3[3];
                  puVar7[1] = *(undefined4 *)(puVar3 + 4);
                  goto LAB_0277bae0;
                }
              }
            }
            if (*puVar8 != 0) {
              uVar5 = puVar8[1];
              if ((uVar5 == 0) || ((ulong)(ushort)puVar8[2] == 0)) {
LAB_0277bd98:
                if ((*puVar8 != 0) &&
                   ((uVar5 = puVar8[1], uVar5 != 0 && ((ulong)(ushort)puVar8[2] != 0)))) {
                  lVar9 = 0xc;
                  if (*(char *)((long)puVar8 + 10) != '\0') {
                    lVar9 = 0x1c;
                  }
                  lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                  if (lVar9 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar2 = (uint)((ulong)((long)local_68 - lVar9) / (ulong)uVar5);
                    }
                    if (*puVar8 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                       (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 0x8c))
                    {
                      local_98 = 0x955;
                      FUN_0277d4ac(&local_98);
                      local_80 = 0;
                      local_88 = (undefined4)local_98;
                      uStack_84 = local_98._4_4_;
                      lVar9 = *(long *)puVar4;
                      local_90 = PTR_DAT_04bc0510 + 0x10;
                      uVar5 = FUN_0277d6c4(&local_88);
                      if (*(long *)puVar4 != 0) {
                        lVar9 = *(long *)(lVar9 + 0x57e58);
                        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
                        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                          lVar9 = *(long *)PTR_DAT_04bc0428;
                          uVar5 = FUN_0277d6c4(&local_98);
                          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
                          if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
                             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8),
                             lVar9 != 0)) {
                            local_80 = lVar9;
                          }
                        }
                      }
                      uVar6 = 5;
                      goto LAB_0277beb8;
                    }
                  }
                }
              }
              else {
                lVar9 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar9 == 0) goto LAB_0277bd98;
                uVar2 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar2 = (uint)((ulong)((long)local_68 - lVar9) / (ulong)uVar5);
                }
                if (*puVar8 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((*(uint *)PTR_DAT_04bc00c8 <= uVar2) ||
                   (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) != 0x8a))
                goto LAB_0277bd98;
                uVar6 = FUN_01af02d0(&local_78);
                local_98 = 0x955;
                FUN_0277d4ac(&local_98);
                local_80 = 0;
                local_88 = (undefined4)local_98;
                uStack_84 = local_98._4_4_;
                lVar9 = *(long *)puVar4;
                local_90 = PTR_DAT_04bc0510 + 0x10;
                uVar5 = FUN_0277d6c4(&local_88);
                if (*(long *)puVar4 != 0) {
                  lVar9 = *(long *)(lVar9 + 0x57e58);
                  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
                  if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                    lVar9 = *(long *)PTR_DAT_04bc0428;
                    uVar5 = FUN_0277d6c4(&local_98);
                    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
                    if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
                       (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8),
                       lVar9 != 0)) {
                      local_80 = lVar9;
                    }
                  }
                }
LAB_0277beb8:
                FUN_01af2bc0(&local_90,uVar6);
                *puVar7 = local_88;
                puVar7[1] = uStack_84;
                FUN_02649620(param_2,puVar7,0);
              }
            }
          }
        }
      }
LAB_0277bae0:
      iVar10 = iVar10 + 1;
    } while (param_1 != iVar10);
  }
  return;
}

