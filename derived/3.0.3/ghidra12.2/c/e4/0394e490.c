
void FUN_0394e490(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  long *plVar16;
  long *plVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  void *__dest;
  uint uVar22;
  byte *pbVar23;
  long lVar24;
  void *__src;
  ulong uVar25;
  undefined1 auStack_480 [1056];
  
  uVar14 = *(uint *)(param_1 + 8);
  uVar20 = (ulong)uVar14;
  puVar19 = *(undefined8 **)(param_1 + 0x10);
  if ((int)uVar14 < 2) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    uVar12 = (ulong)(uVar14 >> 1);
    do {
      uVar10 = (uint)uVar12;
      uVar13 = uVar10 * 2;
      plVar16 = (long *)puVar19[uVar12 - 1 & 0xffffffff];
      if ((int)uVar13 <= (int)uVar14) {
        uVar25 = uVar12 & 0xffffffff;
        do {
          uVar22 = uVar13;
          if ((int)uVar13 < (int)uVar14) {
            plVar17 = (long *)(puVar19 + (int)uVar13)[-1];
            plVar8 = (long *)puVar19[(int)uVar13];
            iVar6 = (**(code **)(*plVar17 + 0x20))(plVar17);
            iVar7 = (**(code **)(*plVar8 + 0x20))(plVar8);
            if (iVar6 < iVar7) {
              uVar10 = 1;
            }
            else {
              iVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
              iVar7 = (**(code **)(*plVar17 + 0x20))(plVar17);
              if (iVar7 <= iVar6) {
                plVar17 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17);
                plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8);
                (**(code **)(*plVar17 + 0x18))(plVar17);
                (**(code **)(*plVar17 + 0x18))(plVar17);
                pbVar23 = (byte *)plVar17[1];
                (**(code **)(*plVar8 + 0x18))(plVar8);
                if (pbVar23 != (byte *)plVar8[1]) {
                  pbVar23 = (byte *)plVar8[1];
                  pbVar18 = (byte *)plVar17[1];
                  lVar11 = 0x7ffff;
                  do {
                    bVar3 = *pbVar18;
                    if (bVar3 != *pbVar23) {
                      uVar10 = (uint)(bVar3 < *pbVar23);
                      break;
                    }
                    uVar10 = 0;
                    if (bVar3 == 0) break;
                    bVar5 = lVar11 != 0;
                    pbVar23 = pbVar23 + 1;
                    pbVar18 = pbVar18 + 1;
                    lVar11 = lVar11 + -1;
                  } while (bVar5);
                  goto LAB_0394e64c;
                }
              }
              uVar10 = 0;
            }
LAB_0394e64c:
            uVar22 = uVar10 | uVar13;
          }
          plVar17 = (long *)puVar19[(int)(uVar22 - 1)];
          iVar6 = (**(code **)(*plVar16 + 0x20))(plVar16);
          iVar7 = (**(code **)(*plVar17 + 0x20))(plVar17);
          uVar10 = (uint)uVar25;
          if (iVar7 <= iVar6) {
            iVar6 = (**(code **)(*plVar17 + 0x20))(plVar17);
            iVar7 = (**(code **)(*plVar16 + 0x20))(plVar16);
            if (iVar6 < iVar7) break;
            plVar8 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16);
            plVar17 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17);
            (**(code **)(*plVar8 + 0x18))(plVar8);
            (**(code **)(*plVar8 + 0x18))(plVar8);
            pbVar23 = (byte *)plVar8[1];
            (**(code **)(*plVar17 + 0x18))(plVar17);
            if (pbVar23 == (byte *)plVar17[1]) break;
            pbVar23 = (byte *)plVar17[1];
            pbVar18 = (byte *)plVar8[1];
            lVar11 = 0x7ffff;
            while( true ) {
              bVar3 = *pbVar18;
              if (bVar3 != *pbVar23) break;
              if (bVar3 == 0) goto LAB_0394e4d4;
              bVar5 = lVar11 == 0;
              pbVar23 = pbVar23 + 1;
              pbVar18 = pbVar18 + 1;
              lVar11 = lVar11 + -1;
              if (bVar5) goto LAB_0394e4d4;
            }
            if (*pbVar23 <= bVar3) break;
          }
          uVar13 = uVar22 * 2;
          puVar19[(int)(uVar10 - 1)] = puVar19[(int)(uVar22 - 1)];
          uVar25 = (ulong)uVar22;
          uVar10 = uVar22;
        } while ((int)uVar13 <= (int)uVar14);
      }
