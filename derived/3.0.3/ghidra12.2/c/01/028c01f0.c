
/* WARNING: Type propagation algorithm not settling */

void FUN_028c01f0(long *param_1,long param_2,long param_3,uint param_4)

{
  long *plVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint local_12c;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  int local_e4;
  int local_e0;
  int local_dc;
  long local_d8 [2];
  int local_c4;
  undefined8 local_c0 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  uint *local_a0;
  uint *puStack_98;
  uint *local_90;
  long lStack_88;
  uint local_7c;
  undefined8 local_78;
  long local_70;
  
  local_7c = param_4;
  uVar9 = (**(code **)(*param_1 + 0x10))(param_1,param_4);
  if ((uVar9 & 1) != 0) {
    return;
  }
  for (lVar15 = param_1[0xc05]; lVar15 != 0; lVar15 = *(long *)(lVar15 + 0x10)) {
    while (param_4 < *(uint *)(lVar15 + 0x20)) {
      lVar15 = *(long *)(lVar15 + 8);
      if (lVar15 == 0) goto LAB_028c026c;
    }
    if (param_4 <= *(uint *)(lVar15 + 0x20)) {
      return;
    }
  }
LAB_028c026c:
  plVar1 = param_1 + 0xc08;
  plVar12 = param_1 + 0xc05;
  iVar5 = FUN_027b78b0(param_2,param_4);
  if (iVar5 == -1) {
LAB_028c0318:
    if (*(int *)((long)param_1 + 0x6044) <= (int)*plVar1) {
      lVar15 = *plVar12;
      while( true ) {
        if (lVar15 == 0) {
          return;
        }
        while (param_4 < *(uint *)(lVar15 + 0x20)) {
          lVar15 = *(long *)(lVar15 + 8);
          if (lVar15 == 0) {
            return;
          }
        }
        if (param_4 <= *(uint *)(lVar15 + 0x20)) break;
        lVar15 = *(long *)(lVar15 + 0x10);
      }
LAB_028c0650:
      *(uint *)(lVar15 + 0x20) = param_4;
      return;
    }
  }
  else {
    FUN_03ea9348(&local_78,param_2 + 8,iVar5);
    puVar3 = local_78;
    if (local_78 == (uint *)0x0) goto LAB_028c0318;
    local_a0 = (uint *)0x0;
    puStack_98 = (uint *)0x0;
    local_90 = local_78;
    lStack_88 = local_70;
    (**(code **)(DAT_0558d450 + 0x18))(&DAT_0558d450);
    local_78 = (uint *)((ulong)local_78 & 0xffffff0000000000);
    uVar9 = FUN_03ea9450(&local_90,&local_78,DAT_0558d458);
    if ((uVar9 & 1) == 0) {
      return;
    }
    if (local_78._4_1_ - 0xc0 < 2) {
      uVar17 = 0;
      local_12c = 0;
      puVar2 = (uint *)((long)puVar3 + ((ulong)local_78 & 0xffffffff));
      local_a0 = puVar3;
      puStack_98 = puVar2;
      while( true ) {
        if ((*puVar2 & 0xfe) == 0xc0) {
          uVar14 = *puVar2 >> 8;
          if ((short)*puVar3 == 0x5942) {
            uVar14 = uVar14 & 0xff00 | *puVar2 >> 0x18 | (uVar14 & 0xff) << 0x10;
          }
        }
        else {
          uVar14 = 0;
        }
        if (uVar14 <= uVar17) break;
        local_b0 = local_b0 & 0xffffff0000000000;
        if ((char)*puVar2 == -0x3f) {
          local_70 = CONCAT71(local_70._1_7_,(short)*puVar3 == 0x5942);
          local_78 = puVar2;
          uVar9 = FUN_03eaa938(&local_78,&local_b0,uVar17);
          if ((uVar9 & 1) == 0) goto LAB_028c03e0;
LAB_028c049c:
          if (local_b0._4_1_ - 0xc0 < 2) {
            local_70 = (long)puVar3 + (local_b0 & 0xffffffff);
          }
          else {
            if (local_b0._4_1_ != 0xff) goto LAB_028c03e0;
            local_70 = 0;
          }
          local_78 = puVar3;
          (**(code **)(DAT_0558d440 + 0x18))(&DAT_0558d440);
          local_b0 = local_b0 & 0xffffff0000000000;
          uVar9 = FUN_03ea9450(&local_78,&local_b0,DAT_0558d448);
          if (((uVar9 & 1) == 0) || (local_b0._4_1_ == -1)) goto LAB_028c03e0;
          uVar9 = local_b0 & 0xffffffff;
          if (local_b0._4_1_ == -0x2f) {
            if (-1 < (int)(uint)local_b0) goto LAB_028c0524;
            goto LAB_028c03e0;
          }
          if (local_b0._4_1_ != -0x2d) goto LAB_028c03e0;
LAB_028c0524:
          FUN_028c01f0(param_1,param_2,param_3,uVar9);
          if ((local_12c & 1) == 0) {
            uVar10 = (**(code **)(*param_1 + 0x10))(param_1,uVar9);
            if ((uVar10 & 1) != 0) {
              local_12c = (**(code **)(*param_1 + 0x20))(param_1,uVar9);
              goto LAB_028c03e0;
            }
            local_12c = 0;
            uVar17 = uVar17 + 1;
          }
          else {
            uVar17 = uVar17 + 1;
            local_12c = 1;
          }
        }
        else {
          if ((char)*puVar2 == -0x40) {
            local_70 = CONCAT71(local_70._1_7_,(short)*puVar3 == 0x5942);
            local_78 = puVar2;
            uVar9 = FUN_03eaa544(&local_78,&local_b0,uVar17);
            if ((uVar9 & 1) != 0) goto LAB_028c049c;
          }
LAB_028c03e0:
          uVar17 = uVar17 + 1;
        }
      }
    }
    else {
      if (local_78._4_1_ != 0xff) {
        return;
      }
      local_12c = 0;
      local_a0 = puVar3;
      puStack_98 = (uint *)0x0;
    }
    iVar5 = FUN_027b78b0(param_3,param_4);
    if (iVar5 != -1) {
      FUN_03ea9348(&local_78,param_3 + 8,iVar5);
      puVar2 = local_78;
      if (local_78 != (uint *)0x0) {
        if ((local_12c & 1) != 0) {
          plVar1 = param_1 + 1;
          if (*(int *)((long)param_1 + 0x24) <= (int)param_1[4]) {
            lVar15 = *plVar1;
            while( true ) {
              if (lVar15 == 0) {
                return;
              }
              while (param_4 < *(uint *)(lVar15 + 0x20)) {
                lVar15 = *(long *)(lVar15 + 8);
                if (lVar15 == 0) {
                  return;
                }
              }
              if (param_4 <= *(uint *)(lVar15 + 0x20)) break;
              lVar15 = *(long *)(lVar15 + 0x10);
            }
            *(undefined1 *)(lVar15 + 0x24) = 0;
            return;
          }
          plVar12 = (long *)param_1[2];
          if (plVar12 != (long *)0x0) {
            param_1[2] = *plVar12;
          }
          *(undefined1 *)((long)plVar12 + 0x24) = 0;
          plVar12[2] = 0;
          plVar12[3] = 0;
          plVar12[5] = (long)plVar1;
          *(uint *)(plVar12 + 4) = param_4;
          *plVar12 = (long)&PTR_LAB_04a92428;
          plVar12[1] = 0;
          *(int *)(param_1 + 4) = (int)param_1[4] + 1;
          lVar15 = FUN_028c13b8(plVar1,param_1[1]);
          param_1[1] = lVar15;
          goto LAB_028c0368;
        }
        (**(code **)(DAT_0558d470 + 0x18))(&DAT_0558d470);
        local_b0 = local_b0 & 0xffffff0000000000;
        uVar9 = FUN_03ea9450(&local_90,&local_b0,DAT_0558d478);
        if (((uVar9 & 1) == 0) || (local_b0._4_1_ == -1)) {
LAB_028c0698:
          uVar9 = 0;
        }
        else {
          uVar9 = local_b0 & 0xffffffff;
          if (local_b0._4_1_ != -0x2d) {
            if (local_b0._4_1_ == -0x2f) {
              uVar9 = (ulong)((uint)local_b0 & ((int)(uint)local_b0 >> 0x1f ^ 0xffffffffU));
            }
            else {
              uVar10 = *(ulong *)((long)puVar3 + uVar9);
              uVar9 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
              if ((short)*puVar3 != 0x5942) {
                uVar9 = uVar10;
              }
              if (local_b0._4_1_ != -0x2b) {
                if (local_b0._4_1_ != -0x2c) goto LAB_028c0698;
                uVar9 = uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU);
              }
            }
          }
        }
        (**(code **)(DAT_0558d470 + 0x18))(&DAT_0558d470);
        local_b0 = local_b0 & 0xffffff0000000000;
        uVar10 = FUN_03ea9450(&local_78,&local_b0,DAT_0558d478);
        if (((uVar10 & 1) == 0) || (local_b0._4_1_ == -1)) {
          uVar10 = 0;
        }
        else {
          uVar10 = local_b0 & 0xffffffff;
          if (local_b0._4_1_ != -0x2d) {
            if (local_b0._4_1_ == -0x2f) {
              uVar10 = (ulong)((uint)local_b0 & ((int)(uint)local_b0 >> 0x1f ^ 0xffffffffU));
            }
            else {
              uVar16 = *(ulong *)((long)puVar2 + uVar10);
              uVar10 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
              uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
              if ((short)*puVar2 != 0x5942) {
                uVar10 = uVar16;
              }
              if (local_b0._4_1_ != -0x2b) {
                if (local_b0._4_1_ == -0x2c) {
                  uVar10 = uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU);
                }
                else {
                  uVar10 = 0;
                }
              }
            }
          }
        }
        if (uVar9 != uVar10) {
          local_b0 = local_b0 & 0xffffffffffffff00;
          puVar13 = &local_b0;
          goto LAB_028c0b30;
        }
        local_b0 = 0;
        uStack_a8 = 0;
        (**(code **)(DAT_0558d450 + 0x18))(&DAT_0558d450);
        uVar9 = FUN_03ea9708(&local_78,&local_b0,DAT_0558d458);
        if ((uVar9 & 1) == 0) {
LAB_028c0a68:
          local_c0[0]._0_1_ = 0;
        }
        else {
          iVar5 = FUN_03ea92f8(&local_a0);
          iVar6 = FUN_03ea92f8(&local_b0);
          if (iVar5 != iVar6) goto LAB_028c0a68;
          iVar5 = FUN_03ea92f8(&local_a0);
          if (0 < iVar5) {
            iVar5 = 0;
            do {
              FUN_03ea9348(local_c0,&local_a0,iVar5);
              uVar4 = 0;
              if (CONCAT71(local_c0[0]._1_7_,(undefined1)local_c0[0]) == 0) goto LAB_028c0b20;
              local_c4 = 0;
              (**(code **)(DAT_0558d460 + 0x18))(&DAT_0558d460);
              uVar9 = FUN_03ea9a4c(local_c0,&local_c4,DAT_0558d468);
              if ((uVar9 & 1) == 0) {
LAB_028c0b1c:
                uVar4 = 0;
                goto LAB_028c0b20;
              }
              iVar7 = FUN_03ea92f8(&local_b0);
              iVar6 = local_c4;
              if (0 < iVar7) {
                iVar7 = 0;
                do {
                  FUN_03ea9348(local_d8,&local_b0,iVar5);
                  if (local_d8[0] == 0) goto LAB_028c0b1c;
                  local_dc = 0;
                  (**(code **)(DAT_0558d460 + 0x18))(&DAT_0558d460);
                  uVar9 = FUN_03ea9a4c(local_d8,&local_dc,DAT_0558d468);
                  if ((uVar9 & 1) == 0) goto LAB_028c0b1c;
                  if (iVar6 == local_dc) {
                    local_e0 = 0;
                    (**(code **)(DAT_0558d440 + 0x18))(&DAT_0558d440);
                    uVar9 = FUN_03ea9a4c(local_c0,&local_e0,DAT_0558d448);
                    if ((uVar9 & 1) == 0) goto LAB_028c0b1c;
                    local_e4 = 0;
                    (**(code **)(DAT_0558d440 + 0x18))(&DAT_0558d440);
                    uVar9 = FUN_03ea9a4c(local_d8,&local_e4,DAT_0558d448);
                    if ((((uVar9 & 1) == 0) || (local_e0 != local_e4)) ||
                       (uVar9 = (**(code **)(*param_1 + 0x20))(param_1), (uVar9 & 1) != 0))
                    goto LAB_028c0b1c;
                    local_f0 = 0;
                    (**(code **)(DAT_0558d470 + 0x18))(&DAT_0558d470);
                    uVar9 = FUN_03ea9e9c(local_c0,&local_f0,DAT_0558d478);
                    if ((uVar9 & 1) == 0) goto LAB_028c0b1c;
                    local_f8 = 0;
                    (**(code **)(DAT_0558d470 + 0x18))(&DAT_0558d470);
                    uVar9 = FUN_03ea9e9c(local_d8,&local_f8,DAT_0558d478);
                    if (((uVar9 & 1) == 0) || (local_f0 != local_f8)) goto LAB_028c0b1c;
                    local_100 = 0;
                    (**(code **)(DAT_0558d480 + 0x18))(&DAT_0558d480);
                    uVar9 = FUN_03ea9e9c(local_c0,&local_100,DAT_0558d488);
                    if ((uVar9 & 1) == 0) goto LAB_028c0b1c;
                    local_108 = 0;
                    (**(code **)(DAT_0558d480 + 0x18))(&DAT_0558d480);
                    uVar9 = FUN_03ea9e9c(local_d8,&local_108,DAT_0558d488);
                    if (((uVar9 & 1) == 0) || (local_100 != local_108)) goto LAB_028c0b1c;
                    local_110 = 0;
                    (**(code **)(DAT_0558d490 + 0x18))(&DAT_0558d490);
                    uVar9 = FUN_03ea9e9c(local_c0,&local_110,DAT_0558d498);
                    if ((uVar9 & 1) == 0) goto LAB_028c0b1c;
                    local_118 = 0;
                    (**(code **)(DAT_0558d490 + 0x18))(&DAT_0558d490);
                    uVar9 = FUN_03ea9e9c(local_d8,&local_118,DAT_0558d498);
                    if (((uVar9 & 1) == 0) || (local_110 != local_118)) goto LAB_028c0b1c;
                    local_120 = 0;
                    (**(code **)(DAT_0558d4a0 + 0x18))(&DAT_0558d4a0);
                    FUN_03ea9e9c(local_c0,&local_120,DAT_0558d4a8);
                    local_128 = 0;
                    (**(code **)(DAT_0558d4a0 + 0x18))(&DAT_0558d4a0);
                    FUN_03ea9e9c(local_d8,&local_128,DAT_0558d4a8);
                    if (local_120 != local_128) goto LAB_028c0b1c;
                  }
                  iVar7 = iVar7 + 1;
                  iVar8 = FUN_03ea92f8(&local_b0);
                } while (iVar7 < iVar8);
              }
              iVar5 = iVar5 + 1;
              iVar6 = FUN_03ea92f8(&local_a0);
            } while (iVar5 < iVar6);
          }
          uVar4 = 1;
LAB_028c0b20:
          local_c0[0]._0_1_ = uVar4;
        }
        puVar13 = local_c0;
LAB_028c0b30:
        FUN_028c0b60(param_1 + 1,&local_7c,puVar13);
        return;
      }
    }
    if (*(int *)((long)param_1 + 0x6044) <= (int)*plVar1) {
      lVar15 = *plVar12;
      while( true ) {
        if (lVar15 == 0) {
          return;
        }
        while (param_4 < *(uint *)(lVar15 + 0x20)) {
          lVar15 = *(long *)(lVar15 + 8);
          if (lVar15 == 0) {
            return;
          }
        }
        if (param_4 <= *(uint *)(lVar15 + 0x20)) break;
        lVar15 = *(long *)(lVar15 + 0x10);
      }
      goto LAB_028c0650;
    }
  }
  plVar11 = (long *)param_1[0xc06];
  if (plVar11 != (long *)0x0) {
    param_1[0xc06] = *plVar11;
  }
  plVar11[5] = (long)plVar12;
  plVar11[2] = 0;
  plVar11[3] = 0;
  *(uint *)(plVar11 + 4) = param_4;
  *plVar11 = (long)&PTR_LAB_04a92400;
  plVar11[1] = 0;
  *(int *)plVar1 = (int)*plVar1 + 1;
  lVar15 = FUN_028c11b4(plVar12,*plVar12);
  *plVar12 = lVar15;
LAB_028c0368:
  *(undefined8 *)(lVar15 + 0x18) = 1;
  return;
}

