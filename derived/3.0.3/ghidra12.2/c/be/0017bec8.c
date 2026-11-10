
undefined8 FUN_0017bec8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = 0;
  lVar3 = FUN_0017c170(&local_60);
  uVar4 = local_50;
  if (lVar3 != 0) {
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    local_78 = 0;
    lVar3 = FUN_0017c170(&local_80,local_58,local_50);
    if (lVar3 != 0) {
      lVar3 = FUN_0017c170(param_1 + 0xc,lVar3,uVar4);
      if ((lVar3 != 0) &&
         (lVar3 = FUN_0017c170(param_1 + 0x10,lVar3,uVar4), uVar2 = local_70, lVar3 != 0)) {
        param_1[4] = 0;
        param_1[5] = &DAT_0410789c;
        param_1[6] = &DAT_0410789d;
        lVar3 = FUN_0017c170(&local_60,local_78,local_70);
        if ((lVar3 != 0) &&
           ((uStack_48._1_1_ != '\0' ||
            ((lVar5 = FUN_0017c170(param_1 + 4,local_58,local_50), lVar5 != 0 &&
             (lVar3 = FUN_0017c170(&local_60,lVar3,uVar2), lVar3 != 0)))))) {
          param_1[8] = local_60;
          param_1[9] = local_58;
          param_1[10] = local_50;
          param_1[0xb] = uStack_48;
          uVar4 = FUN_0017c170(param_1 + 0xc,lVar3,uVar2);
          lVar3 = FUN_0017c170(param_1 + 0x14,uVar4,uVar2);
          if ((lVar3 != 0) &&
             ((((lVar3 = FUN_0017c170(&local_60,lVar3,uVar2), uVar4 = local_50, lVar3 != 0 &&
                (lVar5 = FUN_0017c170(param_1 + 0x18,local_58,local_50), lVar5 != 0)) &&
               (lVar5 = FUN_0017c170(param_1 + 0x1c,lVar5,uVar4), lVar5 != 0)) &&
              (((lVar3 = FUN_0017c170(param_1 + 0x20,lVar3,uVar2), lVar3 != 0 &&
                (uVar6 = FUN_0017c170(param_1 + 0x24,lVar3,uVar2), uVar6 != 0)) &&
               ((lVar3 = FUN_0017c170(param_1 + 0x28,param_1[0x25],param_1[0x26]), lVar3 != 0 &&
                (lVar3 = FUN_0017c170(param_1 + 0x2c,lVar3,param_1[0x26]), lVar3 != 0)))))))) {
            *(undefined1 *)((long)param_1 + 0x1b9) = 0;
            *(undefined1 *)((long)param_1 + 0x199) = 0;
            uStack_48._0_2_ = (ushort)(byte)uStack_48;
            *(undefined1 *)((long)param_1 + 0x1d9) = 0;
            param_1[0x30] = 0;
            param_1[0x34] = 0;
            param_1[0x38] = 0;
            param_1[0x31] = &DAT_0407ebb1;
            param_1[0x32] = &DAT_0407ebb1;
            param_1[0x35] = &DAT_0407ebb1;
            param_1[0x36] = &DAT_0407ebb1;
            param_1[0x39] = &DAT_0407ebb1;
            param_1[0x3a] = &DAT_0407ebb1;
            if (uVar2 <= uVar6) {
              return 0;
            }
            uVar6 = FUN_0017c170(&local_60,uVar6,uVar2);
            if (uVar6 != 0) {
              if (uStack_48._1_1_ == '\x01') {
                param_1[0x30] = local_60;
                param_1[0x31] = local_58;
                param_1[0x32] = local_50;
                param_1[0x33] = uStack_48;
                if (uVar2 <= uVar6) {
                  return 0;
                }
                uVar6 = FUN_0017c170(&local_60,uVar6,uVar2);
                if (uVar6 == 0) {
                  return 0xffffffff;
                }
              }
              cVar1 = uStack_48._1_1_;
              if (uStack_48._1_1_ == '\x02') {
                param_1[0x34] = local_60;
                param_1[0x35] = local_58;
                param_1[0x36] = local_50;
                param_1[0x37] = uStack_48;
                if (uVar2 <= uVar6) {
                  return 0;
                }
                lVar3 = FUN_0017c170(&local_60,uVar6,uVar2);
                if (lVar3 == 0) {
                  return 0xffffffff;
                }
                cVar1 = uStack_48._1_1_;
              }
              if (cVar1 != '\x03') {
                return 0;
              }
              lVar3 = FUN_0017c170(param_1 + 0x38,local_58,local_50);
              if (lVar3 != 0) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 0xffffffff;
}

