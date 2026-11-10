
undefined8 FUN_00293bc8(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  int local_90;
  ErrorResultVariant aEStack_8c [12];
  int local_80;
  ErrorResultVariant aEStack_7c [12];
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 auStack_50 [16];
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bcb8b8;
  puVar5 = auStack_b0;
  (**(code **)(**(long **)(*(long *)PTR_DAT_04bcb8b8 + 8) + 0x28))();
  uVar3 = FUN_00293b28(param_1);
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    if ((uVar3 & 1) != 0) {
LAB_00293ca0:
      FUN_00221064(param_1[0xb]);
      local_60 = CONCAT44(local_60._4_4_,0x6c05);
      goto LAB_00293cb8;
    }
    local_60 = CONCAT44(local_60._4_4_,0x6c05);
    local_80 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_80);
    if ((int)param_1[0x24] == (int)local_60) goto LAB_00293ca0;
    local_80 = 0;
    local_60._0_4_ = 0xa471;
    plVar4 = param_1 + 0x24;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_80);
    if ((int)*plVar4 == (int)local_60) {
      FUN_0029d98c(*(undefined8 *)puVar2);
      lVar6 = param_1[0xb];
      FUN_002296c4(auStack_70,plVar4);
      puVar5 = auStack_70;
LAB_00293dac:
      FUN_00220ff8(lVar6,puVar5);
      goto LAB_00293ccc;
    }
    local_80 = 0;
    local_60._0_4_ = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_80);
    if ((int)*plVar4 != (int)local_60) {
      local_80 = 0xc406;
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_7c,(Result *)&local_34);
      if ((int)*plVar4 != local_80) {
        local_90 = 0;
        local_34 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_8c,(Result *)&local_34);
        if ((int)*plVar4 != local_90) {
          lVar6 = param_1[0xb];
          FUN_002296c4(auStack_b0,plVar4);
          goto LAB_00293dac;
        }
      }
    }
    FUN_0029d98c(*(undefined8 *)puVar2);
    lVar6 = param_1[0xb];
    local_60._0_4_ = 0xc406;
    local_80 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_80);
    FUN_002296c4(auStack_a0,&local_60);
    FUN_00220ff8(lVar6,auStack_a0);
    local_60 = CONCAT44(local_60._4_4_,0xc406);
    local_80 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_80);
  }
  else {
    FUN_0029d98c(*(undefined8 *)puVar2);
    lVar6 = param_1[0xb];
    local_60._0_4_ = 0xc406;
    local_80 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_80);
    FUN_002296c4(auStack_50,&local_60);
    FUN_00220ff8(lVar6,auStack_50);
    local_60 = CONCAT44(local_60._4_4_,0xc406);
LAB_00293cb8:
    local_80 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_80);
  }
  FUN_00229780(param_1 + 0x24,&local_60);
LAB_00293ccc:
  param_1[0xb] = 0;
  local_60 = 0;
  FUN_002282f0(&local_60);
  lVar6 = local_60 - param_1[0x26];
  plVar4 = (long *)FUN_00228380();
  uVar1 = 0;
  if (*plVar4 != 0) {
    uVar1 = (uint)(lVar6 / *plVar4);
  }
  if (uVar1 < 0xf4241) {
    DAT_04c5fcf8 = uVar1;
  }
  DAT_04c5fd09 = FUN_0029bf14(*(undefined8 *)puVar2);
  DAT_04c5fd0b = FUN_0029bf58(*(undefined8 *)puVar2);
  DAT_04c5fcf4 = (undefined4)param_1[0x24];
  param_1[8] = (long)"JoinSessionJob::SendMonitoringData";
  param_1[6] = (long)&LAB_002944ec;
  param_1[7] = 0;
  return 0;
}

