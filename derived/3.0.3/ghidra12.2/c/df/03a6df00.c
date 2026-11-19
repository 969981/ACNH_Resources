
void FUN_03a6df00(long param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  
  *(undefined4 *)(param_1 + 0x298) = 0;
  if ((*(byte *)(param_1 + 0x1e8) >> 5 & 1) != 0) {
    *(int *)(param_1 + 0x13b0) = *(int *)(param_1 + 0x13ac);
    *(int *)(param_1 + 0x13ac) = 1 - *(int *)(param_1 + 0x13ac);
  }
  lVar15 = param_1 + 0x1f0;
  uVar5 = *(ushort *)(param_1 + 0x22a);
  uVar9 = 1 - *(int *)(param_1 + 0x13b4);
  iVar2 = *(int *)(param_1 + 0x220);
  *(uint *)(param_1 + 0x13b4) = uVar9;
  *(char *)(param_1 + 0x229) = (char)uVar9;
  iVar6 = (**(code **)(*(long *)(param_1 + 0x1f0) + 0x20))(lVar15);
  iVar7 = (**(code **)(*(long *)(param_1 + 0x1f0) + 0x20))(lVar15);
  iVar8 = *(int *)(param_1 + 0x208);
  if (*(long *)(param_1 + 0x210) == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = (*DAT_04c61fd0)();
  }
  uVar16 = (ulong)(iVar8 + (uVar9 & 0xff) * (uint)uVar5 * ((iVar2 + iVar6) - 1U & -iVar7));
  lVar17 = lVar10 + uVar16;
  *(long *)(param_1 + 0x200) = lVar17;
  if (*(char *)(param_1 + 0x29c) != '\0') {
    *(undefined1 *)(param_1 + 0x29c) = 0;
    *(int *)(param_1 + 0x2a0) = 1 - *(int *)(param_1 + 0x2a0);
  }
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(float *)(param_1 + 0x288) = (float)*(int *)(param_1 + 0x2ac);
  *(float *)(param_1 + 0x28c) = (float)(*(int *)(param_1 + 0x2a4) * *(int *)(param_1 + 0x2b4) * 2);
  *(float *)(param_1 + 0x290) =
       (float)(((*(int *)(param_1 + 0x2a8) - *(int *)(param_1 + 0x2a4)) + *(int *)(param_1 + 0x2b0))
              * *(int *)(param_1 + 0x2b4));
  (**(code **)(*(long *)(param_1 + 0x1f0) + 0x20))(lVar15);
  (**(code **)(*(long *)(param_1 + 0x1f0) + 0x20))(lVar15);
  lVar18 = **(long **)(param_1 + 0x1f8);
  bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar18 + 8) * 4];
  (**(code **)(*(long *)(param_1 + 0x1f0) + 0x18))(lVar15);
  if (bVar4 != 0) {
    uVar13 = (ulong)*(ushort *)(lVar18 + 4);
    puVar11 = (undefined4 *)(param_1 + 0x268);
    uVar12 = (ulong)bVar4 & 3;
    if (bVar4 < 4) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      puVar14 = (undefined4 *)(uVar13 + uVar16 + lVar10 + 8);
      do {
        lVar18 = lVar18 + -4;
        puVar14[-2] = *puVar11;
        puVar14[-1] = puVar11[1];
        *puVar14 = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar11 = puVar11 + 4;
        puVar14[1] = *puVar1;
        puVar14 = puVar14 + 4;
      } while (-lVar18 != ((ulong)bVar4 & 0xfc));
      lVar18 = -lVar18;
    }
    if ((bVar4 & 3) != 0) {
      puVar14 = (undefined4 *)(lVar17 + uVar13 + lVar18 * 4);
      do {
        uVar12 = uVar12 - 1;
        *puVar14 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
      } while (uVar12 != 0);
    }
  }
  lVar10 = *(long *)(param_1 + 0x200);
  (**(code **)(*(long *)(param_1 + 0x1f0) + 0x20))(lVar15);
  (**(code **)(*(long *)(param_1 + 0x1f0) + 0x20))(lVar15);
  lVar17 = **(long **)(param_1 + 0x1f8);
  bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar17 + 0x14) * 4];
  (**(code **)(*(long *)(param_1 + 0x1f0) + 0x18))(lVar15);
  if (bVar4 != 0) {
    uVar12 = (ulong)*(ushort *)(lVar17 + 0x10);
    puVar11 = (undefined4 *)(param_1 + 0x288);
    uVar16 = (ulong)bVar4 & 3;
    if (bVar4 < 4) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      puVar14 = (undefined4 *)(uVar12 + lVar10 + 8);
      do {
        lVar17 = lVar17 + -4;
        puVar14[-2] = *puVar11;
        puVar14[-1] = puVar11[1];
        *puVar14 = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar11 = puVar11 + 4;
        puVar14[1] = *puVar1;
        puVar14 = puVar14 + 4;
      } while (-lVar17 != ((ulong)bVar4 & 0xfc));
      lVar17 = -lVar17;
    }
    if ((bVar4 & 3) != 0) {
      puVar14 = (undefined4 *)(lVar10 + uVar12 + lVar17 * 4);
      do {
        uVar16 = uVar16 - 1;
        *puVar14 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
      } while (uVar16 != 0);
    }
  }
  lVar10 = *(long *)(param_1 + 0x200);
  (**(code **)(*(long *)(param_1 + 0x1f0) + 0x20))(lVar15);
  (**(code **)(*(long *)(param_1 + 0x1f0) + 0x20))(lVar15);
  lVar17 = **(long **)(param_1 + 0x1f8);
  bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar17 + 0x20) * 4];
  (**(code **)(*(long *)(param_1 + 0x1f0) + 0x18))(lVar15);
  if (bVar4 != 0) {
    uVar12 = (ulong)*(ushort *)(lVar17 + 0x1c);
    puVar11 = (undefined4 *)(param_1 + 0x278);
    uVar16 = (ulong)bVar4 & 3;
    if (bVar4 < 4) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      puVar14 = (undefined4 *)(uVar12 + lVar10 + 8);
      do {
        lVar17 = lVar17 + -4;
        puVar14[-2] = *puVar11;
        puVar14[-1] = puVar11[1];
        *puVar14 = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar11 = puVar11 + 4;
        puVar14[1] = *puVar1;
        puVar14 = puVar14 + 4;
      } while (-lVar17 != ((ulong)bVar4 & 0xfc));
      lVar17 = -lVar17;
    }
    if ((bVar4 & 3) != 0) {
      puVar14 = (undefined4 *)(lVar10 + uVar12 + lVar17 * 4);
      do {
        uVar16 = uVar16 - 1;
        *puVar14 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
      } while (uVar16 != 0);
    }
  }
  bVar4 = *(byte *)(param_1 + 0x229);
  uVar5 = *(ushort *)(param_1 + 0x22a);
  iVar2 = *(int *)(param_1 + 0x220);
  iVar8 = (**(code **)(*(long *)(param_1 + 0x1f0) + 0x20))(lVar15);
  iVar6 = (**(code **)(*(long *)(param_1 + 0x1f0) + 0x20))(lVar15);
  lVar15 = *(long *)(param_1 + 0x210);
  if (lVar15 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x220);
    iVar7 = *(int *)(param_1 + 0x208);
    uVar9 = (**(code **)PTR_DAT_04bcf030)(lVar15);
    if ((uVar9 >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x03a6e370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_04c61fd8)(lVar15,iVar7 + (uint)uVar5 * (uint)bVar4 * ((iVar2 + iVar8) - 1U & -iVar6),
                      uVar3);
      return;
    }
  }
  return;
}

