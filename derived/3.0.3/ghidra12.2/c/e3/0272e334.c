
uint FUN_0272e334(long *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  short *local_78;
  long lStack_70;
  uint local_68;
  byte local_64;
  undefined8 local_60;
  undefined1 local_58;
  
  if (*param_1 != 0) {
    (**(code **)(DAT_0558d450 + 0x18))(&DAT_0558d450);
    local_60 = (uint *)((ulong)local_60._5_3_ << 0x28);
    uVar3 = FUN_03ea9450(param_1,&local_60,DAT_0558d458);
    if (((((uVar3 & 1) != 0) && (local_60._4_1_ - 0xc0 < 2)) &&
        (psVar6 = (short *)*param_1, psVar6 != (short *)0x0)) &&
       (puVar1 = (uint *)((long)psVar6 + ((ulong)local_60 & 0xffffffff)), (*puVar1 & 0xfe) == 0xc0))
    {
      uVar4 = *puVar1 >> 8;
      if (*psVar6 == 0x5942) {
        uVar4 = uVar4 & 0xff00 | *puVar1 >> 0x18 | (uVar4 & 0xff) << 0x10;
      }
      local_78 = (short *)0x0;
      lStack_70 = 0;
      if (uVar4 != 0) {
        iVar7 = 0;
        uVar5 = uVar4 - 1 >> 1;
        uVar4 = uVar4 - 1;
        while( true ) {
          local_68 = 0;
          local_64 = 0;
          local_60 = puVar1;
          if ((char)*puVar1 == -0x3f) {
            local_58 = *psVar6 == 0x5942;
            uVar3 = FUN_03eaa938(&local_60,&local_68,uVar5);
          }
          else {
            if ((char)*puVar1 != -0x40) {
              return 0xffffffff;
            }
            local_58 = *psVar6 == 0x5942;
            uVar3 = FUN_03eaa544(&local_60,&local_68,uVar5);
          }
          if ((uVar3 & 1) == 0) {
            return 0xffffffff;
          }
          if (local_64 - 0xc0 < 2) {
            lStack_70 = (long)psVar6 + (ulong)local_68;
          }
          else {
            if (local_64 != 0xff) {
              return 0xffffffff;
            }
            lStack_70 = 0;
          }
          local_78 = psVar6;
          (**(code **)(DAT_0558d460 + 0x18))(&DAT_0558d460);
          local_60 = (uint *)((ulong)local_60 & 0xffffff0000000000);
          uVar3 = FUN_03ea9450(&local_78,&local_60,DAT_0558d468);
          if ((uVar3 & 1) == 0) break;
          if (local_60._4_1_ == -1) {
            return 0xffffffff;
          }
          if (local_60._4_1_ == -0x2f) {
            if ((int)(uint)local_60 < 0) {
              return 0xffffffff;
            }
          }
          else if (local_60._4_1_ != -0x2d) {
            return 0xffffffff;
          }
          if ((uint)local_60 == param_2) {
            return uVar5;
          }
          uVar2 = uVar5 - 1;
          if ((uint)local_60 < param_2) {
            iVar7 = uVar5 + 1;
            uVar2 = uVar4;
          }
          if ((int)uVar2 < iVar7) {
            return 0xffffffff;
          }
          uVar5 = iVar7 + ((int)(uVar2 - iVar7) >> 1);
          uVar4 = uVar2;
        }
        return 0xffffffff;
      }
    }
  }
  return 0xffffffff;
}

