
long * FUN_01dd2e3c(long param_1,uint param_2,uint param_3,undefined1 *param_4)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0xf0);
  if (lVar1 != 0) {
    if ((param_3 & 1) == 0) {
      if (((int)param_2 < 0) || (*(int *)(lVar1 + 0x68) <= (int)param_2)) goto LAB_01dd2eb8;
      plVar2 = *(long **)(*(long *)(lVar1 + 0x70) + (ulong)param_2 * 8);
    }
    else {
      if (((int)param_2 < 0) || (*(int *)(lVar1 + 0x58) <= (int)param_2)) goto LAB_01dd2eb8;
      plVar2 = *(long **)(*(long *)(lVar1 + 0x60) + (ulong)param_2 * 8);
    }
    if ((plVar2 != (long *)0x0) && (*plVar2 != 0)) {
      if ((char)plVar2[0x16c] != '\0') {
        *param_4 = 0;
        return plVar2 + 0x16d;
      }
      if ((*(byte *)(plVar2 + 0x30e) >> 1 & 1) == 0) {
        *param_4 = 0;
        return (long *)0x0;
      }
    }
  }
LAB_01dd2eb8:
  *param_4 = 1;
  return (long *)0x0;
}

