
void FUN_004c4270(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN_0043bd50();
  FUN_0043bd50(param_1 + 8,param_2 + 8);
  lVar5 = *(long *)(param_2 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(uint *)(param_2 + 0x1c);
  *(uint *)(param_1 + 0x1c) = uVar2;
  bVar3 = *(byte *)(param_1 + 0x20);
  bVar1 = *(byte *)(param_2 + 0x20) & 1;
  *(byte *)(param_1 + 0x20) = bVar3 & 0xfe | bVar1;
  *(byte *)(param_1 + 0x20) = bVar3 & 0xfc | bVar1 | *(byte *)(param_2 + 0x20) & 2;
  if (((uVar2 < 6) && ((1 << (ulong)(uVar2 & 0x1f) & 0x32U) != 0)) && (lVar5 != 0)) {
    uVar4 = FUN_00438810(0x28);
    FUN_004c4270(uVar4,lVar5);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
  }
  return;
}

