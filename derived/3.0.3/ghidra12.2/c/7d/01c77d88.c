
undefined8 FUN_01c77d88(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  param_1 = (long *)*param_1;
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    plVar1 = param_1 + 1 + (ulong)param_3 * 0x2d;
    if (3 < param_3) {
      plVar1 = param_1 + 1;
    }
    if (((*(char *)((long)plVar1 + 0x161) == '\0') || ((char)plVar1[0x2c] != '\0')) &&
       ((char)plVar1[0x28] != '\0')) {
      uVar2 = FUN_01df8000(param_2,plVar1 + 0x27);
      return uVar2;
    }
  }
  return 0;
}

