
uint FUN_022acc00(long param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined *local_160;
  int local_158;
  int iStack_154;
  undefined *local_150;
  undefined8 local_148;
  undefined *local_140;
  int local_138;
  int local_134;
  undefined *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined2 local_120;
  undefined4 local_11e;
  undefined1 local_11a;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_10c;
  undefined2 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  short local_f0;
  short local_ee;
  undefined2 local_e8;
  undefined1 local_e6;
  byte local_e5;
  undefined1 local_e3;
  undefined1 local_de;
  undefined4 local_dc;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  long local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  
  local_78 = 0;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar12 + 7);
  local_70 = FUN_017baf44();
  puVar3 = PTR_DAT_04bb2010;
  local_70 = local_70 & 1;
  puVar1 = (undefined *)(param_3 + 8);
  local_80 = PTR_DAT_04bb6268 + 0x10;
  local_90 = PTR_DAT_04bb2010 + 0x10;
  local_88 = 0;
  FUN_01a5033c(&local_98,&local_80,0,puVar1,&local_90);
  puVar5 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_98);
  lVar13 = *(long *)puVar5;
  if (lVar13 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_140 = puVar3 + 0x10;
      local_148 = (undefined *)(param_3 + 0x18);
      iVar4 = *(int *)(param_3 + 0x10);
      local_134 = *(int *)(param_3 + 0x14);
      iVar6 = *(int *)(param_3 + 0x24) + 1;
      local_150 = puVar1;
      local_138 = iVar4;
      if (iVar6 != local_134) {
        do {
          FUN_01a50240(&local_d8,&local_80,1,&local_140);
          if ((short)local_d8 != -2) goto LAB_022ad12c;
          if (local_138 < *(int *)((long)local_148 + 8)) {
            local_138 = local_138 + 1;
          }
          else {
            local_134 = local_134 + 1;
            local_138 = *(int *)(local_150 + 8);
          }
        } while (iVar4 != local_138 || iVar6 != local_134);
        lVar13 = *(long *)puVar5;
      }
      local_a0 = 0;
      local_a8 = local_98;
      uStack_a4 = uStack_94;
      local_b0 = &PTR_FUN_04a36b50;
      uVar7 = FUN_0277d6c4(&local_a8);
      if (*(long *)puVar5 != 0) {
        lVar10 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_98);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if (uVar7 < *(uint *)(lVar10 + 0x1d8)) {
            lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8);
            if (lVar10 != 0) {
              local_a0 = lVar10;
            }
          }
        }
      }
      uVar9 = FUN_01ae59b0(&local_b0);
      if ((uVar9 & 1) != 0) {
        iVar6 = FUN_01ae7550(&local_b0);
        puVar1 = PTR_DAT_04bbc1a0;
        if (iVar6 - 1U < 6) {
          puStack_d0 = puVar3 + 0x10;
          local_b8 = 0;
          local_c8 = 0;
          local_d8 = PTR_DAT_04bbc1a0 + 0x10;
          local_c0 = puStack_d0;
          local_150._0_4_ = iVar6;
          uVar8 = FUN_01ae98d0(&local_b0);
          local_150 = (undefined *)CONCAT44(local_150._4_4_,uVar8);
          uVar9 = FUN_01500520(&local_d8,&local_98,&local_90,&local_150);
          if (((((uVar9 & 1) != 0) && ((int)local_c8 <= *(int *)(param_3 + 0x10))) &&
              (*(int *)(param_3 + 0x20) <= (int)local_b8)) &&
             ((local_c8._4_4_ <= *(int *)(param_3 + 0x14) &&
              (*(int *)(param_3 + 0x24) <= local_b8._4_4_)))) {
            pbVar2 = (byte *)(param_1 + 0x10);
            lVar10 = FUN_0251bdc4(pbVar2,0);
            if ((lVar10 != 0) &&
               (uVar9 = FUN_01aef228(&local_98,*(int *)(lVar10 + 4) + 0x20000000U >> 0x1e),
               (uVar9 & 1) != 0)) {
              uVar9 = FUN_01ae91b0(&local_b0);
              if ((uVar9 & 1) == 0) {
LAB_022acff4:
                if (param_4 != 0) {
                  local_150 = puVar3 + 0x10;
                  local_148 = (undefined *)0x0;
                  FUN_01a5033c(&local_fc,&local_80,0,param_4,&local_150);
                  uVar9 = FUN_0277d9a8(&local_fc);
                  if ((uVar9 & 1) == 0) goto LAB_022ad12c;
                  uVar7 = 0;
                  if ((int)local_148 != (int)local_88) goto LAB_022ad130;
                  if (local_148._4_4_ != local_88._4_4_) goto LAB_022ad130;
                }
                local_dc = 0;
                local_fc = 0;
                local_148 = puVar1 + 0x10;
                puVar3 = puVar3 + 0x10;
                local_de = 0;
                local_e5 = *(byte *)(param_1 + 0x10);
                local_f8 = *param_2;
                local_e6 = 2;
                local_e8 = *(undefined2 *)PTR_DAT_04bb6298;
                if (7 < local_e5) {
                  local_e5 = 0xff;
                }
                local_138 = *(undefined4 *)(param_3 + 0x10);
                local_134 = *(undefined4 *)(param_3 + 0x14);
                local_120 = 0xff00;
                local_104 = 0xff00;
                local_150 = (undefined *)CONCAT62(local_150._2_6_,local_e8);
                local_128 = *(undefined4 *)(param_3 + 0x20);
                uStack_124 = *(undefined4 *)(param_3 + 0x24);
                local_118 = 0xffffffffffffffff;
                local_e3 = 1;
                local_f0 = (short)local_138;
                local_ee = (short)local_134;
                local_11e = 0;
                local_11a = 0;
                local_110 = 0;
                local_10c = 0x100000041200000;
                local_140 = puVar3;
                local_130 = puVar3;
                uVar7 = FUN_022ab010(param_1,&local_150,&local_fc);
                if ((uVar7 & 1) != 0) {
                  local_158 = (int)local_f0;
                  iStack_154 = (int)local_ee;
                  local_160 = puVar3;
                  FUN_022ab224(param_1,2,param_2,&local_160,1);
                }
                goto LAB_022ad130;
              }
              FUN_012e20a8(param_3,&local_150);
              uVar9 = FUN_0252b6b0(0x40a00000,&local_150,pbVar2,1,1,0,1);
              if ((uVar9 & 1) == 0) {
                if (((ulong)*pbVar2 < 8) && (DAT_054f5738 != 0)) {
                  puVar11 = (undefined4 *)(DAT_054f5738 + (ulong)*pbVar2 * 4 + 0xde8);
                }
                else {
                  puVar11 = &DAT_04c9a0c8;
                }
                uVar9 = FUN_01735670(0x40a00000,0xbf800000,&local_150,*puVar11,*puVar11,1,1,0,1,0,0,
                                     1);
                if ((uVar9 & 1) == 0) goto LAB_022acff4;
              }
            }
          }
        }
      }
    }
  }
LAB_022ad12c:
  uVar7 = 0;
LAB_022ad130:
  return uVar7 & 1;
}

