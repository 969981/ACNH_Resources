
bool FUN_01d7b2c0(long *param_1,undefined1 param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  (**(code **)(*param_1 + 0x18))();
  lVar2 = param_1[1];
  lVar4 = 0;
  do {
    if (*(char *)(lVar2 + lVar4) == '\0') goto LAB_01d7b32c;
    if (*(char *)(lVar2 + lVar4 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_01d7b32c;
    }
    if (*(char *)(lVar2 + lVar4 + 2) == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_01d7b32c;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  lVar4 = 0;
LAB_01d7b32c:
  iVar3 = (int)lVar4;
  bVar1 = iVar3 < (int)param_1[2] + -1;
  if (bVar1) {
    *(undefined1 *)(lVar2 + iVar3) = param_2;
    ((undefined1 *)(lVar2 + iVar3))[1] = 0;
  }
  return bVar1;
}

