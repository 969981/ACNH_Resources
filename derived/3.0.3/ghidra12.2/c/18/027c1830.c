
void FUN_027c1830(uint *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined4 local_30 [2];
  uint *local_28;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 9;
  local_28 = param_1 + 4;
  local_30[0] = 0x14;
  FUN_02906c90(local_30,&DAT_04ccad10);
  uVar9 = DAT_04ccacd4;
  uVar5 = DAT_04ccaca8;
  uVar4 = DAT_04ccaca0;
  *(undefined1 *)(param_1 + 0x1c) = 4;
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  uVar4 = DAT_04ccacb0;
  if (1 < uVar9) {
    uVar9 = 0;
  }
  param_1[0x1b] = uVar9;
  *(undefined8 *)(param_1 + 0x12) = uVar4;
  *(undefined1 *)(param_1 + 0x14) = (undefined1)DAT_04ccacb8;
  *(undefined8 *)(param_1 + 0x15) = DAT_04ccacbc;
  uVar4 = DAT_04ccaccc;
  *(undefined8 *)(param_1 + 0x17) = DAT_04ccacc4;
  *(undefined8 *)(param_1 + 0x19) = uVar4;
  param_1[0x26] = 0x41508b98;
  param_1[0x27] = 0x6ee5e5e5;
  param_1[0x1e] = 0xe52d2de5;
  param_1[0x1f] = 0xe5e52d77;
  param_1[0x20] = 0x2de5771e;
  param_1[0x21] = 0x391b8b1b;
  *(undefined1 *)(param_1 + 0x29) = 0x14;
  *(undefined2 *)((long)param_1 + 0x72) = 0;
  param_1[0x22] = 0x912ad6b7;
  param_1[0x23] = 0xe53d3dd6;
  param_1[0x24] = 0xe5e54c89;
  param_1[0x25] = 0xa8e5c95b;
  param_1[0x28] = 0x14146e6e;
  lVar7 = 0xb4;
  *(undefined1 *)((long)param_1 + 0x71) = 0xee;
  do {
    puVar2 = (undefined1 *)((long)param_1 + lVar7);
    lVar7 = lVar7 + 0x10;
    puVar2[-0xf] = 0xcc;
    *(undefined8 *)(puVar2 + -0xe) = 0xcccccccccccccccc;
    *(undefined4 *)(puVar2 + -6) = 0xcccccccc;
    *(undefined2 *)(puVar2 + -2) = 0xcccc;
    *puVar2 = 0xcc;
  } while (lVar7 != 0x2b4);
  uVar8 = 0;
  uVar9 = 0;
  bVar6 = true;
  *(undefined1 *)((long)param_1 + 0x2a5) = 0;
  *(undefined2 *)((long)param_1 + 0x2a6) = 0;
  do {
    iVar10 = 0x20;
    uVar11 = uVar8;
    do {
      if ((((*(byte *)((long)param_1 + uVar11 + 0xa5) ^ 0xff) & 0xf) == 0) ||
         (0xef < *(byte *)((long)param_1 + uVar11 + 0xa5))) goto LAB_027c19ec;
      uVar11 = (ulong)((int)uVar11 + 1);
      iVar10 = iVar10 + -2;
    } while (iVar10 != 0);
    bVar6 = uVar9 < 0x1f;
    uVar9 = uVar9 + 1;
    uVar8 = (ulong)((int)uVar8 + 0x10);
  } while (uVar9 != 0x20);
LAB_027c19ec:
  *param_1 = 0;
  bVar3 = 2;
  if (!bVar6) {
    bVar3 = 0;
  }
  uVar8 = 0;
  *(byte *)(param_1 + 0x1c) = bVar3 | (byte)param_1[0x1c] & 0xfc;
  uVar9 = 0;
  do {
    piVar1 = (int *)((long)param_1 + uVar8);
    uVar8 = uVar8 + 4;
    uVar9 = (*piVar1 * 0x16a88000 | (uint)(*piVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar9;
    uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
  } while (uVar8 < 0x2a5);
  uVar9 = (uVar9 ^ uVar9 >> 0x10 ^ 0x2a8) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  *param_1 = uVar9 ^ uVar9 >> 0x10;
  return;
}

