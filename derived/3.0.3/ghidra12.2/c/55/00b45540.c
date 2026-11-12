
void FUN_00b45540(long param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *local_268;
  undefined8 *puStack_260;
  undefined *local_258;
  char *pcStack_250;
  undefined **local_248;
  undefined1 *puStack_240;
  undefined4 local_238;
  undefined1 local_234;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  undefined *local_218;
  undefined1 *puStack_210;
  undefined4 local_208;
  undefined1 local_204 [63];
  undefined1 local_1c5;
  undefined *local_1c0;
  undefined1 *puStack_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [63];
  undefined1 local_16d;
  undefined1 local_168 [8];
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar8 = *(long *)puVar1;
  if (lVar8 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_60 = *param_2;
      uStack_5c = param_2[1];
      local_58 = 0;
      local_68 = PTR_DAT_04bc0510 + 0x10;
      uVar3 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar1 != 0) {
        lVar7 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(param_2);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
            local_58 = lVar7;
          }
        }
      }
      iVar4 = FUN_01ae3210(&local_68);
      if (iVar4 != 0xe) {
        local_234 = 0;
        local_238 = 0x80;
        local_230 = 0xffffffff;
        uStack_228 = 0xffffffff00000000;
        puStack_210 = local_204;
        puStack_240 = local_168;
        local_220 = 0xffffffff;
        local_208 = 0x40;
        local_1c5 = 0;
        local_218 = PTR_DAT_04bb2bc0 + 0x10;
        local_1b0 = 0x40;
        local_204[0] = 0;
        local_16d = 0;
        local_1ac[0] = 0;
        local_78 = 0;
        uStack_70 = 0;
        puStack_1b8 = local_1ac;
        local_248 = &PTR_LAB_04938188;
        ppuVar2 = &local_68;
        if (&local_68 <= local_168 + 2) {
          ppuVar2 = (undefined **)(local_168 + 2);
        }
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_168 = (undefined1  [8])0x0;
        uStack_160 = 0;
        local_1c0 = local_218;
        memset(puStack_240,0,(size_t)((long)ppuVar2 + (-0xe0 - (long)&local_248)));
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        pcStack_250 = "STR_ItemColor";
        local_258 = puVar1;
        uVar3 = FUN_01ae3210(&local_68);
        if (uVar3 < 0xf) {
          puStack_260 = *(undefined8 **)(PTR_s_Orange_04bb6b30 + (ulong)uVar3 * 8 + 0x60);
        }
        else {
          puStack_260 = &DAT_0407ebb1;
        }
        local_268 = puVar1;
        FUN_006f50a0(&local_248,&local_258,&local_268,0);
        uVar6 = *(undefined8 *)(**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 0x20) + 8);
        if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar4 != 0)) {
          FUN_01bb25c8(PTR_DAT_04bc0a80);
          __cxa_guard_release(PTR_DAT_04bc0a88);
        }
        if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
          uVar5 = 0;
          do {
            if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar5 * 4) == 0x7d) goto LAB_00b457fc;
            uVar5 = uVar5 + 1;
          } while (*(uint *)PTR_DAT_04bc0a80 != uVar5);
        }
        uVar5 = 0;
LAB_00b457fc:
        local_258 = (undefined *)CONCAT44(local_258._4_4_,(int)uVar5);
        FUN_01bae480(uVar6,&local_248,param_3,&local_258,7);
      }
    }
  }
  return;
}

