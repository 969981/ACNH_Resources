
void FUN_033fb3f0(undefined4 *param_1)

{
  long lVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    lVar1 = *(long *)(DAT_05231900 + 0x148);
    if ((lVar1 != 0) &&
       (((*(uint *)(lVar1 + 0xfc) >> 1 & 1) != 0 || ((*(uint *)(lVar1 + 0xfc) & 1) != 0)))) {
      if ((DAT_0523adf0 != 0) && (*(int *)(DAT_0523adf0 + 0x98) != 0)) {
        if ((*(uint *)(lVar1 + 0xfc) >> 1 & 1) != 0) {
          FUN_007d6c4c();
          return;
        }
        if ((*(uint *)(lVar1 + 0xfc) & 1) != 0) goto LAB_033fb45c;
      }
      if ((*(uint *)(lVar1 + 0xfc) & 1) != 0) {
LAB_033fb45c:
        FUN_007d6884();
        return;
      }
    }
    *param_1 = DAT_04cb0c60;
  }
  return;
}

