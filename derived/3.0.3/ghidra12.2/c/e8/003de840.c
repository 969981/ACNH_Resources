
ulong FUN_003de840(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  short *psVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  uint uVar9;
  
  switch(param_5) {
  case 1:
    pbVar7 = (byte *)*param_2;
    *param_2 = (long)(pbVar7 + 1);
    uVar6 = (ulong)*pbVar7;
    break;
  case 2:
    puVar8 = (undefined1 *)*param_2;
    *param_2 = (long)(puVar8 + 1);
    uVar2 = *puVar8;
    *param_2 = (long)(puVar8 + 2);
    return (ulong)CONCAT11(puVar8[1],uVar2);
  case 3:
    uVar9 = 0;
    pbVar7 = (byte *)*param_2;
    do {
      *param_2 = (long)(pbVar7 + 1);
      bVar1 = *pbVar7;
      uVar9 = bVar1 & 0x7f | uVar9 << 7;
      uVar6 = (ulong)uVar9;
      pbVar7 = pbVar7 + 1;
    } while ((char)bVar1 < '\0');
    break;
  case 4:
    pbVar7 = (byte *)*param_2;
    *param_2 = (long)(pbVar7 + 1);
    bVar1 = *pbVar7;
    *param_2 = (long)(pbVar7 + 2);
    uVar9 = (int)(short)((ushort)pbVar7[1] << 8) | (uint)bVar1;
    *param_2 = (long)(pbVar7 + 3);
    bVar1 = pbVar7[2];
    *param_2 = (long)(pbVar7 + 4);
    bVar3 = pbVar7[3];
    uVar4 = FUN_003b7f88();
    return (ulong)(uVar9 + ((int)((uVar4 & 0xffff) +
                                 (uVar4 & 0xffff) *
                                 (((int)(short)((ushort)bVar3 << 8) | (uint)bVar1) - uVar9)) >> 0x10
                           ));
  case 5:
    pbVar7 = (byte *)*param_2;
    *param_2 = (long)(pbVar7 + 1);
    bVar1 = *pbVar7;
    if (bVar1 < 0x20) {
      psVar5 = (short *)FUN_003c689c(param_3);
      if (psVar5 != (short *)0x0) {
LAB_003de998:
        return (long)*psVar5;
      }
      uVar6 = 0;
    }
    else {
      if (0x2f < bVar1) {
        return 0;
      }
      psVar5 = (short *)FUN_003be77c(param_4,bVar1 - 0x20);
      uVar6 = 0;
      if (psVar5 != (short *)0x0) goto LAB_003de998;
    }
    break;
  default:
    return 0;
  }
  return uVar6;
}

