
ulong FUN_027b7ad4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  short *local_38 [2];
  uint local_28;
  char local_24;
  
  if (*(int *)(param_1 + 0x2c) != 1) {
    return 0;
  }
  FUN_03ea9348(local_38,param_1 + 8);
  if (local_38[0] != (short *)0x0) {
    (**(code **)(DAT_0558d4b0 + 0x18))(&DAT_0558d4b0);
    local_28 = 0;
    local_24 = '\0';
    uVar1 = FUN_03ea9450(local_38,&local_28,DAT_0558d4b8);
    if (((uVar1 & 1) != 0) && (local_24 != -1)) {
      if (local_24 == -0x2f) {
        if (-1 < (int)local_28) {
          return (ulong)(local_28 & ((int)local_28 >> 0x1f ^ 0xffffffffU));
        }
      }
      else {
        if (local_24 == -0x2d) {
          return (ulong)local_28;
        }
        uVar2 = *(ulong *)((long)local_38[0] + (ulong)local_28);
        uVar1 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar1 = uVar1 >> 0x20 | uVar1 << 0x20;
        if (*local_38[0] != 0x5942) {
          uVar1 = uVar2;
        }
        if (local_24 == -0x2b) {
          return uVar1;
        }
        if ((local_24 == -0x2c) && (-1 < (long)uVar1)) {
          return uVar1;
        }
      }
    }
  }
  return 0;
}

