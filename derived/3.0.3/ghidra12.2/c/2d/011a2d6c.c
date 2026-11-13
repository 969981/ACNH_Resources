
bool FUN_011a2d6c(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_04bbc1a0;
  puVar3 = PTR_DAT_04bb2010;
  if (*(long *)(param_1 + 0x48) == 0) {
    return false;
  }
  local_48 = 0;
  local_58 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_50 = PTR_DAT_04bb2010 + 0x10;
  local_38 = 0;
  local_40 = puStack_50;
  FUN_011be644(&local_58);
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar1 < iVar2) {
    puVar5 = *(undefined8 **)(param_1 + 0x50);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x50) = *puVar5;
    }
    *puVar5 = 0;
    puVar5[1] = puVar4 + 0x10;
    *(undefined4 *)puVar5 = 0x7e3d1e46;
    puVar5[2] = puVar3 + 0x10;
    puVar5[3] = 0;
    puVar5[4] = puVar3 + 0x10;
    puVar5[5] = 0;
    if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x44)) {
      *(undefined8 **)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x40) * 8) = puVar5;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    }
    *(undefined4 *)puVar5 = param_2;
    *(undefined4 *)(puVar5 + 3) = (undefined4)local_48;
    *(undefined4 *)((long)puVar5 + 0x1c) = local_48._4_4_;
    *(undefined4 *)(puVar5 + 5) = (undefined4)local_38;
    *(undefined4 *)((long)puVar5 + 0x2c) = local_38._4_4_;
  }
  return iVar1 < iVar2;
}

