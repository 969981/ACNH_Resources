
uint FUN_022cf250(long param_1,undefined2 *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  byte local_18c [2];
  undefined2 local_18a;
  undefined2 local_188;
  ulong local_186;
  undefined8 local_17e;
  undefined8 local_176;
  undefined8 local_16e;
  undefined8 local_166;
  undefined8 local_15e;
  undefined8 local_156;
  undefined8 local_14e;
  undefined8 local_146;
  undefined8 local_13e;
  undefined6 uStack_136;
  undefined2 local_130;
  undefined6 uStack_12e;
  undefined4 local_128;
  byte local_124;
  undefined2 local_120 [4];
  undefined *local_118;
  undefined *puStack_110;
  int local_108;
  int iStack_104;
  undefined *local_100;
  int local_f8;
  int iStack_f4;
  undefined2 local_f0;
  undefined4 local_ee;
  undefined1 local_ea;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_dc;
  undefined2 local_d4;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_98;
  byte local_90 [4];
  byte local_8c [4];
  undefined4 local_88;
  undefined4 local_84;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  int local_5c;
  undefined4 local_54;
  
  puVar1 = PTR_DAT_04bb2010;
  bVar8 = *(byte *)(param_1 + 0x10);
  local_5c = 0;
  local_60 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = PTR_DAT_04bb2010 + 0x10;
  local_78 = 0;
  local_88 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_84 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  if ((param_3 & 1) == 0) {
    local_90[0] = bVar8;
    uVar6 = FUN_022cf570(&local_88,local_90);
    if ((uVar6 & 1) != 0) goto LAB_022cf314;
  }
  else {
    local_5c = 0;
    local_8c[0] = bVar8;
    iVar3 = FUN_022cdafc(local_8c);
    local_18c[0] = local_8c[0];
    if (7 < local_8c[0]) {
      local_18c[0] = 0xff;
    }
    local_5c = iVar3;
    uVar6 = FUN_0150e210(&local_88,local_18c,1);
    if (((uVar6 & 1) != 0) && (iVar3 == 0)) {
LAB_022cf314:
      *(undefined4 *)(param_2 + 0x16) = 0;
      uVar6 = FUN_0277e294(&local_88);
      uVar5 = 0;
      if ((uVar6 & 1) == 0) goto LAB_022cf344;
      uVar4 = FUN_022cdafc((byte *)(param_1 + 0x10));
      *(undefined4 *)(param_2 + 0x16) = uVar4;
      puVar2 = PTR_DAT_04bb43c0;
      if (*(int *)(param_2 + 0x16) == 0) {
        local_98 = 0;
        local_a8 = PTR_DAT_04bc0510 + 0x10;
        local_a0 = local_88;
        uStack_9c = local_84;
        lVar7 = *(long *)PTR_DAT_04bb43c0;
        uVar5 = FUN_0277d6c4(&local_a0);
        if (*(long *)puVar2 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(&local_88);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
               (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8), lVar7 != 0)) {
              local_98 = lVar7;
            }
          }
        }
        puVar1 = puVar1 + 0x10;
        local_c0 = 0;
        local_b0 = 0;
        puVar2 = PTR_DAT_04bbc1a0 + 0x10;
        local_d0 = puVar2;
        puStack_c8 = puVar1;
        local_b8 = puVar1;
        FUN_01afb480(&local_a8,&local_d0);
        local_e8 = 0xffffffffffffffff;
        local_108 = (int)local_c0 + (int)local_78;
        iStack_104 = local_c0._4_4_ + local_78._4_4_;
        local_f8 = (int)local_b0 + (int)local_78;
        iStack_f4 = local_b0._4_4_ + local_78._4_4_;
        local_c0 = CONCAT44(iStack_104,local_108);
        local_b0 = CONCAT44(iStack_f4,local_f8);
        local_ee = 0;
        local_ea = 0;
        local_e0 = 0;
        local_dc = 0x41200000;
        local_120[0] = *(undefined2 *)PTR_DAT_04bb6298;
        local_d4 = 0xff00;
        local_f0 = 0xff00;
        uStack_12e = 0;
        uStack_136 = 0;
        local_130 = 0;
        local_13e = 0;
        local_146 = 0;
        local_14e = 0;
        local_156 = 0;
        local_15e = 0;
        local_166 = 0;
        local_16e = 0;
        local_176 = 0;
        local_17e = 0;
        local_18a = (undefined2)local_78;
        local_188 = (undefined2)((ulong)local_78 >> 0x20);
        local_18c[0] = 1;
        local_54 = (undefined4)local_70;
        local_124 = *(byte *)(param_1 + 0x10);
        local_186 = local_70 & 0xff;
        if (7 < local_124) {
          local_124 = 0xff;
        }
        *(int *)(param_2 + 8) = (int)local_78;
        *(int *)(param_2 + 10) = local_78._4_4_;
        *(undefined4 *)(param_2 + 0xe) = local_70._4_4_;
        *(undefined1 *)(param_2 + 0x14) = local_60;
        local_128 = 0;
        *(undefined4 *)(param_2 + 0xc) = (undefined4)local_70;
        *(undefined4 *)(param_2 + 0x10) = (undefined4)uStack_68;
        *(int *)(param_2 + 0x16) = local_5c;
        *param_2 = (undefined2)local_88;
        *(undefined4 *)(param_2 + 0x12) = uStack_68._4_4_;
        *(undefined1 *)(param_2 + 1) = local_88._2_1_;
        *(undefined1 *)((long)param_2 + 3) = local_88._3_1_;
        *(undefined4 *)(param_2 + 2) = local_84;
        local_118 = puVar2;
        puStack_110 = puVar1;
        local_100 = puVar1;
        uVar5 = FUN_022ccd80(param_1,local_120,local_18c);
        goto LAB_022cf344;
      }
    }
  }
  uVar5 = 0;
LAB_022cf344:
  return uVar5 & 1;
}

