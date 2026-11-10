
void FUN_00343be0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < (int)param_1[1]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_003216f8(*param_1 + lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x2a0;
    } while (lVar2 < (int)param_1[1]);
  }
  return;
}

