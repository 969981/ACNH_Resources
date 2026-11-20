
uint FUN_03eaa3f8(undefined8 *param_1,ulong *param_2,uint param_3)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  short *psVar5;
  ulong uVar6;
  uint *puVar7;
  uint uVar8;
  
  puVar7 = (uint *)param_1[1];
  if (puVar7 != (uint *)0x0) {
    if ((char)*puVar7 == -0x3f) {
      uVar8 = *puVar7 >> 8;
      psVar5 = (short *)*param_1;
      sVar2 = *psVar5;
      if (sVar2 == 0x5942) {
        uVar8 = uVar8 & 0xff00 | *puVar7 >> 0x18 | (uVar8 & 0xff) << 0x10;
      }
      if (uVar8 == 0) {
        return 0;
      }
      cVar1 = *(char *)((long)puVar7 + (long)(int)param_3 * 8 + 7);
      uVar8 = puVar7[(long)(int)param_3 * 2 + 2];
    }
    else {
      if ((char)*puVar7 != -0x40) {
        return 0;
      }
      if ((int)param_3 < 0) {
        return 0;
      }
      psVar5 = (short *)*param_1;
      uVar8 = *puVar7 >> 8;
      sVar2 = *psVar5;
      if (sVar2 == 0x5942) {
        uVar8 = uVar8 & 0xff00 | *puVar7 >> 0x18 | (uVar8 & 0xff) << 0x10;
        if (uVar8 <= param_3) {
          return 0;
        }
      }
      else if (uVar8 <= param_3) {
        return 0;
      }
      cVar1 = *(char *)((long)puVar7 + (ulong)param_3 + 4);
      uVar8 = *(uint *)((long)puVar7 + (ulong)param_3 * 4 + (ulong)(uVar8 + 3 & 0x1fffffc) + 4);
    }
    uVar3 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if (sVar2 != 0x5942) {
      uVar3 = uVar8;
    }
    if (cVar1 != -1) {
      if (cVar1 == -0x2d) {
        uVar4 = (ulong)uVar3;
      }
      else {
        if (cVar1 == -0x2f) {
          *param_2 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
          return ~uVar3 >> 0x1f;
        }
        uVar6 = *(ulong *)((long)psVar5 + (ulong)uVar3);
        uVar4 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
        if (sVar2 != 0x5942) {
          uVar4 = uVar6;
        }
        if (cVar1 != -0x2b) {
          if (cVar1 == -0x2c) {
            *param_2 = uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU);
            return (uint)(uVar4 >> 0x3f) ^ 1;
          }
          return 0;
        }
      }
      *param_2 = uVar4;
      return 1;
    }
  }
  return 0;
}

