
void FUN_003c0890(long *param_1)

{
  long lVar1;
  
  if (0 < (int)param_1[1]) {
    lVar1 = 0;
    do {
      *(undefined1 *)(*param_1 + lVar1) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[1]);
  }
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x3f800000;
  return;
}

