
undefined8 FUN_01f1d930(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_24;
  
  if (*(char *)((long)param_1 + 0x143d4) != '\0') {
    return 0;
  }
  if ((*(int *)((long)param_1 + 0x77f4) == 0x10) || ((int)param_1[0xef6] == 0x10)) {
    uVar3 = 0;
  }
  else {
    FUN_01e57c78(param_1[2],PTR_DAT_04bb37e0,0,1);
    local_b0 = (undefined *)((ulong)local_b0._4_4_ << 0x20);
    if ((*(uint *)((long)param_1 + 0xaf3c) & 1) != 0) {
      plVar1 = param_1 + 0x194e;
      plVar6 = param_1 + 0x15ea;
      FUN_01f3c598(param_1,0,0,0);
      uVar3 = (**(code **)(*param_1 + 0x3a0))(param_1);
      puVar2 = PTR_DAT_04bbc1a0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = PTR_DAT_04bc1558 + 0x10;
      local_90 = PTR_DAT_04bbc1a0 + 0x10;
      uStack_a8 = 0;
      local_5c = 0;
      puStack_88 = PTR_DAT_04bb2010 + 0x10;
      local_80 = 0;
      local_70 = 0;
      uStack_68 = 0xffffffff00000000;
      local_60 = 0xffffffff;
      local_58 = 0xfffe;
      puStack_78 = puStack_88;
      FUN_0277d4ac(&local_58);
      local_48 = 0;
      local_44 = 0;
      local_50 = 0x3bf800000;
      if ((*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) &&
         (lVar4 = FUN_021c9770(*(undefined4 *)(param_1[1] + 0x50c),1), lVar4 != 0)) {
        local_24 = *(undefined4 *)(lVar4 + 0x70);
      }
      else {
        local_24 = 0x16;
      }
      FUN_01e26a60(&local_b0,&local_24);
      FUN_020664bc(uVar3,&local_b0);
      if (0 < (int)*plVar6) {
        lVar4 = 0;
        do {
          plVar5 = *(long **)(param_1[0x15eb] + lVar4 * 8);
          lVar4 = lVar4 + 1;
          plVar5[0xf] = (long)(puVar2 + 0x10);
          *plVar5 = param_1[0x15ec];
          param_1[0x15ec] = (long)plVar5;
        } while (lVar4 < (int)*plVar6);
      }
      *(int *)plVar6 = 0;
      if (0 < (int)*plVar1) {
        lVar4 = 0;
        do {
          plVar6 = *(long **)(param_1[0x194f] + lVar4 * 8);
          lVar4 = lVar4 + 1;
          plVar6[0xf] = (long)(puVar2 + 0x10);
          *plVar6 = param_1[0x1950];
          param_1[0x1950] = (long)plVar6;
        } while (lVar4 < (int)*plVar1);
      }
      *(int *)plVar1 = 0;
      param_1[0x1cb2] = 0;
      param_1[0x1cb3] = 0;
      param_1[0x1cb4] = 0;
    }
    FUN_01f40300(param_1,0x49,0,0);
    uVar3 = 1;
  }
  return uVar3;
}

