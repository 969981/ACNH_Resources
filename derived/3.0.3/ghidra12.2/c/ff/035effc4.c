
void FUN_035effc4(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  byte bVar5;
  undefined2 uVar6;
  ulong uVar7;
  undefined2 *puVar8;
  char *pcVar9;
  ulong uVar10;
  
  bVar2 = param_1[0x108];
  if (bVar2 < 8) {
    bVar5 = param_1[0x119];
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0xf8);
    bVar5 = (byte)uVar7 & 0x1f;
    uVar6 = *(undefined2 *)(param_1 + (uVar7 & 0x1f) * 2 + 0x1e);
    if ((*param_1 >> 1 & 1) != 0) {
      bVar3 = param_1[0x119];
      uVar10 = *(ulong *)(param_1 + (ulong)bVar3 * 8 + 0x120);
      param_1[0x119] = bVar3 + 1 & 7;
      pbVar1 = param_1 + (ulong)bVar3 * 8 + 0x120;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      if ((uVar10 & 0xc30c30c30c30c3) != 0) {
        uVar4 = (uVar10 & 0x82082082082082) >> 1 | (uVar10 & 0x41041041041041) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> ((ulong)(uint)((int)((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) / 6) *
                                         6) & 0x3f);
        if (((uVar7 & 3) == 0) || ((((uint)uVar7 >> 5 & 1) == 0 && (((uint)uVar10 >> 5 & 1) != 0))))
        {
          bVar5 = (byte)uVar10 & 0x1f | 0x20;
          uVar6 = *(undefined2 *)(param_1 + (ulong)param_1[(uVar10 & 0x1f) + 0x66] * 2 + 0x6e);
        }
      }
      puVar8 = *(undefined2 **)(param_1 + 0x7e0);
      pcVar9 = *(char **)(param_1 + 0x7f0);
      *puVar8 = uVar6;
      *pcVar9 = bVar5 + 1;
      *(undefined2 **)(param_1 + 0x7e0) = puVar8 + 1;
      *(char **)(param_1 + 0x7f0) = pcVar9 + 1;
      goto LAB_035f00d0;
    }
    puVar8 = *(undefined2 **)(param_1 + 0x7e0);
    pcVar9 = *(char **)(param_1 + 0x7f0);
    *puVar8 = uVar6;
    *pcVar9 = bVar5 + 1;
    bVar5 = param_1[0x119];
    *(undefined2 **)(param_1 + 0x7e0) = puVar8 + 1;
    *(char **)(param_1 + 0x7f0) = pcVar9 + 1;
  }
  pbVar1 = param_1 + (ulong)bVar5 * 8 + 0x120;
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  pbVar1[4] = 0;
  pbVar1[5] = 0;
  pbVar1[6] = 0;
  pbVar1[7] = 0;
  param_1[0x119] = bVar5 + 1 & 7;
LAB_035f00d0:
  param_1[0x108] = bVar2 + 1;
  *(ulong *)(param_1 + 0xf8) = *(ulong *)(param_1 + 0xf8) >> 8;
  param_1[0x109] = param_1[0x109] + 1;
  return;
}

