
/* WARNING: Removing unreachable block (ram,0x02bd0698) */
/* WARNING: Removing unreachable block (ram,0x02bd0630) */
/* WARNING: Removing unreachable block (ram,0x02bd064c) */
/* WARNING: Removing unreachable block (ram,0x02bd06b4) */

void FUN_02bd05c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_03869260(param_1,*(undefined8 *)(param_1 + 0x220));
  FUN_03869260(param_1,*(undefined8 *)(param_1 + 0x230));
  lVar2 = 0;
  if (DAT_05739190 != 0) {
    lVar2 = *(long *)(DAT_05739190 + 0x28);
  }
  if (DAT_05739db8 != 0) {
    lVar1 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar1 = 0;
    }
    if (*(char *)(lVar1 + 0x68) != '\0') {
      *(undefined1 *)(lVar1 + 0x69) = 1;
    }
  }
  *(undefined1 *)(lVar2 + 0x12) = 1;
  if (DAT_05739db8 != 0) {
    lVar2 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar2 = 0;
    }
    if (*(char *)(lVar2 + 0x6e) != '\0') {
      *(undefined1 *)(lVar2 + 0x6f) = 1;
    }
  }
  FUN_03d5c660(*(undefined8 *)(param_1 + 0x218),0);
  return;
}

