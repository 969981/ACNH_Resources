
void FUN_03a51170(long param_1)

{
  float *pfVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  int local_6c;
  long local_68;
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    return;
  }
  local_6c = *(int *)(param_1 + 0x30);
  if (local_6c != 0) {
    local_68 = *(long *)(param_1 + 0x38);
    iVar9 = *(int *)(param_1 + 0x330);
    if (0 < iVar9) {
      iVar11 = 0;
      do {
        if ((0 < iVar9) && (iVar5 = *(int *)(param_1 + 0x310), 0 < iVar5)) {
          uVar18 = 0;
          lVar12 = local_68 + (long)iVar11 * 0x108;
          lVar10 = local_68 + (long)iVar11 * 0x108;
          plVar13 = (long *)(lVar12 + 0x78);
          do {
            if (0 < iVar5) {
              lVar16 = 0;
              do {
                lVar17 = *(long *)(lVar12 + 0x88);
                (**(code **)(*plVar13 + 0x20))(plVar13);
                (**(code **)(*plVar13 + 0x20))(plVar13);
                lVar14 = **(long **)(lVar12 + 0x80);
                (**(code **)(*plVar13 + 0x18))(plVar13,*(undefined1 *)(lVar14 + 8));
                fVar19 = *(float *)((ulong)*(ushort *)(lVar14 + 4) + lVar17 +
                                   (lVar16 + (long)*(int *)(param_1 + 0x310) * (long)(int)uVar18) *
                                   4);
                if (*(int *)(param_1 + 0x48) == 3) {
                  fVar20 = fVar19 + 6.2831855;
                  if (0.0 <= fVar19) {
                    fVar20 = fVar19;
                  }
                  fVar19 = fVar20 / 6.2831855;
                }
                uVar15 = (uint)lVar16;
                lVar16 = lVar16 + 1;
                pfVar1 = (float *)(*(long *)(lVar10 + 0x100) +
                                  (long)(int)(uVar15 + uVar18 * *(uint *)(lVar10 + 0xf8)) * 4);
                if (*(uint *)(lVar10 + 0xfc) <= uVar18 || *(uint *)(lVar10 + 0xf8) <= uVar15) {
                  pfVar1 = (float *)0x0;
                }
                *pfVar1 = fVar19;
                iVar5 = *(int *)(param_1 + 0x310);
              } while ((int)lVar16 < iVar5);
              iVar9 = *(int *)(param_1 + 0x330);
            }
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < iVar9);
        }
        iVar11 = iVar11 + 1;
      } while (local_6c != iVar11);
      local_6c = *(int *)(param_1 + 0x30);
      if (local_6c == 0) goto LAB_03a5144c;
      local_68 = *(long *)(param_1 + 0x38);
    }
    puVar4 = PTR_DAT_04bb2cd8;
    iVar9 = 0;
    do {
      plVar13 = (long *)(local_68 + (long)iVar9 * 0x108);
      bVar2 = *(byte *)(plVar13 + 7);
      uVar3 = *(ushort *)((long)plVar13 + 0x3a);
      lVar10 = plVar13[6];
      uVar18 = *(byte *)((long)plVar13 + 0x39) + 1;
      uVar15 = 0;
      if (bVar2 != 0) {
        uVar15 = uVar18 / bVar2;
      }
      iVar11 = uVar18 - uVar15 * bVar2;
      *(char *)((long)plVar13 + 0x39) = (char)iVar11;
      iVar5 = (**(code **)(*plVar13 + 0x20))(plVar13);
      iVar6 = (**(code **)(*plVar13 + 0x20))(plVar13);
      lVar16 = plVar13[3];
      lVar12 = 0;
      if (plVar13[4] != 0) {
        lVar12 = (**(code **)puVar4)();
      }
      plVar13[2] = lVar12 + (ulong)((int)lVar16 +
                                   (uint)uVar3 * iVar11 * (((int)lVar10 + iVar5) - 1U & -iVar6));
      lVar10 = local_68 + (long)iVar9 * 0x108;
      plVar13 = (long *)(lVar10 + 0x78);
      bVar2 = *(byte *)(lVar10 + 0xb0);
      uVar3 = *(ushort *)(lVar10 + 0xb2);
      iVar11 = *(int *)(lVar10 + 0xa8);
      uVar18 = *(byte *)(lVar10 + 0xb1) + 1;
      uVar15 = 0;
      if (bVar2 != 0) {
        uVar15 = uVar18 / bVar2;
      }
      iVar6 = uVar18 - uVar15 * bVar2;
      *(char *)(lVar10 + 0xb1) = (char)iVar6;
      iVar7 = (**(code **)(*plVar13 + 0x20))(plVar13);
      iVar8 = (**(code **)(*plVar13 + 0x20))(plVar13);
      iVar5 = *(int *)(lVar10 + 0x90);
      lVar12 = 0;
      if (*(long *)(lVar10 + 0x98) != 0) {
        lVar12 = (**(code **)puVar4)();
      }
      *(ulong *)(lVar10 + 0x88) =
           lVar12 + (ulong)(iVar5 + (uint)uVar3 * iVar6 * ((iVar11 + iVar7) - 1U & -iVar8));
      iVar9 = iVar9 + 1;
    } while (local_6c != iVar9);
  }
LAB_03a5144c:
  if ((*(int *)(param_1 + 0x48) != 1) && (*(int *)(param_1 + 0x4c) != 1)) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  return;
}

