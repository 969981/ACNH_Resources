
ulong FUN_0272dc48(long param_1,undefined4 param_2)

{
  ulong uVar1;
  ulong uVar2;
  short *psVar3;
  undefined8 local_40;
  long local_38;
  uint local_18;
  byte local_14;
  
  (**(code **)(DAT_0558d450 + 0x18))(&DAT_0558d450);
  local_40 = (short *)((ulong)local_40._5_3_ << 0x28);
  uVar1 = FUN_03ea9450((undefined8 *)(param_1 + 8),&local_40,DAT_0558d458);
  if ((((uVar1 & 1) != 0) && (local_40._4_1_ - 0xc0 < 2)) &&
     (psVar3 = *(short **)(param_1 + 8), psVar3 != (short *)0x0)) {
    local_18 = 0;
    local_14 = 0;
    local_40 = (short *)((long)psVar3 + ((ulong)local_40 & 0xffffffff));
    if (*(char *)local_40 == -0x3f) {
      local_38 = CONCAT71(local_38._1_7_,*psVar3 == 0x5942);
      uVar1 = FUN_03eaa938(&local_40,&local_18,param_2);
    }
    else {
      if (*(char *)local_40 != -0x40) {
        return 0;
      }
      local_38 = CONCAT71(local_38._1_7_,*psVar3 == 0x5942);
      uVar1 = FUN_03eaa544(&local_40,&local_18,param_2);
    }
    if ((uVar1 & 1) != 0) {
      if (local_14 - 0xc0 < 2) {
        local_38 = (long)psVar3 + (ulong)local_18;
      }
      else {
        if (local_14 != 0xff) {
          return 0;
        }
        local_38 = 0;
      }
      local_40 = psVar3;
      (**(code **)(DAT_0558d4a0 + 0x18))(&DAT_0558d4a0);
      local_18 = 0;
      local_14 = '\0';
      uVar1 = FUN_03ea9450(&local_40,&local_18,DAT_0558d4a8);
      if (((uVar1 & 1) != 0) && (local_14 != -1)) {
        uVar1 = (ulong)local_18;
        if (local_14 == -0x2f) {
          if (-1 < (int)local_18) {
            return uVar1;
          }
        }
        else {
          if (local_14 == -0x2d) {
            return uVar1;
          }
          uVar2 = *(ulong *)((long)psVar3 + uVar1);
          uVar1 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          uVar1 = uVar1 >> 0x20 | uVar1 << 0x20;
          if (*psVar3 != 0x5942) {
            uVar1 = uVar2;
          }
          if (local_14 == -0x2b) {
            return uVar1;
          }
          if ((local_14 == -0x2c) && (-1 < (long)uVar1)) {
            return uVar1;
          }
        }
      }
    }
  }
  return 0;
}

