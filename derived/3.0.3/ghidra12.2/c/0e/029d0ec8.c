
void FUN_029d0ec8(long param_1)

{
  uint *puVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte local_4 [4];
  
  *(undefined2 *)(param_1 + 0x160) = 0;
  if (*(uint *)(DAT_0537d558 + 0x10) < 2) {
    return;
  }
  lVar8 = *DAT_0537d558;
  bVar4 = *(byte *)(lVar8 + 0x473);
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
    if (7 < bVar4) {
      puVar1 = (uint *)(lVar8 + 0x48);
    }
    if (((*puVar1 >> 3 & 1) != 0) && (*(byte *)(lVar8 + 0x472) != bVar4)) {
      pbVar2 = PTR_DAT_04bb5038;
      if ((*puVar1 & 8) != 0) {
        pbVar2 = (byte *)(lVar8 + 0x470);
      }
      local_4[0] = *pbVar2;
      if (7 < local_4[0]) {
        local_4[0] = 0xff;
      }
      iVar7 = FUN_01df8b30(local_4);
      lVar8 = 0;
      if (0xfffffc16 < iVar7 - 0x3c7U) {
        lVar8 = (long)iVar7 + 0x22;
      }
      goto LAB_029d0f30;
    }
  }
  lVar8 = 0;
LAB_029d0f30:
  lVar6 = DAT_05354240;
  cVar3 = *(char *)(DAT_05354240 + 0x1a0);
  uVar10 = *(ulong *)(DAT_05354240 + 0x188);
  uVar9 = uVar10;
  if (cVar3 == '\0') {
    uVar9 = 0xffffffffffffffff;
  }
  if ((long)uVar9 < 0) {
    uVar9 = 0xffffffffffffffff;
  }
  else {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar9 - lVar8 & ((long)(uVar9 - lVar8) >> 0x3f ^ 0xffffffffffffffffU);
    uVar9 = SUB168(auVar5 * ZEXT816(0x20c49ba5e353f7cf),8) >> 8;
  }
  if ((*(long *)(param_1 + 0x128) < (long)uVar9) || ((long)uVar9 < *(long *)(param_1 + 0x128) + -1))
  {
    *(ulong *)(param_1 + 0x128) = uVar9;
    *(undefined1 *)(param_1 + 0x160) = 1;
    cVar3 = *(char *)(lVar6 + 0x1a0);
    uVar10 = *(ulong *)(lVar6 + 0x188);
  }
  if (cVar3 == '\0') {
    uVar10 = 0xffffffffffffffff;
  }
  if ((long)uVar10 < 0) {
    if (uVar9 == 0xffffffffffffffff) {
      return;
    }
  }
  else if (uVar9 == uVar10 / 2000) {
    return;
  }
  *(undefined1 *)(param_1 + 0x161) = 1;
  return;
}

