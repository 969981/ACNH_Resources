
undefined2 FUN_0126cd70(long param_1,uint param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = 0x2a;
  if (DAT_0515c728 == 0) {
    uVar3 = 0;
  }
  lVar1 = DAT_0515c738 + (long)(int)(uVar3 * **(uint **)(param_1 + 8)) * 2;
  if ((DAT_0515c728 & DAT_0515c730 & **(uint **)(param_1 + 8) < 4) == 0) {
    lVar1 = 0;
  }
  bVar2 = DAT_0515c728 & lVar1 != 0;
  lVar4 = (long)(int)param_2;
  if (bVar2 == 0) {
    lVar1 = 0;
  }
  if ((bVar2 & param_2 < uVar3) == 0) {
    lVar4 = 0;
  }
  return *(undefined2 *)(lVar1 + lVar4 * 2);
}

