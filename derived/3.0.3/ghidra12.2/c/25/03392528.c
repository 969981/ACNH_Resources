
/* WARNING: Removing unreachable block (ram,0x03392578) */
/* WARNING: Removing unreachable block (ram,0x03392594) */

void FUN_03392528(int param_1,undefined1 param_2)

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
    if (*(char *)(lVar1 + 0x68) != '\0') {
      *(undefined1 *)(lVar1 + 0x69) = 1;
    }
  }
  *(undefined1 *)(lVar2 + 0x12) = param_2;
  return;
}

