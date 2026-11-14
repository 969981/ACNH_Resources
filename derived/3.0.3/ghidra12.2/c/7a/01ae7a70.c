
/* WARNING: Removing unreachable block (ram,0x01ae8110) */
/* WARNING: Removing unreachable block (ram,0x01ae7d2c) */

bool FUN_01ae7a70(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  char cVar12;
  ulong uVar13;
  int *piVar14;
  uint *puVar15;
  uint *puVar16;
  
  puVar15 = *(uint **)(param_1 + 0x10);
  if (puVar15 == (uint *)0x0) {
    uVar9 = 0xbc;
  }
  else {
    uVar9 = *puVar15;
    if (uVar9 != 0 && puVar15 != (uint *)(ulong)uVar9) {
      puVar16 = (uint *)((long)puVar15 - (long)(ulong)uVar9);
      uVar9 = 0;
      if (*puVar16 == 0) goto LAB_01ae7b28;
      uVar9 = puVar16[1];
      if ((uVar9 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar16 + lVar1 + (ulong)(ushort)puVar16[2] * 8;
        if (lVar1 != 0) {
          uVar6 = 0;
          if ((ulong)uVar9 != 0) {
            uVar6 = (uint)((ulong)((long)puVar15 - lVar1) / (ulong)uVar9);
          }
          if (*puVar16 <= uVar6) {
            uVar6 = 0xffffffff;
          }
          if ((uVar6 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar9 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2),
             uVar9 < 0xbd)) goto LAB_01ae7b28;
        }
      }
    }
    uVar9 = 0;
  }
LAB_01ae7b28:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a778 + 0xb0) == 0) {
      return false;
    }
    puVar16 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8);
    if (puVar16 == (uint *)0x0) {
      return false;
    }
    if ((uVar9 < *(uint *)(DAT_0532a778 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar9) == '\0')) {
      return false;
    }
    if (*puVar16 <= uVar9) {
      return false;
    }
    if (puVar16[1] == 0) {
      return false;
    }
    if ((ushort)puVar16[2] == 0) {
      return false;
    }
    iVar7 = 0xc;
    if (*(char *)((long)puVar16 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar16 = (uint *)((ulong)(puVar16[1] * uVar9 + (uint)(ushort)puVar16[2] * 8 + iVar7) +
                      (long)puVar16);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar9) {
      return false;
    }
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar9) {
      uVar9 = 0;
    }
    puVar16 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar9 * 8);
  }
  if (puVar16 == (uint *)0x0) {
    return false;
  }
  if (puVar15 == (uint *)0x0) goto LAB_01ae86b0;
  uVar9 = *puVar15;
  uVar8 = 0;
  if ((uVar9 != 0) && (puVar15 != (uint *)(ulong)uVar9)) {
    puVar10 = (uint *)((long)puVar15 - (long)(ulong)uVar9);
    uVar8 = 0;
    if (*puVar10 != 0) {
      uVar9 = puVar10[1];
      if ((uVar9 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar6 = 0;
          if ((ulong)uVar9 != 0) {
            uVar6 = (uint)((ulong)((long)puVar15 - lVar1) / (ulong)uVar9);
          }
          if (*puVar10 <= uVar6) {
            uVar6 = 0xffffffff;
          }
          if ((uVar6 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar8 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2),
             uVar8 < 0xbd)) goto LAB_01ae7bfc;
        }
      }
      uVar8 = 0;
    }
  }
