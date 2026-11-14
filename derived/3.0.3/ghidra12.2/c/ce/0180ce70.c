
void FUN_0180ce70(undefined4 param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = DAT_05292338;
  if ((DAT_05292338 != 0) && (*(char *)(DAT_05292338 + 0xee4) != '\0')) {
    *(undefined4 *)(DAT_05292338 + 0xea0) = param_1;
    *(undefined1 *)(lVar1 + 0xe9e) = 1;
    if ((param_2 & 1) != 0) {
      lVar1 = lVar1 + 0xda0;
      FUN_017ef108(lVar1,0,0);
      FUN_017eff3c(lVar1,0,0);
      FUN_017f0b3c(lVar1);
      return;
    }
  }
  return;
}

