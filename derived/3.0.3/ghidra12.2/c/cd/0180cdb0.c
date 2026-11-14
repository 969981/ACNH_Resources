
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0180cdb0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 auStack_26 [2];
  short local_24 [2];
  
  lVar1 = DAT_05292338;
  if (DAT_05292338 != 0) {
    FUN_007ef010(auStack_26,param_1);
    FUN_007ef010(local_24,auStack_26);
    puVar2 = PTR_DAT_04bb3170;
    if (*(char *)(lVar1 + 0xee4) != '\0') {
      *(short *)(lVar1 + 0xe78) = local_24[0];
      uVar3 = _DAT_05586008;
      if (local_24[0] != *(short *)puVar2) {
        *(undefined4 *)(lVar1 + 0xe74) = DAT_0558600c;
        *(undefined4 *)(lVar1 + 0xe70) = uVar3;
        *(undefined4 *)(lVar1 + 0xf90) = 0xffffffff;
      }
      if ((param_2 & 1) != 0) {
        lVar1 = lVar1 + 0xda0;
        FUN_017ef108(lVar1,0,0);
        FUN_017eff3c(lVar1,0,0);
        FUN_017f0b3c(lVar1);
      }
    }
  }
  return;
}

