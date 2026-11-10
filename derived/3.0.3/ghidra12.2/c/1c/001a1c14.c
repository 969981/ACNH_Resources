
void FUN_001a1c14(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 uStack_48;
  
  local_60[0] = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  uStack_48 = 0x10;
  local_68 = puVar1;
  local_50 = local_60;
  FUN_0018b070(&local_68,"System Components",0xffffffffffffffff);
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *param_1 = (long)&PTR_FUN_048398b8;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = (long)(param_1 + 3);
  param_1[6] = 0x10;
  FUN_0018b070(param_1 + 2,local_50,0xffffffffffffffff);
  puVar3 = PTR_DAT_04bcc250;
  plVar2 = param_1 + 9;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[9] = (long)plVar2;
  param_1[10] = (long)plVar2;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  local_68 = puVar1;
  FUN_0018b1a0(&local_68);
  puVar3 = PTR_DAT_04bcc258;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  lVar4 = FUN_00185a6c(0x60);
  if (lVar4 == 0) {
    param_1[0xf] = 0;
    lVar4 = 0;
  }
  else {
    local_60[0] = 0;
    uStack_48 = 0x10;
    local_68 = puVar1;
    local_50 = local_60;
    FUN_0018b070(&local_68,&DAT_040d2324,0xffffffffffffffff);
    FUN_001a1648(lVar4,&local_68);
    param_1[0xf] = lVar4;
    local_68 = puVar1;
    FUN_0018b1a0(&local_68);
    lVar4 = param_1[0xf];
  }
  plVar5 = (long *)FUN_00187df4(0x18);
  plVar5[1] = (long)plVar2;
  plVar5[2] = lVar4;
  *plVar5 = 0;
  lVar6 = param_1[9];
  *plVar5 = lVar6;
  *(long **)(lVar6 + 8) = plVar5;
  param_1[9] = (long)plVar5;
  param_1[0xb] = param_1[0xb] + 1;
  *(long **)(lVar4 + 0x40) = param_1;
  (**(code **)(*param_1 + 0x70))(param_1);
  return;
}

