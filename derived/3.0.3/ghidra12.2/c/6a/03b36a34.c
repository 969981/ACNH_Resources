
undefined1  [16] FUN_03b36a34(undefined8 *param_1,uint param_2)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  short *psVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar5 = (uint *)param_1[1];
  if (puVar5 != (uint *)0x0) {
    if ((char)*puVar5 == -0x3f) {
      uVar6 = *puVar5 >> 8;
      psVar4 = (short *)*param_1;
      sVar2 = *psVar4;
      if (sVar2 == 0x5942) {
        uVar6 = uVar6 & 0xff00 | *puVar5 >> 0x18 | (uVar6 & 0xff) << 0x10;
      }
      if (uVar6 == 0) goto LAB_03b36b30;
      bVar1 = *(byte *)((long)puVar5 + (long)(int)param_2 * 8 + 7);
      uVar6 = puVar5[(long)(int)param_2 * 2 + 2];
    }
    else {
      if (((char)*puVar5 != -0x40) || ((int)param_2 < 0)) goto LAB_03b36b30;
      psVar4 = (short *)*param_1;
      uVar6 = *puVar5 >> 8;
      sVar2 = *psVar4;
      if (sVar2 == 0x5942) {
        uVar6 = uVar6 & 0xff00 | *puVar5 >> 0x18 | (uVar6 & 0xff) << 0x10;
        if (uVar6 <= param_2) goto LAB_03b36b30;
      }
      else if (uVar6 <= param_2) goto LAB_03b36b30;
      bVar1 = *(byte *)((long)puVar5 + (ulong)param_2 + 4);
      uVar6 = *(uint *)((long)puVar5 + (ulong)param_2 * 4 + (ulong)(uVar6 + 3 & 0x1fffffc) + 4);
    }
    uVar3 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if (sVar2 != 0x5942) {
      uVar3 = uVar6;
    }
    if (bVar1 - 0xc0 < 2) {
      auVar7._8_8_ = (long)psVar4 + (ulong)uVar3;
      auVar7._0_8_ = psVar4;
      return auVar7;
    }
    if (bVar1 == 0xff) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = psVar4;
      return auVar8;
    }
  }
LAB_03b36b30:
  return ZEXT816(0);
}

