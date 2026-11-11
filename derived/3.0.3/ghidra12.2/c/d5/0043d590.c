
void FUN_0043d590(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) && (-1 < (int)param_1[1])) &&
     (*(undefined4 *)(lVar1 + 4) = 0xffffffff, 0 < (int)param_1[1])) {
    lVar1 = 0;
    lVar2 = 0xc;
    do {
      *(undefined4 *)(*param_1 + lVar2) = 0xffffffff;
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (lVar1 < (int)param_1[1]);
  }
  return;
}