LAB_0394e4d4:
      puVar19[(int)(uVar10 - 1)] = plVar16;
      bVar5 = 1 < (long)uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar5);
    uVar12 = uVar20 - 1 & 0xffffffff;
    plVar16 = (long *)puVar19[uVar12];
    puVar19[uVar12] = *puVar19;
    uVar12 = uVar20 - 1;
    if (2 < uVar14) {
      do {
        uVar25 = uVar12;
        uVar14 = 2;
        uVar13 = 1;
        do {
          uVar10 = uVar14;
          if ((int)uVar14 < (int)uVar25) {
            plVar17 = (long *)(puVar19 + (int)uVar14)[-1];
            plVar8 = (long *)puVar19[(int)uVar14];
            iVar6 = (**(code **)(*plVar17 + 0x20))(plVar17);
            iVar7 = (**(code **)(*plVar8 + 0x20))(plVar8);
            if (iVar6 < iVar7) {
              uVar10 = 1;
            }
            else {
              iVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
              iVar7 = (**(code **)(*plVar17 + 0x20))(plVar17);
              if (iVar7 <= iVar6) {
                plVar17 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17);
                plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8);
                (**(code **)(*plVar17 + 0x18))(plVar17);
                (**(code **)(*plVar17 + 0x18))(plVar17);
                pbVar23 = (byte *)plVar17[1];
                (**(code **)(*plVar8 + 0x18))(plVar8);
                if (pbVar23 != (byte *)plVar8[1]) {
                  pbVar23 = (byte *)plVar8[1];
                  pbVar18 = (byte *)plVar17[1];
                  lVar11 = 0x7ffff;
                  do {
                    bVar3 = *pbVar18;
                    if (bVar3 != *pbVar23) {
                      uVar10 = (uint)(bVar3 < *pbVar23);
                      break;
                    }
                    uVar10 = 0;
                    if (bVar3 == 0) break;
                    bVar5 = lVar11 != 0;
                    pbVar23 = pbVar23 + 1;
                    pbVar18 = pbVar18 + 1;
                    lVar11 = lVar11 + -1;
                  } while (bVar5);
                  goto LAB_0394e91c;
                }
              }
              uVar10 = 0;
            }
LAB_0394e91c:
            uVar10 = uVar10 | uVar14;
          }
          plVar17 = (long *)puVar19[(int)(uVar10 - 1)];
          iVar6 = (**(code **)(*plVar16 + 0x20))(plVar16);
          iVar7 = (**(code **)(*plVar17 + 0x20))(plVar17);
          if (iVar7 <= iVar6) {
            iVar6 = (**(code **)(*plVar17 + 0x20))(plVar17);
            iVar7 = (**(code **)(*plVar16 + 0x20))(plVar16);
            if (iVar6 < iVar7) break;
            plVar8 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16);
            plVar17 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17);
            (**(code **)(*plVar8 + 0x18))(plVar8);
            (**(code **)(*plVar8 + 0x18))(plVar8);
            pbVar23 = (byte *)plVar8[1];
            (**(code **)(*plVar17 + 0x18))(plVar17);
            if (pbVar23 == (byte *)plVar17[1]) break;
            pbVar23 = (byte *)plVar17[1];
            pbVar18 = (byte *)plVar8[1];
            lVar11 = 0x7ffff;
            while( true ) {
              bVar3 = *pbVar18;
              if (bVar3 != *pbVar23) break;
              if (bVar3 == 0) goto LAB_0394ea34;
              bVar5 = lVar11 == 0;
              pbVar23 = pbVar23 + 1;
              pbVar18 = pbVar18 + 1;
              lVar11 = lVar11 + -1;
              if (bVar5) goto LAB_0394ea34;
            }
            if (*pbVar23 <= bVar3) break;
          }
          uVar14 = uVar10 << 1;
          puVar19[(int)(uVar13 - 1)] = puVar19[(int)(uVar10 - 1)];
          uVar13 = uVar10;
        } while ((long)(int)uVar14 < (long)uVar20);
