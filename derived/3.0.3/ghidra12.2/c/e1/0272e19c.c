
int FUN_0272e19c(long param_1,undefined4 param_2)

{
  ulong uVar1;
  short *psVar2;
  undefined8 local_40;
  long local_38;
  uint local_18;
  byte local_14;
  
  (**(code **)(DAT_0558d450 + 0x18))(&DAT_0558d450);
  local_40 = (short *)((ulong)local_40._5_3_ << 0x28);
  uVar1 = FUN_03ea9450((undefined8 *)(param_1 + 8),&local_40,DAT_0558d458);
  if ((((uVar1 & 1) != 0) && (local_40._4_1_ - 0xc0 < 2)) &&
     (psVar2 = *(short **)(param_1 + 8), psVar2 != (short *)0x0)) {
    local_18 = 0;
    local_14 = 0;
    local_40 = (short *)((long)psVar2 + ((ulong)local_40 & 0xffffffff));
    if (*(char *)local_40 == -0x3f) {
      local_38 = CONCAT71(local_38._1_7_,*psVar2 == 0x5942);
      uVar1 = FUN_03eaa938(&local_40,&local_18,param_2);
    }
    else {
      if (*(char *)local_40 != -0x40) {
        return 0;
      }
      local_38 = CONCAT71(local_38._1_7_,*psVar2 == 0x5942);
      uVar1 = FUN_03eaa544(&local_40,&local_18,param_2);
    }
    if ((uVar1 & 1) != 0) {
      if (local_14 - 0xc0 < 2) {
        local_38 = (long)psVar2 + (ulong)local_18;
      }
      else {
        if (local_14 != 0xff) {
          return 0;
        }
        local_38 = 0;
      }
      local_40 = psVar2;
      (**(code **)(DAT_0558d440 + 0x18))(&DAT_0558d440);
      local_18 = 0;
      local_14 = '\0';
      uVar1 = FUN_03ea9450(&local_40,&local_18,DAT_0558d448);
      if (((uVar1 & 1) != 0) && (local_14 != -1)) {
        if (local_14 == -0x2f) {
          if (-1 < (int)local_18) {
            return local_18;
          }
        }
        else if (local_14 == -0x2d) {
          return local_18;
        }
      }
    }
  }
  return 0;
}

