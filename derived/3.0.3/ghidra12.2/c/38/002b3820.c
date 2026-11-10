
uint FUN_002b3820(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  ulong uVar6;
  
  if ((uint)*(byte *)(param_1 + 0x4e) <= (param_2 & 0xff)) {
    return 0xffffffff;
  }
  puVar4 = (uint *)(*(long *)(param_1 + 0x50) + (ulong)(param_2 & 0xff) * 0x34);
  uVar1 = *puVar4;
  uVar6 = (ulong)uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  uVar3 = puVar4[((ulong)puVar4[1] + (ulong)(uVar1 - 1)) % 9 + 2];
  uVar2 = uVar3;
  if (uVar1 != 1) {
    do {
      iVar5 = (int)uVar6;
      uVar6 = uVar6 - 1;
      uVar3 = puVar4[((ulong)(iVar5 - 2) + (ulong)puVar4[1]) % 9 + 2];
      if ((int)uVar2 <= (int)puVar4[((ulong)(iVar5 - 2) + (ulong)puVar4[1]) % 9 + 2]) {
        uVar3 = uVar2;
      }
      uVar2 = uVar3;
    } while (uVar6 != 1);
  }
  return uVar3;
}

