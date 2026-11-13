
/* WARNING: Removing unreachable block (ram,0x01267d90) */
/* WARNING: Removing unreachable block (ram,0x01267f50) */

undefined2 FUN_01267a60(uint param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  char cVar14;
  ushort uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  char *pcVar19;
  undefined8 *puVar20;
  uint *puVar21;
  int *piVar22;
  undefined2 uVar23;
  uint *puVar24;
  uint local_74 [16];
  uint local_34;
  
  puVar8 = PTR_DAT_04bbbd80;
  puVar7 = PTR_DAT_04bbbd78;
  local_34 = param_1;
  lVar16 = *(long *)PTR_DAT_04bb27a8;
  if (param_2 == (uint *)0x0) {
    uVar1 = *(short *)(lVar16 + 0xb92) + 1;
    uVar11 = (uint)*(ushort *)(lVar16 + 0xb90);
    if (*(ushort *)(lVar16 + 0xb90) != uVar1) {
      puVar21 = (uint *)PTR_DAT_04bbbd70;
      puVar10 = (uint *)PTR_DAT_04bbbd58;
      do {
        uVar2 = uVar11 & 0xffff;
        uVar11 = uVar2 - *(ushort *)(lVar16 + 0xb90);
        if (((*(uint *)(lVar16 + 0xb70) <= uVar11) ||
            (puVar13 = *(uint **)(*(long *)(lVar16 + 0xb78) + (long)(int)uVar11 * 8),
            puVar13 == (uint *)0x0)) && (puVar13 = (uint *)puVar7, (*puVar8 & 1) == 0)) {
          iVar9 = __cxa_guard_acquire();
          if (iVar9 != 0) {
            *(undefined4 *)puVar7 = 0;
            __cxa_guard_release(puVar8);
          }
          puVar21 = (uint *)PTR_DAT_04bbbd70;
          puVar10 = (uint *)PTR_DAT_04bbbd58;
        }
        puVar6 = PTR_DAT_04bbbd68;
        puVar5 = PTR_DAT_04bbbd60;
        uVar11 = *puVar13;
        if (uVar11 == 0 || puVar13 == (uint *)(ulong)uVar11) {
LAB_01267ebc:
          local_74[0] = 0;
        }
        else {
          puVar24 = (uint *)((long)puVar13 - (long)(ulong)uVar11);
          local_74[0] = 0;
          if (*puVar24 != 0) {
            uVar11 = puVar24[1];
            if ((uVar11 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
              lVar3 = 0xc;
              if (*(char *)((long)puVar24 + 10) != '\0') {
                lVar3 = 0x1c;
              }
              lVar3 = (long)puVar24 + lVar3 + (ulong)(ushort)puVar24[2] * 8;
              if (lVar3 != 0) {
                uVar12 = 0;
                if ((ulong)uVar11 != 0) {
                  uVar12 = (uint)((ulong)((long)puVar13 - lVar3) / (ulong)uVar11);
                }
                if (*puVar24 <= uVar12) {
                  uVar12 = 0xffffffff;
                }
                if ((uVar12 < *puVar10) &&
                   (local_74[0] = (uint)*(ushort *)(*(long *)(puVar10 + 2) + (long)(int)uVar12 * 2),
                   local_74[0] < 0x20)) goto LAB_01267ec0;
              }
            }
            goto LAB_01267ebc;
          }
        }
LAB_01267ec0:
        if (local_74[0] == 0x18) {
          uVar11 = *puVar13;
          if (uVar11 == 0 || puVar13 == (uint *)(ulong)uVar11) {
LAB_01267ee0:
            local_74[0] = 0;
          }
          else {
            puVar24 = (uint *)((long)puVar13 - (long)(ulong)uVar11);
            local_74[0] = 0;
            if (*puVar24 != 0) {
              uVar11 = puVar24[1];
              if ((uVar11 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
                lVar3 = 0xc;
                if (*(char *)((long)puVar24 + 10) != '\0') {
                  lVar3 = 0x1c;
                }
                lVar3 = (long)puVar24 + lVar3 + (ulong)(ushort)puVar24[2] * 8;
                if (lVar3 != 0) {
                  uVar12 = 0;
                  if ((ulong)uVar11 != 0) {
                    uVar12 = (uint)((ulong)((long)puVar13 - lVar3) / (ulong)uVar11);
                  }
                  if (*puVar24 <= uVar12) {
                    uVar12 = 0xffffffff;
                  }
                  if ((uVar12 < *puVar21) &&
                     (local_74[0] = (uint)*(ushort *)
                                           (*(long *)(puVar21 + 2) + (long)(int)uVar12 * 2),
                     local_74[0] < 0x18)) goto LAB_01267ee4;
                }
              }
              goto LAB_01267ee0;
            }
          }
LAB_01267ee4:
          if (local_74[0] == local_34) {
            if (*puVar13 == 0) {
              return 0;
            }
            cVar14 = *PTR_DAT_04bbbd60;
            while( true ) {
              if (cVar14 == '\0') {
                cVar14 = '\x01';
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                *puVar5 = 1;
              }
              else {
                uVar11 = *(uint *)(puVar6 + 8);
                if (-1 < (int)uVar11) {
                  if ((undefined2 *)((ulong)uVar11 + (long)puVar13) == (undefined2 *)0x0) {
                    return 0;
                  }
                  return *(undefined2 *)((ulong)uVar11 + (long)puVar13);
                }
                if (uVar11 != 0xffffffff) {
                  return 0;
                }
              }
              puVar21 = (uint *)(ulong)*puVar13;
              if (*puVar13 == 0) {
                return 0;
              }
              if (puVar13 == puVar21) break;
              lVar16 = 0xc;
              if (*(char *)((long)puVar13 + (10 - (long)puVar21)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar13 + (lVar16 - (long)puVar21);
              if (lVar16 == 0) {
                return 0;
              }
              uVar17 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar21));
              *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
              if (uVar17 == 0) {
                return 0;
              }
              piVar22 = (int *)(lVar16 + 4);
              while (piVar22[-1] != 0x54706054) {
                piVar22 = piVar22 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) {
                  return 0;
                }
              }
              iVar9 = 0;
              if (*piVar22 != -1) {
                iVar9 = *piVar22;
              }
              *(int *)(puVar6 + 8) = iVar9;
              if (*puVar13 == 0) {
                return 0;
              }
            }
            return 0;
          }
        }
        uVar12 = uVar2;
        if (uVar2 <= *(ushort *)(lVar16 + 0xb92)) {
          uVar12 = (uint)*(ushort *)(lVar16 + 0xb92);
        }
        uVar11 = uVar2;
        do {
          while( true ) {
            if (uVar12 == uVar11) {
              uVar11 = uVar2 + 1;
              goto LAB_01267e74;
            }
            uVar4 = (uVar11 + 1 & 0xffff) - (uint)*(ushort *)(lVar16 + 0xb90);
            if (uVar4 < *(uint *)(lVar16 + 0xb70)) break;
            uVar11 = uVar11 + 1;
          }
          uVar11 = uVar11 + 1;
        } while (*(long *)(*(long *)(lVar16 + 0xb78) + (long)(int)uVar4 * 8) == 0);
LAB_01267e74:
      } while ((uint)uVar1 != (uVar11 & 0xffff));
    }
  }
  else {
    uVar1 = *(short *)(lVar16 + 0xb92) + 1;
    uVar11 = (uint)*(ushort *)(lVar16 + 0xb90);
    if (*(ushort *)(lVar16 + 0xb90) != uVar1) {
      uVar17 = 0;
      puVar21 = (uint *)PTR_DAT_04bbbd70;
      puVar10 = (uint *)PTR_DAT_04bbbd58;
      pcVar19 = PTR_DAT_04bbbd60;
      puVar20 = (undefined8 *)PTR_DAT_04bbbd68;
      do {
        uVar2 = uVar11 & 0xffff;
        uVar11 = uVar2 - *(ushort *)(lVar16 + 0xb90);
        if (((*(uint *)(lVar16 + 0xb70) <= uVar11) ||
            (puVar13 = *(uint **)(*(long *)(lVar16 + 0xb78) + (long)(int)uVar11 * 8),
            puVar13 == (uint *)0x0)) && (puVar13 = (uint *)puVar7, (*puVar8 & 1) == 0)) {
          iVar9 = __cxa_guard_acquire();
          if (iVar9 != 0) {
            *(undefined4 *)puVar7 = 0;
            __cxa_guard_release(puVar8);
          }
          puVar21 = (uint *)PTR_DAT_04bbbd70;
          puVar10 = (uint *)PTR_DAT_04bbbd58;
          pcVar19 = PTR_DAT_04bbbd60;
          puVar20 = (undefined8 *)PTR_DAT_04bbbd68;
        }
        uVar11 = *puVar13;
        if (uVar11 == 0 || puVar13 == (uint *)(ulong)uVar11) {
LAB_01267b40:
          uVar15 = 0;
        }
        else {
          puVar24 = (uint *)((long)puVar13 - (long)(ulong)uVar11);
          uVar15 = 0;
          if (*puVar24 != 0) {
            uVar11 = puVar24[1];
            if ((uVar11 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
              lVar3 = 0xc;
              if (*(char *)((long)puVar24 + 10) != '\0') {
                lVar3 = 0x1c;
              }
              lVar3 = (long)puVar24 + lVar3 + (ulong)(ushort)puVar24[2] * 8;
              if (lVar3 != 0) {
                uVar12 = 0;
                if ((ulong)uVar11 != 0) {
                  uVar12 = (uint)((ulong)((long)puVar13 - lVar3) / (ulong)uVar11);
                }
                if (*puVar24 <= uVar12) {
                  uVar12 = 0xffffffff;
                }
                if ((uVar12 < *puVar10) &&
                   (uVar15 = *(ushort *)(*(long *)(puVar10 + 2) + (long)(int)uVar12 * 2),
                   uVar15 < 0x20)) goto LAB_01267b44;
              }
            }
            goto LAB_01267b40;
          }
        }
LAB_01267b44:
        if (uVar15 == 0x18) {
          uVar11 = *puVar13;
          if (uVar11 == 0 || puVar13 == (uint *)(ulong)uVar11) {
LAB_01267b64:
            uVar11 = 0;
          }
          else {
            puVar24 = (uint *)((long)puVar13 - (long)(ulong)uVar11);
            uVar11 = 0;
            if (*puVar24 != 0) {
              uVar11 = puVar24[1];
              if ((uVar11 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
                lVar3 = 0xc;
                if (*(char *)((long)puVar24 + 10) != '\0') {
                  lVar3 = 0x1c;
                }
                lVar3 = (long)puVar24 + lVar3 + (ulong)(ushort)puVar24[2] * 8;
                if (lVar3 != 0) {
                  uVar12 = 0;
                  if ((ulong)uVar11 != 0) {
                    uVar12 = (uint)((ulong)((long)puVar13 - lVar3) / (ulong)uVar11);
                  }
                  if (*puVar24 <= uVar12) {
                    uVar12 = 0xffffffff;
                  }
                  if ((uVar12 < *puVar21) &&
                     (uVar11 = (uint)*(ushort *)(*(long *)(puVar21 + 2) + (long)(int)uVar12 * 2),
                     uVar11 < 0x18)) goto LAB_01267b68;
                }
              }
              goto LAB_01267b64;
            }
          }
LAB_01267b68:
          if (uVar11 == local_34) {
            if (0x1f < uVar17) goto LAB_01268084;
            if (*puVar13 == 0) {
LAB_01267d28:
              uVar23 = 0;
            }
            else {
              cVar14 = *pcVar19;
              do {
                if (cVar14 == '\0') {
                  cVar14 = '\x01';
                  *puVar20 = 0xffffffffffffffff;
                  puVar20[1] = 0xffffffffffffffff;
                  *pcVar19 = '\x01';
                }
                else {
                  uVar11 = *(uint *)(puVar20 + 1);
                  if (-1 < (int)uVar11) {
                    if ((undefined2 *)((ulong)uVar11 + (long)puVar13) == (undefined2 *)0x0)
                    goto LAB_01267d28;
                    uVar23 = *(undefined2 *)((ulong)uVar11 + (long)puVar13);
                    goto LAB_01267d2c;
                  }
                  if (uVar11 != 0xffffffff) goto LAB_01267d28;
                }
                puVar24 = (uint *)(ulong)*puVar13;
                uVar23 = 0;
                if ((*puVar13 == 0) || (puVar13 == puVar24)) goto LAB_01267d2c;
                lVar3 = 0xc;
                if (*(char *)((long)puVar13 + (10 - (long)puVar24)) != '\0') {
                  lVar3 = 0x1c;
                }
                lVar3 = (long)puVar13 + (lVar3 - (long)puVar24);
                if (lVar3 == 0) goto LAB_01267d28;
                uVar18 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar24));
                *(undefined4 *)(puVar20 + 1) = 0xfffffffe;
                uVar23 = 0;
                if (uVar18 == 0) goto LAB_01267d2c;
                piVar22 = (int *)(lVar3 + 4);
                while (piVar22[-1] != 0x54706054) {
                  piVar22 = piVar22 + 2;
                  uVar18 = uVar18 - 1;
                  if (uVar18 == 0) {
                    uVar23 = 0;
                    goto LAB_01267d2c;
                  }
                }
                iVar9 = 0;
                if (*piVar22 != -1) {
                  iVar9 = *piVar22;
                }
                *(int *)(puVar20 + 1) = iVar9;
              } while (*puVar13 != 0);
              uVar23 = 0;
            }
LAB_01267d2c:
            *(undefined2 *)((long)local_74 + uVar17 * 2) = uVar23;
            uVar17 = uVar17 + 1;
          }
        }
        uVar12 = uVar2;
        if (uVar2 <= *(ushort *)(lVar16 + 0xb92)) {
          uVar12 = (uint)*(ushort *)(lVar16 + 0xb92);
        }
        uVar11 = uVar2;
        do {
          while( true ) {
            if (uVar12 == uVar11) {
              uVar11 = uVar2 + 1;
              goto LAB_01267af8;
            }
            uVar4 = (uVar11 + 1 & 0xffff) - (uint)*(ushort *)(lVar16 + 0xb90);
            if (uVar4 < *(uint *)(lVar16 + 0xb70)) break;
            uVar11 = uVar11 + 1;
          }
          uVar11 = uVar11 + 1;
        } while (*(long *)(*(long *)(lVar16 + 0xb78) + (long)(int)uVar4 * 8) == 0);
LAB_01267af8:
      } while ((uint)uVar1 != (uVar11 & 0xffff));
      if (uVar17 != 0) {
LAB_01268084:
        uVar11 = *param_2 ^ *param_2 << 0xb;
        uVar2 = param_2[3];
        *param_2 = param_2[1];
        param_2[1] = param_2[2];
        uVar11 = uVar11 >> 8 ^ uVar2 >> 0x13 ^ uVar11 ^ uVar2;
        param_2[2] = uVar2;
        param_2[3] = uVar11;
        uVar17 = uVar11 * uVar17;
        uVar18 = uVar17 >> 0x20;
        if (uVar17 >> 0x25 != 0) {
          uVar18 = 0;
        }
        return *(undefined2 *)((long)local_74 + uVar18 * 2);
      }
    }
  }
  return 0;
}

