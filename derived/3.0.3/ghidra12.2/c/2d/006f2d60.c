
void FUN_006f2d60(long param_1,uint param_2,ulong param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  char cVar15;
  int iVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  short sVar20;
  undefined2 *puVar21;
  undefined2 *puVar23;
  undefined2 *puVar22;
  short local_18 [2];
  ushort local_14 [2];
  
  local_14[0] = (ushort)param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = param_2 & 0xffff;
    if (uVar4 < 0xe6) {
      if (uVar4 == 0xc6) {
        puVar21 = &DAT_0414dd70;
        goto LAB_006f2dec;
      }
      if (uVar4 == 0xdf) {
        puVar21 = &DAT_0414dd68;
        goto LAB_006f2dec;
      }
    }
    else {
      if (uVar4 == 0x153) {
        puVar21 = &DAT_0414dd64;
        goto LAB_006f2dec;
      }
      if (uVar4 == 0x152) {
        puVar21 = &DAT_0414dd74;
        goto LAB_006f2dec;
      }
      if (uVar4 == 0xe6) {
        puVar21 = &DAT_0414dd60;
        goto LAB_006f2dec;
      }
    }
    if (*(char *)(param_1 + 0x205) != '\0') {
      if ((param_2 & 0xffff) == 0xd1) {
        puVar21 = &DAT_0414dd78;
LAB_006f2dec:
        puVar22 = puVar21;
        do {
          puVar23 = puVar22 + 1;
          FUN_006f2d60(param_1,*puVar22,0);
          puVar22 = puVar23;
        } while (puVar23 < puVar21 + 2);
        return;
      }
      if ((param_2 & 0xffff) == 0xf1) {
        puVar21 = &DAT_0414dd6c;
        goto LAB_006f2dec;
      }
    }
  }
  if ((param_2 - 0x30 & 0xffff) < 10) {
    iVar10 = (param_2 & 0xffff) - 0x30;
  }
  else {
    if (9 < (param_2 + 0xf0 & 0xffff)) {
      uVar4 = param_2 & 0xffff;
      if (uVar4 < 0xa0) {
        if (uVar4 == 0x20) goto LAB_006f2f28;
        if (uVar4 == 0x2d) goto LAB_006f2ecc;
LAB_006f2f68:
        if (((param_2 & 0xffff) == 0x27) && (*(char *)(param_1 + 0x207) != '\0')) {
          plVar18 = *(long **)(param_1 + 0x210);
          iVar10 = (int)plVar18[2];
          iVar16 = (int)plVar18[1];
          if (iVar16 <= iVar10) {
            return;
          }
          *(int *)(plVar18 + 2) = iVar10 + 1;
          lVar19 = *plVar18;
          iVar10 = *(int *)((long)plVar18 + 0xc) + iVar10;
          iVar3 = 0;
          if (iVar16 <= iVar10) {
            iVar3 = iVar16;
          }
          iVar10 = iVar10 - iVar3;
          uVar17 = 0x20000000000;
          goto LAB_006f3140;
        }
      }
      else {
        if (uVar4 == 0x3000) {
LAB_006f2f28:
          plVar18 = *(long **)(param_1 + 0x210);
          iVar10 = (int)plVar18[2];
          iVar16 = (int)plVar18[1];
          if (iVar16 <= iVar10) {
            return;
          }
          *(int *)(plVar18 + 2) = iVar10 + 1;
          iVar10 = *(int *)((long)plVar18 + 0xc) + iVar10;
          iVar3 = 0;
          if (iVar16 <= iVar10) {
            iVar3 = iVar16;
          }
          *(undefined8 *)(*plVar18 + (long)(iVar10 - iVar3) * 8) = 0;
          *(undefined2 *)(param_1 + 0x20c) = 0;
          return;
        }
        if (uVar4 != 0x2011) {
          if (uVar4 == 0xa0) goto LAB_006f2f28;
          goto LAB_006f2f68;
        }
LAB_006f2ecc:
        if ((((*(char *)(param_1 + 0x206) == '\0') && (*(char *)(param_1 + 0x207) == '\0')) &&
            (*(char *)(param_1 + 0x208) == '\0')) && (*(char *)(param_1 + 0x209) == '\0')) {
          plVar18 = *(long **)(param_1 + 0x210);
          iVar10 = (int)plVar18[2];
          iVar16 = (int)plVar18[1];
          if (iVar16 <= iVar10) {
            return;
          }
          *(int *)(plVar18 + 2) = iVar10 + 1;
          lVar19 = *plVar18;
          iVar10 = *(int *)((long)plVar18 + 0xc) + iVar10;
          iVar3 = 0;
          if (iVar16 <= iVar10) {
            iVar3 = iVar16;
          }
          iVar10 = iVar10 - iVar3;
          uVar17 = 0x10000000000;
          goto LAB_006f3140;
        }
      }
      if ((param_3 & 1) != 0) {
        FUN_006f0ea0(local_14);
        param_2 = (uint)local_14[0];
      }
      uVar4 = param_2 + 0xbf & 0xffff;
      uVar6 = param_2 + 0x120;
      if (0x19 < uVar4) {
        uVar6 = param_2;
      }
      uVar5 = uVar6 + 0xdf & 0xffff;
      uVar11 = uVar6 + 0x120;
      if (0x19 < uVar5) {
        uVar11 = uVar6;
      }
      if ((uVar4 < 0x1a) || (uVar5 < 0x1a)) {
        local_14[0] = (ushort)uVar11;
      }
      if ((uVar11 - 0x61 & 0xffff) < 0x1a) {
        plVar18 = *(long **)(param_1 + 0x210);
        iVar10 = (int)plVar18[2];
        iVar16 = (int)plVar18[1];
        if (iVar16 <= iVar10) {
          return;
        }
        *(int *)(plVar18 + 2) = iVar10 + 1;
        iVar10 = *(int *)((long)plVar18 + 0xc) + iVar10;
        iVar3 = 0;
        if (iVar16 <= iVar10) {
          iVar3 = iVar16;
        }
        puVar1 = (uint *)(*plVar18 + (long)(iVar10 - iVar3) * 8);
        *puVar1 = uVar11 & 0xffff;
        puVar1[1] = 0x104;
        *(undefined2 *)(param_1 + 0x20c) = 0;
        return;
      }
      if ((uVar11 - 0x41 & 0xffff) < 0x1a) {
        FUN_006f0e00(local_14);
        uVar11 = (uint)local_14[0];
        uVar17 = 4;
        goto LAB_006f3090;
      }
      if ((uVar11 & 0xffff) == 0xd1) {
        plVar18 = *(long **)(param_1 + 0x210);
        iVar10 = (int)plVar18[2];
        iVar16 = (int)plVar18[1];
        if (iVar16 <= iVar10) {
          return;
        }
        *(int *)(plVar18 + 2) = iVar10 + 1;
        lVar19 = *plVar18;
        iVar10 = *(int *)((long)plVar18 + 0xc) + iVar10;
        iVar3 = 0;
        if (iVar16 <= iVar10) {
          iVar3 = iVar16;
        }
        iVar10 = iVar10 - iVar3;
        uVar17 = 0x4000000f1;
        goto LAB_006f3140;
      }
      if ((uVar11 & 0xffff) == 0xf1) {
        plVar18 = *(long **)(param_1 + 0x210);
        iVar10 = (int)plVar18[2];
        iVar16 = (int)plVar18[1];
        if (iVar16 <= iVar10) {
          return;
        }
        *(int *)(plVar18 + 2) = iVar10 + 1;
        lVar19 = *plVar18;
        iVar10 = *(int *)((long)plVar18 + 0xc) + iVar10;
        iVar3 = 0;
        if (iVar16 <= iVar10) {
          iVar3 = iVar16;
        }
        iVar10 = iVar10 - iVar3;
        uVar17 = 0x104000000f1;
        goto LAB_006f3140;
      }
      if ((uVar11 - 0x3b1 & 0xffff) < 0x19) {
        uVar17 = 6;
LAB_006f3164:
        uVar12 = 1;
LAB_006f3094:
        uVar13 = 0;
        uVar14 = 0;
        goto LAB_006f309c;
      }
      if ((uVar11 - 0x391 & 0xffff) < 0x19) {
        FUN_006f0e00(local_14);
        uVar11 = (uint)local_14[0];
        uVar17 = 6;
        goto LAB_006f3090;
      }
      if ((uVar11 & 0xffff) == 0x401) {
        plVar18 = *(long **)(param_1 + 0x210);
        iVar10 = (int)plVar18[2];
        iVar16 = (int)plVar18[1];
        if (iVar10 < iVar16) {
          *(int *)(plVar18 + 2) = iVar10 + 1;
          lVar19 = *plVar18;
          iVar10 = *(int *)((long)plVar18 + 0xc) + iVar10;
          iVar3 = 0;
          if (iVar16 <= iVar10) {
            iVar3 = iVar16;
          }
          iVar10 = iVar10 - iVar3;
          uVar17 = 0x500000435;
LAB_006f3224:
          *(undefined8 *)(lVar19 + (long)iVar10 * 8) = uVar17;
          plVar18 = *(long **)(param_1 + 0x210);
          *(undefined2 *)(param_1 + 0x20c) = 0;
          iVar10 = (int)plVar18[2];
          iVar16 = (int)plVar18[1];
        }
      }
      else {
        if ((uVar11 & 0xffff) != 0x451) {
          if (((uVar11 & 0xffff) == 0x451) || ((uVar11 - 0x430 & 0xffff) < 0x20)) {
            uVar17 = 5;
            goto LAB_006f3164;
          }
          if (((uVar11 & 0xffff) == 0x401) || ((uVar11 - 0x410 & 0xffff) < 0x20)) {
            FUN_006f0e00(local_14);
            uVar11 = (uint)local_14[0];
            uVar17 = 5;
LAB_006f3090:
            uVar12 = 0;
            goto LAB_006f3094;
          }
          if ((((uVar11 - 0x3041 & 0xffff) < 0x56) || ((uVar11 - 0x30a1 & 0xffff) < 0x56)) &&
             (lVar19 = FUN_006f3830(uVar11), lVar19 != 0)) {
            uVar14 = *(undefined1 *)(lVar19 + 6);
            uVar13 = *(undefined1 *)(lVar19 + 5);
            uVar12 = *(undefined1 *)(lVar19 + 4);
            uVar11 = (uint)*(ushort *)(lVar19 + 2);
LAB_006f3400:
            uVar17 = 2;
LAB_006f309c:
            FUN_006f37cc(param_1,uVar11,uVar17,uVar12,uVar13,uVar14);
            return;
          }
          uVar4 = uVar11 & 0xffff;
          if ((uVar4 - 0x309d < 2) || (uVar4 - 0x30fd < 2)) {
            lVar19 = FUN_006f3830(uVar11);
            if (lVar19 != 0) {
              uVar11 = FUN_006f393c(param_1);
              if (((uVar11 - 0x3041 & 0xffff) < 0x56) || ((uVar11 - 0x30a1 & 0xffff) < 0x56)) {
                uVar14 = *(undefined1 *)(lVar19 + 6);
                uVar13 = *(undefined1 *)(lVar19 + 5);
                uVar12 = *(undefined1 *)(lVar19 + 4);
              }
              else {
                uVar14 = *(undefined1 *)(lVar19 + 6);
                uVar13 = *(undefined1 *)(lVar19 + 5);
                uVar12 = *(undefined1 *)(lVar19 + 4);
                uVar11 = (uint)*(ushort *)(lVar19 + 2);
              }
              goto LAB_006f3400;
            }
          }
          else {
            if (uVar4 == 0x30fc) {
              local_18[0] = FUN_006f393c(param_1);
              FUN_006f0fc0(local_18);
              sVar20 = local_18[0];
              if (0x55 < (ushort)(local_18[0] + 0xcf5fU) && 0x55 < (ushort)(local_18[0] + 0xcfbfU))
              {
                sVar20 = 0x30fc;
              }
              FUN_006f37cc(param_1,sVar20,2,0,0,1);
              return;
            }
            if ((uVar11 + 0x5400 >> 2 & 0x3fff) < 0xae9) {
              uVar17 = 3;
              goto LAB_006f3090;
            }
          }
          uVar4 = uVar11 & 0xffff;
          if (uVar4 < 0xff01) {
            if (uVar4 == 0x21) {
              plVar18 = *(long **)(param_1 + 0x210);
              iVar10 = (int)plVar18[2];
              iVar16 = (int)plVar18[1];
              if (iVar16 <= iVar10) {
                return;
              }
              *(int *)(plVar18 + 2) = iVar10 + 1;
              lVar19 = *plVar18;
              iVar10 = *(int *)((long)plVar18 + 0xc) + iVar10;
              iVar3 = 0;
              if (iVar16 <= iVar10) {
                iVar3 = iVar16;
              }
              iVar10 = iVar10 - iVar3;
              uVar17 = 0x800000021;
            }
            else {
              if (uVar4 != 0x3f) {
LAB_006f34f0:
                *(ushort *)(param_1 + 0x20c) = (ushort)uVar11;
                return;
              }
              plVar18 = *(long **)(param_1 + 0x210);
              iVar10 = (int)plVar18[2];
              iVar16 = (int)plVar18[1];
              if (iVar16 <= iVar10) {
                return;
              }
              *(int *)(plVar18 + 2) = iVar10 + 1;
              lVar19 = *plVar18;
              iVar10 = *(int *)((long)plVar18 + 0xc) + iVar10;
              iVar3 = 0;
              if (iVar16 <= iVar10) {
                iVar3 = iVar16;
              }
              iVar10 = iVar10 - iVar3;
              uVar17 = 0x80000003f;
            }
          }
          else if (uVar4 == 0xff01) {
            plVar18 = *(long **)(param_1 + 0x210);
            iVar10 = (int)plVar18[2];
            iVar16 = (int)plVar18[1];
            if (iVar16 <= iVar10) {
              return;
            }
            *(int *)(plVar18 + 2) = iVar10 + 1;
            lVar19 = *plVar18;
            iVar10 = *(int *)((long)plVar18 + 0xc) + iVar10;
            iVar3 = 0;
            if (iVar16 <= iVar10) {
              iVar3 = iVar16;
            }
            iVar10 = iVar10 - iVar3;
            uVar17 = 0x10800000021;
          }
          else {
            if (uVar4 != 0xff1f) goto LAB_006f34f0;
            plVar18 = *(long **)(param_1 + 0x210);
            iVar10 = (int)plVar18[2];
            iVar16 = (int)plVar18[1];
            if (iVar16 <= iVar10) {
              return;
            }
            *(int *)(plVar18 + 2) = iVar10 + 1;
            lVar19 = *plVar18;
            iVar10 = *(int *)((long)plVar18 + 0xc) + iVar10;
            iVar3 = 0;
            if (iVar16 <= iVar10) {
              iVar3 = iVar16;
            }
            iVar10 = iVar10 - iVar3;
            uVar17 = 0x1080000003f;
          }
          goto LAB_006f3140;
        }
        plVar18 = *(long **)(param_1 + 0x210);
        iVar10 = (int)plVar18[2];
        iVar16 = (int)plVar18[1];
        if (iVar10 < iVar16) {
          *(int *)(plVar18 + 2) = iVar10 + 1;
          lVar19 = *plVar18;
          iVar10 = *(int *)((long)plVar18 + 0xc) + iVar10;
          iVar3 = 0;
          if (iVar16 <= iVar10) {
            iVar3 = iVar16;
          }
          iVar10 = iVar10 - iVar3;
          uVar17 = 0x10500000435;
          goto LAB_006f3224;
        }
      }
      if (iVar16 <= iVar10) {
        return;
      }
      *(int *)(plVar18 + 2) = iVar10 + 1;
      lVar19 = *plVar18;
      iVar10 = *(int *)((long)plVar18 + 0xc) + iVar10;
      iVar3 = 0;
      if (iVar16 <= iVar10) {
        iVar3 = iVar16;
      }
      iVar10 = iVar10 - iVar3;
      uVar17 = 0xff00000000;
LAB_006f3140:
      *(undefined8 *)(lVar19 + (long)iVar10 * 8) = uVar17;
      *(undefined2 *)(param_1 + 0x20c) = 0;
      return;
    }
    iVar10 = (param_2 & 0xffff) - 0xff10;
  }
  cVar15 = '\a';
  if (*(char *)(param_1 + 0x204) == '\0') {
    cVar15 = '\x01';
  }
  if (*(ushort *)(param_1 + 0x20c) < 0x2f &&
      (1L << ((ulong)*(ushort *)(param_1 + 0x20c) & 0x3f) & 0x500000000001U) != 0) {
    plVar18 = *(long **)(param_1 + 0x210);
    iVar16 = (int)plVar18[2];
    if (iVar16 != 0) {
      iVar8 = (int)plVar18[1];
      iVar3 = iVar16 + *(int *)((long)plVar18 + 0xc);
      lVar19 = *plVar18;
      iVar9 = iVar3 + -1;
      iVar7 = 0;
      if (iVar8 <= iVar9) {
        iVar7 = iVar8;
      }
      if (lVar19 != 0) {
        piVar2 = (int *)(lVar19 + (long)(iVar9 - iVar7) * 8);
        if ((char)piVar2[1] == cVar15) {
          *piVar2 = iVar10 + *piVar2 * 10;
          goto LAB_006f376c;
        }
        if ((((char)piVar2[1] == '\0') && (1 < iVar16)) && (*(char *)((long)piVar2 + 5) == '\0')) {
          iVar3 = iVar3 + -2;
          iVar7 = 0;
          if (iVar8 <= iVar3) {
            iVar7 = iVar8;
          }
          piVar2 = (int *)(lVar19 + (long)(iVar3 - iVar7) * 8);
          if ((char)piVar2[1] == cVar15) {
            *piVar2 = iVar10 + *piVar2 * 10;
            iVar10 = *(int *)(*(long *)(param_1 + 0x210) + 0x10);
            if (0 < iVar10) {
              *(int *)(*(long *)(param_1 + 0x210) + 0x10) = iVar10 + -1;
            }
            goto LAB_006f376c;
          }
        }
      }
    }
  }
  else {
    plVar18 = *(long **)(param_1 + 0x210);
    iVar16 = (int)plVar18[2];
  }
  iVar3 = (int)plVar18[1];
  if (iVar3 <= iVar16) {
    return;
  }
  *(int *)(plVar18 + 2) = iVar16 + 1;
  iVar16 = *(int *)((long)plVar18 + 0xc) + iVar16;
  iVar7 = 0;
  if (iVar3 <= iVar16) {
    iVar7 = iVar3;
  }
  piVar2 = (int *)(*plVar18 + (long)(iVar16 - iVar7) * 8);
  piVar2[0] = 0;
  piVar2[1] = 0;
  *piVar2 = iVar10;
  *(char *)(piVar2 + 1) = cVar15;
LAB_006f376c:
  *(undefined2 *)(param_1 + 0x20c) = 0;
  return;
}

