
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017ba494(long param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  byte bVar1;
  undefined4 uVar2;
  short local_14 [2];
  
  FUN_007ef010(local_14);
  if (*(char *)(param_1 + 0xee4) != '\0') {
    bVar1 = 0x20;
    if ((param_3 & 1) == 0) {
      bVar1 = 0;
    }
    *(short *)(param_1 + 0xe5c) = local_14[0];
    *(byte *)(param_1 + 0xedc) = *(byte *)(param_1 + 0xedc) & 0xdf | bVar1;
    uVar2 = _DAT_05586008;
    if (local_14[0] != DAT_04cb6038) {
      *(undefined4 *)(param_1 + 0xe58) = DAT_0558600c;
      *(undefined4 *)(param_1 + 0xe54) = uVar2;
      *(undefined4 *)(param_1 + 0xfa8) = 0xffffffff;
    }
    if ((param_4 & 1) != 0) {
      param_1 = param_1 + 0xda0;
      FUN_017ef108(param_1,0,0);
      FUN_017eff3c(param_1,0,0);
      FUN_017f0b3c(param_1);
      return;
    }
  }
  return;
}

