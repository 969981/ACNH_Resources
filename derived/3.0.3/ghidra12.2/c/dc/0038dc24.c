
void FUN_0038dc24(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  uVar2 = FUN_003b49e4(param_2);
  FUN_003b4a30(param_1,uVar2);
  uVar2 = FUN_003b49ec(param_2);
  FUN_003b4a38(param_1,uVar2);
  uVar1 = FUN_003b49f4(param_2);
  FUN_003b4a40(param_1,uVar1);
  uVar1 = FUN_003b4a0c(param_2);
  FUN_003b4a78(param_1,uVar1);
  FUN_003b49e4(param_2);
  pvVar3 = (void *)FUN_00367b30();
  pvVar4 = (void *)FUN_003b49b0(param_2);
  sVar5 = FUN_003b49e4(param_2);
  memcpy(pvVar3,pvVar4,sVar5);
  FUN_003b4a20(param_1,pvVar3);
  FUN_003b49ec(param_2);
  pvVar3 = (void *)FUN_00367b30();
  pvVar4 = (void *)FUN_003b49a8(param_2);
  sVar5 = FUN_003b49ec(param_2);
  memcpy(pvVar3,pvVar4,sVar5);
  FUN_003b4a28(param_1,pvVar3);
  return;
}

