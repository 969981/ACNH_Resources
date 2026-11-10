
undefined8 FUN_00292b2c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  int local_84;
  ErrorResultVariant aEStack_80 [12];
  int local_74;
  ErrorResultVariant aEStack_70 [12];
  undefined1 auStack_64 [16];
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined1 auStack_44 [16];
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bcb8b8;
  (**(code **)(**(long **)(*(long *)PTR_DAT_04bcb8b8 + 8) + 0x28))();
  uVar2 = FUN_00292a8c(param_1);
  if ((uVar2 & 1) == 0) {
    local_74 = 0;
    local_54 = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_74);
    piVar5 = (int *)(param_1 + 0x90);
    if (*piVar5 == local_54) {
      FUN_0029d98c(*(undefined8 *)puVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      FUN_002296c4(auStack_64,piVar5);
      puVar3 = auStack_64;
    }
    else {
      local_74 = 0;
      local_54 = 0x10c08;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_74);
      if (*piVar5 != local_54) {
        local_74 = 0xc406;
        local_34 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,(Result *)&local_34);
        if (*piVar5 != local_74) {
          local_84 = 0;
          local_34 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_80,(Result *)&local_34);
          if (*piVar5 != local_84) {
            uVar4 = *(undefined8 *)(param_1 + 0x58);
            FUN_002296c4(auStack_a4,piVar5);
            puVar3 = auStack_a4;
            goto LAB_00292cb4;
          }
        }
      }
      FUN_0029d98c(*(undefined8 *)puVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      local_54 = 0xc406;
      local_74 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_74);
      FUN_002296c4(auStack_94,&local_54);
      puVar3 = auStack_94;
    }
  }
  else {
    FUN_0029d98c(*(undefined8 *)puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    local_54 = 0xc406;
    local_74 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_74);
    FUN_002296c4(auStack_44,&local_54);
    puVar3 = auStack_44;
  }
LAB_00292cb4:
  FUN_00220ff8(uVar4,puVar3);
  *(undefined8 *)(param_1 + 0x58) = 0;
  puVar1 = PTR_LAB_04bcde70;
  *(char **)(param_1 + 0x40) = "CreateSessionJob::SendMonitoringData";
  *(undefined **)(param_1 + 0x30) = puVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

