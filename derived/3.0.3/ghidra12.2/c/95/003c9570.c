
long FUN_003c9570(short *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  
  sVar3 = *param_1;
  puVar1 = (uint *)((long)param_1 + (ulong)*(uint *)(param_1 + 2));
  if (sVar3 == 0x6002) {
    if ((byte)*puVar1 <= param_2 && param_2 <= *(byte *)((long)puVar1 + 1)) {
      return (long)puVar1 + (long)(int)puVar1[(ulong)(param_2 - (byte)*puVar1) * 2 + 2];
    }
  }
  else if (sVar3 == 0x6001) {
    uVar2 = *puVar1;
    uVar4 = (ulong)uVar2;
    if (uVar2 != 0) {
      lVar5 = 0;
      pbVar6 = (byte *)((long)param_1 + (ulong)*(uint *)(param_1 + 2) + 4);
      do {
        if (param_2 <= *pbVar6) {
          return (long)puVar1 +
                 (long)*(int *)((long)puVar1 + (ulong)(uVar2 + 3 & 0xfffffffc) + (lVar5 >> 0x1d) + 8
                               );
        }
        lVar5 = lVar5 + 0x100000000;
        uVar4 = uVar4 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar4 != 0);
    }
  }
  else if (sVar3 == 0x6000) {
    return (long)puVar1 + (long)(int)puVar1[1];
  }
  return 0;
}

