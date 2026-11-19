
void FUN_03b7e5f0(long param_1)

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  undefined *puVar8;
  byte bVar9;
  long *plVar10;
  long *plVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  void *__ptr;
  long *plVar19;
  byte *pbVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x58));
  if (*(long *)(param_1 + 0x10) != param_1 + 8) {
    lVar14 = (long)*(int *)(param_1 + 0x1c);
    lVar16 = *(long *)(param_1 + 0x10) - lVar14;
    lVar13 = lVar16 + lVar14;
    do {
      plVar19 = (long *)(lVar16 + *(int *)(param_1 + 0x1c));
      lVar13 = *(long *)(lVar13 + 8);
      if (*plVar19 != 0) {
        *(long *)(*plVar19 + 8) = plVar19[1];
      }
      if ((long *)plVar19[1] != (long *)0x0) {
        *(long *)plVar19[1] = *plVar19;
      }
      *plVar19 = 0;
      plVar19[1] = 0;
      plVar19 = (long *)(lVar16 + *(int *)(param_1 + 0x34));
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      lVar16 = *(long *)(param_1 + 0x20);
      *(long **)(param_1 + 0x20) = plVar19;
      *plVar19 = lVar16;
      plVar19[1] = param_1 + 0x20;
      if (lVar16 != 0) {
        *(long **)(lVar16 + 8) = plVar19;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      lVar16 = lVar13 - lVar14;
    } while (lVar16 != (param_1 + 8) - lVar14);
  }
  puVar8 = PTR_DAT_04bb2698;
  plVar19 = &DAT_05aebb78;
  lVar13 = 0;
  if (DAT_05aebb78 != 0) {
    lVar13 = *(long *)(DAT_05aebb78 + 0x20);
  }
  uVar6 = *(uint *)(param_1 + 0x80);
  uVar25 = 0x3f800000;
  uVar26 = 0xbf800000;
  uVar3 = *(uint *)(lVar13 + 0x10);
  if ((uVar3 != uVar6 && (uVar6 <= uVar3 && (int)uVar6 <= (int)uVar3)) &&
     (lVar13 = *(long *)(*(long *)(lVar13 + 0x18) + (long)(int)uVar6 * 8), lVar13 != 0)) {
    uVar25 = *(undefined4 *)(lVar13 + 0x50);
    uVar26 = *(undefined4 *)(lVar13 + (long)*(int *)(param_1 + 0x7c) * 4 + 0x54);
  }
  plVar1 = (long *)(param_1 + 0x20);
  if (*(long **)(param_1 + 0x28) != plVar1) {
    lVar16 = (long)*(int *)(param_1 + 0x34);
    __ptr = (void *)((long)*(long **)(param_1 + 0x28) - lVar16);
    lVar13 = (long)__ptr + lVar16;
    do {
      lVar13 = *(long *)(lVar13 + 8);
      if (*(char *)(param_1 + 0x78) == '\0') {
        plVar10 = (long *)((long)__ptr + (long)*(int *)(param_1 + 0x34));
        if (*plVar10 != 0) {
          *(long *)(*plVar10 + 8) = plVar10[1];
        }
        if ((long *)plVar10[1] != (long *)0x0) {
          *(long *)plVar10[1] = *plVar10;
        }
        *plVar10 = 0;
        plVar10[1] = 0;
        lVar14 = *(long *)puVar8;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
        if (lVar14 == 0) {
LAB_03b7e88c:
          free(__ptr);
        }
        else if (__ptr != (void *)0x0) {
LAB_03b7e7f4:
          plVar10 = (long *)FUN_038cb610(lVar14,__ptr);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x38))(plVar10,__ptr);
          }
        }
      }
      else {
        if (*(char *)((long)__ptr + 0x81) == '\0') {
          if (*(float *)((long)__ptr + 0x84) < *(float *)(param_1 + 0x88)) {
            *(float *)((long)__ptr + 0x84) =
                 *(float *)((long)__ptr + 0x84) + *(float *)(*(long *)(DAT_05aebb78 + 0x10) + 0x1c);
            cVar5 = *(char *)(param_1 + 0x90);
            goto joined_r0x03b7e83c;
          }
          if (*(char *)(param_1 + 0x90) == '\0') {
            plVar10 = (long *)((long)__ptr + (long)*(int *)(param_1 + 0x34));
            if (*plVar10 != 0) {
              *(long *)(*plVar10 + 8) = plVar10[1];
            }
            if ((long *)plVar10[1] != (long *)0x0) {
              *(long *)plVar10[1] = *plVar10;
            }
            *plVar10 = 0;
            plVar10[1] = 0;
            lVar14 = *(long *)puVar8;
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
            if (lVar14 != 0) goto LAB_03b7e7f4;
            goto LAB_03b7e88c;
          }
        }
        else {
          cVar5 = *(char *)(param_1 + 0x90);
joined_r0x03b7e83c:
          if (cVar5 == '\0') {
            if (*(char *)((long)__ptr + 0x6d) == '\0') {
              uVar21 = 0x3f800000;
              uVar23 = 0xbf800000;
            }
            else {
              uVar23 = uVar26;
              uVar21 = uVar25;
            }
            FUN_03b7f58c(uVar21,uVar23,param_1,__ptr);
          }
        }
        lVar14 = *(long *)(param_1 + 0xe8);
        if (lVar14 == 0) {
          *(undefined1 *)((long)__ptr + 0x88) = 1;
        }
        else {
          bVar9 = FUN_03b76330((long)__ptr + 0x10,*(undefined8 *)(lVar14 + 8),
                               *(undefined4 *)(lVar14 + 0x14),*(undefined1 *)(lVar14 + 0x10));
          *(byte *)((long)__ptr + 0x88) = bVar9 & 1;
        }
      }
      __ptr = (void *)(lVar13 - lVar16);
    } while (__ptr != (void *)((long)plVar1 - lVar16));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x58));
  if (*(int *)(param_1 + 0xf8) == 0) {
    if ((1 < *(int *)(param_1 + 0x30)) &&
       (plVar10 = *(long **)(*(long *)(param_1 + 0x28) + 8), plVar10 != plVar1)) {
      lVar13 = -(long)*(int *)(param_1 + 0x34);
      do {
        plVar11 = (long *)plVar10[1];
        plVar17 = (long *)*plVar10;
        fVar24 = *(float *)((long)plVar10 + lVar13 + 0x68);
        if (*(float *)((long)plVar17 + lVar13 + 0x68) < fVar24) {
          plVar15 = plVar17;
          do {
            plVar15 = (long *)*plVar15;
            plVar7 = plVar1;
            if (plVar15 == plVar1) break;
            plVar7 = plVar15;
          } while (*(float *)((long)plVar15 + lVar13 + 0x68) < fVar24);
          plVar15 = plVar11;
          if (plVar17 != (long *)0x0) {
            plVar17[1] = (long)plVar11;
            plVar15 = (long *)plVar10[1];
          }
          if (plVar15 != (long *)0x0) {
            *plVar15 = *plVar10;
          }
          *plVar10 = 0;
          plVar10[1] = 0;
          puVar18 = (undefined8 *)plVar7[1];
          plVar7[1] = (long)plVar10;
          *plVar10 = (long)plVar7;
          plVar10[1] = (long)puVar18;
          if (puVar18 != (undefined8 *)0x0) {
            *puVar18 = plVar10;
          }
        }
        plVar10 = plVar11;
      } while (plVar11 != plVar1);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0xfc);
    switch(*(undefined4 *)(param_1 + 0xf8)) {
    case 1:
      if (iVar4 == 0) {
        if ((1 < *(int *)(param_1 + 0x30)) &&
           (plVar10 = *(long **)(*(long *)(param_1 + 0x28) + 8), plVar10 != plVar1)) {
          lVar13 = -(long)*(int *)(param_1 + 0x34);
          do {
            plVar11 = (long *)plVar10[1];
            plVar17 = (long *)*plVar10;
            fVar24 = *(float *)((long)plVar10 + lVar13 + 0x68);
            if (*(float *)((long)plVar17 + lVar13 + 0x68) < fVar24) {
              plVar15 = plVar17;
              do {
                plVar15 = (long *)*plVar15;
                plVar7 = plVar1;
                if (plVar15 == plVar1) break;
                plVar7 = plVar15;
              } while (*(float *)((long)plVar15 + lVar13 + 0x68) < fVar24);
              plVar15 = plVar11;
              if (plVar17 != (long *)0x0) {
                plVar17[1] = (long)plVar11;
                plVar15 = (long *)plVar10[1];
              }
              if (plVar15 != (long *)0x0) {
                *plVar15 = *plVar10;
              }
              *plVar10 = 0;
              plVar10[1] = 0;
              puVar18 = (undefined8 *)plVar7[1];
              plVar7[1] = (long)plVar10;
              *plVar10 = (long)plVar7;
              plVar10[1] = (long)puVar18;
              if (puVar18 != (undefined8 *)0x0) {
                *puVar18 = plVar10;
              }
            }
            plVar10 = plVar11;
          } while (plVar11 != plVar1);
        }
      }
      else if ((1 < *(int *)(param_1 + 0x30)) &&
              (plVar10 = *(long **)(*(long *)(param_1 + 0x28) + 8), plVar10 != plVar1)) {
        lVar13 = (long)-*(int *)(param_1 + 0x34);
        do {
          plVar11 = (long *)plVar10[1];
          plVar17 = (long *)*plVar10;
          fVar24 = *(float *)((long)plVar10 + lVar13 + 0x68);
          if (fVar24 < *(float *)((long)plVar17 + lVar13 + 0x68)) {
            plVar15 = plVar17;
            do {
              plVar15 = (long *)*plVar15;
              plVar7 = plVar1;
              if (plVar15 == plVar1) break;
              plVar7 = plVar15;
            } while (fVar24 < *(float *)((long)plVar15 + lVar13 + 0x68));
            plVar15 = plVar11;
            if (plVar17 != (long *)0x0) {
              plVar17[1] = (long)plVar11;
              plVar15 = (long *)plVar10[1];
            }
            if (plVar15 != (long *)0x0) {
              *plVar15 = *plVar10;
            }
            *plVar10 = 0;
            plVar10[1] = 0;
            puVar18 = (undefined8 *)plVar7[1];
            plVar7[1] = (long)plVar10;
            *plVar10 = (long)plVar7;
            plVar10[1] = (long)puVar18;
            if (puVar18 != (undefined8 *)0x0) {
              *puVar18 = plVar10;
            }
          }
          plVar10 = plVar11;
        } while (plVar11 != plVar1);
      }
      break;
    case 2:
      if (iVar4 == 0) {
        if ((1 < *(int *)(param_1 + 0x30)) &&
           (plVar10 = *(long **)(*(long *)(param_1 + 0x28) + 8), plVar10 != plVar1)) {
          lVar13 = -(long)*(int *)(param_1 + 0x34);
LAB_03b7f018:
          plVar19 = (long *)*plVar10;
          plVar11 = (long *)plVar10[1];
          plVar17 = (long *)((long)plVar19 + lVar13 + 0x10);
          (**(code **)(*plVar17 + 0x18))(plVar17);
          (**(code **)(*plVar17 + 0x18))(plVar17);
          pbVar20 = *(byte **)((long)plVar19 + lVar13 + 0x18);
          plVar17 = (long *)((long)plVar10 + lVar13 + 0x10);
          (**(code **)(*plVar17 + 0x18))(plVar17);
          pbVar12 = *(byte **)((long)plVar10 + lVar13 + 0x18);
          if (pbVar20 != pbVar12) {
            pbVar20 = *(byte **)((long)plVar19 + lVar13 + 0x18);
            lVar16 = 0x7ffff;
            while( true ) {
              bVar9 = *pbVar20;
              if (bVar9 != *pbVar12) break;
              if ((bVar9 == 0) ||
                 (bVar2 = lVar16 == 0, pbVar12 = pbVar12 + 1, pbVar20 = pbVar20 + 1,
                 lVar16 = lVar16 + -1, bVar2)) goto LAB_03b7f004;
            }
            if (*pbVar12 <= bVar9) goto LAB_03b7f09c;
          }
          goto LAB_03b7f004;
        }
      }
      else if ((1 < *(int *)(param_1 + 0x30)) &&
              (plVar10 = *(long **)(*(long *)(param_1 + 0x28) + 8), plVar10 != plVar1)) {
        lVar13 = (long)-*(int *)(param_1 + 0x34);
LAB_03b7ead8:
        plVar19 = (long *)*plVar10;
        plVar11 = (long *)plVar10[1];
        plVar17 = (long *)((long)plVar10 + lVar13 + 0x10);
        (**(code **)(*plVar17 + 0x18))(plVar17);
        (**(code **)(*plVar17 + 0x18))(plVar17);
        plVar15 = (long *)((long)plVar19 + lVar13 + 0x10);
        pbVar20 = *(byte **)((long)plVar10 + lVar13 + 0x18);
        (**(code **)(*plVar15 + 0x18))(plVar15);
        pbVar12 = *(byte **)((long)plVar19 + lVar13 + 0x18);
        if (pbVar20 != pbVar12) {
          pbVar20 = *(byte **)((long)plVar10 + lVar13 + 0x18);
          lVar16 = 0x7ffff;
          while( true ) {
            bVar9 = *pbVar20;
            if (bVar9 != *pbVar12) break;
            if ((bVar9 == 0) ||
               (bVar2 = lVar16 == 0, pbVar12 = pbVar12 + 1, pbVar20 = pbVar20 + 1,
               lVar16 = lVar16 + -1, bVar2)) goto LAB_03b7eac4;
          }
          if (*pbVar12 <= bVar9) goto LAB_03b7eb58;
        }
        goto LAB_03b7eac4;
      }
      break;
    case 3:
      if (iVar4 == 0) {
        if ((1 < *(int *)(param_1 + 0x30)) &&
           (plVar10 = *(long **)(*(long *)(param_1 + 0x28) + 8), plVar10 != plVar1)) {
          lVar13 = -(long)*(int *)(param_1 + 0x34);
          do {
            plVar11 = (long *)plVar10[1];
            plVar17 = (long *)*plVar10;
            fVar24 = *(float *)((long)plVar10 + lVar13 + 0x98);
            if (fVar24 < *(float *)((long)plVar17 + lVar13 + 0x98)) {
              plVar15 = plVar17;
              do {
                plVar15 = (long *)*plVar15;
                plVar7 = plVar1;
                if (plVar15 == plVar1) break;
                plVar7 = plVar15;
              } while (fVar24 < *(float *)((long)plVar15 + lVar13 + 0x98));
              plVar15 = plVar11;
              if (plVar17 != (long *)0x0) {
                plVar17[1] = (long)plVar11;
                plVar15 = (long *)plVar10[1];
              }
              if (plVar15 != (long *)0x0) {
                *plVar15 = *plVar10;
              }
              *plVar10 = 0;
              plVar10[1] = 0;
              puVar18 = (undefined8 *)plVar7[1];
              plVar7[1] = (long)plVar10;
              *plVar10 = (long)plVar7;
              plVar10[1] = (long)puVar18;
              if (puVar18 != (undefined8 *)0x0) {
                *puVar18 = plVar10;
              }
            }
            plVar10 = plVar11;
          } while (plVar11 != plVar1);
        }
      }
      else if ((1 < *(int *)(param_1 + 0x30)) &&
              (plVar10 = *(long **)(*(long *)(param_1 + 0x28) + 8), plVar10 != plVar1)) {
        lVar13 = (long)-*(int *)(param_1 + 0x34);
        do {
          plVar11 = (long *)plVar10[1];
          plVar17 = (long *)*plVar10;
          fVar24 = *(float *)((long)plVar10 + lVar13 + 0x98);
          if (*(float *)((long)plVar17 + lVar13 + 0x98) < fVar24) {
            plVar15 = plVar17;
            do {
              plVar15 = (long *)*plVar15;
              plVar7 = plVar1;
              if (plVar15 == plVar1) break;
              plVar7 = plVar15;
            } while (*(float *)((long)plVar15 + lVar13 + 0x98) < fVar24);
            plVar15 = plVar11;
            if (plVar17 != (long *)0x0) {
              plVar17[1] = (long)plVar11;
              plVar15 = (long *)plVar10[1];
            }
            if (plVar15 != (long *)0x0) {
              *plVar15 = *plVar10;
            }
            *plVar10 = 0;
            plVar10[1] = 0;
            puVar18 = (undefined8 *)plVar7[1];
            plVar7[1] = (long)plVar10;
            *plVar10 = (long)plVar7;
            plVar10[1] = (long)puVar18;
            if (puVar18 != (undefined8 *)0x0) {
              *puVar18 = plVar10;
            }
          }
          plVar10 = plVar11;
        } while (plVar11 != plVar1);
      }
      break;
    case 4:
      if (iVar4 == 0) {
        if ((1 < *(int *)(param_1 + 0x30)) &&
           (plVar10 = *(long **)(*(long *)(param_1 + 0x28) + 8), plVar10 != plVar1)) {
          lVar13 = -(long)*(int *)(param_1 + 0x34);
          do {
            plVar11 = (long *)plVar10[1];
            plVar17 = (long *)*plVar10;
            fVar24 = *(float *)((long)plVar10 + lVar13 + 0x9c);
            if (fVar24 < *(float *)((long)plVar17 + lVar13 + 0x9c)) {
              plVar15 = plVar17;
              do {
                plVar15 = (long *)*plVar15;
                plVar7 = plVar1;
                if (plVar15 == plVar1) break;
                plVar7 = plVar15;
              } while (fVar24 < *(float *)((long)plVar15 + lVar13 + 0x9c));
              plVar15 = plVar11;
              if (plVar17 != (long *)0x0) {
                plVar17[1] = (long)plVar11;
                plVar15 = (long *)plVar10[1];
              }
              if (plVar15 != (long *)0x0) {
                *plVar15 = *plVar10;
              }
              *plVar10 = 0;
              plVar10[1] = 0;
              puVar18 = (undefined8 *)plVar7[1];
              plVar7[1] = (long)plVar10;
              *plVar10 = (long)plVar7;
              plVar10[1] = (long)puVar18;
              if (puVar18 != (undefined8 *)0x0) {
                *puVar18 = plVar10;
              }
            }
            plVar10 = plVar11;
          } while (plVar11 != plVar1);
        }
      }
      else if ((1 < *(int *)(param_1 + 0x30)) &&
              (plVar10 = *(long **)(*(long *)(param_1 + 0x28) + 8), plVar10 != plVar1)) {
        lVar13 = (long)-*(int *)(param_1 + 0x34);
        do {
          plVar11 = (long *)plVar10[1];
          plVar17 = (long *)*plVar10;
          fVar24 = *(float *)((long)plVar10 + lVar13 + 0x9c);
          if (*(float *)((long)plVar17 + lVar13 + 0x9c) < fVar24) {
            plVar15 = plVar17;
            do {
              plVar15 = (long *)*plVar15;
              plVar7 = plVar1;
              if (plVar15 == plVar1) break;
              plVar7 = plVar15;
            } while (*(float *)((long)plVar15 + lVar13 + 0x9c) < fVar24);
            plVar15 = plVar11;
            if (plVar17 != (long *)0x0) {
              plVar17[1] = (long)plVar11;
              plVar15 = (long *)plVar10[1];
            }
            if (plVar15 != (long *)0x0) {
              *plVar15 = *plVar10;
            }
            *plVar10 = 0;
            plVar10[1] = 0;
            puVar18 = (undefined8 *)plVar7[1];
            plVar7[1] = (long)plVar10;
            *plVar10 = (long)plVar7;
            plVar10[1] = (long)puVar18;
            if (puVar18 != (undefined8 *)0x0) {
              *puVar18 = plVar10;
            }
          }
          plVar10 = plVar11;
        } while (plVar11 != plVar1);
      }
      break;
    case 5:
      if (iVar4 == 0) {
        if ((1 < *(int *)(param_1 + 0x30)) &&
           (plVar10 = *(long **)(*(long *)(param_1 + 0x28) + 8), plVar10 != plVar1)) {
          lVar13 = -(long)*(int *)(param_1 + 0x34);
          do {
            plVar11 = (long *)plVar10[1];
            plVar17 = (long *)*plVar10;
            fVar24 = *(float *)((long)plVar10 + lVar13 + 0xa0);
            if (fVar24 < *(float *)((long)plVar17 + lVar13 + 0xa0)) {
              plVar15 = plVar17;
              do {
                plVar15 = (long *)*plVar15;
                plVar7 = plVar1;
                if (plVar15 == plVar1) break;
                plVar7 = plVar15;
              } while (fVar24 < *(float *)((long)plVar15 + lVar13 + 0xa0));
              plVar15 = plVar11;
              if (plVar17 != (long *)0x0) {
                plVar17[1] = (long)plVar11;
                plVar15 = (long *)plVar10[1];
              }
              if (plVar15 != (long *)0x0) {
                *plVar15 = *plVar10;
              }
              *plVar10 = 0;
              plVar10[1] = 0;
              puVar18 = (undefined8 *)plVar7[1];
              plVar7[1] = (long)plVar10;
              *plVar10 = (long)plVar7;
              plVar10[1] = (long)puVar18;
              if (puVar18 != (undefined8 *)0x0) {
                *puVar18 = plVar10;
              }
            }
            plVar10 = plVar11;
          } while (plVar11 != plVar1);
        }
      }
      else if ((1 < *(int *)(param_1 + 0x30)) &&
              (plVar10 = *(long **)(*(long *)(param_1 + 0x28) + 8), plVar10 != plVar1)) {
        lVar13 = (long)-*(int *)(param_1 + 0x34);
        do {
          plVar11 = (long *)plVar10[1];
          plVar17 = (long *)*plVar10;
          fVar24 = *(float *)((long)plVar10 + lVar13 + 0xa0);
          if (*(float *)((long)plVar17 + lVar13 + 0xa0) < fVar24) {
            plVar15 = plVar17;
            do {
              plVar15 = (long *)*plVar15;
              plVar7 = plVar1;
              if (plVar15 == plVar1) break;
              plVar7 = plVar15;
            } while (*(float *)((long)plVar15 + lVar13 + 0xa0) < fVar24);
            plVar15 = plVar11;
            if (plVar17 != (long *)0x0) {
              plVar17[1] = (long)plVar11;
              plVar15 = (long *)plVar10[1];
            }
            if (plVar15 != (long *)0x0) {
              *plVar15 = *plVar10;
            }
            *plVar10 = 0;
            plVar10[1] = 0;
            puVar18 = (undefined8 *)plVar7[1];
            plVar7[1] = (long)plVar10;
            *plVar10 = (long)plVar7;
            plVar10[1] = (long)puVar18;
            if (puVar18 != (undefined8 *)0x0) {
              *puVar18 = plVar10;
            }
          }
          plVar10 = plVar11;
        } while (plVar11 != plVar1);
      }
      break;
    case 6:
      if (iVar4 == 0) {
        if ((1 < *(int *)(param_1 + 0x30)) &&
           (plVar10 = *(long **)(*(long *)(param_1 + 0x28) + 8), plVar10 != plVar1)) {
          lVar13 = -(long)*(int *)(param_1 + 0x34);
          do {
            plVar11 = (long *)plVar10[1];
            plVar17 = (long *)*plVar10;
            fVar24 = *(float *)((long)plVar10 + lVar13 + 0xa4);
            if (fVar24 < *(float *)((long)plVar17 + lVar13 + 0xa4)) {
              plVar15 = plVar17;
              do {
                plVar15 = (long *)*plVar15;
                plVar7 = plVar1;
                if (plVar15 == plVar1) break;
                plVar7 = plVar15;
              } while (fVar24 < *(float *)((long)plVar15 + lVar13 + 0xa4));
              plVar15 = plVar11;
              if (plVar17 != (long *)0x0) {
                plVar17[1] = (long)plVar11;
                plVar15 = (long *)plVar10[1];
              }
              if (plVar15 != (long *)0x0) {
                *plVar15 = *plVar10;
              }
              *plVar10 = 0;
              plVar10[1] = 0;
              puVar18 = (undefined8 *)plVar7[1];
              plVar7[1] = (long)plVar10;
              *plVar10 = (long)plVar7;
              plVar10[1] = (long)puVar18;
              if (puVar18 != (undefined8 *)0x0) {
                *puVar18 = plVar10;
              }
            }
            plVar10 = plVar11;
          } while (plVar11 != plVar1);
        }
      }
      else if ((1 < *(int *)(param_1 + 0x30)) &&
              (plVar10 = *(long **)(*(long *)(param_1 + 0x28) + 8), plVar10 != plVar1)) {
        lVar13 = (long)-*(int *)(param_1 + 0x34);
        do {
          plVar11 = (long *)plVar10[1];
          plVar17 = (long *)*plVar10;
          fVar24 = *(float *)((long)plVar10 + lVar13 + 0xa4);
          if (*(float *)((long)plVar17 + lVar13 + 0xa4) < fVar24) {
            plVar15 = plVar17;
            do {
              plVar15 = (long *)*plVar15;
              plVar7 = plVar1;
              if (plVar15 == plVar1) break;
              plVar7 = plVar15;
            } while (*(float *)((long)plVar15 + lVar13 + 0xa4) < fVar24);
            plVar15 = plVar11;
            if (plVar17 != (long *)0x0) {
              plVar17[1] = (long)plVar11;
              plVar15 = (long *)plVar10[1];
            }
            if (plVar15 != (long *)0x0) {
              *plVar15 = *plVar10;
            }
            *plVar10 = 0;
            plVar10[1] = 0;
            puVar18 = (undefined8 *)plVar7[1];
            plVar7[1] = (long)plVar10;
            *plVar10 = (long)plVar7;
            plVar10[1] = (long)puVar18;
            if (puVar18 != (undefined8 *)0x0) {
              *puVar18 = plVar10;
            }
          }
          plVar10 = plVar11;
        } while (plVar11 != plVar1);
      }
    }
  }
