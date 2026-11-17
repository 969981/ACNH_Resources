
/* WARNING: Removing unreachable block (ram,0x02f38c58) */
/* WARNING: Removing unreachable block (ram,0x02f38bf4) */
/* WARNING: Removing unreachable block (ram,0x02f38c10) */
/* WARNING: Removing unreachable block (ram,0x02f38c74) */

void FUN_02f38ba0(long param_1)

{
  long lVar1;
  
  FUN_03d5c660(*(undefined8 *)(param_1 + 0x210),0);
  if (DAT_05739db8 != 0) {
    lVar1 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar1 = 0;
    }
    if (*(char *)(lVar1 + 0x68) != '\0') {
      *(undefined1 *)(lVar1 + 0x69) = 1;
    }
  }
  if (DAT_05739db8 != 0) {
    lVar1 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar1 = 0;
    }
    if (*(char *)(lVar1 + 0x8c) != '\0') {
      *(undefined1 *)(lVar1 + 0x8d) = 1;
    }
  }
  return;
}

