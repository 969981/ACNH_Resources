
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0388d4f0(long param_1)

{
  MutexType *pMVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  ulong *puVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  
  puVar8 = PTR_DAT_04bcb7d8;
  pMVar1 = (MutexType *)(*(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x68) + 0x68);
  nn::os::LockMutex(pMVar1);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x1a8) != 0) {
    lVar16 = *(long *)(param_1 + 0x1b0);
    iVar17 = 0;
    do {
      puVar19 = (undefined8 *)(lVar16 + (long)iVar17 * 0x30);
      *puVar19 = 0;
      *(undefined1 *)(puVar19 + 1) = 0;
      piVar11 = (int *)(puVar19 + 2);
      if (0 < *piVar11) {
        lVar21 = 0;
        lVar22 = lVar16 + (long)iVar17 * 0x30;
        puVar23 = (undefined8 *)(lVar22 + 0x20);
        puVar19 = (undefined8 *)*puVar23;
        do {
          puVar24 = *(undefined8 **)(*(long *)(lVar22 + 0x18) + lVar21 * 8);
          lVar21 = lVar21 + 1;
          *puVar24 = puVar19;
          *puVar23 = puVar24;
          puVar19 = puVar24;
        } while (lVar21 < *piVar11);
      }
      *piVar11 = 0;
      iVar17 = iVar17 + 1;
    } while (*(int *)(param_1 + 0x1a8) != iVar17);
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0x100) < 1) {
    puVar19 = *(undefined8 **)(param_1 + 0x110);
  }
  else {
    lVar16 = 0;
    puVar23 = *(undefined8 **)(param_1 + 0x110);
    do {
      puVar19 = *(undefined8 **)(*(long *)(param_1 + 0x108) + lVar16 * 8);
      lVar16 = lVar16 + 1;
      *puVar19 = puVar23;
      *(undefined8 **)(param_1 + 0x110) = puVar19;
      puVar23 = puVar19;
    } while (lVar16 < *(int *)(param_1 + 0x100));
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_1 + 0x91);
  if (puVar19 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x110) = *puVar19;
  }
  puVar19[1] = 0;
  puVar19[2] = 0;
  *puVar19 = 0;
  if (*(int *)(param_1 + 0x100) < *(int *)(param_1 + 0x104)) {
    *(undefined8 **)(*(long *)(param_1 + 0x108) + (long)*(int *)(param_1 + 0x100) * 8) = puVar19;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  }
  uVar5 = *(undefined2 *)(param_1 + 0x98);
  uVar20 = *(undefined8 *)(param_1 + 0x88);
  *(undefined2 *)(puVar19 + 1) = *(undefined2 *)(param_1 + 0x90);
  *puVar19 = uVar20;
  *(undefined2 *)(puVar19 + 2) = uVar5;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  uVar9 = (ulong)*(uint *)(param_1 + 8);
  if ((int)*(uint *)(param_1 + 8) < 1) {
    iVar15 = 0;
    iVar17 = 0;
  }
  else {
    uVar18 = 0;
    iVar17 = 0;
    iVar15 = 0;
    puVar2 = (ulong *)(param_1 + 0x178);
    do {
      if (uVar18 < uVar9) {
        lVar16 = *(long *)(*(long *)(param_1 + 0x10) + uVar18 * 8);
        if (*(long *)(lVar16 + 0x10) != 0) goto LAB_0388d71c;
      }
      else if (_DAT_00000010 != 0) {
        lVar16 = 0;
LAB_0388d71c:
        if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
          *(long *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) = lVar16;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          uVar9 = (ulong)*(uint *)(param_1 + 8);
        }
        lVar16 = *(long *)(param_1 + 0x10);
        lVar21 = *(long *)(lVar16 + uVar18 * 8);
        cVar4 = *(char *)(lVar21 + 0x21);
        if ((cVar4 != -1 && *(char *)(param_1 + 0x99) != cVar4) &&
           (0 < (int)*(uint *)(param_1 + 0x158))) {
          iVar13 = 0;
          uVar10 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x160) + uVar10) == cVar4) {
              if ((((uint)uVar10 ^ 0xffffffff) & 0xff) != 0) {
                iVar3 = *(int *)(lVar21 + 8);
                puVar14 = (ulong *)(param_1 + 0x188);
                if (iVar3 == 2) {
LAB_0388d7c8:
                  *puVar14 = *puVar14 | 1L << ((ulong)(uint)(iVar13 >> 0x18) & 0x3f);
                }
                else if (iVar3 == 3) {
                  puVar14 = (ulong *)(param_1 + 400);
                  goto LAB_0388d7c8;
                }
                if (*(int *)(param_1 + 0x138) < *(int *)(param_1 + 0x13c)) {
                  *(undefined8 *)(*(long *)(param_1 + 0x140) + (long)*(int *)(param_1 + 0x138) * 8)
                       = *(undefined8 *)(lVar16 + uVar18 * 8);
                  *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
                  uVar9 = (ulong)*(uint *)(param_1 + 8);
                }
                lVar16 = *(long *)(*(long *)puVar8 + 0x68);
                uVar20 = *(undefined8 *)(lVar16 + 0x18);
                if (uVar18 < uVar9) {
                  lVar21 = *(long *)(*(long *)(param_1 + 0x10) + uVar18 * 8);
                }
                else {
                  lVar21 = 0;
                }
                if (((*(long *)(lVar16 + 0x10) != *(long *)(lVar21 + 0x10)) ||
                    ((uint)*(byte *)(lVar21 + 0x18) != ((uint)uVar20 & 0xff))) ||
                   ((uint)*(byte *)(lVar21 + 0x19) != ((uint)((ulong)uVar20 >> 8) & 0xff))) {
                  if (uVar18 < uVar9) {
                    uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar18 * 8);
                  }
                  else {
                    uVar20 = 0;
                  }
                  if (*(int *)(param_1 + 0x148) < *(int *)(param_1 + 0x14c)) {
                    *(undefined8 *)
                     (*(long *)(param_1 + 0x150) + (long)*(int *)(param_1 + 0x148) * 8) = uVar20;
                    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
                  }
                }
                goto LAB_0388d834;
              }
              break;
            }
            uVar10 = uVar10 + 1;
            iVar13 = iVar13 + 0x1000000;
          } while (*(uint *)(param_1 + 0x158) != uVar10);
        }
        uVar10 = 0xff;
