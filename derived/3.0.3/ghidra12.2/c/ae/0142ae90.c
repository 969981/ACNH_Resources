
undefined8 FUN_0142ae90(float param_1,undefined4 param_2,float param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  float local_b0;
  undefined4 uStack_ac;
  float local_a8;
  float local_a4;
  undefined4 uStack_a0;
  float local_9c;
  float local_98;
  undefined4 uStack_94;
  float local_90;
  float local_8c;
  undefined4 uStack_88;
  float local_84;
  float local_80;
  undefined4 uStack_7c;
  float local_78;
  float local_74;
  undefined4 uStack_70;
  float local_6c;
  float local_68;
  undefined4 uStack_64;
  float local_60;
  float local_5c;
  undefined4 uStack_58;
  float local_54;
  int local_14;
  
  local_14 = 0;
  if (1 < (param_4 & 0xff)) {
    lVar1 = *(long *)PTR_DAT_04bb27c8 + 0x28;
    uVar2 = 1;
    local_b0 = param_1;
    uStack_ac = param_2;
    local_a8 = param_3;
    local_a4 = param_1;
    uStack_a0 = param_2;
    local_9c = param_3;
    local_98 = param_1;
    uStack_94 = param_2;
    local_90 = param_3;
    local_8c = param_1;
    uStack_88 = param_2;
    local_84 = param_3;
    local_80 = param_1;
    uStack_7c = param_2;
    local_78 = param_3;
    local_74 = param_1;
    uStack_70 = param_2;
    local_6c = param_3;
    local_68 = param_1;
    uStack_64 = param_2;
    local_60 = param_3;
    local_5c = param_1;
    uStack_58 = param_2;
    local_54 = param_3;
    do {
      local_5c = local_5c + -5.0;
      local_60 = local_60 + -2.5;
      local_68 = local_68 + -5.0;
      local_74 = local_74 + 5.0;
      local_78 = local_78 + -2.5;
      local_80 = local_80 + 5.0;
      local_84 = local_84 + 5.0;
      local_90 = local_90 + 2.5;
      local_98 = local_98 + -5.0;
      local_9c = local_9c + -5.0;
      local_a8 = local_a8 + 2.5;
      local_b0 = local_b0 + 5.0;
      FUN_0093a950(lVar1,&local_74,&local_14);
      if (((((((local_14 != 1) && (local_14 != 5)) && (local_14 != 0xc)) ||
            (((FUN_0093a950(lVar1,&local_80,&local_14), local_14 != 1 && (local_14 != 5)) &&
             (local_14 != 0xc)))) ||
           ((((FUN_0093a950(lVar1,&local_a4,&local_14), local_14 != 1 && (local_14 != 5)) &&
             (local_14 != 0xc)) ||
            (((FUN_0093a950(lVar1,&local_68,&local_14), local_14 != 1 && (local_14 != 5)) &&
             (local_14 != 0xc)))))) ||
          (((FUN_0093a950(lVar1,&local_5c,&local_14), local_14 != 1 && (local_14 != 5)) &&
           (local_14 != 0xc)))) ||
         (((((FUN_0093a950(lVar1,&local_98,&local_14), local_14 != 1 && (local_14 != 5)) &&
            (local_14 != 0xc)) ||
           (((FUN_0093a950(lVar1,&local_8c,&local_14), local_14 != 1 && (local_14 != 5)) &&
            (local_14 != 0xc)))) ||
          (((FUN_0093a950(lVar1,&local_b0,&local_14), local_14 != 1 && (local_14 != 5)) &&
           (local_14 != 0xc)))))) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (param_4 & 0xff));
  }
  return 1;
}

