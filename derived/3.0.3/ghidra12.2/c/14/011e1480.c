
/* WARNING: Type propagation algorithm not settling */

uint FUN_011e1480(undefined8 param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined *local_8058;
  uint local_8050 [8192];
  
  if (DAT_05146e18 == '\0') {
    return 0;
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3 && (param_2 & 0x1c000) != 0) {
    local_8058 = PTR_DAT_04bbbc40 + 0x10;
    memset(local_8050,0,0x4000);
    if ((param_2 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050f2d64 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050f2d60 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 1 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050f6d6c + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050f6d68 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 2 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050fad74 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050fad70 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 3 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050fed7c + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050fed78 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 4 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_05102d84 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_05102d80 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 5 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_05106d8c + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_05106d88 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 6 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_0510ad94 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_0510ad90 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 7 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_0510ed9c + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_0510ed98 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 8 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_05112da4 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_05112da0 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 9 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_05116dac + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_05116da8 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 10 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_0511adb4 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_0511adb0 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 0xb & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_0511edbc + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_0511edb8 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 0xc & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_05122dc4 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_05122dc0 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 0xd & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_05126dcc + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_05126dc8 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 0xe & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_0512add4 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_0512add0 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 0xf & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_0512eddc + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_0512edd8 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 0x10 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_05132de4 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_05132de0 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 0x11 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_05136dec + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_05136de8 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 0x12 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_0513adf4 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_0513adf0 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    if ((param_2 >> 0x13 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050f2d64 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050f2d60 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x4000);
      memcpy(local_8050,local_8050 + 0x1000,0x4000);
    }
    uVar2 = FUN_011e0db0(param_1,&local_8058,param_3 & 1,param_4 & 1);
  }
  else {
    local_8058 = PTR_DAT_04bbdd38 + 0x10;
    memset(local_8050,0,0x1000);
    if ((param_2 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050dfccc + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050dfcc8 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 1 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050e0cd4 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050e0cd0 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 2 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050e1cdc + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050e1cd8 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 3 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050e2ce4 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050e2ce0 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 4 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050e3cec + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050e3ce8 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 5 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050e4cf4 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050e4cf0 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 6 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050e5cfc + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050e5cf8 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 7 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050e6d04 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050e6d00 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 8 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050e7d0c + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050e7d08 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 9 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050e8d14 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050e8d10 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 10 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050e9d1c + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050e9d18 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 0xb & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050ead24 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050ead20 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 0xc & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050ebd2c + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050ebd28 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 0xd & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050ecd34 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050ecd30 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 0xe & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050edd3c + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050edd38 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 0xf & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050eed44 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050eed40 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 0x10 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050efd4c + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050efd48 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 0x11 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050f0d54 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050f0d50 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 0x12 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050f1d5c + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050f1d58 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    if ((param_2 >> 0x13 & 1) != 0) {
      lVar3 = 0;
      do {
        lVar1 = lVar3 + 8;
        uVar2 = *(uint *)((long)&DAT_050dfccc + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4000) =
             *(uint *)((long)&DAT_050dfcc8 + lVar3) | *(uint *)((long)local_8050 + lVar3);
        *(uint *)((long)local_8050 + lVar3 + 0x4004) =
             uVar2 | *(uint *)((long)local_8050 + lVar3 + 4);
        lVar3 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(local_8050,local_8050 + 0x1000,0x1000);
    }
    uVar2 = FUN_011e09c0(param_1,&local_8058,param_3 & 1,param_4 & 1);
  }
  return uVar2 & 1;
}

