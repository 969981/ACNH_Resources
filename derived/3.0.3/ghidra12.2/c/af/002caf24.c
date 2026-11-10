
void FUN_002caf24(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *local_a0;
  undefined1 auStack_98 [16];
  short local_88;
  undefined *local_78;
  undefined1 auStack_70 [24];
  short local_58;
  
  lVar1 = param_1 + 8;
  FUN_002b4378(&local_78,lVar1);
  FUN_002b4378(&local_a0,param_2);
  uVar6 = FUN_0022740c(&local_78,&local_a0);
  puVar3 = PTR_DAT_04bcba18;
  puVar2 = PTR_DAT_04bcba18 + 0x10;
  local_a0 = puVar2;
  FUN_0021f584(auStack_98);
  local_78 = puVar2;
  FUN_0021f584(auStack_70);
  if (((uVar6 & 1) == 0) &&
     ((*(long *)(param_1 + 0x88) == 0 || (uVar6 = FUN_002b44c4(lVar1), (uVar6 & 1) != 0)))) {
    FUN_002b4378(&local_78,lVar1);
    sVar4 = local_58;
    puVar2 = puVar3 + 0x10;
    local_78 = puVar2;
    FUN_0021f584(auStack_70);
    FUN_0021f4e0(&local_a0);
    uVar5 = FUN_002b44d4(lVar1);
    if ((uVar5 & 1) == 0) {
      uVar7 = FUN_002b4368(lVar1);
      FUN_0021f54c(&local_a0,uVar7);
      FUN_002b4378(&local_78,param_2);
      local_88 = local_58;
      local_78 = puVar2;
      FUN_0021f584(auStack_70);
      FUN_002b44e4(lVar1,&local_a0);
    }
    else {
      uVar7 = FUN_002b4370(lVar1);
      FUN_0021f54c(&local_a0,uVar7);
      FUN_002b4378(&local_78,param_2);
      local_88 = local_58;
      local_78 = puVar2;
      FUN_0021f584(auStack_70);
      FUN_002b44ec(lVar1,&local_a0);
    }
    FUN_002b455c(lVar1,uVar5 & 1);
    FUN_002b4378(&local_78,param_2);
    local_78 = puVar3 + 0x10;
    FUN_0021f584(auStack_70);
    if (sVar4 != local_58) {
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    FUN_0021f584(&local_a0);
  }
  return;
}

