
bool FUN_020b51a0(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x2f50);
  if (lVar1 != param_1 + 0x2f48) {
    lVar2 = lVar1 + -0xe0;
    do {
      lVar3 = lVar2;
      while( true ) {
        lVar3 = *(long *)(lVar3 + 8);
        if ((int *)(lVar3 + -0x10) == (int *)(lVar1 + -0xf0)) break;
        if (*(int *)(lVar3 + -0x10) == *param_2) {
          return *(char *)(lVar2 + 0xdc) != '\0';
        }
      }
      lVar1 = *(long *)(lVar1 + 8);
      lVar2 = lVar1 + -0xe0;
    } while (lVar2 != param_1 + 0x2e68);
  }
  return false;
}

