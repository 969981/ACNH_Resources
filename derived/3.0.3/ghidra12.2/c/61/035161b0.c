
void FUN_035161b0(long *param_1,short param_2,undefined8 param_3)

{
  uint uVar1;
  short *psVar2;
  ulong uVar3;
  long lVar4;
  
  if (((param_2 != -1) && (lVar4 = *param_1, lVar4 != 0)) &&
     (uVar1 = *(uint *)(lVar4 + 0xf8), 0 < (int)uVar1)) {
    uVar3 = 0;
    do {
      psVar2 = (short *)(**(code **)(**(long **)(*(long *)(lVar4 + 0x100) + uVar3 * 8) + 0xf0))();
      if (*psVar2 == param_2) {
        FUN_038d1270(param_3,&DAT_040d486c,uVar3 & 0xffffffff);
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}

