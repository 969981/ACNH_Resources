
void FUN_025f1ecc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *local_50;
  char *pcStack_48;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    return;
  }
  FUN_02602950(param_1,0x79);
  puVar2 = PTR_DAT_04bb2020;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "Customer";
  local_50 = puVar1;
  uVar3 = FUN_02603820(uVar4,param_2 + 4);
  if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
    FUN_02605cc0(*(long *)(param_1 + 8),&local_50,uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  pcStack_48 = "Housemate";
  local_50 = puVar1;
  uVar3 = FUN_02603820(uVar4,param_2 + 6);
  if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
    FUN_02605cc0(*(long *)(param_1 + 8),&local_50,uVar4);
  }
  local_50 = puVar2 + 0x10;
  pcStack_48 = "OrderType";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_50,(long)*(int *)(param_2 + 8));
  }
  return;
}

