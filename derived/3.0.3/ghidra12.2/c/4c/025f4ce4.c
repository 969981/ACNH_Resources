
void FUN_025f4ce4(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *local_50;
  char *pcStack_48;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    return;
  }
  FUN_025f4e3c(param_1,0x77);
  puVar3 = PTR_DAT_04bb2020;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "Customer";
  local_50 = puVar1;
  uVar4 = FUN_02603820(uVar5,param_2);
  if (((uVar4 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
    FUN_02605cc0(*(long *)(param_1 + 8),&local_50,uVar5);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  pcStack_48 = "Housemate";
  local_50 = puVar1;
  uVar4 = FUN_02603820(uVar5,param_2 + 2);
  if (((uVar4 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
    FUN_02605cc0(*(long *)(param_1 + 8),&local_50,uVar5);
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (uVar2 == 0xffffffff) {
    local_50 = puVar3 + 0x10;
    pcStack_48 = "IsExistPhoto";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_50,0);
    }
  }
  else {
    uVar2 = uVar2 & 0xf0;
    local_50 = puVar3 + 0x10;
    pcStack_48 = "IsExistPhoto";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_50,uVar2 == 0);
    }
    if ((uVar2 == 0) &&
       (uVar4 = FUN_02603b90(*(undefined8 *)(param_1 + 0x40),(uint *)(param_2 + 4)),
       (uVar4 & 1) != 0)) {
      local_50 = puVar3 + 0x10;
      pcStack_48 = "PhotoInfo";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605cc0(*(long *)(param_1 + 8),&local_50,*(undefined8 *)(param_1 + 0x40));
      }
    }
  }
  return;
}

