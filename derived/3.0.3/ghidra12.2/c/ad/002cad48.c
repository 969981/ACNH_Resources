
undefined8 FUN_002cad48(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *local_a0;
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined1 auStack_70 [24];
  undefined2 local_58;
  
  lVar1 = param_1 + 8;
  FUN_002b4378(&local_78,lVar1);
  FUN_002b4378(&local_a0,param_2);
  uVar5 = FUN_0022740c(&local_78,&local_a0);
  puVar3 = PTR_DAT_04bcba18;
  puVar2 = PTR_DAT_04bcba18 + 0x10;
  local_a0 = puVar2;
  FUN_0021f584(auStack_98);
  local_78 = puVar2;
  FUN_0021f584(auStack_70);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(param_1 + 0x9c) != -1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      return 0;
    }
    uVar5 = FUN_002b44d4(lVar1);
    if ((((uVar5 & 1) == 0) || (uVar5 = FUN_002b44d4(param_2), (uVar5 & 1) != 0)) &&
       (uVar5 = FUN_002b44d4(lVar1), (uVar5 & 1) == 0)) {
      FUN_002b44d4(param_2);
    }
    FUN_002b4378(&local_78,lVar1);
    FUN_0021f508(&local_a0,auStack_70);
    local_78 = puVar3 + 0x10;
    FUN_0021f584(auStack_70);
    uVar4 = FUN_002b44d4(param_2);
    if ((uVar4 & 1) == 0) {
      uVar6 = FUN_002b4368(param_2);
      FUN_002b44e4(lVar1,uVar6);
    }
    else {
      uVar6 = FUN_002b4370(param_2);
      FUN_002b44ec(lVar1,uVar6);
    }
    FUN_002b455c(lVar1,uVar4 & 1);
    FUN_002b4378(&local_78,param_2);
    puVar3 = puVar3 + 0x10;
    *(undefined2 *)(param_1 + 0xac) = local_58;
    local_78 = puVar3;
    FUN_0021f584(auStack_70);
    FUN_002b4378(&local_78,param_2);
    *(undefined2 *)(param_1 + 0xae) = local_58;
    local_78 = puVar3;
    FUN_0021f584(auStack_70);
    FUN_002b4378(&local_78,param_2);
    uVar5 = FUN_002200e4(&local_a0,auStack_70);
    local_78 = puVar3;
    FUN_0021f584(auStack_70);
    if ((uVar5 & 1) == 0) {
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    FUN_0021f584(&local_a0);
  }
  return 1;
}

