
uint * FUN_027c1640(uint *param_1,uint *param_2)

{
  int *piVar1;
  void *__dest;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  
  __dest = (void *)((long)param_1 + 0xa5);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar5 = *(undefined8 *)(param_2 + 6);
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar8;
  *(undefined8 *)(param_1 + 6) = uVar5;
  *(undefined8 *)(param_1 + 8) = uVar6;
  uVar8 = *(undefined8 *)(param_2 + 0x12);
  uVar5 = *(undefined8 *)(param_2 + 0xe);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  *(char *)(param_1 + 0x14) = (char)param_2[0x14];
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  *(undefined8 *)(param_1 + 0x12) = uVar8;
  *(undefined8 *)(param_1 + 0xe) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x15);
  uVar6 = *(undefined8 *)(param_2 + 0x17);
  *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(param_2 + 0x19);
  *(undefined8 *)(param_1 + 0x17) = uVar6;
  *(undefined8 *)(param_1 + 0x15) = uVar5;
  uVar9 = param_2[0x1b];
  if (1 < uVar9) {
    uVar9 = 0;
  }
  param_1[0x1b] = uVar9;
  uVar3 = param_2[0x1c];
  *(byte *)(param_1 + 0x1c) = (byte)uVar3;
  *(undefined1 *)((long)param_1 + 0x71) = *(undefined1 *)((long)param_2 + 0x71);
  *(undefined2 *)((long)param_1 + 0x72) = *(undefined2 *)((long)param_2 + 0x72);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  uVar8 = *(undefined8 *)(param_2 + 0x26);
  uVar5 = *(undefined8 *)(param_2 + 0x22);
  uVar6 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x9d) = *(undefined8 *)((long)param_2 + 0x9d);
  *(undefined8 *)(param_1 + 0x22) = uVar5;
  *(undefined8 *)(param_1 + 0x24) = uVar6;
  *(undefined8 *)(param_1 + 0x26) = uVar8;
  memcpy(__dest,(void *)((long)param_2 + 0xa5),0x200);
  uVar7 = 0;
  uVar9 = 0;
  *(undefined1 *)((long)param_1 + 0x2a5) = 0;
  bVar4 = true;
  *(undefined2 *)((long)param_1 + 0x2a6) = 0;
  do {
    iVar10 = 0x20;
    uVar11 = uVar7;
    do {
      if ((((*(byte *)((long)__dest + uVar11) ^ 0xff) & 0xf) == 0) ||
         (0xef < *(byte *)((long)__dest + uVar11))) goto LAB_027c176c;
      uVar11 = (ulong)((int)uVar11 + 1);
      iVar10 = iVar10 + -2;
    } while (iVar10 != 0);
    bVar4 = uVar9 < 0x1f;
    uVar9 = uVar9 + 1;
    uVar7 = (ulong)((int)uVar7 + 0x10);
  } while (uVar9 != 0x20);
LAB_027c176c:
  *param_1 = 0;
  bVar2 = 2;
  if (!bVar4) {
    bVar2 = 0;
  }
  uVar7 = 0;
  *(byte *)(param_1 + 0x1c) = bVar2 | (byte)uVar3 & 0xfc;
  uVar9 = 0;
  do {
    piVar1 = (int *)((long)param_1 + uVar7);
    uVar7 = uVar7 + 4;
    uVar9 = (*piVar1 * 0x16a88000 | (uint)(*piVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar9;
    uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
  } while (uVar7 < 0x2a5);
  uVar9 = (uVar9 ^ uVar9 >> 0x10 ^ 0x2a8) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  *param_1 = uVar9 ^ uVar9 >> 0x10;
  return param_1;
}

