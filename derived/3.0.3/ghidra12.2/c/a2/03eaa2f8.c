
undefined8 FUN_03eaa2f8(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar4 = (uint *)param_1[1];
  if (puVar4 != (uint *)0x0) {
    if ((char)*puVar4 == -0x3f) {
      uVar5 = *puVar4 >> 8;
      sVar2 = *(short *)*param_1;
      if (sVar2 == 0x5942) {
        uVar5 = uVar5 & 0xff00 | *puVar4 >> 0x18 | (uVar5 & 0xff) << 0x10;
      }
      if (uVar5 == 0) {
        return 0;
      }
      bVar1 = *(byte *)((long)puVar4 + (long)(int)param_3 * 8 + 7);
      uVar5 = puVar4[(long)(int)param_3 * 2 + 2];
    }
    else {
      if ((char)*puVar4 != -0x40) {
        return 0;
      }
      if ((int)param_3 < 0) {
        return 0;
      }
      uVar5 = *puVar4 >> 8;
      sVar2 = *(short *)*param_1;
      if (sVar2 == 0x5942) {
        uVar5 = uVar5 & 0xff00 | *puVar4 >> 0x18 | (uVar5 & 0xff) << 0x10;
        if (uVar5 <= param_3) {
          return 0;
        }
      }
      else if (uVar5 <= param_3) {
        return 0;
      }
      bVar1 = *(byte *)((long)puVar4 + (ulong)param_3 + 4);
      uVar5 = *(uint *)((long)puVar4 + (ulong)param_3 * 4 + (ulong)(uVar5 + 3 & 0x1fffffc) + 4);
    }
    uVar3 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if (sVar2 != 0x5942) {
      uVar3 = uVar5;
    }
    if ((bVar1 & 0xfe) == 0xd0) {
      *(bool *)param_2 = uVar3 != 0;
      return 1;
    }
  }
  return 0;
}

