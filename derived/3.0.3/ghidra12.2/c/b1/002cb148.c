
void FUN_002cb148(long param_1)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [24];
  short local_28;
  
  sVar2 = *(short *)(param_1 + 0xac);
  if (sVar2 != 0 || *(short *)(param_1 + 0xae) != 0) {
    uVar1 = (*(short *)(param_1 + 0xae) - sVar2) + 1;
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = *(ushort *)(param_1 + 0xa4) / uVar1;
    }
    sVar2 = (*(ushort *)(param_1 + 0xa4) - uVar3 * uVar1) + sVar2;
    FUN_0021f4e0(auStack_40);
    param_1 = param_1 + 8;
    uVar4 = FUN_002b44d4(param_1);
    local_28 = sVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_002b4368(param_1);
      FUN_0021f54c(auStack_40,uVar5);
      FUN_002b44e4(param_1,auStack_40);
    }
    else {
      uVar5 = FUN_002b4370(param_1);
      FUN_0021f54c(auStack_40,uVar5);
      FUN_002b44ec(param_1,auStack_40);
    }
    FUN_0021f584(auStack_40);
  }
  return;
}

