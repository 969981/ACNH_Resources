
void FUN_035ceea0(byte *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  byte *__src;
  
  bVar3 = param_1[0xe5];
  if (bVar3 < 0x50) {
    if (param_1[0x16a] < 10) {
      bVar5 = bVar3 >> 1;
      lVar6 = *(long *)(param_1 + 0xc28);
      bVar4 = *(byte *)(lVar6 + (ulong)bVar5 * 4);
      *(ushort *)(param_1 + 0xc06) = (ushort)bVar5 << 2;
      *(ushort *)(param_1 + 0xd8c) = (ushort)bVar5 << 2;
      param_1[0xd8e] = bVar4;
      if (((ulong)param_1[4] - (ulong)bVar4) + 0x10 < (ulong)(8L << ((ulong)(*param_1 >> 2) & 1))) {
        bVar4 = param_1[0x16a];
        __src = param_1 + 0x16b;
        __src[bVar4] = bVar3 >> 1;
        bVar4 = bVar4 + 1;
        pbVar1 = __src + bVar4;
        param_1[0x16a] = bVar4;
        pbVar7 = pbVar1 + -1;
        uVar8 = (long)pbVar7 - (long)__src;
        if (uVar8 != 0) {
          do {
            uVar9 = uVar8 >> 1;
            uVar2 = uVar8 + ~uVar9;
            uVar8 = uVar9;
            if (*(byte *)(lVar6 + (ulong)__src[uVar9] * 4 + 1) <=
                *(byte *)(lVar6 + (ulong)bVar5 * 4 + 1)) {
              uVar8 = uVar2;
              __src = __src + uVar9 + 1;
            }
          } while (uVar8 != 0);
        }
        if (__src != pbVar1 && __src != pbVar7) {
          if (__src + 1 == pbVar7) {
            bVar3 = *__src;
            *__src = *pbVar7;
            *pbVar7 = bVar3;
          }
          else {
            bVar3 = pbVar1[-1];
            memmove(pbVar1 + -((long)pbVar7 - (long)__src),__src,(long)pbVar7 - (long)__src);
            *__src = bVar3;
          }
        }
      }
    }
  }
  else {
    param_1[0xe4] = 0;
  }
  param_1[0xe5] = param_1[0xe5] + 2;
  return;
}

