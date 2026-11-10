
size_t FUN_0015ba98(undefined8 param_1,int param_2,void *param_3,ulong param_4,undefined4 *param_5)

{
  long lVar1;
  long lVar2;
  size_t __n;
  long lVar3;
  
  if (param_2 == 0) {
    __n = 0xfffffffffffffe0b;
  }
  else {
    lVar1 = FUN_00171b00();
    if ((lVar1 == 0) || (lVar3 = *(long *)(lVar1 + 0x1e8), lVar3 == 0)) {
      __n = 0xfffffffffffffc7a;
    }
    else {
      __n = *(ulong *)(lVar3 + 0x278);
      if (param_4 <= *(ulong *)(lVar3 + 0x278)) {
        __n = param_4;
      }
      if (__n == 0) {
        if (*(long *)(lVar3 + 0x280) != 0) {
          return 0xfffffffffffffe04;
        }
      }
      else {
        memcpy(param_3,*(void **)(lVar3 + 0x270),__n);
        *(size_t *)(lVar3 + 0x270) = *(long *)(lVar3 + 0x270) + __n;
        *(size_t *)(lVar3 + 0x278) = *(long *)(lVar3 + 0x278) - __n;
        lVar2 = *(long *)(lVar3 + 0x280);
        if (*(long *)(lVar1 + 0x1538) != -1) {
          lVar2 = lVar2 - __n;
          *(long *)(lVar3 + 0x280) = lVar2;
        }
        if (lVar2 != 0) {
          return __n;
        }
      }
      *param_5 = 1;
    }
  }
  return __n;
}