LAB_01ae7bfc:
  if (uVar8 != 0xac) {
    uVar9 = *puVar15;
    if ((uVar9 == 0) || (puVar15 == (uint *)(ulong)uVar9)) {
LAB_01ae7e84:
      uVar9 = *(uint *)PTR_DAT_04bc00c8;
    }
    else {
      puVar10 = (uint *)((long)puVar15 - (long)(ulong)uVar9);
      if ((*puVar10 == 0) || ((uVar9 = puVar10[1], uVar9 == 0 || ((ulong)(ushort)puVar10[2] == 0))))
      goto LAB_01ae7e84;
      lVar1 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar1 == 0) goto LAB_01ae7e84;
      uVar6 = 0;
      if ((ulong)uVar9 != 0) {
        uVar6 = (uint)((ulong)((long)puVar15 - lVar1) / (ulong)uVar9);
      }
      uVar9 = *(uint *)PTR_DAT_04bc00c8;
      if (*puVar10 <= uVar6) {
        uVar6 = 0xffffffff;
      }
      if ((uVar6 < uVar9) &&
         (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2) == 0xaf))
      goto LAB_01ae7c10;
    }
    uVar8 = 0;
    uVar6 = *puVar15;
    if ((uVar6 != 0) && (puVar15 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar15 - (long)(ulong)uVar6);
      uVar8 = 0;
      if (*puVar10 != 0) {
        uVar6 = puVar10[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar6 != 0) {
              uVar2 = (uint)((ulong)((long)puVar15 - lVar1) / (ulong)uVar6);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < uVar9) &&
               (uVar8 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar8 < 0xbd)) goto LAB_01ae7f20;
          }
        }
        uVar8 = 0;
      }
    }
LAB_01ae7f20:
    if (uVar8 != 0xab) {
      uVar6 = *puVar15;
      if ((uVar6 != 0) && (puVar15 != (uint *)(ulong)uVar6)) {
        puVar10 = (uint *)((long)puVar15 - (long)(ulong)uVar6);
        uVar6 = *puVar10;
        if (uVar6 != 0) {
          uVar2 = puVar10[1];
          if ((uVar2 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar1 != 0) {
              uVar3 = 0;
              if ((ulong)uVar2 != 0) {
                uVar3 = (uint)((ulong)((long)puVar15 - lVar1) / (ulong)uVar2);
              }
              if (uVar6 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < uVar9) &&
                 (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2) == 7))
              goto LAB_01ae7f34;
            }
          }
          uVar2 = puVar10[1];
          if ((uVar2 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar1 != 0) {
              uVar3 = 0;
              if ((ulong)uVar2 != 0) {
                uVar3 = (uint)((ulong)((long)puVar15 - lVar1) / (ulong)uVar2);
              }
              if (uVar6 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < uVar9) &&
                 (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2) == 0xae))
              goto LAB_01ae7f34;
            }
          }
        }
      }
      uVar6 = FUN_03853b94(puVar15);
      if ((uVar9 <= uVar6) ||
         (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2) != 0xad))
      goto LAB_01ae86b0;
    }
LAB_01ae7f34:
    uVar9 = 0;
    uVar6 = *puVar15;
    if ((uVar6 != 0) && (puVar15 != (uint *)(ulong)uVar6)) {
      puVar10 = (uint *)((long)puVar15 - (long)(ulong)uVar6);
      uVar9 = 0;
      if (*puVar10 != 0) {
        uVar9 = puVar10[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar6 = 0;
            if ((ulong)uVar9 != 0) {
              uVar6 = (uint)((ulong)((long)puVar15 - lVar1) / (ulong)uVar9);
            }
            if (*puVar10 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < *(uint *)PTR_DAT_04bc0148) &&
               (uVar9 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar6 * 2),
               uVar9 < 0xa2)) goto LAB_01ae811c;
          }
        }
        uVar9 = 0;
      }
    }
LAB_01ae811c:
    if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
      if ((((*(long *)(DAT_0532a7a0 + 0xb0) != 0) &&
           (puVar15 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
          ((*(uint *)(DAT_0532a7a0 + 200) <= uVar9 ||
           (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)uVar9) != '\0')))) &&
         (((uVar9 < *puVar15 && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)))) {
        iVar7 = 0xc;
        if (*(char *)((long)puVar15 + 10) != '\0') {
          iVar7 = 0x1c;
        }
        puVar15 = (uint *)((ulong)(puVar15[1] * uVar9 + (uint)(ushort)puVar15[2] * 8 + iVar7) +
                          (long)puVar15);
        goto joined_r0x01ae8358;
      }
