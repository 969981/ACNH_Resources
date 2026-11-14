
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017eef34(long param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  undefined4 uVar1;
  byte bVar2;
  short local_14 [2];
  
  if ((*(char *)(param_1 + 0x144) != '\0') &&
     (FUN_007ef010(local_14), *(char *)(param_1 + 0x144) != '\0')) {
    bVar2 = 0x80;
    if ((param_3 & 1) == 0) {
      bVar2 = 0;
    }
    *(byte *)(param_1 + 0x13c) = bVar2 | *(byte *)(param_1 + 0x13c) & 0x7f;
    *(short *)(param_1 + 0xfc) = local_14[0];
    uVar1 = DAT_0558600c;
    if (local_14[0] != DAT_04cb6038) {
      *(undefined4 *)(param_1 + 0xf4) = _DAT_05586008;
      *(undefined4 *)(param_1 + 0xf8) = uVar1;
      *(undefined4 *)(param_1 + 0x1fc) = 0xffffffff;
    }
    if ((param_4 & 1) != 0) {
      FUN_017ef108(param_1,0,0);
      FUN_017eff3c(param_1,0,0);
      FUN_017f0b3c(param_1);
      return;
    }
  }
  return;
}

