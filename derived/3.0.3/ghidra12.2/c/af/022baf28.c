
uint FUN_022baf28(long param_1,char *param_2,undefined8 param_3,undefined8 *param_4,long param_5,
                 byte *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  byte bVar10;
  uint *puVar11;
  uint *puVar12;
  char cVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 local_130 [2];
  undefined1 auStack_128 [8];
  uint *local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined2 local_108 [4];
  undefined *local_100;
  undefined *local_f8;
  int local_f0;
  int iStack_ec;
  undefined *local_e8;
  int local_e0;
  int iStack_dc;
  undefined2 local_d8;
  undefined4 local_d6;
  undefined1 local_d2;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c4;
  undefined2 local_bc;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  byte local_78;
  byte local_77;
  byte local_76;
  byte local_74;
  undefined1 local_72;
  undefined4 local_70;
  uint local_6c;
  
  puVar5 = PTR_DAT_04bbbc68;
  puVar4 = PTR_DAT_04bb6298;
  local_70 = 0;
  local_7a = 1;
  local_8c = *param_4;
  local_90 = 0;
  local_72 = 0;
  local_84 = (undefined2)*(undefined4 *)(param_5 + 8);
  local_82 = (undefined2)*(undefined4 *)(param_5 + 0xc);
  local_77 = *param_6 & 7;
  uVar6 = (uint)*(byte *)(param_1 + 0x10);
  if (7 < uVar6) {
    uVar6 = 0xff;
  }
  local_7c = *(undefined2 *)PTR_DAT_04bb6298;
  local_79 = (undefined1)uVar6;
  local_76 = 0;
  local_74 = 0;
  lVar15 = *(long *)PTR_DAT_04bbbc68;
  if (lVar15 != 0) {
    uVar6 = 0;
    if ((*(long *)(lVar15 + 0xb0) != 0) && (uVar6 = 0, *(long *)(*(long *)(lVar15 + 0xb0) + 8) != 0)
       ) {
      uVar6 = 0;
      if ((*(long *)(lVar15 + 0x488) != 0) &&
         (uVar6 = 0, *(long *)(*(long *)(lVar15 + 0x488) + 8) != 0)) {
        uVar6 = 0;
        if ((*(long *)(lVar15 + 0x2b0) != 0) &&
           (uVar6 = 0, *(long *)(*(long *)(lVar15 + 0x2b0) + 8) != 0)) {
          uVar6 = FUN_0277d6c4(param_3);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
             (lVar16 = (long)(int)uVar6, uVar6 = 0,
             *(long *)(*(long *)(lVar15 + 0x1e0) + lVar16 * 8) != 0)) {
            FUN_0124c030(local_108,param_3);
            iVar7 = FUN_0123db50(&local_100,local_f8);
            puVar1 = PTR_DAT_04bb43c0;
            if (iVar7 - 0x18U < 7) {
              local_74 = local_74 | 4;
            }
            lVar16 = *(long *)PTR_DAT_04bb43c0;
            uVar6 = FUN_0277d6c4(param_4);
            lVar15 = *(long *)puVar1;
            if (lVar15 != 0) {
              lVar16 = *(long *)(lVar16 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                local_a8 = (uint *)0x0;
                local_b0 = (undefined *)*param_4;
                local_b8 = PTR_DAT_04bc0510 + 0x10;
                uVar6 = FUN_0277d6c4(&local_b0);
                if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_022bb448:
                  local_6c = 0xbc;
                }
                else {
                  lVar15 = *(long *)(lVar15 + 0x57e58);
                  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                  if ((*(uint *)(lVar15 + 0x1d8) <= uVar6) ||
                     (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) == 0))
                  goto LAB_022bb448;
                  lVar15 = *(long *)PTR_DAT_04bc0428;
                  uVar6 = FUN_0277d6c4(param_4);
                  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                  if ((*(uint *)(lVar15 + 0x1d8) <= uVar6) ||
                     (puVar11 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8),
                     puVar11 == (uint *)0x0)) goto LAB_022bb448;
                  local_6c = 0;
                  uVar6 = *puVar11;
                  local_a8 = puVar11;
                  if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
                    puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
                    local_6c = 0;
                    if (*puVar12 != 0) {
                      uVar6 = puVar12[1];
                      if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
                        lVar15 = 0xc;
                        if (*(char *)((long)puVar12 + 10) != '\0') {
                          lVar15 = 0x1c;
                        }
                        lVar15 = (long)puVar12 + lVar15 + (ulong)(ushort)puVar12[2] * 8;
                        if (lVar15 != 0) {
                          uVar8 = 0;
                          if ((ulong)uVar6 != 0) {
                            uVar8 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar6);
                          }
                          if (*puVar12 <= uVar8) {
                            uVar8 = 0xffffffff;
                          }
                          if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                             (local_6c = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar8 * 2), local_6c < 0xbd))
                          goto LAB_022bb454;
                        }
                      }
                      local_6c = 0;
                    }
                  }
                }
