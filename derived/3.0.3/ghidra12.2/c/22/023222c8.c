
undefined8 FUN_023222c8(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar4 = 0;
    if (uVar2 < 0x149) {
      uVar4 = uVar2;
    }
  }
  if (uVar4 == 0xd) {
    uVar5 = 0;
  }
  else {
    lVar1 = param_1 + 0x1ee8;
    uVar3 = FUN_02553884(0,lVar1,*(undefined4 *)(param_1 + 0x230),0);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_02553884(1,lVar1,*(undefined4 *)(param_1 + 0x230),0);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      uVar3 = FUN_02553884(2,lVar1,*(undefined4 *)(param_1 + 0x230),0);
      if ((((((uVar3 & 1) == 0) &&
            (uVar3 = FUN_02553884(3,lVar1,*(undefined4 *)(param_1 + 0x230),0), (uVar3 & 1) == 0)) &&
           (uVar3 = FUN_02553884(4,lVar1,*(undefined4 *)(param_1 + 0x230),0), (uVar3 & 1) == 0)) &&
          ((((uVar3 = FUN_02553884(5,lVar1,*(undefined4 *)(param_1 + 0x230),0), (uVar3 & 1) == 0 &&
             (uVar3 = FUN_02553884(6,lVar1,*(undefined4 *)(param_1 + 0x230),0), (uVar3 & 1) == 0))
            && ((uVar3 = FUN_02553884(7,lVar1,*(undefined4 *)(param_1 + 0x230),0), (uVar3 & 1) == 0
                && ((uVar3 = FUN_02553884(8,lVar1,*(undefined4 *)(param_1 + 0x230),0),
                    (uVar3 & 1) == 0 &&
                    (uVar3 = FUN_02553884(9,lVar1,*(undefined4 *)(param_1 + 0x230),0),
                    (uVar3 & 1) == 0)))))) &&
           (uVar3 = FUN_02553884(10,lVar1,*(undefined4 *)(param_1 + 0x230),0), (uVar3 & 1) == 0))))
         && ((((uVar3 = FUN_02553884(0xb,lVar1,*(undefined4 *)(param_1 + 0x230),0), (uVar3 & 1) == 0
               && (uVar3 = FUN_02553884(0xc,lVar1,*(undefined4 *)(param_1 + 0x230),0),
                  (uVar3 & 1) == 0)) &&
              (uVar3 = FUN_02553884(0xd,lVar1,*(undefined4 *)(param_1 + 0x230),0), (uVar3 & 1) == 0)
              ) && ((uVar3 = FUN_02553884(0xe,lVar1,*(undefined4 *)(param_1 + 0x230),0),
                    (uVar3 & 1) == 0 &&
                    (uVar3 = FUN_02553884(0xf,lVar1,*(undefined4 *)(param_1 + 0x230),0),
                    (uVar3 & 1) == 0)))))) {
        uVar5 = FUN_02553884(0x10,lVar1,*(undefined4 *)(param_1 + 0x230),0);
        return uVar5;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}

