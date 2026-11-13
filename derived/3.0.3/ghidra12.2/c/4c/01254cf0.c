
undefined8
FUN_01254cf0(undefined4 param_1,short *param_2,long param_3,undefined4 param_4,byte *param_5,
            undefined4 param_6,byte param_7)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  
  uVar2 = 0;
  iVar3 = 0;
  psVar4 = (short *)&DAT_05152a90;
  do {
    if (0x23 < *(int *)((long)&DAT_05152ac8 + (long)iVar3 * 0x48 + 4)) {
      if (*param_2 == -2) {
        return 0;
      }
      if (0x27 < uVar2) {
        psVar4 = (short *)&DAT_05152a90;
      }
      *(undefined2 *)((long)psVar4 + 0x45) = 0xff00;
      psVar4[0] = -2;
      psVar4[1] = 0;
      psVar4[2] = 0;
      psVar4[3] = 0;
      FUN_0277d4ac(psVar4);
      psVar4[4] = 0;
      psVar4[5] = 0;
      psVar4[6] = 0;
      psVar4[7] = 0;
      psVar4[8] = 0;
      psVar4[9] = 0;
      *(undefined1 *)((long)psVar4 + 0x47) = 2;
      psVar4[0x10] = 0;
      psVar4[0x11] = 0;
      psVar4[0x12] = 0;
      psVar4[0x13] = 0;
      psVar4[0x18] = 0;
      psVar4[0x19] = 0;
      psVar4[0x1a] = 0;
      psVar4[0x1b] = 0;
      *(undefined4 *)(psVar4 + 0x1e) = param_1;
      psVar4[0x20] = 0;
      psVar4[0x21] = 0;
      *(undefined1 *)(psVar4 + 0x22) = 0xff;
      psVar4[0x1c] = 0;
      psVar4[0x1d] = 0;
      *psVar4 = *param_2;
      *(char *)(psVar4 + 1) = (char)param_2[1];
      *(undefined1 *)((long)psVar4 + 3) = *(undefined1 *)((long)param_2 + 3);
      *(undefined4 *)(psVar4 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)(psVar4 + 0x18) = *(undefined4 *)(param_3 + 8);
      *(undefined4 *)(psVar4 + 0x1a) = *(undefined4 *)(param_3 + 0xc);
      *(undefined4 *)(psVar4 + 0x1c) = param_4;
      bVar1 = *param_5;
      *(undefined4 *)(psVar4 + 0x20) = param_6;
      if (7 < bVar1) {
        bVar1 = 0xff;
      }
      *(byte *)(psVar4 + 0x23) = bVar1;
      if ((param_7 == 0xfe) && (param_7 = *param_5, 7 < param_7)) {
        param_7 = 0xff;
      }
      *(byte *)(psVar4 + 0x22) = param_7;
      *(undefined1 *)((long)psVar4 + 0x47) = 0;
      return 1;
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 1;
    psVar4 = psVar4 + 0x24;
  } while (uVar2 != 0x28);
  return 0;
}

