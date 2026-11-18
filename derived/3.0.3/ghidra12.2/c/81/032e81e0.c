
void FUN_032e81e0(int *param_1)

{
  bool bVar1;
  undefined2 *puVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  
  iVar5 = param_1[0x183];
  iVar10 = param_1[0x184];
  if (((iVar5 < iVar10 && 0 < iVar10) && (iVar10 <= *(int *)(*(long *)(param_1 + 8) + 0xc))) &&
     (lVar11 = *(long *)PTR_DAT_04bc1118, uVar3 = *(uint *)(*(long *)(lVar11 + 0x20) + 0x1050),
     uVar3 < 10 && (1 << (ulong)(uVar3 & 0x1f) & 0x319U) != 0)) {
    uVar13 = (ulong)(iVar10 - 1);
    iVar15 = -iVar10;
    uVar14 = uVar13;
    do {
      iVar15 = iVar15 + 1;
      lVar17 = *(long *)(lVar11 + 0x20);
      iVar12 = (int)uVar14;
      if ((*(int *)(lVar17 + 0x1050) == 1) ||
         ((*(char *)(lVar17 + 0x106a) == '\0' &&
          (*(char *)(lVar17 + 0x16408) == '\0' || *(int *)(lVar17 + 0x1568) != 0)))) {
        uVar18 = -(uVar13 >> 0x1f) & 0xfffffffe00000000 | uVar13 << 1;
        plVar16 = *(long **)(param_1 + 8);
        lVar17 = 0;
        bVar1 = false;
        lVar7 = *plVar16;
        uVar4 = *(ushort *)(lVar7 + uVar14 * 2);
        do {
          if (*(ushort *)((long)&DAT_0418e098 + lVar17) <= uVar4) {
            bVar1 = (bool)(uVar4 <= *(ushort *)((long)&DAT_0418e09a + lVar17) | bVar1);
          }
          if (*(ushort *)((long)&DAT_0418e09c + lVar17) <= uVar4) {
            bVar1 = (bool)(uVar4 <= *(ushort *)((long)&DAT_0418e09e + lVar17) | bVar1);
          }
          if (*(ushort *)((long)&DAT_0418e0a0 + lVar17) <= uVar4) {
            bVar1 = (bool)(uVar4 <= *(ushort *)((long)&DAT_0418e0a2 + lVar17) | bVar1);
          }
          lVar17 = lVar17 + 0xc;
        } while (lVar17 != 0x15c);
        if (!bVar1) {
          iVar9 = *(int *)((long)plVar16 + 0xc);
          if (iVar9 != 0) {
            uVar3 = iVar9 - iVar12;
            if (uVar3 != 0 && iVar12 <= iVar9) {
              uVar3 = 1;
            }
            uVar6 = (iVar9 - iVar12) - uVar3;
            if (0 < (int)uVar6) {
              if (uVar6 < 4) {
                uVar8 = 0;
              }
              else {
                lVar17 = uVar18 + (long)(int)uVar3 * 2;
                uVar8 = 0;
                do {
                  lVar19 = uVar8 * 2;
                  uVar8 = uVar8 + 4;
                  *(undefined2 *)(*plVar16 + uVar18 + lVar19) =
                       *(undefined2 *)(*plVar16 + lVar17 + lVar19);
                  lVar7 = lVar17 + lVar19;
                  lVar19 = uVar18 + lVar19;
                  *(undefined2 *)(*plVar16 + lVar19 + 2) = *(undefined2 *)(*plVar16 + lVar7 + 2);
                  *(undefined2 *)(*plVar16 + lVar19 + 4) = *(undefined2 *)(*plVar16 + lVar7 + 4);
                  *(undefined2 *)(*plVar16 + lVar19 + 6) = *(undefined2 *)(*plVar16 + lVar7 + 6);
                } while (((ulong)((iVar9 + iVar15) - uVar3) & 0xfffffffc) != uVar8);
              }
              if ((uVar6 & 3) != 0) {
                lVar17 = uVar8 + (long)(int)uVar13;
                uVar18 = (ulong)((iVar15 + iVar9) - uVar3) & 3;
                do {
                  uVar18 = uVar18 - 1;
                  puVar2 = (undefined2 *)(*plVar16 + lVar17 * 2);
                  lVar17 = lVar17 + 1;
                  *puVar2 = *(undefined2 *)
                             ((long)puVar2 +
                             (-(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1));
                } while (uVar18 != 0);
              }
              iVar9 = *(int *)((long)plVar16 + 0xc);
              lVar7 = *plVar16;
            }
            *(uint *)((long)plVar16 + 0xc) = iVar9 - uVar3;
            *(undefined2 *)(lVar7 + (long)(int)(iVar9 - uVar3) * 2) = 0;
          }
          if (iVar10 <= *param_1) {
            *param_1 = *param_1 + -1;
          }
        }
      }
      uVar13 = (ulong)((int)uVar13 - 1);
      bVar1 = (long)iVar5 < (long)uVar14;
      uVar14 = uVar14 - 1;
      iVar10 = iVar12;
    } while (bVar1);
  }
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  *(undefined2 *)(param_1 + 400) = 0;
  param_1[0x187] = -1;
  param_1[0x188] = -1;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  nn::kpr::KeyCodeComposer::Clear();
  *(undefined2 *)(param_1 + 0x197) = 0;
  param_1[0x189] = -1;
  param_1[0x196] = 0;
  **(undefined2 **)(param_1 + 0x1a8) = 0;
  **(undefined2 **)(param_1 + 0x1de) = 0;
  param_1[0x11d] = 0;
  **(undefined2 **)(param_1 + 0x11a) = 0;
  param_1[0x183] = -1;
  param_1[0x184] = -1;
  return;
}

