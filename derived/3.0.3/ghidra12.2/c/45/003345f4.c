
long FUN_003345f4(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  
  lVar1 = param_1 + (ulong)*(uint *)(param_1 + 0x14);
  bVar7 = param_1 != 0;
  uVar2 = (uint)(bVar7 && *(int *)(lVar1 + 0x3c) != 0);
  uVar3 = 1;
  if (uVar2 != 0) {
    uVar3 = 2;
  }
  uVar6 = (ulong)uVar2;
  if (*(int *)(lVar1 + 0x40) != 0 && param_1 != 0) {
    uVar6 = uVar3;
  }
  uVar2 = 0;
  if (*(int *)(lVar1 + 0x44) != 0) {
    uVar2 = (uint)bVar7;
  }
  uVar4 = 0;
  if (*(int *)(lVar1 + 0x48) != 0) {
    uVar4 = (uint)bVar7;
  }
  uVar5 = 0;
  if (*(int *)(lVar1 + 0x4c) != 0) {
    uVar5 = (uint)bVar7;
  }
  return (long)*(int *)(lVar1 + 8) * (uVar6 + (ulong)uVar2 + (ulong)uVar4 + (ulong)uVar5) * 0x10 +
         (long)*(int *)(lVar1 + 0x38) * 4;
}

