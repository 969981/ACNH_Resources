
void FUN_03fc1800(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  
  uVar1 = (uint)param_2 & 0x1f;
  uVar2 = (uint)param_2 & 0xe0;
  if (*(byte *)(param_1 + 0x41f82) == uVar1) {
    bVar3 = *(byte *)(param_1 + 0x41f83);
  }
  else {
    *(byte *)(param_1 + 0x41f82) = (byte)uVar1;
    uVar9 = (param_2 & 0xff) << 3;
    uVar6 = (uint)*(byte *)(param_1 + 0x3170e8);
    iVar13 = ((uint)(param_2 >> 1) & 0xc) + 4;
    uVar12 = uVar9 & 0x18;
    uVar1 = (4 << (ulong)(iVar13 + (int)uVar9 & 0x1c)) + (4 << uVar12);
    *(uint *)(param_1 + 0x45ac8) = uVar1;
    if (*(byte *)(param_1 + 0x3170e8) != 0) {
      bVar3 = *(byte *)(param_1 + 0x45960);
      if (bVar3 == 0) {
        uVar7 = 0;
      }
      else {
        if (bVar3 == 1) {
          uVar9 = 0;
          uVar7 = 0;
        }
        else {
          uVar9 = 0;
          uVar7 = 0;
          pbVar10 = (byte *)(param_1 + 0x45968);
          do {
            uVar9 = uVar9 + 2;
            uVar7 = *(uint *)(param_1 + 0x45ab8 + (ulong)*pbVar10 * 4) |
                    *(uint *)(param_1 + 0x45ab8 + (ulong)pbVar10[-1] * 4) | uVar7;
            pbVar10 = pbVar10 + 2;
          } while (((ulong)bVar3 & 0xfe) != uVar9);
        }
        if ((bVar3 & 1) != 0) {
          uVar7 = *(uint *)(param_1 + (ulong)*(byte *)(param_1 + uVar9 + 0x45967) * 4 + 0x45ab8) |
                  uVar7;
        }
      }
      uVar6 = 0;
      if (*(char *)(param_1 + 0x459cc) != '\0') {
        uVar6 = uVar1;
      }
      uVar6 = uVar6 | uVar7;
    }
    bVar3 = *(byte *)(param_1 + 0x45a10);
    if (bVar3 != 0) {
      if (bVar3 == 1) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        pbVar10 = (byte *)(param_1 + 0x45a18);
        do {
          uVar9 = uVar9 + 2;
          uVar6 = *(uint *)(param_1 + 0x45ab8 + (ulong)*pbVar10 * 4) |
                  *(uint *)(param_1 + 0x45ab8 + (ulong)pbVar10[-1] * 4) | uVar6;
          pbVar10 = pbVar10 + 2;
        } while (((ulong)bVar3 & 0xfe) != uVar9);
      }
      if ((bVar3 & 1) != 0) {
        uVar6 = *(uint *)(param_1 + (ulong)*(byte *)(param_1 + uVar9 + 0x45a17) * 4 + 0x45ab8) |
                uVar6;
      }
    }
    uVar7 = 0;
    if (*(char *)(param_1 + 0x45a7c) != '\0') {
      uVar7 = uVar1;
    }
    FUN_03fc20a0(param_1,uVar7 | uVar6);
    bVar3 = *(byte *)(param_1 + 0x41f83);
    iVar13 = iVar13 * 0x800;
    iVar5 = (int)(uVar12 << 0xb);
    *(int *)(param_1 + 0x41f84) = iVar5;
    *(int *)(param_1 + 0x41f88) = iVar13;
    if (bVar3 == uVar2) {
      lVar8 = *(long *)(param_1 + 0x88);
      pbVar10 = (byte *)(param_1 + 0x44943);
      lVar11 = 0x80;
      do {
        lVar11 = lVar11 + -1;
        *(ulong *)(pbVar10 + -0xb) = lVar8 + ((ulong)(iVar5 + iVar13 * (uint)*pbVar10) & 0xe000);
        pbVar10 = pbVar10 + 0x20;
      } while (lVar11 != 0);
      return;
    }
  }
  if (bVar3 != uVar2) {
    uVar9 = (ulong)(uVar2 >> 4);
    *(char *)(param_1 + 0x41f83) = (char)uVar2;
    uVar4 = (&DAT_04102680)[uVar9 | 1];
    *(undefined *)(param_1 + 0x41f90) = (&DAT_04102680)[uVar9];
    iVar13 = 0;
    *(undefined *)(param_1 + 0x41f92) = (&DAT_041025b0)[uVar9];
    *(undefined1 *)(param_1 + 0x41f91) = uVar4;
    *(undefined *)(param_1 + 0x41f93) = (&DAT_041025b0)[uVar9 | 1];
    do {
      FUN_03fc161c(param_1,iVar13);
      iVar13 = iVar13 + 1;
    } while (iVar13 != 0x80);
    *(undefined1 *)(param_1 + 0x44136) = 1;
  }
  return;
}

