
uint FUN_01c73ddc(long param_1)

{
  undefined8 *puVar1;
  long *__s;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint local_200 [2];
  undefined8 local_1f8;
  ulong uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8;
  uint local_1c0;
  undefined7 local_1b8;
  undefined1 uStack_1b1;
  undefined7 uStack_1b0;
  undefined1 uStack_1a9;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined7 uStack_198;
  undefined1 local_191;
  undefined7 uStack_190;
  undefined1 uStack_189;
  ulong local_188;
  undefined8 local_180;
  long local_178;
  byte local_170;
  undefined7 uStack_16f;
  undefined1 local_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 local_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 local_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined2 local_13f;
  undefined5 uStack_13d;
  undefined1 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined5 uStack_60;
  undefined3 local_5b;
  undefined5 uStack_58;
  undefined1 uStack_31;
  
  lVar7 = *(long *)(param_1 + 0x50);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x564) == 2)) {
    uVar3 = *(uint *)(lVar7 + 0x530);
    if (*(long *)(lVar7 + 0x570) != 0) {
      (**(code **)(*(long *)**(undefined8 **)(lVar7 + 0x568) + 0x38))();
    }
    *(undefined8 *)(lVar7 + 0x570) = 0;
    *(undefined4 *)(lVar7 + 0x578) = 0;
    puVar2 = PTR_DAT_04bc1000;
    uStack_138 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    local_5b = 0;
    uStack_190 = 0;
    local_148 = 0;
    uStack_147 = 0;
    uStack_140 = 0;
    local_13f = 0;
    uStack_13d = 0;
    local_158 = 0;
    uStack_157 = 0;
    uStack_150 = 0;
    uStack_14f = 0;
    local_168 = 0;
    uStack_167 = 0;
    uStack_160 = 0;
    uStack_15f = 0;
    local_178 = 0;
    local_170 = 0;
    uStack_16f = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_1a8 = 0;
    local_188 = (ulong)(uint)local_188;
    local_1a0 = 0;
    uStack_198 = 0;
    local_191 = 0;
    lVar7 = **(long **)PTR_DAT_04bc1000;
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x700) != '\0')) {
      __s = (long *)(lVar7 + 0x1a8) + (ulong)uVar3 * 0x39;
      if (2 < uVar3) {
        __s = (long *)(lVar7 + 0x1a8);
      }
      if ((((char)__s[0x38] != '\0') && (*__s != 0)) &&
         (uVar4 = FUN_01c70550(&local_178,&local_130,__s + 1), (uVar4 & 1) != 0)) {
        if ((char)__s[0x38] == '\0') {
          memset(__s,0,0x1c0);
          FUN_00186524(__s + 0x25);
          *(undefined1 *)(__s + 0x35) = 0;
          __s[0x26] = 0;
          __s[0x36] = 0;
          *(undefined1 *)(__s + 0x37) = 0;
          __s[0x33] = 0;
          __s[0x34] = 0;
          __s[0x31] = 0;
          __s[0x32] = 0;
          __s[0x2f] = 0;
          __s[0x30] = 0;
          __s[0x2d] = 0;
          __s[0x2e] = 0;
          __s[0x2b] = 0;
          __s[0x2c] = 0;
          __s[0x29] = 0;
          __s[0x2a] = 0;
          __s[0x27] = 0;
          __s[0x28] = 0;
        }
        local_180 = FUN_00186b9c(__s + 0x25);
      }
    }
    if (local_170 - 4 < 0xfffffffe) {
LAB_01c73fd8:
      local_200[0] = 0;
    }
    else {
      if (local_170 == 3) {
        if (local_178 != 0x39) goto LAB_01c73fd8;
        local_188 = CONCAT17(uStack_138,CONCAT52(uStack_13d,local_13f));
      }
      else {
        if (local_178 != 0x35) goto LAB_01c73fd8;
        local_188 = CONCAT62((int6)(local_188 >> 0x10),local_13f) & 0xffffffff;
      }
      uStack_189 = uStack_140;
      uStack_190 = uStack_147;
      local_191 = local_148;
      uStack_198 = uStack_14f;
      _uStack_1b0 = CONCAT17(uStack_160,uStack_167);
      _local_1b8 = CONCAT17(local_168,uStack_16f);
      local_1a0 = CONCAT17(uStack_150,uStack_157);
      local_1a8 = CONCAT17(local_158,uStack_15f);
      FUN_00a7f6d4(&local_1a8);
      local_200[0] = (uint)(byte)local_188;
    }
    uVar4 = (ulong)local_200[0];
    if (2 < local_200[0]) {
      uVar4 = 0;
    }
    *(int *)(*(long *)(param_1 + 0x50) + 0x578) =
         (int)((float)(*(long *)(PTR_DAT_04bb5ac0 + uVar4 * 8) + 0x49dd8) * 1.1);
    lVar5 = *(long *)(param_1 + 0x50);
    lVar7 = (**(code **)(*(long *)**(undefined8 **)(lVar5 + 0x568) + 0x30))
                      ((long *)**(undefined8 **)(lVar5 + 0x568),*(undefined4 *)(lVar5 + 0x578),8);
    *(long *)(lVar5 + 0x570) = lVar7;
    if (lVar7 != 0) {
      lVar7 = *(long *)(param_1 + 0x50);
      if (*(int *)(lVar7 + 0x564) == 2) {
        local_200[0] = *(uint *)(lVar7 + 0x530);
      }
      else {
        *(undefined4 *)(lVar7 + 0x530) = 0;
        local_200[0] = 0;
        *(undefined4 *)(lVar7 + 0x564) = 2;
        lVar7 = *(long *)(param_1 + 0x50);
      }
      puVar1 = (undefined8 *)(lVar7 + 0x1c0);
      local_1f8 = *(undefined8 *)(lVar7 + 0x570);
      uStack_1f0 = (ulong)*(uint *)(lVar7 + 0x578);
      local_1e8 = 0;
      uStack_1e0 = 0;
      uVar6 = *(undefined8 *)puVar2;
      local_1c0 = 1;
      local_1d8 = 1;
      if (*(char *)(lVar7 + 0x370) != '\0') {
        if (*(char *)(lVar7 + 0x208) != '\0') {
          if (*(uint *)(lVar7 + 0x200) != 0xffffffff) {
            (*(code *)(&PTR_FUN_04a434e0)[*(uint *)(lVar7 + 0x200)])(&uStack_31,puVar1);
          }
          *(undefined1 *)(lVar7 + 0x208) = 0;
          *(undefined4 *)(lVar7 + 0x200) = 0xffffffff;
        }
        if (*(char *)(lVar7 + 0x214) != '\0') {
          *(undefined1 *)(lVar7 + 0x214) = 0;
        }
      }
      *(undefined1 *)(lVar7 + 0x208) = 0;
      *(undefined8 *)(lVar7 + 0x1f8) = 0;
      *(undefined8 *)(lVar7 + 0x200) = 0;
      *puVar1 = 0;
      *(undefined4 *)(lVar7 + 0x210) = 0;
      *(undefined1 *)(lVar7 + 0x214) = 0;
      *(undefined8 *)(lVar7 + 0x1e8) = 0;
      *(undefined8 *)(lVar7 + 0x1f0) = 0;
      *(undefined8 *)(lVar7 + 0x1d8) = 0;
      *(undefined8 *)(lVar7 + 0x1e0) = 0;
      *(undefined8 *)(lVar7 + 0x1c8) = 0;
      *(undefined8 *)(lVar7 + 0x1d0) = 0;
      memset((void *)(lVar7 + 0x218),0,0x131);
      *(undefined4 *)(lVar7 + 0x350) = 0;
      *(undefined1 *)(lVar7 + 0x354) = 0;
      *(undefined4 *)(lVar7 + 0x358) = 0;
      *(undefined1 *)(lVar7 + 0x35c) = 0;
      *(undefined8 *)(lVar7 + 0x360) = 0;
      *(undefined8 *)(lVar7 + 0x368) = 0;
      *(undefined1 *)(lVar7 + 0x370) = 1;
      uVar3 = FUN_01c7cf1c(uVar6,puVar1,local_200);
      if ((uVar3 & 1) == 0) {
        lVar7 = *(long *)(param_1 + 0x50);
        if (*(long *)(lVar7 + 0x570) != 0) {
          (**(code **)(*(long *)**(undefined8 **)(lVar7 + 0x568) + 0x38))();
        }
        *(undefined8 *)(lVar7 + 0x570) = 0;
        *(undefined4 *)(lVar7 + 0x578) = 0;
      }
      if (local_1c0 != 0xffffffff) {
        (*(code *)(&PTR_FUN_04a434e0)[local_1c0])(&uStack_31,local_200);
      }
      goto LAB_01c74064;
    }
  }
  uVar3 = 0;
LAB_01c74064:
  return uVar3 & 1;
}

