
/* WARNING: Removing unreachable block (ram,0x03392810) */
/* WARNING: Removing unreachable block (ram,0x0339282c) */

void FUN_033927bc(int param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  
  lVar3 = 0;
  if (DAT_05739190 != 0) {
    lVar3 = *(long *)(DAT_05739190 + 0x28);
  }
  if ((param_1 == 0) && (DAT_05739db8 != 0)) {
    lVar1 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar1 = 0;
    }
    if (*(char *)(lVar1 + 0xb8) != '\0') {
      *(undefined1 *)(lVar1 + 0xb9) = 1;
    }
  }
  *(undefined2 *)(lVar3 + 0x1f60) = *(undefined2 *)(param_2 + 8);
  uVar2 = *(undefined1 *)(param_2 + 0xc);
  *(undefined2 *)(lVar3 + 0x1f62) = *(undefined2 *)(param_2 + 10);
  *(undefined1 *)(lVar3 + 0x1f64) = uVar2;
  return;
}