LAB_022bb454:
                local_130[0] = 0x56;
                if (local_6c == 0x56) {
                  local_76 = local_76 | 4;
                }
              }
            }
            uVar9 = FUN_01241f70(param_3);
            if ((uVar9 & 1) != 0) {
              uVar9 = FUN_0124ee28(local_108);
              bVar10 = 0;
              if ((uVar9 & 1) == 0) {
                bVar10 = 8;
              }
              local_76 = local_76 & 0xf7 | bVar10;
            }
            iVar7 = FUN_0123db50(&local_100,local_f8);
            if (iVar7 == 0x21) {
              local_78 = local_78 | 2;
            }
            iVar7 = FUN_0123db50(&local_100,local_f8);
            uVar6 = (uint)local_78;
            if (iVar7 == 0x22) {
              uVar6 = local_78 | 2;
            }
          }
        }
      }
    }
  }
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  local_78 = (byte)uVar6 & 0xef | (*param_2 == '\0') << 4;
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xf7 | *param_2 << 3;
  local_a8 = (uint *)0x0;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  local_98 = 0;
  local_b8 = puVar1;
  local_b0 = puVar2;
  local_a0 = puVar2;
  FUN_0277f02c(param_4,&local_b8);
  local_f0 = (int)local_a8 + *(int *)(param_5 + 8);
  local_e0 = (int)local_98 + *(int *)(param_5 + 8);
  local_d8 = 0xff00;
  local_bc = 0xff00;
  local_108[0] = *(undefined2 *)puVar4;
  iStack_ec = local_a8._4_4_ + *(int *)(param_5 + 0xc);
  iStack_dc = local_98._4_4_ + *(int *)(param_5 + 0xc);
  local_a8 = (uint *)CONCAT44(iStack_ec,local_f0);
  local_98 = CONCAT44(iStack_dc,local_e0);
  local_d6 = 0;
  local_d2 = 0;
  local_d0 = 0xffffffffffffffff;
  local_c8 = 0;
  local_c4 = 0x41200000;
  local_100 = puVar1;
  local_f8 = puVar2;
  local_e8 = puVar2;
  uVar6 = FUN_022ab010(param_1,local_108,&local_90);
  if ((uVar6 & 1) == 0) goto LAB_022bb618;
  local_110 = *(undefined4 *)(param_5 + 8);
  uStack_10c = *(undefined4 *)(param_5 + 0xc);
  local_118 = puVar2;
  FUN_022ab224(param_1,1,param_4,&local_118,*(undefined4 *)param_6);
  lVar15 = *(long *)puVar5;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (((((lVar15 != 0) && (*(long *)(lVar15 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar15 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar15 + 0x488) != 0 && (*(long *)(*(long *)(lVar15 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar15 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar15 + 0x2b0) + 8) != 0)))) {
    uVar8 = FUN_0277d6c4(param_3);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      FUN_0124c030(local_130,param_3);
      puVar1 = PTR_DAT_04bbbc78;
      puVar4 = PTR_DAT_04bbbc70;
      uVar17 = 0;
      if ((local_120 != (uint *)0x0) && (uVar8 = *local_120, uVar8 != 0)) {
        cVar13 = *PTR_DAT_04bbbc70;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar1 = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined4 *)(puVar1 + 0x60) = 0xffffffff;
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
            uVar8 = *local_120;
          }
          else {
            uVar3 = *(uint *)(puVar1 + 0xc);
            if (-1 < (int)uVar3) {
              if ((undefined4 *)((ulong)uVar3 + (long)local_120) != (undefined4 *)0x0) {
                uVar17 = *(undefined4 *)((ulong)uVar3 + (long)local_120);
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)uVar8;
          if ((puVar11 == (uint *)0x0) || (local_120 == puVar11)) break;
          lVar15 = 0xc;
          if (*(char *)((long)local_120 + (10 - (long)puVar11)) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)local_120 + (lVar15 - (long)puVar11);
          if (lVar15 == 0) break;
          uVar9 = (ulong)*(ushort *)((long)local_120 + (8 - (long)puVar11));
          *(undefined4 *)(puVar1 + 0xc) = 0xfffffffe;
          if (uVar9 == 0) break;
          piVar14 = (int *)(lVar15 + 4);
          while (piVar14[-1] != 0x123efcf1) {
            piVar14 = piVar14 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) goto LAB_022bb4f8;
          }
          iVar7 = 0;
          if (*piVar14 != -1) {
            iVar7 = *piVar14;
          }
          *(int *)(puVar1 + 0xc) = iVar7;
          uVar8 = *local_120;
          if (uVar8 == 0) break;
        } while( true );
      }
LAB_022bb4f8:
      *(undefined4 *)(param_1 + 0x38) = uVar17;
      iVar7 = FUN_0123db50(auStack_128);
      if ((iVar7 - 0x18U < 7) || (iVar7 = FUN_0123db50(auStack_128,local_120), iVar7 == 0x1f)) {
        iVar7 = 1;
      }
      else {
        iVar7 = FUN_0123db50(auStack_128,local_120);
        if (iVar7 == 0x21) {
          iVar7 = 10;
        }
        else {
          iVar7 = FUN_0123db50(auStack_128,local_120);
          if (iVar7 == 0x22) {
            iVar7 = 0xb;
          }
          else {
            uVar9 = FUN_0124d8e4(local_130,0);
            if ((uVar9 & 1) == 0) {
              uVar9 = FUN_0124de10(local_130,0);
              if ((uVar9 & 1) == 0) {
                uVar9 = FUN_0124dc0c(local_130,0);
                if (((uVar9 & 1) == 0) ||
                   (local_6c = FUN_0123db50(auStack_128,local_120), 5 < local_6c - 0x12))
                goto LAB_022bb530;
                iVar7 = local_6c - 0xe;
              }
              else {
                iVar7 = 3;
              }
            }
            else {
              iVar7 = 2;
            }
          }
        }
      }
      *(int *)(param_1 + 0x58) = iVar7;
    }
  }
LAB_022bb530:
  if ((((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) &&
       (lVar15 = *(long *)puVar5, lVar15 != 0)) && (*(long *)(lVar15 + 0xb0) != 0)) &&
     (((*(long *)(*(long *)(lVar15 + 0xb0) + 8) != 0 && (*(long *)(lVar15 + 0x488) != 0)) &&
      ((*(long *)(*(long *)(lVar15 + 0x488) + 8) != 0 &&
       ((*(long *)(lVar15 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar15 + 0x2b0) + 8) != 0)))))))) {
    uVar8 = FUN_0277d6c4(param_3);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      FUN_0124c030(local_130,param_3);
      uVar9 = FUN_0277e158(auStack_128);
      if (((uVar9 & 1) == 0) &&
         (((uVar9 = FUN_0123d890(local_120,3), (uVar9 & 1) == 0 &&
           (iVar7 = FUN_0123db50(auStack_128,local_120), iVar7 != 0x2d)) ||
          ((iVar7 = FUN_0123d070(local_120), iVar7 != 0 && (iVar7 != 0xfffe)))))) {
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x58) = 10;
      }
    }
  }
LAB_022bb618:
  return uVar6 & 1;
}

