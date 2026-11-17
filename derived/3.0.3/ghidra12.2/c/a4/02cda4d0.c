
void FUN_02cda4d0(byte *param_1,uint param_2,long param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined *local_1d8;
  long local_1d0;
  undefined8 uStack_1c8;
  undefined *local_1a0;
  undefined8 *puStack_198;
  undefined4 local_190;
  undefined1 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined *local_170;
  undefined1 *puStack_168;
  undefined4 local_160;
  undefined1 local_15c [63];
  undefined1 local_11d;
  undefined *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
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
  undefined2 local_60;
  undefined1 auStack_5e [6];
  undefined *local_58;
  char *local_50;
  undefined8 uStack_48;
  
  if ((param_2 < 8) && (*param_1 < 8)) {
    local_1a0 = (undefined *)CONCAT71(local_1a0._1_7_,*param_1);
    lVar3 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_1a0,1);
    if (lVar3 != 0) {
      lVar3 = lVar3 + (ulong)param_2 * 0x2450;
      if ((*(long *)(lVar3 + 0x3f28) == 0) ||
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x3f28) + 0x10), puVar4 == (undefined8 *)0x0))
      {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
      local_18c = 0;
      local_190 = 0x31;
      local_188 = 0xffffffff;
      uStack_180 = 0xffffffff00000000;
      puStack_168 = local_15c;
      puStack_198 = &local_c0;
      local_178 = 0xffffffff;
      local_160 = 0x40;
      local_11d = 0;
      local_170 = PTR_DAT_04bb2bc0 + 0x10;
      local_15c[0] = 0;
      local_108 = 0x40;
      local_c5 = 0;
      local_104[0] = 0;
      puStack_110 = local_104;
      local_1a0 = PTR_DAT_04bb8dc0 + 0x10;
      local_60 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      puVar1 = auStack_5e;
      if (auStack_5e <= (undefined1 *)((long)&local_c0 + 2U)) {
        puVar1 = (undefined1 *)((long)&local_c0 + 2U);
      }
      local_c0 = 0;
      uStack_b8 = 0;
      local_118 = local_170;
      memset(puStack_198,0,(ulong)(puVar1 + (-0xe1 - (long)&local_1a0)) & 0xfffffffffffffff8 | 2);
      if (**(short **)(param_3 + 8) == 0) {
        FUN_006d8678(&local_1d8,"01%02d",param_2 + 1);
        local_58 = PTR_DAT_04bb2020 + 0x10;
        local_50 = "STR_SaveSetting";
        FUN_006f50a0(&local_1a0,&local_58,&local_1d8,0);
        if ((*(long *)(lVar3 + 0x3f28) != 0) &&
           (plVar5 = *(long **)(*(long *)(lVar3 + 0x3f28) + 0x20), plVar5 != (long *)0x0)) {
          local_58 = *(undefined **)(lVar3 + 0x3f08);
          local_50 = *(char **)(lVar3 + 0x3f10);
          uStack_48 = 0x11f8;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
        }
        local_58 = (undefined *)CONCAT44(local_58._4_4_,0x30);
        ppuVar6 = &local_58;
        local_50 = (char *)(*(long *)(lVar3 + 0x3f10) + *(long *)(lVar3 + 0x3f08) + 0x1190);
      }
      else {
        FUN_006f5580(&local_1a0,param_3);
        if ((*(long *)(lVar3 + 0x3f28) != 0) &&
           (plVar5 = *(long **)(*(long *)(lVar3 + 0x3f28) + 0x20), plVar5 != (long *)0x0)) {
          local_1d8 = *(undefined **)(lVar3 + 0x3f08);
          local_1d0 = *(undefined8 *)(lVar3 + 0x3f10);
          uStack_1c8 = 0x11f8;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_1d8);
        }
        ppuVar6 = &local_1d8;
        local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,0x30);
        local_1d0 = *(long *)(lVar3 + 0x3f10) + *(long *)(lVar3 + 0x3f08) + 0x1190;
      }
      FUN_02906c90(ppuVar6,&local_1a0);
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x3f28) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x3f28) + 0x18), puVar4 != (undefined8 *)0x0))
      {
        (**(code **)*puVar4)();
      }
    }
  }
  return;
}

