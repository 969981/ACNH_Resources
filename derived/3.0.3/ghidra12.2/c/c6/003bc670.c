
undefined8
FUN_003bc670(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
            int *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined2 local_138;
  undefined1 local_136;
  undefined1 local_135;
  undefined4 local_130;
  undefined4 uStack_12c;
  int local_128;
  undefined8 local_124;
  int local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108 [2];
  undefined8 local_100;
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined6 local_80;
  undefined2 uStack_7a;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  char local_73;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  
  lVar4 = *(long *)(param_6 + 8);
  local_6c = 0;
  local_58 = 0;
  local_54 = 0;
  local_68 = 0xffffffffffffffff;
  local_60 = 0xffffffffffffffff;
  uVar2 = FUN_003b8544(*(undefined8 *)(param_2 + 0x10),&local_6c);
  if ((lVar4 != 0) && ((uVar2 & 1) != 0)) {
    if (*(int *)(lVar4 + 0x10) != -1) {
      local_68 = CONCAT44(local_68._4_4_,*(int *)(lVar4 + 0x10));
    }
    if (*(int *)(lVar4 + 0x14) != -1) {
      local_68 = CONCAT44(*(int *)(lVar4 + 0x14),(undefined4)local_68);
    }
    if (*(int *)(lVar4 + 0x18) != -1) {
      local_60 = CONCAT44(local_60._4_4_,*(int *)(lVar4 + 0x18));
    }
    if (*(int *)(lVar4 + 0x1c) != -1) {
      local_60 = CONCAT44(*(int *)(lVar4 + 0x1c),(undefined4)local_60);
    }
  }
  if ((uVar2 & 1) == 0) {
    uVar3 = 3;
  }
  else {
    local_d0 = 0;
    local_c8 = 0xffffffff;
    local_c0 = 0;
    local_b8 = 0xffffffff;
    local_b0 = 0;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    local_98 = 0xffffffff;
    local_90 = 0;
    local_88 = 0xffffffff;
    local_80 = 0;
    uStack_7a = 0;
    local_78 = 0;
    local_76 = 0;
    local_75 = 0;
    local_73 = '\0';
    local_74 = *(int *)(*(long *)(param_4 + 0x20) + 0x48) != 0;
    local_108[0] = 0xffffffff;
    local_f8[0] = 0xffffffff;
    local_e8 = 0xffffffff;
    local_d8 = 0xffffffff;
    local_100 = 0;
    local_f0 = 0;
    local_e0 = 0;
    local_110 = local_6c;
    local_10c = local_58;
    local_118 = 0;
    uVar3 = FUN_003bc8ec(param_1,&local_118,param_4,*(undefined8 *)(param_2 + 0x10),
                         *(undefined8 *)(param_2 + 0x18),param_5,*(undefined8 *)(param_6 + 8));
    if (((int)uVar3 == 0) &&
       (uVar3 = FUN_003bcaa4(param_1,&local_118,param_4,&local_6c,param_2,
                             *(undefined8 *)(param_6 + 8)), (int)uVar3 == 0)) {
      FUN_003dfaf8(param_4,*(undefined8 *)(param_1 + 0x80),local_10c,param_1 + 0xb8,
                   (undefined1)local_54,local_54._1_1_,*(undefined8 *)(param_1 + 200),
                   *(undefined8 *)(param_1 + 0xd0));
      iVar1 = *param_6;
      local_128 = param_6[1];
      if (iVar1 == 0) {
        uStack_12c = 1;
      }
      else {
        if ((iVar1 == 2) || (iVar1 != 1)) {
          local_128 = 0;
        }
        uStack_12c = 0;
      }
      local_130 = local_110;
      local_124 = *(undefined8 *)(param_6 + 2);
      local_11c = param_6[4];
      if (local_73 == '\0') {
        local_180 = local_118;
        uStack_178 = local_f0;
        local_138 = local_78;
        local_170 = local_e0;
        uStack_168 = local_d0;
        local_150 = local_a0;
        uStack_148 = local_90;
        local_136 = local_76;
        local_160 = local_c0;
        uStack_158 = local_b0;
        local_140 = CONCAT26(uStack_7a,local_80);
        local_135 = local_75;
        FUN_003dfb90(param_4,&local_180,&local_130);
      }
      else {
        FUN_003c87fc(&local_180,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                     local_108,local_f8,*(undefined8 *)(param_4 + 0x20));
        FUN_003dfd84(param_4,&local_180,&local_130);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

