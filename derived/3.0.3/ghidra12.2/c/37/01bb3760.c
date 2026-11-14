
long FUN_01bb3760(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_2c8 [56];
  undefined *local_290;
  long local_288 [2];
  undefined *local_278;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined *local_248;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined *local_218;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined *local_1e8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined *local_1b8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined *local_188;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined *local_158;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined *local_128;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  long *local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined *local_60;
  char *pcStack_58;
  
  if (param_1 != 0) {
    lVar7 = *(long *)PTR_DAT_04bb28f8;
    memset(local_288,0,0x1e0);
    local_258 = 0;
    uStack_250 = 0;
    local_228 = 0;
    uStack_220 = 0;
    puVar1 = PTR_DAT_04bb2d80 + 0x10;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_290 = PTR_DAT_04bc0798 + 0x10;
    local_88 = (long *)0x0;
    local_70 = 0;
    local_68 = 0;
    local_78 = PTR_LAB_04bc08e0;
    local_278 = puVar1;
    local_248 = puVar1;
    local_218 = puVar1;
    local_1e8 = puVar1;
    local_1b8 = puVar1;
    local_188 = puVar1;
    local_158 = puVar1;
    local_128 = puVar1;
    local_f8 = puVar1;
    local_c8 = puVar1;
    local_80 = param_1;
    FUN_006f1750(&local_290);
    local_a8 = 0xffffffff;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    if (param_2 != 0) {
      local_a8 = 0;
      local_288[1] = 0;
      local_288[0] = param_2;
      local_278 = puVar1;
    }
    (**(code **)(local_290 + 0x18))(&local_290);
    FUN_006f1490(&local_290);
    if (local_88 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*local_88 + 0x20))();
      lVar6 = (**(code **)(*plVar5 + 0x48))();
      if (lVar6 != 0) {
        lVar3 = 0xc;
        if (param_3 != 2) {
          lVar3 = 8;
        }
        if (0 < *(int *)(lVar6 + lVar3)) {
          FUN_006d8678(auStack_2c8,&DAT_0405bf91);
          local_60 = PTR_DAT_04bb2020 + 0x10;
          pcStack_58 = "STR_Article";
          uVar4 = FUN_01be97b0(&local_60,auStack_2c8);
          if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar7 + 0x87b0))) {
            lVar6 = lVar7 + 0x87a0;
            uVar2 = uVar4 + 1 & 3;
            if (2 < uVar4) {
              uVar4 = uVar4 + 1 & 0xfffffffc;
              do {
                uVar4 = uVar4 - 4;
                lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 8) + 8) + 8) + 8);
              } while (uVar4 != 0);
            }
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              lVar6 = *(long *)(lVar6 + 8);
            }
            if (lVar6 == 0) {
              return 0;
            }
            return lVar6 - *(int *)(lVar7 + 0x87b4);
          }
        }
      }
    }
  }
  return 0;
}