LAB_0388d834:
        *(char *)(*(long *)(*(long *)(param_1 + 0x10) + uVar18 * 8) + 0x22) = (char)uVar10;
        uVar9 = (ulong)*(uint *)(param_1 + 8);
        if (uVar18 < uVar9) {
          iVar13 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + uVar18 * 8) + 8);
          if (iVar13 == 2) {
            *puVar2 = *puVar2 | 1L << (uVar18 & 0x3f);
            uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar18 * 8);
            goto LAB_0388d8ac;
          }
          if (iVar13 == 3) {
            *(ulong *)(param_1 + 0x180) = *(ulong *)(param_1 + 0x180) | 1L << (uVar18 & 0x3f);
          }
        }
        else {
          uVar20 = 0;
          *puVar2 = *puVar2 | 1L << (uVar18 & 0x3f);
LAB_0388d8ac:
          if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x3c)) {
            *(undefined8 *)(*(long *)(param_1 + 0x40) + (long)*(int *)(param_1 + 0x38) * 8) = uVar20
            ;
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
            uVar9 = (ulong)*(uint *)(param_1 + 8);
          }
          lVar16 = *(long *)(*(long *)puVar8 + 0x68);
          uVar20 = *(undefined8 *)(lVar16 + 0x18);
          if (uVar18 < uVar9) {
            lVar21 = *(long *)(*(long *)(param_1 + 0x10) + uVar18 * 8);
          }
          else {
            lVar21 = 0;
          }
          if (((*(long *)(lVar16 + 0x10) != *(long *)(lVar21 + 0x10)) ||
              ((uint)*(byte *)(lVar21 + 0x18) != ((uint)uVar20 & 0xff))) ||
             ((uint)*(byte *)(lVar21 + 0x19) != ((uint)((ulong)uVar20 >> 8) & 0xff))) {
            if (uVar18 < uVar9) {
              uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar18 * 8);
            }
            else {
              uVar20 = 0;
            }
            if (*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x4c)) {
              *(undefined8 *)(*(long *)(param_1 + 0x50) + (long)*(int *)(param_1 + 0x48) * 8) =
                   uVar20;
              *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
              uVar9 = (ulong)*(uint *)(param_1 + 8);
            }
          }
        }
        if (uVar18 < uVar9) {
          lVar16 = *(long *)(*(long *)(param_1 + 0x10) + uVar18 * 8);
        }
        else {
          lVar16 = 0;
        }
        uVar6 = *(uint *)(param_1 + 0x1a8);
        if (0 < (int)uVar6) {
          uVar9 = 0;
          piVar11 = (int *)(*(long *)(param_1 + 0x1b0) + 0x10);
          do {
            if (*(long *)(piVar11 + -4) == 0) goto LAB_0388da64;
            if ((*(long *)(lVar16 + 0x10) == *(long *)(piVar11 + -4)) &&
               (*(char *)(lVar16 + 0x19) == (char)piVar11[-2])) {
              puVar19 = *(undefined8 **)(piVar11 + 4);
              goto joined_r0x0388d9d4;
            }
            uVar9 = uVar9 + 1;
            piVar11 = piVar11 + 0xc;
          } while (uVar6 != uVar9);
        }
        uVar9 = 0xffffffff;
