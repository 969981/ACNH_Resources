
void FUN_03ea9348(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  short *psVar4;
  uint *puVar5;
  uint uVar6;
  
  puVar5 = (uint *)param_2[1];
  if (puVar5 != (uint *)0x0) {
    if ((char)*puVar5 == -0x3f) {
      uVar6 = *puVar5 >> 8;
      psVar4 = (short *)*param_2;
      sVar2 = *psVar4;
      if (sVar2 == 0x5942) {
        uVar6 = uVar6 & 0xff00 | *puVar5 >> 0x18 | (uVar6 & 0xff) << 0x10;
      }
      if (uVar6 == 0) goto LAB_03ea9448;
      bVar1 = *(byte *)((long)puVar5 + (long)(int)param_3 * 8 + 7);
      uVar6 = puVar5[(long)(int)param_3 * 2 + 2];
    }
    else {
      if (((char)*puVar5 != -0x40) || ((int)param_3 < 0)) goto LAB_03ea9448;
      psVar4 = (short *)*param_2;
      uVar6 = *puVar5 >> 8;
      sVar2 = *psVar4;
      if (sVar2 == 0x5942) {
        uVar6 = uVar6 & 0xff00 | *puVar5 >> 0x18 | (uVar6 & 0xff) << 0x10;
        if (uVar6 <= param_3) goto LAB_03ea9448;
      }
      else if (uVar6 <= param_3) goto LAB_03ea9448;
      bVar1 = *(byte *)((long)puVar5 + (ulong)param_3 + 4);
      uVar6 = *(uint *)((long)puVar5 + (ulong)param_3 * 4 + (ulong)(uVar6 + 3 & 0x1fffffc) + 4);
    }
    uVar3 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if (sVar2 != 0x5942) {
      uVar3 = uVar6;
    }
    if (bVar1 - 0xc0 < 2) {
      *param_1 = psVar4;
      param_1[1] = (long)psVar4 + (ulong)uVar3;
      return;
    }
    if (bVar1 == 0xff) {
      *param_1 = psVar4;
      param_1[1] = 0;
      return;
    }
  }
LAB_03ea9448:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