LAB_0394ea34:
        puVar19[(int)(uVar13 - 1)] = plVar16;
        uVar20 = uVar25 - 1 & 0xffffffff;
        plVar16 = (long *)puVar19[uVar20];
        puVar19[uVar20] = *puVar19;
        uVar12 = uVar25 - 1;
        uVar20 = uVar25;
      } while (2 < uVar25);
    }
    *puVar19 = plVar16;
    puVar19 = *(undefined8 **)(param_1 + 0x10);
    uVar14 = *(uint *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (uVar14 != 0) {
    puVar1 = puVar19 + (int)uVar14;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar14 = 0;
      if (*(int *)(param_1 + 0x28) != 0) {
        plVar16 = *(long **)(param_1 + 0x30);
        do {
          lVar24 = *plVar16;
          plVar17 = (long *)(**(code **)(*(long *)*puVar19 + 0x18))();
          plVar8 = (long *)(lVar24 + 0x18);
          (**(code **)(*plVar8 + 0x18))(plVar8);
          (**(code **)(*plVar8 + 0x18))(plVar8);
          lVar21 = *(long *)(lVar24 + 0x20);
          (**(code **)(*plVar17 + 0x18))(plVar17);
          lVar11 = plVar17[1];
          if (lVar21 == lVar11) goto LAB_0394eaa4;
          uVar20 = 0;
          bVar5 = true;
          lVar21 = *(long *)(lVar24 + 0x20) + 2;
          do {
            lVar24 = lVar21 + uVar20;
            cVar4 = *(char *)(lVar24 + -2);
            if (cVar4 != *(char *)(lVar11 + uVar20)) break;
            if (cVar4 == '\0') {
              if (bVar5) goto LAB_0394eaa4;
              break;
            }
            cVar4 = *(char *)(lVar24 + -1);
            if (cVar4 != *(char *)(lVar11 + uVar20 + 1)) break;
            if (cVar4 == '\0') goto LAB_0394eaa4;
            cVar4 = *(char *)(lVar21 + uVar20);
            if (cVar4 != *(char *)(lVar11 + uVar20 + 2)) break;
            if (cVar4 == '\0') goto LAB_0394eaa4;
            bVar5 = uVar20 < 0x7fffe;
            uVar20 = uVar20 + 3;
          } while (uVar20 != 0x80001);
          plVar16 = plVar16 + 1;
          uVar14 = *(uint *)(param_1 + 0x28);
        } while (plVar16 != (long *)(*(long *)(param_1 + 0x30) + (long)(int)uVar14 * 8));
      }
      lVar11 = *(long *)(param_1 + 0x20);
      if (*(uint *)(param_1 + 0x18) <= uVar14) {
        uVar14 = 0;
      }
      plVar16 = (long *)(**(code **)(*(long *)*puVar19 + 0x18))();
      __dest = *(void **)(lVar11 + (long)(int)uVar14 * 0x168 + 0x20);
      (**(code **)(*plVar16 + 0x18))();
      __src = (void *)plVar16[1];
      if (__dest != __src) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
        lVar21 = 0;
        do {
          if (*(char *)(plVar16[1] + lVar21) == '\0') goto LAB_0394ec50;
          lVar24 = plVar16[1] + lVar21;
          if (*(char *)(lVar24 + 1) == '\0') {
            lVar21 = lVar21 + 1;
            goto LAB_0394ec50;
          }
          if (*(char *)(lVar24 + 2) == '\0') {
            lVar21 = lVar21 + 2;
            goto LAB_0394ec50;
          }
          lVar21 = lVar21 + 3;
        } while (lVar21 != 0x80001);
        lVar21 = 0;
LAB_0394ec50:
        iVar7 = *(int *)(lVar11 + (long)(int)uVar14 * 0x168 + 0x28);
        iVar6 = (int)lVar21;
        if (iVar7 <= (int)lVar21) {
          iVar6 = iVar7 + -1;
        }
        memcpy(__dest,__src,(long)iVar6);
        *(undefined1 *)((long)__dest + (long)iVar6) = 0;
      }
      if (((DAT_05ae90e0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05ae90e0), iVar6 != 0)) {
        DAT_05ae90d8 = "default";
        DAT_05ae90d0 = puVar2;
        __cxa_guard_release(&DAT_05ae90e0);
      }
      (**(code **)(*plVar16 + 0x18))(plVar16);
      (**(code **)(*plVar16 + 0x18))(plVar16);
      pcVar15 = (char *)plVar16[1];
      (**(code **)(DAT_05ae90d0 + 0x18))(&DAT_05ae90d0);
      if (pcVar15 == DAT_05ae90d8) {
LAB_0394ed50:
        lVar11 = *(long *)PTR_DAT_04bd1158;
        if ((lVar11 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
          (**(code **)(*(long *)(lVar11 + 8) + 0x18))((long *)(lVar11 + 8));
          uVar9 = *(undefined8 *)(lVar11 + 0x10);
          pcVar15 = "Icon=FOLDER_RED";
LAB_0394edec:
          FUN_006e9454(auStack_480,&DAT_0406a3d7,pcVar15,uVar9);
        }
      }
      else {
        uVar20 = 0;
        bVar5 = true;
        do {
          lVar11 = plVar16[1] + 1 + uVar20;
          cVar4 = *(char *)(lVar11 + -1);
          if (cVar4 != DAT_05ae90d8[uVar20]) break;
          if (cVar4 == '\0') {
            if (bVar5) goto LAB_0394ed50;
            break;
          }
          cVar4 = *(char *)(plVar16[1] + 1 + uVar20);
          if (cVar4 != DAT_05ae90d8[uVar20 + 1]) break;
          if (cVar4 == '\0') goto LAB_0394ed50;
          cVar4 = *(char *)(lVar11 + 1);
          if (cVar4 != DAT_05ae90d8[uVar20 + 2]) break;
          if (cVar4 == '\0') goto LAB_0394ed50;
          bVar5 = uVar20 < 0x7fffe;
          uVar20 = uVar20 + 3;
        } while (uVar20 != 0x80001);
        lVar11 = *(long *)PTR_DAT_04bd1158;
        if ((lVar11 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
          (**(code **)(*(long *)(lVar11 + 8) + 0x18))((long *)(lVar11 + 8));
          uVar9 = *(undefined8 *)(lVar11 + 0x10);
          pcVar15 = "Icon=FOLDER_GREEN";
          goto LAB_0394edec;
        }
      }
      uVar14 = *(uint *)(param_1 + 0x28);
      lVar11 = (long)(int)uVar14;
      if ((int)uVar14 < *(int *)(param_1 + 0x2c)) {
        if (*(uint *)(param_1 + 0x18) <= uVar14) {
          uVar14 = 0;
        }
        *(long *)(*(long *)(param_1 + 0x30) + lVar11 * 8) =
             *(long *)(param_1 + 0x20) + (long)(int)uVar14 * 0x168;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
LAB_0394eaa4:
      puVar19 = puVar19 + 1;
    } while (puVar19 != puVar1);
    uVar14 = *(uint *)(param_1 + 0x28);
    if (1 < (int)uVar14) {
      plVar16 = *(long **)(param_1 + 0x30);
      uVar20 = (ulong)(uVar14 >> 1);
      do {
        uVar10 = (uint)uVar20;
        uVar13 = uVar10 * 2;
        lVar11 = plVar16[uVar20 - 1 & 0xffffffff];
        if ((int)uVar13 <= (int)uVar14) {
          uVar12 = uVar20 & 0xffffffff;
          do {
            if ((int)uVar13 < (int)uVar14) {
              lVar21 = (plVar16 + (int)uVar13)[-1];
              lVar24 = plVar16[(int)uVar13];
              plVar17 = (long *)(lVar21 + 0x18);
              (**(code **)(*plVar17 + 0x18))(plVar17);
              (**(code **)(*plVar17 + 0x18))(plVar17);
              plVar17 = (long *)(lVar24 + 0x18);
              pbVar18 = *(byte **)(lVar21 + 0x20);
              (**(code **)(*plVar17 + 0x18))(plVar17);
              pbVar23 = *(byte **)(lVar24 + 0x20);
              if (pbVar18 == pbVar23) {
                uVar10 = 0;
              }
              else {
                pbVar18 = *(byte **)(lVar21 + 0x20);
                lVar21 = 0x7ffff;
                do {
                  bVar3 = *pbVar18;
                  if (bVar3 != *pbVar23) {
                    uVar10 = (uint)(bVar3 < *pbVar23);
                    break;
                  }
                  uVar10 = 0;
                  if (bVar3 == 0) break;
                  bVar5 = lVar21 != 0;
                  pbVar23 = pbVar23 + 1;
                  pbVar18 = pbVar18 + 1;
                  lVar21 = lVar21 + -1;
                } while (bVar5);
              }
              uVar10 = uVar10 | uVar13;
            }
            else {
              uVar10 = uVar13;
            }
            lVar21 = plVar16[(int)(uVar10 - 1)];
            (**(code **)(*(long *)(lVar11 + 0x18) + 0x18))(lVar11 + 0x18);
            (**(code **)(*(long *)(lVar11 + 0x18) + 0x18))(lVar11 + 0x18);
            plVar17 = (long *)(lVar21 + 0x18);
            pbVar18 = *(byte **)(lVar11 + 0x20);
            (**(code **)(*plVar17 + 0x18))(plVar17);
            pbVar23 = *(byte **)(lVar21 + 0x20);
            uVar22 = (uint)uVar12;
            if (pbVar18 == pbVar23) {
LAB_0394f000:
              uVar10 = uVar22;
              break;
            }
            pbVar18 = *(byte **)(lVar11 + 0x20);
            lVar21 = 0x7ffff;
            while( true ) {
              bVar3 = *pbVar18;
              if (bVar3 != *pbVar23) break;
              if (bVar3 == 0) goto LAB_0394f000;
              bVar5 = lVar21 == 0;
              pbVar23 = pbVar23 + 1;
              pbVar18 = pbVar18 + 1;
              lVar21 = lVar21 + -1;
              if (bVar5) goto LAB_0394f000;
            }
            if (*pbVar23 <= bVar3) goto LAB_0394f000;
            uVar13 = uVar10 * 2;
            uVar12 = (ulong)uVar10;
            plVar16[(int)(uVar22 - 1)] = plVar16[(int)(uVar10 - 1)];
          } while ((int)uVar13 <= (int)uVar14);
        }
        plVar16[(int)(uVar10 - 1)] = lVar11;
        bVar5 = 1 < (long)uVar20;
        uVar20 = uVar20 - 1;
      } while (bVar5);
      uVar20 = (ulong)uVar14 - 1;
      uVar12 = uVar20 & 0xffffffff;
      lVar11 = plVar16[uVar12];
      plVar16[uVar12] = *plVar16;
      uVar12 = (ulong)uVar14;
      if (2 < uVar14) {
LAB_0394f030:
        uVar25 = uVar20;
        uVar14 = 2;
        uVar13 = 1;
        do {
          uVar10 = uVar14;
          if ((int)uVar14 < (int)uVar25) {
            lVar21 = (plVar16 + (int)uVar14)[-1];
            lVar24 = plVar16[(int)uVar14];
            plVar17 = (long *)(lVar21 + 0x18);
            (**(code **)(*plVar17 + 0x18))(plVar17);
            (**(code **)(*plVar17 + 0x18))(plVar17);
            plVar17 = (long *)(lVar24 + 0x18);
            pbVar18 = *(byte **)(lVar21 + 0x20);
            (**(code **)(*plVar17 + 0x18))(plVar17);
            pbVar23 = *(byte **)(lVar24 + 0x20);
            if (pbVar18 == pbVar23) {
              uVar10 = 0;
            }
            else {
              pbVar18 = *(byte **)(lVar21 + 0x20);
              lVar21 = 0x7ffff;
              do {
                bVar3 = *pbVar18;
                if (bVar3 != *pbVar23) {
                  uVar10 = (uint)(bVar3 < *pbVar23);
                  break;
                }
                uVar10 = 0;
                if (bVar3 == 0) break;
                bVar5 = lVar21 != 0;
                pbVar23 = pbVar23 + 1;
                pbVar18 = pbVar18 + 1;
                lVar21 = lVar21 + -1;
              } while (bVar5);
            }
            uVar10 = uVar10 | uVar14;
          }
          lVar21 = plVar16[(int)(uVar10 - 1)];
          (**(code **)(*(long *)(lVar11 + 0x18) + 0x18))(lVar11 + 0x18);
          (**(code **)(*(long *)(lVar11 + 0x18) + 0x18))(lVar11 + 0x18);
          plVar17 = (long *)(lVar21 + 0x18);
          pbVar18 = *(byte **)(lVar11 + 0x20);
          (**(code **)(*plVar17 + 0x18))(plVar17);
          pbVar23 = *(byte **)(lVar21 + 0x20);
          if (pbVar18 == pbVar23) goto LAB_0394f198;
          pbVar18 = *(byte **)(lVar11 + 0x20);
          lVar21 = 0x7ffff;
          while( true ) {
            bVar3 = *pbVar18;
            if (bVar3 != *pbVar23) break;
            if (bVar3 == 0) goto LAB_0394f198;
            bVar5 = lVar21 == 0;
            pbVar23 = pbVar23 + 1;
            pbVar18 = pbVar18 + 1;
            lVar21 = lVar21 + -1;
            if (bVar5) goto LAB_0394f198;
          }
          if (*pbVar23 <= bVar3) goto LAB_0394f198;
          uVar14 = uVar10 << 1;
          plVar16[(int)(uVar13 - 1)] = plVar16[(int)(uVar10 - 1)];
          uVar13 = uVar10;
          if ((long)uVar12 <= (long)(int)uVar14) goto LAB_0394f198;
        } while( true );
      }
LAB_0394f1cc:
      *plVar16 = lVar11;
    }
  }
  return;
LAB_0394f198:
  plVar16[(int)(uVar13 - 1)] = lVar11;
  uVar20 = uVar25 - 1 & 0xffffffff;
  lVar11 = plVar16[uVar20];
  plVar16[uVar20] = *plVar16;
  uVar20 = uVar25 - 1;
  uVar12 = uVar25;
  if (uVar25 < 3) goto LAB_0394f1cc;
  goto LAB_0394f030;
}

