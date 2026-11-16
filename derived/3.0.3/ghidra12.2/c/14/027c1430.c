
void FUN_027c1430(uint *param_1,uint *param_2)

{
  int *piVar1;
  void *__s;
  byte bVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  
  __s = (void *)((long)param_1 + 0xa5);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar7 = *(undefined8 *)(param_2 + 6);
  uVar10 = *(undefined8 *)(param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 10);
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x14) = 2;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 8) = uVar10;
  *(undefined8 *)(param_1 + 10) = uVar8;
  *(undefined8 *)(param_1 + 6) = uVar7;
  uVar5 = param_2[0x1c];
  *(byte *)(param_1 + 0x1c) = (byte)uVar5;
  uVar4 = *(undefined1 *)((long)param_2 + 0x71);
  *(undefined2 *)((long)param_1 + 0x72) = 0;
  *(undefined1 *)((long)param_1 + 0x71) = uVar4;
  uVar10 = *(undefined8 *)(param_2 + 0x12);
  uVar7 = *(undefined8 *)(param_2 + 0xe);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  *(char *)(param_1 + 0x14) = (char)param_2[0x14];
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  *(undefined8 *)(param_1 + 0x12) = uVar10;
  *(undefined8 *)(param_1 + 0xe) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x15);
  uVar8 = *(undefined8 *)(param_2 + 0x17);
  *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(param_2 + 0x19);
  *(undefined8 *)(param_1 + 0x17) = uVar8;
  *(undefined8 *)(param_1 + 0x15) = uVar7;
  uVar11 = param_2[0x1b];
  if (1 < uVar11) {
    uVar11 = 0;
  }
  param_1[0x1b] = uVar11;
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  uVar10 = *(undefined8 *)(param_2 + 0x26);
  uVar7 = *(undefined8 *)(param_2 + 0x22);
  uVar8 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x9d) = *(undefined8 *)((long)param_2 + 0x9d);
  *(undefined8 *)(param_1 + 0x22) = uVar7;
  *(undefined8 *)(param_1 + 0x24) = uVar8;
  *(undefined8 *)(param_1 + 0x26) = uVar10;
  memset(__s,0,0x203);
  memcpy(__s,(void *)((long)param_2 + 0xa5),0x200);
  uVar9 = 0;
  uVar11 = 0;
  bVar6 = true;
  do {
    iVar12 = 0x20;
    uVar13 = uVar9;
    do {
      if ((((*(byte *)((long)__s + uVar13) ^ 0xff) & 0xf) == 0) ||
         (0xef < *(byte *)((long)__s + uVar13))) goto LAB_027c158c;
      uVar13 = (ulong)((int)uVar13 + 1);
      iVar12 = iVar12 + -2;
    } while (iVar12 != 0);
    bVar6 = uVar11 < 0x1f;
    uVar11 = uVar11 + 1;
    uVar9 = (ulong)((int)uVar9 + 0x10);
  } while (uVar11 != 0x20);
LAB_027c158c:
  *param_1 = 0;
  bVar2 = 2;
  if (!bVar6) {
    bVar2 = 0;
  }
  uVar9 = 0;
  *(byte *)(param_1 + 0x1c) = bVar2 | (byte)uVar5 & 0xfc;
  uVar11 = 0;
  do {
    piVar1 = (int *)((long)param_1 + uVar9);
    uVar9 = uVar9 + 4;
    uVar11 = (*piVar1 * 0x16a88000 | (uint)(*piVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar11;
    uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
  } while (uVar9 < 0x2a5);
  uVar11 = (uVar11 ^ uVar11 >> 0x10 ^ 0x2a8) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  *param_1 = uVar11 ^ uVar11 >> 0x10;
  return;
}

