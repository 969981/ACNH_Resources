
undefined8
FUN_0015b0cc(undefined8 param_1,undefined8 param_2,undefined4 param_3,void *param_4,ulong param_5,
            long *param_6)

{
  size_t __n;
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = FUN_00171b00(param_1,param_3);
  if ((lVar1 == 0) || (lVar3 = *(long *)(lVar1 + 0x1e8), lVar3 == 0)) {
    uVar2 = 0xfffffc7a;
  }
  else {
    uVar4 = *(ulong *)(lVar3 + 0x260);
    __n = uVar4;
    if (param_5 <= uVar4) {
      __n = param_5;
    }
    memcpy((void *)(*(long *)(lVar3 + 600) + *(long *)(lVar3 + 0x268)),param_4,__n);
    *(size_t *)(lVar3 + 0x260) = *(long *)(lVar3 + 0x260) - __n;
    *(size_t *)(lVar3 + 0x268) = *(long *)(lVar3 + 0x268) + __n;
    *(long *)(lVar1 + 0x1540) = *(long *)(lVar1 + 0x1540) + 1;
    param_6[0xc0] = param_6[0xc0] + 1;
    if (*param_6 != lVar1) {
      FUN_00147570(lVar1,0,6);
    }
    if (param_5 < uVar4 || param_5 - uVar4 == 0) {
      if (*param_6 == lVar1) {
        return 0;
      }
    }
    else {
      *(ulong *)(lVar3 + 0x248) = param_5 - uVar4;
      *(ulong *)(lVar3 + 0x240) = (long)param_4 + uVar4;
    }
    uVar2 = 0xfffffdf2;
    *(undefined4 *)(*(long *)(lVar1 + 0x10) + 0x5f8) = param_3;
  }
  return uVar2;
}

