
undefined8 FUN_027d0190(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x1d4) & 1) == 0) {
    uVar1 = FUN_0277d7b4(param_1 + 0x14,param_2);
    if ((((((((((uVar1 & 1) == 0) &&
              (uVar1 = FUN_0277d7b4(param_1 + 0x20,param_2), (uVar1 & 1) == 0)) &&
             (uVar1 = FUN_0277d7b4(param_1 + 0x2c,param_2), (uVar1 & 1) == 0)) &&
            ((uVar1 = FUN_0277d7b4(param_1 + 0x38,param_2), (uVar1 & 1) == 0 &&
             (uVar1 = FUN_0277d7b4(param_1 + 0x44,param_2), (uVar1 & 1) == 0)))) &&
           ((uVar1 = FUN_0277d7b4(param_1 + 0x50,param_2), (uVar1 & 1) == 0 &&
            ((uVar1 = FUN_0277d7b4(param_1 + 0x5c,param_2), (uVar1 & 1) == 0 &&
             (uVar1 = FUN_0277d7b4(param_1 + 0x68,param_2), (uVar1 & 1) == 0)))))) &&
          (uVar1 = FUN_0277d7b4(param_1 + 0x74,param_2), (uVar1 & 1) == 0)) &&
         (((((uVar1 = FUN_0277d7b4(param_1 + 0x80,param_2), (uVar1 & 1) == 0 &&
             (uVar1 = FUN_0277d7b4(param_1 + 0x8c,param_2), (uVar1 & 1) == 0)) &&
            (uVar1 = FUN_0277d7b4(param_1 + 0x98,param_2), (uVar1 & 1) == 0)) &&
           (((uVar1 = FUN_0277d7b4(param_1 + 0xa4,param_2), (uVar1 & 1) == 0 &&
             (uVar1 = FUN_0277d7b4(param_1 + 0xb0,param_2), (uVar1 & 1) == 0)) &&
            ((uVar1 = FUN_0277d7b4(param_1 + 0xbc,param_2), (uVar1 & 1) == 0 &&
             ((uVar1 = FUN_0277d7b4(param_1 + 200,param_2), (uVar1 & 1) == 0 &&
              (uVar1 = FUN_0277d7b4(param_1 + 0xd4,param_2), (uVar1 & 1) == 0)))))))) &&
          ((uVar1 = FUN_0277d7b4(param_1 + 0xe0,param_2), (uVar1 & 1) == 0 &&
           (((uVar1 = FUN_0277d7b4(param_1 + 0xec,param_2), (uVar1 & 1) == 0 &&
             (uVar1 = FUN_0277d7b4(param_1 + 0xf8,param_2), (uVar1 & 1) == 0)) &&
            (uVar1 = FUN_0277d7b4(param_1 + 0x104,param_2), (uVar1 & 1) == 0)))))))) &&
        ((((uVar1 = FUN_0277d7b4(param_1 + 0x110,param_2), (uVar1 & 1) == 0 &&
           (uVar1 = FUN_0277d7b4(param_1 + 0x11c,param_2), (uVar1 & 1) == 0)) &&
          (((uVar1 = FUN_0277d7b4(param_1 + 0x128,param_2), (uVar1 & 1) == 0 &&
            ((uVar1 = FUN_0277d7b4(param_1 + 0x134,param_2), (uVar1 & 1) == 0 &&
             (uVar1 = FUN_0277d7b4(param_1 + 0x140,param_2), (uVar1 & 1) == 0)))) &&
           (uVar1 = FUN_0277d7b4(param_1 + 0x14c,param_2), (uVar1 & 1) == 0)))) &&
         ((((uVar1 = FUN_0277d7b4(param_1 + 0x158,param_2), (uVar1 & 1) == 0 &&
            (uVar1 = FUN_0277d7b4(param_1 + 0x164,param_2), (uVar1 & 1) == 0)) &&
           (uVar1 = FUN_0277d7b4(param_1 + 0x170,param_2), (uVar1 & 1) == 0)) &&
          ((uVar1 = FUN_0277d7b4(param_1 + 0x17c,param_2), (uVar1 & 1) == 0 &&
           (uVar1 = FUN_0277d7b4(param_1 + 0x188,param_2), (uVar1 & 1) == 0)))))))) &&
       ((uVar1 = FUN_0277d7b4(param_1 + 0x194,param_2), (uVar1 & 1) == 0 &&
        ((uVar1 = FUN_0277d7b4(param_1 + 0x1a0,param_2), (uVar1 & 1) == 0 &&
         (uVar1 = FUN_0277d7b4(param_1 + 0x1ac,param_2), (uVar1 & 1) == 0)))))) {
      uVar2 = FUN_0277d7b4(param_1 + 0x1b8,param_2);
      return uVar2;
    }
LAB_027d03e0:
    uVar2 = 1;
  }
  else {
    lVar3 = 0x1d8;
    do {
      if (*(short *)(param_1 + lVar3) == -2) break;
      uVar1 = FUN_0277d7b4((short *)(param_1 + lVar3),param_2);
      if ((uVar1 & 1) != 0) goto LAB_027d03e0;
      lVar3 = lVar3 + 0xc;
    } while (lVar3 != 0xce8);
    uVar2 = 0;
  }
  return uVar2;
}