LAB_01ae8360:
      uVar8 = 0;
    }
    else {
      if (*(uint *)(DAT_0532a7a0 + 0x1c0) <= uVar9) goto LAB_01ae8360;
      if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= uVar9) {
        uVar9 = 0;
      }
      puVar15 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar9 * 8);
joined_r0x01ae8358:
      uVar8 = 0;
      if (puVar15 != (uint *)0x0) {
        uVar8 = 0;
        uVar9 = *puVar15;
        if ((uVar9 != 0) && (puVar15 != (uint *)(ulong)uVar9)) {
          puVar10 = (uint *)((long)puVar15 - (long)(ulong)uVar9);
          uVar8 = 0;
          if (*puVar10 != 0) {
            uVar9 = puVar10[1];
            if ((uVar9 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar1 != 0) {
                uVar6 = 0;
                if ((ulong)uVar9 != 0) {
                  uVar6 = (uint)((ulong)((long)puVar15 - lVar1) / (ulong)uVar9);
                }
                if (*puVar10 <= uVar6) {
                  uVar6 = 0xffffffff;
                }
                if ((uVar6 < *(uint *)PTR_DAT_04bc02c8) &&
                   (uVar8 = *(ushort *)(*(long *)(PTR_DAT_04bc02c8 + 8) + (long)(int)uVar6 * 2),
                   uVar8 < 0x75)) goto LAB_01ae8364;
              }
            }
            goto LAB_01ae8360;
          }
        }
      }
    }
LAB_01ae8364:
    if (uVar8 == 0x1b) {
      return true;
    }
    goto LAB_01ae86b0;
  }
LAB_01ae7c10:
  uVar9 = 0;
  uVar6 = *puVar15;
  if ((uVar6 != 0) && (puVar15 != (uint *)(ulong)uVar6)) {
    puVar10 = (uint *)((long)puVar15 - (long)(ulong)uVar6);
    uVar9 = 0;
    if (*puVar10 != 0) {
      uVar9 = puVar10[1];
      if ((uVar9 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar6 = 0;
          if ((ulong)uVar9 != 0) {
            uVar6 = (uint)((ulong)((long)puVar15 - lVar1) / (ulong)uVar9);
          }
          if (*puVar10 <= uVar6) {
            uVar6 = 0xffffffff;
          }
          if ((uVar6 < *(uint *)PTR_DAT_04bc0148) &&
             (uVar9 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar6 * 2),
             uVar9 < 0xa2)) goto LAB_01ae7d38;
        }
      }
      uVar9 = 0;
    }
  }
LAB_01ae7d38:
  uVar6 = *(uint *)(DAT_0532a7a0 + 0x1c0);
  if ((int)uVar6 < 1) {
    if ((((*(long *)(DAT_0532a7a0 + 0xb0) != 0) &&
         (puVar10 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar10 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a7a0 + 200) <= uVar9 ||
         (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)uVar9) != '\0')))) &&
       (((uVar9 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
      iVar7 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        iVar7 = 0x1c;
      }
      puVar10 = (uint *)((ulong)(puVar10[1] * uVar9 + (uint)(ushort)puVar10[2] * 8 + iVar7) +
                        (long)puVar10);
      goto joined_r0x01ae8038;
    }
LAB_01ae8040:
    uVar8 = 0;
  }
  else {
    if (uVar6 <= uVar9) goto LAB_01ae8040;
    if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= uVar9) {
      uVar9 = 0;
    }
    puVar10 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar9 * 8);
