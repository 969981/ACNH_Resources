
/* WARNING: Removing unreachable block (ram,0x033926a4) */
/* WARNING: Removing unreachable block (ram,0x033926c0) */

void FUN_03392650(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = 0;
  if (DAT_05739190 != 0) {
    lVar3 = *(long *)(DAT_05739190 + 0x28);
  }
  if ((param_1 == 0) && (DAT_05739db8 != 0)) {
    lVar4 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar4 = 0;
    }
    if (*(char *)(lVar4 + 0x74) != '\0') {
      *(undefined1 *)(lVar4 + 0x75) = 1;
    }
  }
  lVar4 = 0;
  *(undefined2 *)(lVar3 + 200) = *(undefined2 *)(param_2 + 8);
  *(undefined4 *)(lVar3 + 0xcc) = *(undefined4 *)(param_2 + 0xc);
  do {
    lVar1 = param_2 + lVar4;
    lVar2 = lVar3 + lVar4;
    lVar4 = lVar4 + 8;
    *(undefined2 *)(lVar2 + 0xd0) = *(undefined2 *)(lVar1 + 0x10);
    *(undefined1 *)(lVar2 + 0xd2) = *(undefined1 *)(lVar1 + 0x12);
    *(undefined1 *)(lVar2 + 0xd3) = *(undefined1 *)(lVar1 + 0x13);
    *(undefined4 *)(lVar2 + 0xd4) = *(undefined4 *)(lVar1 + 0x14);
  } while (lVar4 != 0x400);
  *(undefined4 *)(lVar3 + 0x4d0) = *(undefined4 *)(param_2 + 0x410);
  *(undefined2 *)(lVar3 + 0x4d4) = *(undefined2 *)(param_2 + 0x414);
  return;
}

