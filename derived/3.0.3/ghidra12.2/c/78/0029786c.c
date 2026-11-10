
undefined8 FUN_0029786c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
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
  uVar3 = FUN_002977cc(param_1);
  if ((uVar3 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x58);
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x28) != '\0')) {
LAB_00297948:
      FUN_00221064(lVar8);
      local_60 = CONCAT44(local_60._4_4_,0x6c05);
      goto LAB_0029795c;
    }
    local_60 = CONCAT44(local_60._4_4_,0x6c05);
    local_80 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_80);
    piVar7 = (int *)(param_1 + 0x6c);
    if (*piVar7 == (int)local_60) {
      lVar8 = *(long *)(param_1 + 0x58);
      goto LAB_00297948;
    }
    local_80 = 0;
    local_60._0_4_ = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_80);
    if (*piVar7 == (int)local_60) {
      FUN_0029d98c(*(undefined8 *)puVar2);
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      FUN_002296c4(auStack_70,piVar7);
      puVar5 = auStack_70;
LAB_00297a4c:
      FUN_00220ff8(uVar6,puVar5);
      goto LAB_00297970;
    }
    local_80 = 0;
    local_60._0_4_ = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_80);
    if (*piVar7 != (int)local_60) {
      local_80 = 0xc406;
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_7c,(Result *)&local_34);
      if (*piVar7 != local_80) {
        local_90 = 0;
        local_34 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_8c,(Result *)&local_34);
        if (*piVar7 != local_90) {
          uVar6 = *(undefined8 *)(param_1 + 0x58);
          FUN_002296c4(auStack_b0,piVar7);
          goto LAB_00297a4c;
        }
      }
    }
    FUN_0029d98c(*(undefined8 *)puVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    local_60._0_4_ = 0xc406;
    local_80 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_80);
    FUN_002296c4(auStack_a0,&local_60);
    FUN_00220ff8(uVar6,auStack_a0);
    local_60 = CONCAT44(local_60._4_4_,0xc406);
    local_80 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_80);
  }
  else {
    FUN_0029d98c(*(undefined8 *)puVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    local_60._0_4_ = 0xc406;
    local_80 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_80);
    FUN_002296c4(auStack_50,&local_60);
    FUN_00220ff8(uVar6,auStack_50);
    local_60 = CONCAT44(local_60._4_4_,0xc406);
LAB_0029795c:
    local_80 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_80);
  }
  FUN_00229780(param_1 + 0x6c,&local_60);
LAB_00297970:
  *(undefined8 *)(param_1 + 0x58) = 0;
  local_60 = 0;
  FUN_002282f0(&local_60);
  lVar8 = local_60 - *(long *)(param_1 + 0x140);
  plVar4 = (long *)FUN_00228380();
  uVar1 = 0;
  if (*plVar4 != 0) {
    uVar1 = (uint)(lVar8 / *plVar4);
  }
  if (uVar1 < 0xf4241) {
    DAT_04c5fcf8 = uVar1;
  }
  DAT_04c5fd0a = FUN_0029bf68(*(undefined8 *)puVar2);
  DAT_04c5fd0b = FUN_0029bf58(*(undefined8 *)puVar2);
  DAT_04c5fcf4 = *(undefined4 *)(param_1 + 0x6c);
  *(char **)(param_1 + 0x40) = "RandomMatchmakeJob::SendMonitoringData";
  *(undefined1 **)(param_1 + 0x30) = &LAB_00298560;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

