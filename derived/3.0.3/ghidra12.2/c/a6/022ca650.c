
void FUN_022ca650(byte *param_1,undefined4 param_2,undefined8 *param_3,long param_4,byte *param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  undefined *local_140;
  uint local_138;
  uint local_134;
  byte local_130;
  undefined1 local_12f;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined4 local_104;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  uint local_e0 [2];
  undefined *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined2 local_b0;
  undefined4 local_ae;
  undefined1 local_aa;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined2 local_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_7c;
  undefined1 local_7a;
  byte local_79;
  byte local_77;
  undefined1 local_72;
  undefined4 local_70;
  uint local_6c;
  
  puVar4 = PTR_DAT_04bb37e0;
  if ((int)DAT_0547b48c <= DAT_0547b490) {
    puVar2 = PTR_DAT_04bc2e90 + 0x10;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    uVar9 = DAT_0547b48c;
    do {
      local_12c = *(undefined4 *)puVar4;
      uStack_128 = *(undefined4 *)(puVar4 + 4);
      local_134 = 0;
      local_12f = 0;
      local_130 = *PTR_DAT_04bb32e0;
      local_124 = 0xfffe;
      if (7 < local_130) {
        local_130 = 0xff;
      }
      local_140 = puVar2;
      local_138 = uVar9;
      FUN_0277d4ac(&local_124);
      local_11c = 0xfffe;
      FUN_0277d4ac(&local_11c);
      local_114 = 0;
      local_10c = 0;
      local_f0 = 0x2400000000;
      local_104 = 0;
      uStack_f8 = 0;
      uVar5 = (uint)*param_1;
      local_e8 = 0;
      local_e4 = 0;
      if (7 < uVar5) {
        uVar5 = 0xffffffff;
      }
      local_e0[0] = local_138;
      lVar6 = *(long *)(*(long *)PTR_DAT_04bbc218 + 0x18);
      if (*(uint *)(*(long *)PTR_DAT_04bbc218 + 0x10) <= local_138) {
        local_138 = 0;
      }
      puVar8 = *(uint **)(lVar6 + (long)(int)local_138 * 0x18 + 0x10);
      local_100 = puVar3;
      if ((0 < (int)*puVar8) && (uVar5 < *(uint *)(lVar6 + (long)(int)local_138 * 0x18 + 8))) {
        uVar7 = 0;
        lVar6 = 0x2c;
        do {
          if (((uVar7 < puVar8[(long)(int)uVar5 * 4]) &&
              (*(long *)(puVar8 + (long)(int)uVar5 * 4 + 2) != 0)) &&
             (*(int *)(*(long *)(puVar8 + (long)(int)uVar5 * 4 + 2) + lVar6) == 0)) {
            if (-1 < (int)uVar7) {
              if (uVar9 == 0) {
                return;
              }
              local_134 = 0;
              local_12f = 0;
              local_12c = *(undefined4 *)puVar4;
              uStack_128 = *(undefined4 *)(puVar4 + 4);
              local_130 = *PTR_DAT_04bb32e0;
              local_124 = 0xfffe;
              local_140 = PTR_DAT_04bc2e90 + 0x10;
              if (7 < local_130) {
                local_130 = 0xff;
              }
              local_138 = uVar9;
              FUN_0277d4ac(&local_124);
              local_11c = 0xfffe;
              FUN_0277d4ac(&local_11c);
              local_114 = 0;
              local_10c = 0;
              local_104 = 0;
              local_100 = PTR_DAT_04bb2010 + 0x10;
              local_e8 = 0;
              local_e4 = 0;
              uStack_f8 = 0;
              local_f0 = 0x2400000000;
              local_134 = (uint)*param_1;
              if (local_134 < 8) {
                local_130 = *param_1;
              }
              else {
                local_134 = 0xffffffff;
              }
              local_12f = 1;
              local_79 = local_130;
              if (7 < local_130) {
                local_79 = 0xff;
              }
              local_70 = 0;
              local_8c = *param_3;
              local_7a = 3;
              local_7c = *(undefined2 *)PTR_DAT_04bb6298;
              puStack_d0 = PTR_DAT_04bb2010 + 0x10;
              local_84 = (undefined2)*(undefined4 *)(param_4 + 8);
              local_77 = *param_5 & 7;
              local_82 = (undefined2)*(undefined4 *)(param_4 + 0xc);
              uStack_b8 = 0;
              local_d8 = PTR_DAT_04bbc1a0 + 0x10;
              local_c8 = 0;
              local_ae = 0;
              local_aa = 0;
              local_a0 = 0;
              local_e0[0] = CONCAT22(local_e0[0]._2_2_,local_7c);
              local_72 = (undefined1)uVar9;
              local_a8 = 0xffffffffffffffff;
              local_b0 = 0xff00;
              local_9c = 0x41200000;
              local_94 = 0xff00;
              local_c0 = puStack_d0;
              local_90 = param_2;
              local_6c = uVar9;
              FUN_022b1cb0(&local_140,local_e0,&local_90);
              return;
            }
            break;
          }
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x518;
        } while (*puVar8 != uVar7);
      }
      bVar1 = (int)uVar9 < DAT_0547b490;
      uVar9 = uVar9 + 1;
    } while (bVar1);
  }
  return;
}

