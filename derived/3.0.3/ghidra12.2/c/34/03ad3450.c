
undefined8 FUN_03ad3450(long param_1,undefined8 *param_2)

{
  bool bVar1;
  MutexType *pMVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  char *pcVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  
  FUN_003a28b0(param_2);
  iVar14 = *(int *)(param_1 + 8);
  plVar11 = (long *)*param_2;
  if (0 < iVar14) {
    if (*(long *)(*plVar11 + 0x20) == 0) {
      lVar15 = *(long *)(*plVar11 + 0x10);
      if (lVar15 != 0) {
        uVar7 = (ulong)*(ushort *)(lVar15 + 0xc);
        uVar3 = ((int *)(lVar15 + 8))[uVar7 * 4];
        uVar8 = (ulong)uVar3;
        if (*(int *)(lVar15 + 8) < (int)uVar3) {
          pcVar12 = *(char **)(param_1 + 0x10);
          if (pcVar12 == (char *)0x0) {
            uVar10 = 0;
          }
          else {
            uVar10 = strlen(pcVar12);
          }
          do {
            uVar9 = (long)(uVar8 << 0x20) >> 0x23;
            if (uVar9 < uVar10) {
              uVar9 = (ulong)((byte)pcVar12[uVar10 + ~uVar9] >> (uVar8 & 7)) & 1;
            }
            else {
              uVar9 = 0;
            }
            uVar7 = (ulong)*(ushort *)(lVar15 + 8 + uVar7 * 0x10 + uVar9 * 2 + 4);
            uVar3 = *(uint *)(lVar15 + 8 + uVar7 * 0x10);
            iVar14 = (int)uVar8;
            uVar8 = (ulong)uVar3;
          } while (iVar14 < (int)uVar3);
        }
      }
    }
    else {
      lVar15 = 0;
      do {
        pcVar12 = (char *)((undefined8 *)(param_1 + 0x10))[lVar15];
        lVar17 = *(long *)*param_2;
        lVar13 = *(long *)(lVar17 + 0x20);
        if (lVar13 == 0) {
LAB_03ad3524:
          lVar13 = *(long *)(lVar17 + 0x10);
          if (lVar13 != 0) {
            if (pcVar12 == (char *)0x0) {
              uVar7 = 0;
            }
            else {
              uVar7 = strlen(pcVar12);
            }
            uVar8 = (ulong)*(ushort *)(lVar13 + 0xc);
            uVar3 = ((int *)(lVar13 + 8))[uVar8 * 4];
            if (*(int *)(lVar13 + 8) < (int)uVar3) {
              do {
                uVar10 = (long)((ulong)uVar3 << 0x20) >> 0x23;
                if (uVar10 < uVar7) {
                  uVar10 = (ulong)((byte)pcVar12[uVar7 + ~uVar10] >> ((ulong)uVar3 & 7)) & 1;
                }
                else {
                  uVar10 = 0;
                }
                uVar8 = (ulong)*(ushort *)(lVar13 + 8 + uVar8 * 0x10 + uVar10 * 2 + 4);
                uVar4 = *(uint *)(lVar13 + 8 + uVar8 * 0x10);
                bVar1 = (int)uVar3 < (int)uVar4;
                uVar3 = uVar4;
              } while (bVar1);
            }
          }
        }
        else {
          if (pcVar12 == (char *)0x0) {
            sVar6 = 0;
          }
          else {
            sVar6 = strlen(pcVar12);
          }
          uVar7 = (ulong)*(ushort *)(lVar13 + 0xc);
          puVar16 = (uint *)((int *)(lVar13 + 8) + uVar7 * 4);
          uVar3 = *puVar16;
          if (*(int *)(lVar13 + 8) < (int)*puVar16) {
            do {
              uVar8 = (long)((ulong)uVar3 << 0x20) >> 0x23;
              if (uVar8 < sVar6) {
                uVar8 = (ulong)((byte)pcVar12[sVar6 + ~uVar8] >> ((ulong)uVar3 & 7)) & 1;
              }
              else {
                uVar8 = 0;
              }
              uVar7 = (ulong)*(ushort *)(lVar13 + 8 + uVar7 * 0x10 + uVar8 * 2 + 4);
              puVar16 = (uint *)(lVar13 + 8 + uVar7 * 0x10);
              bVar1 = (int)uVar3 < (int)*puVar16;
              uVar3 = *puVar16;
            } while (bVar1);
          }
          if ((sVar6 != **(ushort **)(puVar16 + 2)) ||
             (iVar5 = memcmp(*(ushort **)(puVar16 + 2) + 1,pcVar12,sVar6), iVar5 != 0))
          goto LAB_03ad3524;
          uVar7 = (ulong)((long)puVar16 + (-0x18 - lVar13)) >> 4;
          iVar5 = (int)uVar7;
          if (iVar5 == -1) goto LAB_03ad3524;
          lVar13 = *(long *)(*(long *)(lVar17 + 0x18) + (long)iVar5 * 0x28 + 8);
          if (lVar13 != 0) {
            pcVar12 = *(char **)(param_1 + 0x110 + lVar15 * 8);
            if (pcVar12 == (char *)0x0) {
              sVar6 = 0;
            }
            else {
              sVar6 = strlen(pcVar12);
            }
            uVar8 = (ulong)*(ushort *)(lVar13 + 0xc);
            puVar16 = (uint *)((int *)(lVar13 + 8) + uVar8 * 4);
            uVar3 = *puVar16;
            if (*(int *)(lVar13 + 8) < (int)*puVar16) {
              do {
                uVar10 = (long)((ulong)uVar3 << 0x20) >> 0x23;
                if (uVar10 < sVar6) {
                  uVar10 = (ulong)((byte)pcVar12[sVar6 + ~uVar10] >> ((ulong)uVar3 & 7)) & 1;
                }
                else {
                  uVar10 = 0;
                }
                uVar8 = (ulong)*(ushort *)(lVar13 + 8 + uVar8 * 0x10 + uVar10 * 2 + 4);
                puVar16 = (uint *)(lVar13 + 8 + uVar8 * 0x10);
                bVar1 = (int)uVar3 < (int)*puVar16;
                uVar3 = *puVar16;
              } while (bVar1);
            }
            if (((sVar6 == **(ushort **)(puVar16 + 2)) &&
                (iVar5 = memcmp(*(ushort **)(puVar16 + 2) + 1,pcVar12,sVar6), iVar5 == 0)) &&
               ((int)((ulong)((long)puVar16 + (-0x18 - lVar13)) >> 4) != -1)) {
              FUN_003a292c(param_2,uVar7 & 0xffffffff);
              iVar14 = *(int *)(param_1 + 8);
            }
          }
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < iVar14);
      plVar11 = (long *)*param_2;
    }
  }
  if (*(long *)(*plVar11 + 200) == 0) {
    FUN_003a27c4(param_2,*(undefined8 *)(*(long *)PTR_DAT_04bc1010 + 0x30));
  }
  else {
    pMVar2 = (MutexType *)(*(long *)(*plVar11 + 200) + 0x20);
    nn::os::LockMutex(pMVar2);
    FUN_003a27c4(param_2,*(undefined8 *)(*(long *)PTR_DAT_04bc1010 + 0x30));
    nn::os::UnlockMutex(pMVar2);
  }
  return param_2[4];
}

