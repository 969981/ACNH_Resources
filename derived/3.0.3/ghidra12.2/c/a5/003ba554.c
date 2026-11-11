
undefined8 FUN_003ba554(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_64 [8];
  undefined4 local_5c;
  
  if (*(char *)(param_1 + 0x2f9) != '\0') {
    return 0;
  }
  uVar1 = FUN_003cd5f8();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  lVar5 = param_2[2];
  lVar4 = param_2[3];
  if (*(char *)(param_2 + 8) == '\0') {
    lVar3 = param_2[9];
    uVar1 = param_2[10];
  }
  else {
    uVar1 = FUN_003b8780(*param_2,auStack_64);
    lVar3 = lVar5;
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      lVar2 = FUN_003e24d4(local_5c);
      uVar1 = lVar2 + 0xfffU & 0xfffffffffffff000;
      if (uVar1 != 0) {
        lVar4 = lVar4 - uVar1;
        FUN_003cd608(param_1 + 0x2d0,lVar5,uVar1);
        *(undefined1 *)(param_1 + 0x2d8) = 1;
        lVar5 = lVar5 + uVar1;
      }
    }
  }
  uVar1 = FUN_003ba970(param_1,*param_2,lVar5,lVar4,param_2[0xb],*(undefined4 *)(param_2 + 0xc),
                       lVar3,uVar1);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_003e2698(param_1 + 0x1f8,*param_2,param_2[4],param_2[5]);
    if ((uVar1 & 1) != 0) {
      FUN_003bbaf0(param_1 + 8,*param_2,param_2[1]);
      *(undefined8 *)(param_1 + 0x2c8) = 0;
      *(long *)(param_1 + 0x128) = param_1 + 8;
      if ((param_2[6] == 0) ||
         (uVar1 = FUN_003e27d0(param_1 + 0x1f8,*param_2,param_2[6],param_2[7]), (uVar1 & 1) != 0)) {
        *(undefined1 *)(param_1 + 0x2f9) = 1;
        return 1;
      }
    }
  }
  return 0;
}

