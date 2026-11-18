
/* WARNING: Removing unreachable block (ram,0x033925fc) */
/* WARNING: Removing unreachable block (ram,0x03392618) */

void FUN_033925a8(int param_1,undefined2 *param_2)

{
  long lVar1;
  undefined4 uVar2;
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
    if (*(char *)(lVar1 + 0x6a) != '\0') {
      *(undefined1 *)(lVar1 + 0x6b) = 1;
    }
  }
  *(undefined2 *)(lVar3 + 0x2c) = *param_2;
  *(undefined1 *)(lVar3 + 0x2e) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(lVar3 + 0x2f) = *(undefined1 *)((long)param_2 + 3);
  uVar2 = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(&DAT_00002140 + lVar3) = 1;
  *(undefined4 *)(lVar3 + 0x30) = uVar2;
  return;
}