joined_r0x01ae8038:
    uVar8 = 0;
    if (puVar10 != (uint *)0x0) {
      uVar8 = 0;
      uVar9 = *puVar10;
      if ((uVar9 != 0) && (puVar10 != (uint *)(ulong)uVar9)) {
        puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar9);
        uVar8 = 0;
        if (*puVar11 != 0) {
          uVar9 = puVar11[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar9 != 0) {
                uVar2 = (uint)((ulong)((long)puVar10 - lVar1) / (ulong)uVar9);
              }
              if (*puVar11 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < *(uint *)PTR_DAT_04bc02c8) &&
                 (uVar8 = *(ushort *)(*(long *)(PTR_DAT_04bc02c8 + 8) + (long)(int)uVar2 * 2),
                 uVar8 < 0x75)) goto LAB_01ae8044;
            }
          }
          goto LAB_01ae8040;
        }
      }
    }
  }
LAB_01ae8044:
  if (uVar8 == 3) {
    return true;
  }
  if (puVar15 == (uint *)0x0) {
    uVar9 = 0x21;
  }
  else {
    uVar2 = *puVar15;
    uVar9 = 0;
    if ((uVar2 != 0) && (puVar15 != (uint *)(ulong)uVar2)) {
      puVar10 = (uint *)((long)puVar15 - (long)(ulong)uVar2);
      uVar9 = 0;
      if (*puVar10 != 0) {
        uVar9 = puVar10[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar9 != 0) {
              uVar2 = (uint)((ulong)((long)puVar15 - lVar1) / (ulong)uVar9);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0148) &&
               (uVar9 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar2 * 2),
               uVar9 < 0xa2)) goto LAB_01ae8380;
          }
        }
        uVar9 = 0;
      }
    }
  }
LAB_01ae8380:
  if ((int)uVar6 < 1) {
    if ((((*(long *)(DAT_0532a7a0 + 0xb0) != 0) &&
         (puVar10 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar10 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a7a0 + 200) <= uVar9 ||
         (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)uVar9) != '\0')))) &&
       (((uVar9 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
      iVar7 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        iVar7 = 0x1c;
      }
      puVar10 = (uint *)((ulong)(puVar10[1] * uVar9 + (uint)(ushort)puVar10[2] * 8 + iVar7) +
                        (long)puVar10);
      goto joined_r0x01ae84a8;
    }
LAB_01ae84b0:
    uVar8 = 0;
  }
  else {
    if (uVar6 <= uVar9) goto LAB_01ae84b0;
    if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= uVar9) {
      uVar9 = 0;
    }
    puVar10 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar9 * 8);
joined_r0x01ae84a8:
    uVar8 = 0;
    if (puVar10 != (uint *)0x0) {
      uVar8 = 0;
      uVar9 = *puVar10;
      if ((uVar9 != 0) && (puVar10 != (uint *)(ulong)uVar9)) {
        puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar9);
        uVar8 = 0;
        if (*puVar11 != 0) {
          uVar9 = puVar11[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar9 != 0) {
                uVar2 = (uint)((ulong)((long)puVar10 - lVar1) / (ulong)uVar9);
              }
              if (*puVar11 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < *(uint *)PTR_DAT_04bc02c8) &&
                 (uVar8 = *(ushort *)(*(long *)(PTR_DAT_04bc02c8 + 8) + (long)(int)uVar2 * 2),
                 uVar8 < 0x75)) goto LAB_01ae84b4;
            }
          }
          goto LAB_01ae84b0;
        }
      }
    }
  }
LAB_01ae84b4:
  if (uVar8 == 4) {
    return true;
  }
  if (puVar15 == (uint *)0x0) {
    uVar9 = 0x21;
  }
  else {
    uVar2 = *puVar15;
    uVar9 = 0;
    if ((uVar2 != 0) && (puVar15 != (uint *)(ulong)uVar2)) {
      puVar10 = (uint *)((long)puVar15 - (long)(ulong)uVar2);
      uVar9 = 0;
      if (*puVar10 != 0) {
        uVar9 = puVar10[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar9 != 0) {
              uVar2 = (uint)((ulong)((long)puVar15 - lVar1) / (ulong)uVar9);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0148) &&
               (uVar9 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar2 * 2),
               uVar9 < 0xa2)) goto LAB_01ae8568;
          }
        }
        uVar9 = 0;
      }
    }
  }
