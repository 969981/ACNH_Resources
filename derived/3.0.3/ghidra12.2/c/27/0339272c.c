
/* WARNING: Removing unreachable block (ram,0x03392780) */
/* WARNING: Removing unreachable block (ram,0x0339279c) */

void FUN_0339272c(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  if (DAT_05739190 != 0) {
    lVar2 = *(long *)(DAT_05739190 + 0x28);
  }
  if ((param_1 == 0) && (DAT_05739db8 != 0)) {
    lVar1 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar1 = 0;
    }
    if (*(char *)(lVar1 + 0xae) != '\0') {
      *(undefined1 *)(lVar1 + 0xaf) = 1;
    }
  }
  *(undefined2 *)(lVar2 + 0x1e20) = *(undefined2 *)(param_2 + 8);
  *(undefined4 *)(lVar2 + 0x1e24) = *(undefined4 *)(param_2 + 0xc);
  return;
}

