
void FUN_0280ff90(long param_1,uint param_2)

{
  ulong uVar1;
  short *psVar2;
  
  if (param_2 < 0x80) {
    uVar1 = (ulong)param_2;
    psVar2 = (short *)(param_1 + (ulong)param_2 * 10 + 0x280);
    do {
      if (*psVar2 == -1) {
        return;
      }
      if ((uVar1 < 0x7f) && (psVar2[5] != -1)) {
        *(undefined8 *)psVar2 = *(undefined8 *)(psVar2 + 5);
        psVar2[4] = psVar2[9];
      }
      else {
        *psVar2 = -1;
        psVar2[1] = 0;
        psVar2[2] = 0;
        psVar2[3] = 0;
        psVar2[4] = 0;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 5;
    } while (uVar1 != 0x80);
  }
  return;
}

