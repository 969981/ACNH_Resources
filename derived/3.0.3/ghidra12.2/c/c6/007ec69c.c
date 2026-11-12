
undefined4 FUN_007ec69c(short *param_1,byte *param_2)

{
  short *psVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  
  bVar2 = *param_2;
  bVar3 = 7 < bVar2;
  if (bVar3) {
    bVar2 = 0xff;
  }
  psVar1 = param_1 + (ulong)(uint)(int)(char)bVar2 * 0xc;
  if (bVar3) {
    psVar1 = param_1;
  }
  if (*psVar1 == DAT_04cb6038) {
    return 0;
  }
  if (psVar1[4] == DAT_04cb6038) {
    return 1;
  }
  uVar4 = 2;
  if (psVar1[8] != DAT_04cb6038) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