LAB_0388da64:
        uVar12 = (uint)uVar9;
        uVar7 = uVar12;
        if (uVar6 <= uVar12) {
          uVar7 = 0;
        }
        *(long *)(*(long *)(param_1 + 0x1b0) + (long)(int)uVar7 * 0x30) = *(long *)(lVar16 + 0x10);
        uVar6 = uVar12;
        if (*(uint *)(param_1 + 0x1a8) <= uVar12) {
          uVar6 = 0;
        }
        *(undefined1 *)(*(long *)(param_1 + 0x1b0) + (long)(int)uVar6 * 0x30 + 8) =
             *(undefined1 *)(lVar16 + 0x19);
        if (*(uint *)(param_1 + 0x1a8) <= uVar12) {
          uVar12 = 0;
        }
        lVar16 = *(long *)(param_1 + 0x1b0) + (long)(int)uVar12 * 0x30;
        piVar11 = (int *)(lVar16 + 0x10);
        puVar19 = *(undefined8 **)(lVar16 + 0x20);
joined_r0x0388d9d4:
        if (puVar19 != (undefined8 *)0x0) {
          *(undefined8 *)(piVar11 + 4) = *puVar19;
        }
        puVar19[1] = 0;
        puVar19[2] = 0;
        *puVar19 = 0;
        if (*piVar11 < piVar11[1]) {
          *(undefined8 **)(*(long *)(piVar11 + 2) + (long)*piVar11 * 8) = puVar19;
          *piVar11 = *piVar11 + 1;
        }
        lVar16 = *(long *)(*(long *)(param_1 + 0x10) + uVar18 * 8);
        uVar5 = *(undefined2 *)(lVar16 + 0x20);
        uVar20 = *(undefined8 *)(lVar16 + 0x10);
        *(undefined2 *)(puVar19 + 1) = *(undefined2 *)(lVar16 + 0x18);
        *puVar19 = uVar20;
        *(undefined2 *)(puVar19 + 2) = uVar5;
        uVar9 = (ulong)*(uint *)(param_1 + 8);
        if (((uVar18 < uVar9) &&
            (lVar16 = *(long *)(*(long *)(param_1 + 0x10) + uVar18 * 8),
            *(char *)(lVar16 + 0x18) == '\0')) && (iVar17 = iVar17 + 1, *(int *)(lVar16 + 8) == 2))
        {
          iVar15 = iVar15 + 1;
        }
      }
      uVar18 = uVar18 + 1;
    } while ((long)uVar18 < (long)(int)uVar9);
  }
  *(int *)(param_1 + 0x1bc) = iVar17;
  *(int *)(param_1 + 0x198) = iVar15;
  FUN_0388dbe0();
  FUN_0388dbe0((undefined4 *)(param_1 + 0x48),(undefined4 *)(param_1 + 0x68));
  uVar9 = *(ulong *)(param_1 + 0x178);
  uVar7 = (uint)(uVar9 >> 0x20);
  uVar6 = (int)uVar9 - ((uint)(uVar9 >> 1) & 0x55555555);
  uVar7 = uVar7 - (uVar7 >> 1 & 0x55555555);
  *(ulong *)(param_1 + 0x178) = uVar9 & (*(ulong *)(param_1 + 0x180) ^ 0xffffffffffffffff);
  uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
  uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
  uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
  uVar6 = uVar6 + (uVar6 >> 8);
  uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
  uVar7 = uVar7 + (uVar7 >> 8);
  *(uint *)(param_1 + 0x19c) = (uVar7 + (uVar7 >> 0x10) & 0x3f) + (uVar6 + (uVar6 >> 0x10) & 0x3f);
  nn::os::UnlockMutex(pMVar1);
  return;
}

