
undefined8 FUN_0272d888(long *param_1,long *param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  short *psVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_70;
  long local_68;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*(int *)(*param_1 + 0x2c) == 1) {
    (**(code **)(DAT_0558d450 + 0x18))(&DAT_0558d450);
    local_70 = (ulong)local_70._5_3_ << 0x28;
    uVar5 = FUN_03ea9450(param_1 + 1,&local_70,DAT_0558d458);
    if (((((uVar5 & 1) != 0) && (local_70._4_1_ - 0xc0 < 2)) &&
        (psVar8 = (short *)param_1[1], psVar8 != (short *)0x0)) &&
       ((*(byte *)((long)psVar8 + (local_70 & 0xffffffff)) & 0xfe) == 0xc0)) {
      uVar1 = *(uint *)((long)psVar8 + (local_70 & 0xffffffff));
      uVar2 = uVar1 >> 8;
      if (*psVar8 == 0x5942) {
        uVar2 = uVar2 & 0xff00 | uVar1 >> 0x18 | (uVar2 & 0xff) << 0x10;
      }
      if (param_3 < uVar2) {
        uVar2 = FUN_0272da84(param_1,param_3);
        iVar3 = FUN_0272dc48(param_1,param_3);
        if ((int)param_4 < 0) {
          return 0;
        }
        if ((int)uVar2 < 1) {
          return 0;
        }
        if (param_5 < 0) {
          return 0;
        }
        if (uVar2 <= param_4) {
          return 0;
        }
        if ((iVar3 == 0) || (param_5 < iVar3)) {
          lVar11 = param_1[4];
          lVar6 = FUN_0272de0c(param_1,param_3);
          lVar7 = FUN_0272dfd4(param_1,param_3);
          lVar10 = *param_1;
          local_70 = 0;
          local_68 = 0;
          uVar4 = FUN_0272e19c(param_1,param_3);
          FUN_027b7854(lVar10,&local_70,uVar4);
          if (local_70 != 0) {
            uVar2 = param_5 + iVar3 * param_4;
            if (iVar3 <= param_5) {
              uVar2 = 0;
            }
            if (iVar3 < 1) {
              uVar2 = param_4;
            }
            if (((param_2 != (long *)0x0) && (lVar10 = *param_1, lVar10 != 0)) &&
               (*(int *)(lVar10 + 0x2c) == 1)) {
              lVar9 = param_1[3];
              *param_2 = lVar10;
              param_2[1] = local_70;
              param_2[2] = local_68;
              param_2[3] = lVar9;
              param_2[4] = lVar6 + lVar11 + lVar7 * (int)uVar2;
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

