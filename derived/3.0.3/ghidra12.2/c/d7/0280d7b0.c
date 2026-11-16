
void FUN_0280d7b0(long param_1,uint param_2)

{
  ulong uVar1;
  short *psVar2;
  
  if (param_2 < 0x200) {
    uVar1 = (ulong)param_2;
    psVar2 = (short *)(param_1 + (ulong)param_2 * 0x1e + 0x454);
    do {
      if (*psVar2 == -1) {
        return;
      }
      if ((uVar1 < 0x1ff) && (psVar2[0xf] != -1)) {
        *(undefined8 *)psVar2 = *(undefined8 *)(psVar2 + 0xf);
        *(undefined8 *)(psVar2 + 4) = *(undefined8 *)(psVar2 + 0x13);
        *(undefined8 *)(psVar2 + 8) = *(undefined8 *)(psVar2 + 0x17);
        *(undefined8 *)(psVar2 + 0xb) = *(undefined8 *)(psVar2 + 0x1a);
      }
      else {
        *psVar2 = -1;
        psVar2[1] = 0;
        psVar2[2] = 0;
        psVar2[3] = 0;
        psVar2[4] = 0;
        psVar2[5] = 0;
        psVar2[6] = 0;
        psVar2[7] = 0;
        psVar2[8] = 0;
        psVar2[9] = 0;
        psVar2[10] = 0;
        psVar2[0xb] = 0;
        psVar2[0xc] = 0;
        psVar2[0xd] = 0;
        psVar2[0xe] = 0;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 0xf;
    } while (uVar1 != 0x200);
  }
  return;
}

