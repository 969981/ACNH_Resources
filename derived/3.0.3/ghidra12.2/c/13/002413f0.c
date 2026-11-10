
void FUN_002413f0(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x8e0);
  if (uVar2 < 0x10) {
    lVar1 = param_1 + 0x260;
    uVar3 = FUN_002a3904(param_2);
    FUN_002a38fc(lVar1 + (ulong)uVar2 * 0x68,uVar3);
    uVar2 = *(uint *)(param_1 + 0x8e0);
    uVar4 = FUN_002437ec(param_2);
    FUN_002437cc(lVar1 + (ulong)uVar2 * 0x68,uVar4);
    uVar2 = *(uint *)(param_1 + 0x8e0);
    uVar4 = FUN_002437c4(param_2);
    FUN_002437bc(lVar1 + (ulong)uVar2 * 0x68,uVar4);
    *(int *)(param_1 + 0x8e0) = *(int *)(param_1 + 0x8e0) + 1;
  }
  return;
}

