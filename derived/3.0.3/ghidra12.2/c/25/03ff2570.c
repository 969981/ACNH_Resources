
void FUN_03ff2570(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  
  if (*(char *)(param_1 + 0x92a) != '\0') {
    if (*(char *)(param_1 + 0x92a) == -1) {
      iVar4 = *(int *)(param_1 + 0x780);
      iVar7 = *(int *)(param_1 + 0x78c) * ((*(byte *)(param_1 + 0x6a) & 3) * 2 + 2);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x78c) * ((*(byte *)(param_1 + 0x6a) & 3) * 2 + 2);
      iVar4 = *(int *)(param_1 + 0x780) - iVar7;
    }
    *(undefined1 *)(param_1 + 0x92a) = 0;
    *(int *)(param_1 + 0x780) = iVar4 - iVar7;
  }
  if (*(char *)(param_1 + 0x92e) != '\0') {
    if (*(char *)(param_1 + 0x92e) == -1) {
      iVar4 = *(int *)(param_1 + 0x780);
      iVar7 = *(int *)(param_1 + 0x78c) * ((*(byte *)(param_1 + 0x6a) & 3) * 2 + 2);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x78c) * ((*(byte *)(param_1 + 0x6a) & 3) * 2 + 2);
      iVar4 = *(int *)(param_1 + 0x780) - iVar7;
    }
    *(undefined1 *)(param_1 + 0x92e) = 0;
    *(int *)(param_1 + 0x780) = iVar4 - iVar7;
  }
  if (-1 < *(int *)(param_1 + 0x924)) {
    pcVar6 = *(code **)(param_1 + 0x980);
    if ((*(ulong *)(param_1 + 0x988) & 1) != 0) {
      pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + ((long)*(ulong *)(param_1 + 0x988) >> 1)));
    }
    (*pcVar6)();
    *(undefined4 *)(param_1 + 0x924) = 0xfffffffe;
  }
  pbVar1 = (byte *)(*(long *)(param_1 + ((ulong)*(uint *)(param_1 + 0x944) & 0xf8) + 0x7a0) +
                    ((ulong)*(uint *)(param_1 + 0x944) & 7) * 2 +
                   (long)*(int *)(param_1 + ((ulong)(*(uint *)(param_1 + 0x940) >> 3) & 0x1f) * 4 +
                                 0x8a0));
  uVar2 = (*(uint *)(param_1 + 0x940) ^ 0xffffffff) & 7;
  uVar5 = *pbVar1 >> (ulong)uVar2 & 1 | (pbVar1[1] >> (ulong)uVar2 & 1) << 1;
  bVar3 = *(byte *)(param_1 + 0x6a);
  if (((bVar3 & 3) != 0) &&
     (uVar5 = (pbVar1[0x11] >> (ulong)uVar2 & 1) << 3 | (pbVar1[0x10] >> (ulong)uVar2 & 1) << 2 |
              uVar5, (bVar3 & 3) == 3)) {
    uVar5 = (pbVar1[0x21] >> (ulong)uVar2 & 1) << 5 | (pbVar1[0x20] >> (ulong)uVar2 & 1) << 4 |
            (pbVar1[0x30] >> (ulong)uVar2 & 1) << 6 | (pbVar1[0x31] >> (ulong)uVar2 & 1) << 7 |
            uVar5;
  }
  uVar8 = (ulong)*(ushort *)(param_1 + 0x93a) & 0xf;
  *(int *)(param_1 + 0x978) = *(int *)(param_1 + 0x978) + 1;
  *(uint *)(param_1 + uVar8 * 4 + 0x93c) = uVar5;
  if ((int)uVar8 == 0xe) {
    *(undefined1 *)(param_1 + 0x778) = *(undefined1 *)(param_1 + 0x66);
    iVar4 = *(int *)(param_1 + 0x78c);
    *(int *)(param_1 + 0x790) = iVar4;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x78c);
  }
  *(uint *)(param_1 + 0x938) = uVar5;
  *(uint *)(param_1 + 0x780) = *(int *)(param_1 + 0x780) - iVar4 * ((bVar3 & 3) * 2 + 2);
  return;
}