LAB_01ae8568:
  if ((int)uVar6 < 1) {
    if ((((*(long *)(DAT_0532a7a0 + 0xb0) != 0) &&
         (puVar15 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a7a0 + 200) <= uVar9 ||
         (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)uVar9) != '\0')))) &&
       (((uVar9 < *puVar15 && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)))) {
      iVar7 = 0xc;
      if (*(char *)((long)puVar15 + 10) != '\0') {
        iVar7 = 0x1c;
      }
      puVar15 = (uint *)((ulong)(puVar15[1] * uVar9 + (uint)(ushort)puVar15[2] * 8 + iVar7) +
                        (long)puVar15);
      goto joined_r0x01ae8690;
    }
LAB_01ae8698:
    uVar8 = 0;
  }
  else {
    if (uVar6 <= uVar9) goto LAB_01ae8698;
    if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= uVar9) {
      uVar9 = 0;
    }
    puVar15 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar9 * 8);
joined_r0x01ae8690:
    uVar8 = 0;
    if (puVar15 != (uint *)0x0) {
      uVar8 = 0;
      uVar9 = *puVar15;
      if ((uVar9 != 0) && (puVar15 != (uint *)(ulong)uVar9)) {
        puVar10 = (uint *)((long)puVar15 - (long)(ulong)uVar9);
        uVar8 = 0;
        if (*puVar10 != 0) {
          uVar9 = puVar10[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar1 != 0) {
              uVar6 = 0;
              if ((ulong)uVar9 != 0) {
                uVar6 = (uint)((ulong)((long)puVar15 - lVar1) / (ulong)uVar9);
              }
              if (*puVar10 <= uVar6) {
                uVar6 = 0xffffffff;
              }
              if ((uVar6 < *(uint *)PTR_DAT_04bc02c8) &&
                 (uVar8 = *(ushort *)(*(long *)(PTR_DAT_04bc02c8 + 8) + (long)(int)uVar6 * 2),
                 uVar8 < 0x75)) goto LAB_01ae869c;
            }
          }
          goto LAB_01ae8698;
        }
      }
    }
  }
LAB_01ae869c:
  if (uVar8 == 1) {
    return true;
  }
LAB_01ae86b0:
  iVar7 = FUN_0277d6c4(param_1 + 8);
  puVar5 = PTR_DAT_04bbfeb8;
  puVar4 = PTR_DAT_04bbfeb0;
  if (iVar7 == 0x396b) {
    return true;
  }
  if (*puVar16 == 0) {
    return false;
  }
  cVar12 = *PTR_DAT_04bbfeb0;
  while( true ) {
    if (cVar12 == '\0') {
      cVar12 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
    }
    else {
      uVar9 = *(uint *)(puVar5 + 0x44);
      if (-1 < (int)uVar9) {
        if ((char *)((ulong)uVar9 + (long)puVar16) == (char *)0x0) {
          return false;
        }
        return *(char *)((ulong)uVar9 + (long)puVar16) != '\0';
      }
      if (uVar9 != 0xffffffff) {
        return false;
      }
    }
    puVar15 = (uint *)(ulong)*puVar16;
    if (*puVar16 == 0) {
      return false;
    }
    if (puVar16 == puVar15) break;
    lVar1 = 0xc;
    if (*(char *)((long)puVar16 + (10 - (long)puVar15)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar16 + (lVar1 - (long)puVar15);
    if (lVar1 == 0) {
      return false;
    }
    uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar15));
    *(undefined4 *)(puVar5 + 0x44) = 0xfffffffe;
    if (uVar13 == 0) {
      return false;
    }
    piVar14 = (int *)(lVar1 + 4);
    while (piVar14[-1] != -0x2ddc0da4) {
      piVar14 = piVar14 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) {
        return false;
      }
    }
    iVar7 = 0;
    if (*piVar14 != -1) {
      iVar7 = *piVar14;
    }
    *(int *)(puVar5 + 0x44) = iVar7;
    if (*puVar16 == 0) {
      return false;
    }
  }
  return false;
}

