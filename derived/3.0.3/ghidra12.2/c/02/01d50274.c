
undefined8 FUN_01d50274(long *param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (param_2 == -1) {
    if (lVar2 == -1) {
      return 0;
    }
    lVar1 = *(long *)PTR_DAT_04bc10c0;
    *(undefined8 *)(lVar1 + 8) = 0xffffffffffffffff;
  }
  else {
    if ((lVar2 != -1) && (lVar2 == param_2)) {
      return 0;
    }
    lVar1 = *(long *)PTR_DAT_04bc10c0;
    if ((lVar2 == -1) &&
       (lVar2 = *(long *)(DAT_05354240 + 0x188), *(char *)(DAT_05354240 + 0x1a0) == '\0')) {
      lVar2 = -1;
    }
    *(long *)(lVar1 + 8) = lVar2;
    *(uint *)(lVar1 + 0x10) = param_3 & 0xffff;
    *(uint *)(lVar1 + 0x14) = param_3 & 0xffff;
  }
  *(undefined1 *)(lVar1 + 0x18) = 0;
  *param_1 = param_2;
  return 1;
}

