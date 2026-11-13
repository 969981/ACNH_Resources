
/* WARNING: Removing unreachable block (ram,0x0131bbd8) */
/* WARNING: Removing unreachable block (ram,0x0131bbe8) */
/* WARNING: Removing unreachable block (ram,0x0131bc14) */
/* WARNING: Removing unreachable block (ram,0x0131bc24) */

void FUN_0131bad0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined *puVar13;
  undefined2 *puVar14;
  int iVar15;
  int iVar16;
  
  puVar13 = PTR_DAT_04bbc2f8;
  sVar9 = *(short *)(param_2 + 4);
  sVar10 = *(short *)(param_2 + 8);
  sVar11 = *(short *)(param_2 + 6);
  sVar12 = *(short *)(param_2 + 10);
  iVar1 = (int)sVar9;
  if (sVar10 <= sVar9) {
    iVar1 = (int)sVar10;
  }
  iVar2 = (int)sVar9;
  if (sVar9 <= sVar10) {
    iVar2 = (int)sVar10;
  }
  iVar15 = (int)sVar11;
  if (sVar12 <= sVar11) {
    iVar15 = (int)sVar12;
  }
  iVar3 = (int)sVar11;
  if (sVar11 <= sVar12) {
    iVar3 = (int)sVar12;
  }
  if (iVar3 + 1 != iVar15) {
    iVar16 = iVar1;
    do {
      sVar9 = *(short *)(param_1 + 4);
      sVar10 = *(short *)(param_1 + 8);
      sVar11 = *(short *)(param_1 + 6);
      sVar12 = *(short *)(param_1 + 10);
      iVar4 = (int)sVar9;
      if (sVar10 <= sVar9) {
        iVar4 = (int)sVar10;
      }
      iVar5 = (int)sVar9;
      if (sVar9 <= sVar10) {
        iVar5 = (int)sVar10;
      }
      iVar6 = (int)sVar11;
      if (sVar12 <= sVar11) {
        iVar6 = (int)sVar12;
      }
      iVar7 = (int)sVar11;
      if (sVar11 <= sVar12) {
        iVar7 = (int)sVar12;
      }
      if ((((iVar4 <= iVar16 && iVar16 <= iVar5) && iVar6 <= iVar15) && iVar15 <= iVar7) &&
         ((uint)(iVar16 - iVar4) < 3 && (uint)(iVar15 - iVar6) < 3)) {
        puVar14 = (undefined2 *)
                  (param_1 + 0xc + (ulong)(uint)((iVar15 - iVar6) * 3 + (iVar16 - iVar4)) * 0xe);
        sVar9 = *(short *)(param_2 + 6);
        if (*(short *)(param_2 + 10) <= *(short *)(param_2 + 6)) {
          sVar9 = *(short *)(param_2 + 10);
        }
        sVar10 = *(short *)(param_2 + 4);
        if (*(short *)(param_2 + 8) <= *(short *)(param_2 + 4)) {
          sVar10 = *(short *)(param_2 + 8);
        }
        puVar8 = (undefined2 *)
                 (param_2 + 0xc + (ulong)(uint)((iVar16 - sVar10) + (iVar15 - sVar9) * 3) * 0xe);
        if (2 < (uint)(iVar16 - sVar10) || 2 < (uint)(iVar15 - sVar9)) {
          puVar8 = (undefined2 *)puVar13;
        }
        *puVar14 = *puVar8;
        puVar14[1] = puVar8[1];
        *(undefined1 *)(puVar14 + 2) = *(undefined1 *)(puVar8 + 2);
        puVar14[3] = puVar8[3];
        puVar14[4] = puVar8[4];
        *(undefined1 *)(puVar14 + 5) = *(undefined1 *)(puVar8 + 5);
        *(undefined1 *)(puVar14 + 6) = *(undefined1 *)(puVar8 + 6);
      }
      if (iVar16 < iVar2) {
        iVar16 = iVar16 + 1;
      }
      else {
        iVar15 = iVar15 + 1;
        iVar16 = iVar1;
      }
    } while ((iVar1 != iVar16) || (iVar3 + 1 != iVar15));
  }
  return;
}