switchD_03b7e90c_default:
  if (((*(char *)(*(long *)(param_1 + 0xa0) + 0xc0) != '\0') && (*(char *)(param_1 + 0x90) == '\0'))
     && (*(long **)(param_1 + 0x28) != plVar1)) {
    lVar16 = (long)*(int *)(param_1 + 0x34);
    lVar13 = (long)*(long **)(param_1 + 0x28) - lVar16;
    do {
      if (*(char *)(lVar13 + 0x88) != '\0') {
        lVar14 = *(long *)(param_1 + 0xa0);
        bVar9 = *(byte *)(lVar14 + 0xc0);
        if ((bVar9 >> 1 & 1) == 0) {
          if ((bVar9 >> 2 & 1) == 0) {
            if ((bVar9 >> 3 & 1) == 0) goto LAB_03b7f508;
            fVar27 = *(float *)(lVar13 + 0xa4);
            fVar24 = *(float *)(lVar14 + 0xbc);
          }
          else {
            fVar27 = *(float *)(lVar13 + 0xa0);
            fVar24 = *(float *)(lVar14 + 0xb8);
          }
        }
        else {
          fVar27 = *(float *)(lVar13 + 0x9c);
          fVar24 = *(float *)(lVar14 + 0xb4);
        }
        fVar22 = 0.0;
        if (-90.309 <= fVar24) {
          fVar22 = powf(10.0,fVar24 * 0.05);
        }
        if (fVar22 < fVar27) {
          *(undefined4 *)(param_1 + 0x98) = 0;
          *(undefined1 *)(param_1 + 0x90) = 1;
          break;
        }
      }
LAB_03b7f508:
      lVar13 = *(long *)(lVar13 + lVar16 + 8) - lVar16;
    } while (lVar13 != (long)plVar1 - lVar16);
  }
  if (*(char *)(param_1 + 0x91) == '\0') {
    if (*(char *)(param_1 + 0x90) == '\0') {
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined2 *)(param_1 + 0x90) = 1;
  }
  if ((*(float *)(param_1 + 0x94) != 0.0) &&
     (fVar24 = *(float *)(*(long *)(*plVar19 + 0x10) + 0x1c) + *(float *)(param_1 + 0x98),
     *(float *)(param_1 + 0x98) = fVar24, *(float *)(param_1 + 0x94) <= fVar24)) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined2 *)(param_1 + 0x90) = 0x100;
  }
  return;
