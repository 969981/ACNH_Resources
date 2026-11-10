
undefined8 FUN_00266e5c(long *param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  (**(code **)(*param_1 + 0x30))();
  if ((int)param_1[0x2c] == 1) {
    return 0;
  }
  uVar4 = FUN_002212e4(param_1);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x10))(param_1,1);
  puVar2 = PTR_DAT_04bcd350;
  *(undefined4 *)(param_1 + 0x2b) = param_2;
  uVar4 = FUN_002212e4(*(undefined8 *)(*(long *)puVar2 + 8));
  if ((uVar4 & 1) != 0) {
    iVar1 = (int)param_1[0x2b];
    if (iVar1 - 4U < 0x15) {
      if (iVar1 == 7) {
        local_34 = 0x6848;
      }
      else if (iVar1 == 6) {
        local_34 = 0x6847;
      }
      else if (iVar1 == 5) {
        local_34 = 0x6846;
      }
      else {
        local_34 = 0x6849;
      }
    }
    else {
      local_34 = 0x6838;
    }
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
    FUN_00229780((long)param_1 + 0x19c,&local_34);
    *(undefined1 *)(param_1 + 0x33) = 1;
    uVar4 = FUN_002212e4(*(undefined8 *)(*(long *)puVar2 + 0x20));
    puVar3 = PTR_FUN_04bcda68;
    if ((uVar4 & 1) == 0) {
      param_1[8] = (long)"KickoutManageJob::ClientFinalize";
      param_1[6] = (long)puVar3;
      param_1[7] = 0;
      return 1;
    }
  }
  param_1[6] = (long)PTR_FUN_04bcda60;
  param_1[7] = 0;
  param_1[8] = (long)"KickoutManageJob::ClientStartLeaveMesh";
  uVar4 = FUN_002212e4(*(undefined8 *)(*(long *)puVar2 + 0x10));
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2b) = 0;
  }
  return 1;
}

