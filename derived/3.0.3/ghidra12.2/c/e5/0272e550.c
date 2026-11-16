
long FUN_0272e550(long param_1,long param_2,undefined4 param_3,uint param_4,uint param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  short *psVar8;
  uint local_68;
  byte local_64;
  undefined8 local_60;
  long local_58;
  
  if (param_2 == 0) {
    return 0;
  }
  plVar1 = (long *)(param_1 + 8);
  (**(code **)(DAT_0558d450 + 0x18))(&DAT_0558d450);
  local_60 = (short *)((ulong)local_60._5_3_ << 0x28);
  uVar4 = FUN_03ea9450(plVar1,&local_60,DAT_0558d458);
  if ((uVar4 & 1) != 0) {
    if (local_60._4_1_ - 0xc0 < 2) {
      psVar8 = (short *)*plVar1;
      if (psVar8 != (short *)0x0) {
        local_68 = 0;
        local_64 = 0;
        local_60 = (short *)((long)psVar8 + ((ulong)local_60 & 0xffffffff));
        if (*(char *)local_60 == -0x3f) {
          local_58 = CONCAT71(local_58._1_7_,*psVar8 == 0x5942);
          uVar4 = FUN_03eaa938(&local_60,&local_68,param_3);
        }
        else {
          if (*(char *)local_60 != -0x40) {
            return 0;
          }
          local_58 = CONCAT71(local_58._1_7_,*psVar8 == 0x5942);
          uVar4 = FUN_03eaa544(&local_60,&local_68,param_3);
        }
        if ((uVar4 & 1) != 0) {
          if (local_64 - 0xc0 < 2) {
            local_58 = (long)psVar8 + (ulong)local_68;
          }
          else {
            if (local_64 != 0xff) {
              return 0;
            }
            local_58 = 0;
          }
          local_60 = psVar8;
          (**(code **)(DAT_0558d480 + 0x18))(&DAT_0558d480);
          local_68 = 0;
          local_64 = '\0';
          uVar4 = FUN_03ea9450(&local_60,&local_68,DAT_0558d488);
          if (((uVar4 & 1) != 0) && (local_64 != -1)) {
            uVar4 = (ulong)local_68;
            if (local_64 == -0x2f) {
              if ((int)local_68 < 0) {
                return 0;
              }
              uVar4 = (ulong)(local_68 & ((int)local_68 >> 0x1f ^ 0xffffffffU));
            }
            else if (local_64 != -0x2d) {
              uVar7 = *(ulong *)((long)psVar8 + uVar4);
              uVar4 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
              uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
              uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
              if (*psVar8 != 0x5942) {
                uVar4 = uVar7;
              }
              if (local_64 != -0x2b) {
                if (local_64 != -0x2c) {
                  return 0;
                }
                if ((long)uVar4 < 0) {
                  return 0;
                }
              }
            }
            lVar5 = FUN_0272dfd4(param_1,param_3);
            uVar2 = FUN_0272da84(param_1,param_3);
            uVar3 = FUN_0272dc48(param_1,param_3);
            if (lVar5 == 0) {
              return 0;
            }
            if (uVar2 <= param_4) {
              return 0;
            }
            if ((param_5 == 0) || (param_5 < uVar3)) {
              if (uVar3 == 0) {
                uVar6 = param_4;
              }
              else {
                uVar6 = 0;
                if ((((-1 < (int)param_4) && (0 < (int)uVar2)) && (0 < (int)uVar3)) &&
                   ((uVar6 = 0, -1 < (int)param_5 && ((int)param_5 < (int)uVar3)))) {
                  uVar6 = param_5 + uVar3 * param_4;
                }
              }
              return uVar4 + param_2 + *(long *)(param_1 + 0x20) + lVar5 * (int)uVar6;
            }
          }
        }
      }
    }
    else if ((local_60._4_1_ == 0xff) && (*plVar1 == 0)) {
      return 0;
    }
  }
  return 0;
}