LAB_03b7f09c:
  plVar19 = (long *)*plVar19;
  if (plVar19 != plVar1) {
    plVar15 = (long *)((long)plVar19 + lVar13 + 0x10);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    pbVar20 = *(byte **)((long)plVar19 + lVar13 + 0x18);
    (**(code **)(*(long *)((long)plVar10 + lVar13 + 0x10) + 0x18))(plVar17);
    pbVar12 = *(byte **)((long)plVar10 + lVar13 + 0x18);
    if (pbVar20 == pbVar12) goto LAB_03b7f130;
    pbVar20 = *(byte **)((long)plVar19 + lVar13 + 0x18);
    lVar16 = 0x7ffff;
    while( true ) {
      bVar9 = *pbVar20;
      if (bVar9 != *pbVar12) break;
      if ((bVar9 == 0) ||
         (bVar2 = lVar16 == 0, pbVar12 = pbVar12 + 1, pbVar20 = pbVar20 + 1, lVar16 = lVar16 + -1,
         bVar2)) goto LAB_03b7f130;
    }
    if (bVar9 < *pbVar12) goto LAB_03b7f130;
    goto LAB_03b7f09c;
  }
  plVar19 = plVar1;
LAB_03b7f130:
  if (*plVar10 != 0) {
    *(long *)(*plVar10 + 8) = plVar10[1];
  }
  if ((long *)plVar10[1] != (long *)0x0) {
    *(long *)plVar10[1] = *plVar10;
  }
  *plVar10 = 0;
  plVar10[1] = 0;
  puVar18 = (undefined8 *)plVar19[1];
  plVar19[1] = (long)plVar10;
  *plVar10 = (long)plVar19;
  plVar10[1] = (long)puVar18;
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = plVar10;
  }
