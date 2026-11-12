
undefined8 FUN_00a7c6ec(undefined8 *param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  short *psVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  lVar4 = *param_2;
  if (lVar4 == -1) {
    return 0;
  }
  if ((DAT_04da56d0 == 0) || (DAT_0537d558 == (long *)0x0)) {
    return 0;
  }
  lVar8 = *DAT_0537d558;
  uVar3 = *param_1;
  bVar2 = *(byte *)(lVar8 + 0x473);
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar8 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar8 + 0x472) != bVar2)) {
      local_18 = 0;
      DAT_04da579a = 1;
      DAT_04da5798 = DAT_04c487d4;
      local_12 = 0;
      local_14 = 0xff01;
      DAT_04da5788 = uVar3;
      DAT_04da5790 = lVar4;
      if (-1 < DAT_04da5760) {
        FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_04da5760,&local_18,&DAT_04da5788,0x18,0);
      }
      return 1;
    }
  }
  psVar5 = (short *)(DAT_04da56d0 + 0x90);
  if (*psVar5 == -1) {
    lVar8 = 0;
  }
  else {
    psVar5 = (short *)(DAT_04da56d0 + 0xa8);
    if (*psVar5 == -1) {
      lVar8 = 1;
    }
    else {
      psVar5 = (short *)(DAT_04da56d0 + 0xc0);
      if (*psVar5 == -1) {
        lVar8 = 2;
      }
      else {
        psVar5 = (short *)(DAT_04da56d0 + 0xd8);
        if (*psVar5 == -1) {
          lVar8 = 3;
        }
        else {
          psVar5 = (short *)(DAT_04da56d0 + 0xf0);
          if (*psVar5 == -1) {
            lVar8 = 4;
          }
          else if (*(short *)(DAT_04da56d0 + 0x108) == -1) {
            psVar5 = (short *)(DAT_04da56d0 + 0x108);
            lVar8 = 5;
          }
          else if (*(short *)(DAT_04da56d0 + 0x120) == -1) {
            psVar5 = (short *)(DAT_04da56d0 + 0x120);
            lVar8 = 6;
          }
          else if (*(short *)(DAT_04da56d0 + 0x138) == -1) {
            psVar5 = (short *)(DAT_04da56d0 + 0x138);
            lVar8 = 7;
          }
          else if (*(short *)(DAT_04da56d0 + 0x150) == -1) {
            psVar5 = (short *)(DAT_04da56d0 + 0x150);
            lVar8 = 8;
          }
          else {
            if (*(short *)(DAT_04da56d0 + 0x168) != -1) {
              return 0;
            }
            psVar5 = (short *)(DAT_04da56d0 + 0x168);
            lVar8 = 9;
          }
        }
      }
    }
  }
  lVar6 = DAT_04da56d0 + 0x80;
  *psVar5 = DAT_04c487d4;
  puVar7 = (undefined8 *)(lVar6 + lVar8 * 0x18);
  *puVar7 = uVar3;
  puVar7[1] = lVar4;
  return 1;
}

