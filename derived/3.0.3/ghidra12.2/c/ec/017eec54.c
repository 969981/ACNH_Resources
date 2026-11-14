
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017eec54(long param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte bVar3;
  short local_24 [2];
  
  if (*(char *)(param_1 + 0x144) != '\0') {
    bVar3 = 0x10;
    if ((param_3 & 1) == 0) {
      bVar3 = 0;
    }
    *(byte *)(param_1 + 0x13c) = *(byte *)(param_1 + 0x13c) & 0xef | bVar3;
  }
  FUN_007ef010(local_24);
  puVar1 = PTR_DAT_04bb3170;
  if (*(char *)(param_1 + 0x144) != '\0') {
    *(short *)(param_1 + 0xd8) = local_24[0];
    uVar2 = DAT_0558600c;
    if (local_24[0] != *(short *)puVar1) {
      *(undefined4 *)(param_1 + 0xd0) = _DAT_05586008;
      *(undefined4 *)(param_1 + 0xd4) = uVar2;
      *(undefined4 *)(param_1 + 0x1f0) = 0xffffffff;
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

