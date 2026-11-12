
undefined4 FUN_009658a4(long param_1,int param_2,int param_3,long param_4,long param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 local_84 [12];
  char local_51;
  
  if ((((param_2 == 0x2e) ||
       ((param_3 != 0x2e && ((param_2 != 5 || ((param_3 != 1 && (param_3 != 0xc)))))))) &&
      ((uVar3 = FUN_00967668(param_1,param_4), (uVar3 & 1) == 0 ||
       (uVar3 = FUN_009673c0(param_1,param_5), (uVar3 & 1) == 0)))) &&
     ((((((uVar1 = *(uint *)(param_4 + 8), -1 < (int)uVar1 &&
          (uVar2 = *(uint *)(param_4 + 0xc), -1 < (int)uVar2)) &&
         (uVar1 < *(uint *)(param_1 + 0x38))) &&
        ((uVar2 < *(uint *)(param_1 + 0x3c) &&
         (uVar1 = uVar1 + *(uint *)(param_1 + 0x38) * uVar2, uVar1 < *(uint *)(param_1 + 0x68)))))
       && ((*(long *)(param_1 + 0x70) != 0 &&
           (local_84[0] = 0x13,
           (*(uint *)(*(long *)(param_1 + 0x70) + (long)(int)uVar1 * 4) >> 0x13 & 1) != 0)))) ||
      ((((uVar1 = *(uint *)(param_5 + 8), (int)uVar1 < 0 ||
         (uVar2 = *(uint *)(param_5 + 0xc), (int)uVar2 < 0)) || (*(uint *)(param_1 + 0x38) <= uVar1)
        ) || ((((*(uint *)(param_1 + 0x3c) <= uVar2 ||
                (uVar1 = uVar1 + *(uint *)(param_1 + 0x38) * uVar2,
                *(uint *)(param_1 + 0x68) <= uVar1)) || (*(long *)(param_1 + 0x70) == 0)) ||
              (local_84[0] = 0x13,
              (*(uint *)(*(long *)(param_1 + 0x70) + (long)(int)uVar1 * 4) >> 0x13 & 1) == 0))))))))
  {
    uVar4 = 0;
    uVar1 = *(uint *)(param_5 + 8);
  }
  else {
    uVar4 = 1;
    uVar1 = *(uint *)(param_5 + 8);
  }
  if ((int)uVar1 < 0) {
    uVar5 = 2;
    if (param_3 != 0x2b || param_2 != 0x29) {
      uVar5 = uVar4;
    }
  }
  else {
    if (((-1 < (int)*(uint *)(param_5 + 0xc)) && (uVar1 < *(uint *)(param_1 + 0x38))) &&
       ((*(uint *)(param_5 + 0xc) < *(uint *)(param_1 + 0x3c) &&
        ((FUN_00962530(param_1,param_5,local_84), local_51 == '%' && (param_2 != 0x25)))))) {
      uVar4 = 2;
    }
    uVar5 = 2;
    if (param_3 != 0x2b || param_2 != 0x29) {
      uVar5 = uVar4;
    }
    if (-1 < (int)*(uint *)(param_5 + 8)) {
      if (((-1 < (int)*(uint *)(param_5 + 0xc)) &&
          (*(uint *)(param_5 + 8) < *(uint *)(param_1 + 0x38))) &&
         (*(uint *)(param_5 + 0xc) < *(uint *)(param_1 + 0x3c))) {
        FUN_00962530(param_1,param_5,local_84);
        if (local_51 == '\b') {
          if (param_2 != 8) {
            uVar4 = 4;
          }
          uVar5 = uVar4;
        }
      }
    }
  }
  if (((((param_6 & 1) != 0) && (DAT_04cfae30 != 0)) &&
      (((lVar6 = *(long *)(DAT_04cfae30 + 0xa8), lVar6 != 0 &&
        (((uVar1 = *(uint *)(param_4 + 8), (int)uVar1 < 0 ||
          (uVar2 = *(uint *)(param_4 + 0xc), (int)uVar2 < 0)) ||
         ((*(uint *)(lVar6 + 0x38) <= uVar1 ||
          ((((*(uint *)(lVar6 + 0x3c) <= uVar2 ||
             (uVar1 = uVar1 + *(uint *)(lVar6 + 0x38) * uVar2, *(uint *)(lVar6 + 0x68) <= uVar1)) ||
            (*(long *)(lVar6 + 0x70) == 0)) ||
           (local_84[0] = 7,
           (*(uint *)(*(long *)(lVar6 + 0x70) + (long)(int)uVar1 * 4) >> 7 & 1) == 0)))))))) &&
       (((uVar1 = *(uint *)(param_5 + 8), -1 < (int)uVar1 &&
         (uVar2 = *(uint *)(param_5 + 0xc), -1 < (int)uVar2)) && (uVar1 < *(uint *)(lVar6 + 0x38))))
       ))) && (((uVar2 < *(uint *)(lVar6 + 0x3c) &&
                (uVar1 = uVar1 + *(uint *)(lVar6 + 0x38) * uVar2, uVar1 < *(uint *)(lVar6 + 0x68)))
               && ((*(long *)(lVar6 + 0x70) != 0 &&
                   (local_84[0] = 7,
                   (*(uint *)(*(long *)(lVar6 + 0x70) + (long)(int)uVar1 * 4) & 0x80) != 0)))))) {
    uVar5 = 3;
  }
  uVar3 = FUN_0097be30(param_4);
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_0097be30(param_5), (uVar3 & 1) == 0)) {
    uVar5 = 5;
  }
  return uVar5;
}