LAB_03b7f004:
  plVar19 = (long *)PTR_DAT_04bc3ee8;
  plVar10 = plVar11;
  if (plVar11 == plVar1) goto switchD_03b7e90c_default;
  goto LAB_03b7f018;
LAB_03b7eb58:
  plVar19 = (long *)*plVar19;
  if (plVar19 != plVar1) {
    (**(code **)(*(long *)((long)plVar10 + lVar13 + 0x10) + 0x18))(plVar17);
    (**(code **)(*(long *)((long)plVar10 + lVar13 + 0x10) + 0x18))(plVar17);
    plVar15 = (long *)((long)plVar19 + lVar13 + 0x10);
    pbVar20 = *(byte **)((long)plVar10 + lVar13 + 0x18);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    pbVar12 = *(byte **)((long)plVar19 + lVar13 + 0x18);
    if (pbVar20 == pbVar12) goto LAB_03b7ebe0;
    pbVar20 = *(byte **)((long)plVar10 + lVar13 + 0x18);
    lVar16 = 0x7ffff;
    while( true ) {
      bVar9 = *pbVar20;
      if (bVar9 != *pbVar12) break;
      if ((bVar9 == 0) ||
         (bVar2 = lVar16 == 0, pbVar12 = pbVar12 + 1, pbVar20 = pbVar20 + 1, lVar16 = lVar16 + -1,
         bVar2)) goto LAB_03b7ebe0;
    }
    if (bVar9 < *pbVar12) goto LAB_03b7ebe0;
    goto LAB_03b7eb58;
  }
  plVar19 = plVar1;
LAB_03b7ebe0:
  if (*plVar10 != 0) {
    *(long *)(*plVar10 + 8) = plVar10[1];
  }
  if ((long *)plVar10[1] != (long *)0x0) {
    *(long *)plVar10[1] = *plVar10;
  }
  *plVar10 = 0;
  plVar10[1] = 0;
  puVar18 = (undefined8 *)plVar19[1];
  plVar19[1] = (long)plVar10;
  *plVar10 = (long)plVar19;
  plVar10[1] = (long)puVar18;
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = plVar10;
  }
LAB_03b7eac4:
  plVar19 = (long *)PTR_DAT_04bc3ee8;
  plVar10 = plVar11;
  if (plVar11 == plVar1) goto switchD_03b7e90c_default;
  goto LAB_03b7ead8;
}

