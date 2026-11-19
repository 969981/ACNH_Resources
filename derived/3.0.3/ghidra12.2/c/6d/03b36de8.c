
undefined8 FUN_03b36de8(undefined8 *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  short *psVar5;
  uint *puVar6;
  uint uVar7;
  
  puVar6 = (uint *)param_1[1];
  if (puVar6 != (uint *)0x0) {
    if ((char)*puVar6 == -0x3f) {
      uVar7 = *puVar6 >> 8;
      psVar5 = (short *)*param_1;
      sVar3 = *psVar5;
      if (sVar3 == 0x5942) {
        uVar7 = uVar7 & 0xff00 | *puVar6 >> 0x18 | (uVar7 & 0xff) << 0x10;
      }
      if (uVar7 == 0) {
        return 0;
      }
      cVar2 = *(char *)((long)puVar6 + (long)(int)param_3 * 8 + 7);
      uVar7 = puVar6[(long)(int)param_3 * 2 + 2];
    }
    else {
      if ((char)*puVar6 != -0x40) {
        return 0;
      }
      if ((int)param_3 < 0) {
        return 0;
      }
      psVar5 = (short *)*param_1;
      uVar7 = *puVar6 >> 8;
      sVar3 = *psVar5;
      if (sVar3 == 0x5942) {
        uVar7 = uVar7 & 0xff00 | *puVar6 >> 0x18 | (uVar7 & 0xff) << 0x10;
        if (uVar7 <= param_3) {
          return 0;
        }
      }
      else if (uVar7 <= param_3) {
        return 0;
      }
      cVar2 = *(char *)((long)puVar6 + (ulong)param_3 + 4);
      uVar7 = *(uint *)((long)puVar6 + (ulong)param_3 * 4 + (ulong)(uVar7 + 3 & 0x1fffffc) + 4);
    }
    uVar4 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    if (sVar3 != 0x5942) {
      uVar4 = uVar7;
    }
    if (cVar2 == -0x60) {
      uVar1 = *(uint *)(psVar5 + 4);
      uVar7 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
      if (sVar3 != 0x5942) {
        uVar7 = uVar1;
      }
      if (uVar7 != 0) {
        uVar1 = *(uint *)((long)psVar5 + (long)(int)uVar4 * 4 + (long)(int)uVar7 + 4);
        uVar4 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        if (sVar3 != 0x5942) {
          uVar4 = uVar1;
        }
        *param_2 = (long)psVar5 + (ulong)uVar4 + (long)(int)uVar7;
        return 1;
      }
    }
  }
  return 0;
}

