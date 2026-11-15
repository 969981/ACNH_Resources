
bool FUN_01ee1ea0(long *param_1,uint *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined8 local_1d0;
  long local_1c8;
  undefined8 local_1c0;
  uint local_1b8;
  undefined4 uStack_1b4;
  ulong local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined *puStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined5 local_154;
  undefined3 uStack_14f;
  undefined5 uStack_14c;
  undefined8 local_144;
  undefined4 local_13c;
  undefined2 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined4 local_114;
  undefined *local_110;
  undefined1 *local_108;
  undefined4 local_100;
  undefined1 local_fc [31];
  undefined1 local_dd;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined1 local_c4 [31];
  undefined1 local_a5;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_6c;
  undefined1 local_6b;
  
  if ((9 < *(uint *)(param_1[1] + 0x508)) ||
     (lVar2 = (ulong)*(uint *)(param_1[1] + 0x508) * 0xba0, puVar8 = &DAT_053fe348 + lVar2,
     (&DAT_053fee41)[lVar2] == '\0')) {
    puVar8 = (undefined *)0x0;
  }
  lVar2 = FUN_0265c3e0();
  if (((puVar8 == (undefined *)0x0 || lVar2 == 0) || (puVar8[0xaf9] == '\0')) ||
     ((int)param_1[0xef6] == 0x13)) {
    bVar1 = false;
  }
  else {
    if ((*(long *)(lVar2 + 0x28) == 0) ||
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x10), puVar3 == (undefined8 *)0x0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)*puVar3)();
      uVar4 = uVar4 & 0xffffffff;
    }
    local_90 = 0xfffe;
    FUN_0277d4ac(&local_90);
    local_98 = 0xfffe;
    FUN_0277d4ac(&local_98);
    local_a0 = 0xfffe;
    FUN_0277d4ac(&local_a0);
    if ((*(long *)(lVar2 + 0x28) != 0) &&
       (plVar5 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
      local_1b0 = *(ulong *)(lVar2 + 8);
      local_1a8 = *(undefined **)(lVar2 + 0x10);
      local_1a0 = (undefined *)0x13230;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_1b0);
    }
    puVar8 = *(undefined **)(lVar2 + 0x10) + *(ulong *)(lVar2 + 8);
    local_1d0 = CONCAT44(local_1d0._4_4_,(uint)(byte)puVar8[0x1315b]);
    if ((uint)(byte)puVar8[0x1315b] == *param_2) {
      bVar1 = false;
    }
    else {
      if ((*(long *)(lVar2 + 0x28) != 0) &&
         (plVar5 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
        local_1a0 = (undefined *)0x13230;
        local_1b0 = *(ulong *)(lVar2 + 8);
        local_1a8 = *(undefined **)(lVar2 + 0x10);
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_1b0);
        puVar8 = (undefined *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
      }
      uVar6 = FUN_0269b5c0(puVar8,&local_90,&local_98,&local_a0,param_2,0);
      bVar1 = false;
      if ((uVar6 & 1) != 0) {
        local_1b0 = local_1b0 & 0xffffffff00000000;
        local_188 = 0;
        local_174 = 0;
        uStack_170 = 0xfffe;
        local_16c = 0;
        local_1a8 = PTR_DAT_04bbc1a0 + 0x10;
        local_1a0 = PTR_DAT_04bb2010 + 0x10;
        local_198 = 0;
        puStack_190 = local_1a0;
        FUN_0277d4ac(&uStack_170);
        local_154 = 0;
        uStack_14f = 0;
        uStack_14c = 0;
        local_158 = 0xbf800000;
        local_168 = 0x41c8000041800000;
        uStack_160 = 0xbf800000bf800000;
        local_144 = 0xfffe;
        FUN_0277d4ac(&local_144);
        local_13c = 0;
        local_100 = 0x20;
        local_d0 = local_c4;
        local_c8 = 0x20;
        local_108 = local_fc;
        local_dd = 0;
        local_110 = PTR_DAT_04bb2028 + 0x10;
        local_fc[0] = 0;
        local_a5 = 0;
        local_c4[0] = 0;
        local_1b0 = local_1b0 & 0xffffffff00000000;
        local_198 = 0;
        uStack_178 = 0;
        local_174 = 0;
        local_1d0 = 0xfffe;
        local_188 = 0;
        uStack_180 = 0;
        local_d8 = local_110;
        FUN_0277d4ac(&local_1d0);
        uStack_170 = (undefined4)local_1d0;
        local_16c = local_1d0._4_4_;
        local_168 = 0x41c8000041800000;
        uStack_160 = 0xbf800000bf800000;
        local_158 = 0xbf800000;
        local_154 = 0;
        uStack_14f = 0;
        uStack_14c = 0;
        local_1d0 = 0xfffe;
        FUN_0277d4ac(&local_1d0);
        local_134 = 0;
        local_12c = 0;
        local_124 = 0;
        local_11c = 0;
        local_138 = 0;
        local_114 = 0;
        local_13c = 0;
        local_144 = local_1d0;
        *local_108 = 0;
        *local_d0 = 0;
        local_1d0 = 0xfffe;
        local_114._0_2_ = CONCAT11(1,(undefined1)local_114);
        FUN_0277d4ac(&local_1d0);
        local_1c8 = 0xfffe;
        FUN_0277d4ac(&local_1c8);
        local_1c0 = 0xfffe;
        FUN_0277d4ac(&local_1c0);
        local_1b8 = local_1b8 & 0xffffff00;
        uStack_1b4 = 0xffffffff;
        if ((*(long *)(lVar2 + 0x28) != 0) &&
           (plVar5 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
          local_88 = *(ulong *)(lVar2 + 8);
          uStack_80 = *(undefined8 *)(lVar2 + 0x10);
          local_78 = 0x13230;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_88);
        }
        uVar6 = FUN_0277d7b4(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x125ec,&local_90);
        if ((uVar6 & 1) == 0) {
          local_88 = local_88 & 0xffffffff00000000;
          local_1d0 = local_90;
          local_1b8 = local_1b8 | 1;
        }
        if ((*(long *)(lVar2 + 0x28) != 0) &&
           (plVar5 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
          local_88 = *(ulong *)(lVar2 + 8);
          uStack_80 = *(undefined8 *)(lVar2 + 0x10);
          local_78 = 0x13230;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_88);
        }
        uVar6 = FUN_0277d7b4(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x12644,&local_98);
        if ((uVar6 & 1) == 0) {
          local_1c8 = local_98;
          local_88 = CONCAT44(local_88._4_4_,1);
          local_1b8 = local_1b8 | 2;
        }
        if ((*(long *)(lVar2 + 0x28) != 0) &&
           (plVar5 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
          local_88 = *(ulong *)(lVar2 + 8);
          uStack_80 = *(undefined8 *)(lVar2 + 0x10);
          local_78 = 0x13230;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_88);
        }
        uVar6 = FUN_0277d7b4(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x12618,&local_a0);
        uVar7 = local_1b8 & 0xff;
        if ((uVar6 & 1) == 0) {
          local_1c0 = local_a0;
          local_88 = CONCAT44(local_88._4_4_,2);
          uVar7 = uVar7 | 4;
          local_1b8 = CONCAT31(local_1b8._1_3_,(char)uVar7);
        }
        bVar1 = (uVar7 & 7) != 0;
        if ((uVar7 & 7) != 0) {
          *(undefined2 *)(param_1 + 0x15d2) = (undefined2)local_1d0;
          *(undefined2 *)((long)param_1 + 0xae92) = local_1d0._2_2_;
          *(undefined4 *)((long)param_1 + 0xae94) = local_1d0._4_4_;
          param_1[0x15d3] = local_1c8;
          *(undefined4 *)(param_1 + 0x15d4) = (undefined4)local_1c0;
          *(undefined4 *)((long)param_1 + 0xaea4) = local_1c0._4_4_;
          param_1[0x15d5] = CONCAT44(uStack_1b4,local_1b8);
          if ((*(long *)(lVar2 + 0x28) != 0) &&
             (plVar5 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
            local_88 = *(ulong *)(lVar2 + 8);
            uStack_80 = *(undefined8 *)(lVar2 + 0x10);
            local_78 = 0x13230;
            (**(code **)(*plVar5 + 0x20))(plVar5,&local_88);
          }
          *(char *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x1315b) = (char)*param_2;
          local_6c = FUN_021d7d60();
          uVar6 = local_88 >> 0x30;
          local_6b = (undefined1)*param_2;
          local_88 = CONCAT26((ushort)uVar6 & 0xff00,0xff0000000000);
          if (-1 < DAT_053d0e30) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e30,&local_88,&local_6c,2,0);
          }
          (**(code **)(*param_1 + 0x38))(param_1,0x13,&local_1b0,1);
        }
      }
    }
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  return bVar1;
}

