
void FUN_035ff550(char *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  bVar2 = param_1[2];
  uVar8 = (uint)(byte)param_1[1];
  if ((byte)param_1[1] < 2) {
    uVar8 = 1;
  }
  if ((bVar2 < 8) || (0xc < bVar2)) {
    lVar9 = *(long *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0x140) = 0;
    bVar2 = param_1[2];
    bVar3 = *(byte *)(lVar9 + 0x148);
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(long *)(param_2 + 0x48) = lVar9;
    *(ulong *)(param_2 + 0x50) =
         lVar9 + (ulong)((int)(2L << ((ulong)bVar3 & 0x3f)) - 1U & uVar8) * 0x4000;
    if (*(long *)(param_2 + 0x18) == 0) goto LAB_035ff600;
    if (*(int *)(param_2 + 0xa8) == 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(ulong *)(&DAT_04194b08 + (long)*(char *)(lVar9 + 0x149) * 8);
    }
    lVar9 = *(long *)(param_2 + 0x18) + (uVar7 & bVar2) * 0x2000;
  }
  else {
    *(uint *)(param_2 + 0x140) = (uint)bVar2;
    lVar9 = *(long *)(param_2 + 8);
    bVar2 = *(byte *)(lVar9 + 0x148);
    *(long *)(param_2 + 0x48) = lVar9;
    *(ulong *)(param_2 + 0x50) =
         lVar9 + (ulong)((int)(2L << ((ulong)bVar2 & 0x3f)) - 1U & uVar8) * 0x4000;
    lVar9 = *(long *)(param_2 + 0x18);
  }
  *(long *)(param_2 + 0x60) = lVar9;
LAB_035ff600:
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) & 0xfe | *param_1 != '\0';
  if (*(int *)(param_1 + 4) == 2) {
    uVar8 = (uint)*(byte *)(param_2 + 0x150);
    if ((*(byte *)(param_2 + 0x150) >> 6 & 1) == 0) {
      if (0x3fffff < (ulong)(*(long *)(param_2 + -0xdb0) - *(long *)(param_2 + 0x138))) {
        uVar5 = (uint)*(byte *)(param_2 + 0x14c);
        lVar9 = -*(long *)(param_2 + 0x138);
        uVar4 = (uint)*(byte *)(param_2 + 0x14d);
        uVar6 = (uint)*(byte *)(param_2 + 0x14e);
        uVar7 = (ulong)*(byte *)(param_2 + 0x14f);
        do {
          lVar9 = lVar9 + -0x400000;
          uVar5 = uVar5 + (uVar4 + (uVar6 + ((uVar8 & 1) << 8 | (uint)uVar7) * 0x18) * 0x3c) * 0x3c;
          uVar1 = uVar5 + 1;
          uVar6 = uVar8 | 0xffffff80;
          if (uVar5 < 0x2a2ffff) {
            uVar6 = uVar8;
          }
          uVar8 = uVar1 / 0x1518000 & 1 | uVar6;
          uVar5 = uVar1 % 0x3c;
          uVar4 = uVar1 / 0x3c + (uVar1 / 0xe10) * -0x3c;
          uVar7 = (ulong)uVar1 / 0x15180 & 0xff;
          uVar6 = uVar1 / 0xe10 + ((uVar1 / 0xe10 & 0xffff) / 0x18) * -0x18 & 0xffff;
        } while ((ulong)(*(long *)(param_2 + -0xdb0) + lVar9) >> 0x16 != 0);
        *(char *)(param_2 + 0x14c) = (char)uVar5;
        *(char *)(param_2 + 0x14d) = (char)uVar4;
        *(char *)(param_2 + 0x14e) = (char)uVar6;
        *(char *)(param_2 + 0x14f) = (char)((ulong)uVar1 / 0x15180);
        *(char *)(param_2 + 0x150) = (char)uVar8;
        *(long *)(param_2 + 0x138) = -lVar9;
      }
    }
    *(undefined8 *)(param_2 + 0x154) = *(undefined8 *)(param_2 + 0x144);
    *(undefined8 *)(param_2 + 0x15c) = *(undefined8 *)(param_2 + 0x14c);
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  return;
}

