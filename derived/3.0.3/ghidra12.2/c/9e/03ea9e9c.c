
uint FUN_03ea9e9c(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_28;
  char local_24;
  
  local_28 = 0;
  local_24 = '\0';
  uVar3 = FUN_03ea9450(param_1,&local_28);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (local_24 == -1) {
    return 0;
  }
  uVar3 = (ulong)local_28;
  if (local_24 != -0x2d) {
    if (local_24 == -0x2f) {
      uVar3 = (ulong)(local_28 & ((int)local_28 >> 0x1f ^ 0xffffffffU));
      uVar2 = ~local_28 >> 0x1f;
      goto LAB_03ea9f48;
    }
    uVar4 = *(ulong *)((long)*param_1 + (ulong)local_28);
    uVar3 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar1 = uVar3 >> 0x20 | uVar3 << 0x20;
    if (*(short *)*param_1 != 0x5942) {
      uVar1 = uVar4;
    }
    uVar3 = uVar1;
    if (local_24 != -0x2b) {
      if (local_24 != -0x2c) {
        return 0;
      }
      uVar3 = uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
      uVar2 = (uint)(uVar1 >> 0x3f) ^ 1;
      goto LAB_03ea9f48;
    }
  }
  uVar2 = 1;
LAB_03ea9f48:
  *param_2 = uVar3;
  return uVar2;
}

