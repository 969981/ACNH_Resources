
void FUN_039f6c50(long param_1)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  
  if (*(int *)(param_1 + 0x3c) < 1) {
    return;
  }
  if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x3c)) {
    iVar5 = -1;
    do {
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x3c));
  }
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    uVar4 = *(uint *)(param_1 + 0x3c);
    if ((int)uVar4 < 2) goto switchD_039f6cb4_default;
    plVar7 = *(long **)(param_1 + 0x30);
    uVar9 = (ulong)(uVar4 >> 1);
    do {
      uVar8 = (uint)uVar9;
      uVar14 = uVar8 * 2;
      lVar10 = plVar7[uVar9 - 1 & 0xffffffff];
      if ((int)uVar14 <= (int)uVar4) {
        uVar12 = uVar9 & 0xffffffff;
        do {
          uVar13 = uVar14;
          if ((int)uVar14 < (int)uVar4) {
            lVar11 = (plVar7 + (int)uVar14)[-1];
            lVar2 = plVar7[(int)uVar14];
            uVar8 = *(uint *)(lVar11 + 0xc);
            uVar3 = *(uint *)(lVar2 + 0xc);
            if ((uVar8 < uVar3) ||
               ((uVar8 == uVar3 && (*(float *)(lVar2 + 0x10) < *(float *)(lVar11 + 0x10))))) {
              uVar13 = uVar14 | 1;
            }
          }
          lVar11 = plVar7[(int)(uVar13 - 1)];
          uVar8 = (uint)uVar12;
          if ((*(uint *)(lVar11 + 0xc) <= *(uint *)(lVar10 + 0xc)) &&
             ((*(uint *)(lVar10 + 0xc) != *(uint *)(lVar11 + 0xc) ||
              (*(float *)(lVar10 + 0x10) <= *(float *)(lVar11 + 0x10))))) break;
          plVar7[(int)(uVar8 - 1)] = lVar11;
          uVar14 = uVar13 * 2;
          uVar12 = (ulong)uVar13;
          uVar8 = uVar13;
        } while ((int)uVar14 <= (int)uVar4);
      }
      plVar7[(int)(uVar8 - 1)] = lVar10;
      bVar1 = 1 < (long)uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar1);
    uVar12 = (ulong)uVar4 - 1;
    uVar9 = uVar12 & 0xffffffff;
    lVar10 = plVar7[uVar9];
    plVar7[uVar9] = *plVar7;
    uVar9 = (ulong)uVar4;
    if (2 < uVar4) {
      do {
        uVar4 = 2;
        uVar14 = 1;
        do {
          if ((int)uVar4 < (int)uVar12) {
            lVar11 = (plVar7 + (int)uVar4)[-1];
            lVar2 = plVar7[(int)uVar4];
            uVar8 = *(uint *)(lVar11 + 0xc);
            uVar13 = *(uint *)(lVar2 + 0xc);
            if ((uVar13 <= uVar8) &&
               ((uVar8 != uVar13 || (*(float *)(lVar11 + 0x10) <= *(float *)(lVar2 + 0x10)))))
            goto LAB_039f7180;
            uVar8 = uVar4 | 1;
          }
          else {
LAB_039f7180:
            uVar8 = uVar4;
          }
          lVar11 = plVar7[(int)(uVar8 - 1)];
          if ((*(uint *)(lVar11 + 0xc) <= *(uint *)(lVar10 + 0xc)) &&
             ((*(uint *)(lVar10 + 0xc) != *(uint *)(lVar11 + 0xc) ||
              (*(float *)(lVar10 + 0x10) <= *(float *)(lVar11 + 0x10))))) break;
          plVar7[(int)(uVar14 - 1)] = lVar11;
          uVar4 = uVar8 << 1;
          uVar14 = uVar8;
        } while ((long)(int)uVar4 < (long)uVar9);
        plVar7[(int)(uVar14 - 1)] = lVar10;
        uVar9 = uVar12 - 1 & 0xffffffff;
        lVar10 = plVar7[uVar9];
        plVar7[uVar9] = *plVar7;
        bVar1 = 2 < uVar12;
        uVar9 = uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar1);
    }
    break;
  case 1:
    uVar4 = *(uint *)(param_1 + 0x3c);
    if ((int)uVar4 < 2) goto switchD_039f6cb4_default;
    plVar7 = *(long **)(param_1 + 0x30);
    uVar9 = (ulong)(uVar4 >> 1);
    do {
      uVar8 = (uint)uVar9;
      uVar14 = uVar8 * 2;
      lVar10 = plVar7[uVar9 - 1 & 0xffffffff];
      if ((int)uVar14 <= (int)uVar4) {
        uVar12 = uVar9 & 0xffffffff;
        do {
          uVar13 = uVar14;
          if ((int)uVar14 < (int)uVar4) {
            lVar11 = (plVar7 + (int)uVar14)[-1];
            lVar2 = plVar7[(int)uVar14];
            uVar8 = *(uint *)(lVar11 + 0xc);
            uVar3 = *(uint *)(lVar2 + 0xc);
            if ((uVar8 < uVar3) ||
               ((uVar8 == uVar3 && (*(float *)(lVar11 + 0x10) < *(float *)(lVar2 + 0x10))))) {
              uVar13 = uVar14 | 1;
            }
          }
          lVar11 = plVar7[(int)(uVar13 - 1)];
          uVar8 = (uint)uVar12;
          if ((*(uint *)(lVar11 + 0xc) <= *(uint *)(lVar10 + 0xc)) &&
             ((*(uint *)(lVar10 + 0xc) != *(uint *)(lVar11 + 0xc) ||
              (*(float *)(lVar11 + 0x10) <= *(float *)(lVar10 + 0x10))))) break;
          plVar7[(int)(uVar8 - 1)] = lVar11;
          uVar14 = uVar13 * 2;
          uVar12 = (ulong)uVar13;
          uVar8 = uVar13;
        } while ((int)uVar14 <= (int)uVar4);
      }
      plVar7[(int)(uVar8 - 1)] = lVar10;
      bVar1 = 1 < (long)uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar1);
    uVar12 = (ulong)uVar4 - 1;
    uVar9 = uVar12 & 0xffffffff;
    lVar10 = plVar7[uVar9];
    plVar7[uVar9] = *plVar7;
    uVar9 = (ulong)uVar4;
    if (2 < uVar4) {
      do {
        uVar4 = 2;
        uVar14 = 1;
        do {
          if ((int)uVar4 < (int)uVar12) {
            lVar11 = (plVar7 + (int)uVar4)[-1];
            lVar2 = plVar7[(int)uVar4];
            uVar8 = *(uint *)(lVar11 + 0xc);
            uVar13 = *(uint *)(lVar2 + 0xc);
            if ((uVar13 <= uVar8) &&
               ((uVar8 != uVar13 || (*(float *)(lVar2 + 0x10) <= *(float *)(lVar11 + 0x10)))))
            goto LAB_039f7280;
            uVar8 = uVar4 | 1;
          }
          else {
LAB_039f7280:
            uVar8 = uVar4;
          }
          lVar11 = plVar7[(int)(uVar8 - 1)];
          if ((*(uint *)(lVar11 + 0xc) <= *(uint *)(lVar10 + 0xc)) &&
             ((*(uint *)(lVar10 + 0xc) != *(uint *)(lVar11 + 0xc) ||
              (*(float *)(lVar11 + 0x10) <= *(float *)(lVar10 + 0x10))))) break;
          plVar7[(int)(uVar14 - 1)] = lVar11;
          uVar4 = uVar8 << 1;
          uVar14 = uVar8;
        } while ((long)(int)uVar4 < (long)uVar9);
        plVar7[(int)(uVar14 - 1)] = lVar10;
        uVar9 = uVar12 - 1 & 0xffffffff;
        lVar10 = plVar7[uVar9];
        plVar7[uVar9] = *plVar7;
        bVar1 = 2 < uVar12;
        uVar9 = uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar1);
    }
    break;
  case 2:
    uVar4 = *(uint *)(param_1 + 0x3c);
    if ((int)uVar4 < 2) goto switchD_039f6cb4_default;
    plVar7 = *(long **)(param_1 + 0x30);
    uVar9 = (ulong)(uVar4 >> 1);
    do {
      uVar14 = (uint)uVar9 * 2;
      lVar10 = plVar7[uVar9 - 1 & 0xffffffff];
      if ((int)uVar4 < (int)uVar14) {
        uVar8 = (uint)uVar9;
      }
      else {
        uVar12 = uVar9 & 0xffffffff;
        do {
          if ((int)uVar14 < (int)uVar4) {
            uVar13 = uVar14 | *(float *)(plVar7[(int)uVar14] + 0x10) <
                              *(float *)((plVar7 + (int)uVar14)[-1] + 0x10);
          }
          else {
            uVar13 = uVar14;
          }
          uVar8 = (uint)uVar12;
          if (*(float *)(lVar10 + 0x10) <= *(float *)(plVar7[(int)(uVar13 - 1)] + 0x10)) break;
          plVar7[(int)((uint)uVar12 - 1)] = plVar7[(int)(uVar13 - 1)];
          uVar14 = uVar13 * 2;
          uVar12 = (ulong)uVar13;
          uVar8 = uVar13;
        } while ((int)uVar14 <= (int)uVar4);
      }
      plVar7[(int)(uVar8 - 1)] = lVar10;
      bVar1 = 1 < (long)uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar1);
    uVar12 = (ulong)uVar4 - 1;
    uVar9 = uVar12 & 0xffffffff;
    lVar10 = plVar7[uVar9];
    plVar7[uVar9] = *plVar7;
    uVar9 = (ulong)uVar4;
    if (2 < uVar4) {
      do {
        uVar4 = 2;
        uVar14 = 1;
        do {
          if ((int)uVar4 < (int)uVar12) {
            uVar8 = uVar4 | *(float *)(plVar7[(int)uVar4] + 0x10) <
                            *(float *)((plVar7 + (int)uVar4)[-1] + 0x10);
          }
          else {
            uVar8 = uVar4;
          }
          lVar11 = (long)(int)(uVar14 - 1);
          if (*(float *)(lVar10 + 0x10) <= *(float *)(plVar7[(int)(uVar8 - 1)] + 0x10))
          goto LAB_039f72e0;
          plVar7[lVar11] = plVar7[(int)(uVar8 - 1)];
          uVar4 = uVar8 << 1;
          uVar14 = uVar8;
        } while ((long)(int)uVar4 < (long)uVar9);
        lVar11 = (long)(int)(uVar8 - 1);
LAB_039f72e0:
        plVar7[lVar11] = lVar10;
        uVar9 = uVar12 - 1 & 0xffffffff;
        lVar10 = plVar7[uVar9];
        plVar7[uVar9] = *plVar7;
        bVar1 = 2 < uVar12;
        uVar9 = uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar1);
    }
    break;
  case 3:
    uVar4 = *(uint *)(param_1 + 0x3c);
    if ((int)uVar4 < 2) goto switchD_039f6cb4_default;
    plVar7 = *(long **)(param_1 + 0x30);
    uVar9 = (ulong)(uVar4 >> 1);
    do {
      uVar14 = (uint)uVar9 * 2;
      lVar10 = plVar7[uVar9 - 1 & 0xffffffff];
      if ((int)uVar4 < (int)uVar14) {
        uVar8 = (uint)uVar9;
      }
      else {
        uVar12 = uVar9 & 0xffffffff;
        do {
          if ((int)uVar14 < (int)uVar4) {
            uVar13 = uVar14 | *(float *)((plVar7 + (int)uVar14)[-1] + 0x10) <
                              *(float *)(plVar7[(int)uVar14] + 0x10);
          }
          else {
            uVar13 = uVar14;
          }
          uVar8 = (uint)uVar12;
          if (*(float *)(plVar7[(int)(uVar13 - 1)] + 0x10) <= *(float *)(lVar10 + 0x10)) break;
          plVar7[(int)((uint)uVar12 - 1)] = plVar7[(int)(uVar13 - 1)];
          uVar14 = uVar13 * 2;
          uVar12 = (ulong)uVar13;
          uVar8 = uVar13;
        } while ((int)uVar14 <= (int)uVar4);
      }
      plVar7[(int)(uVar8 - 1)] = lVar10;
      bVar1 = 1 < (long)uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar1);
    uVar12 = (ulong)uVar4 - 1;
    uVar9 = uVar12 & 0xffffffff;
    lVar10 = plVar7[uVar9];
    plVar7[uVar9] = *plVar7;
    uVar9 = (ulong)uVar4;
    if (2 < uVar4) {
      do {
        uVar4 = 2;
        uVar14 = 1;
        do {
          if ((int)uVar4 < (int)uVar12) {
            uVar8 = uVar4 | *(float *)((plVar7 + (int)uVar4)[-1] + 0x10) <
                            *(float *)(plVar7[(int)uVar4] + 0x10);
          }
          else {
            uVar8 = uVar4;
          }
          lVar11 = (long)(int)(uVar14 - 1);
          if (*(float *)(plVar7[(int)(uVar8 - 1)] + 0x10) <= *(float *)(lVar10 + 0x10))
          goto LAB_039f73a4;
          plVar7[lVar11] = plVar7[(int)(uVar8 - 1)];
          uVar4 = uVar8 << 1;
          uVar14 = uVar8;
        } while ((long)(int)uVar4 < (long)uVar9);
        lVar11 = (long)(int)(uVar8 - 1);
LAB_039f73a4:
        plVar7[lVar11] = lVar10;
        uVar9 = uVar12 - 1 & 0xffffffff;
        lVar10 = plVar7[uVar9];
        plVar7[uVar9] = *plVar7;
        bVar1 = 2 < uVar12;
        uVar9 = uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar1);
    }
    break;
  case 4:
    uVar4 = *(uint *)(param_1 + 0x3c);
    if ((int)uVar4 < 2) goto switchD_039f6cb4_default;
    plVar7 = *(long **)(param_1 + 0x30);
    uVar9 = (ulong)(uVar4 >> 1);
    do {
      uVar14 = (uint)uVar9 * 2;
      lVar10 = plVar7[uVar9 - 1 & 0xffffffff];
      if ((int)uVar4 < (int)uVar14) {
        uVar8 = (uint)uVar9;
      }
      else {
        uVar12 = uVar9 & 0xffffffff;
        do {
          if ((int)uVar14 < (int)uVar4) {
            uVar13 = uVar14 | *(uint *)((plVar7 + (int)uVar14)[-1] + 0xc) <
                              *(uint *)(plVar7[(int)uVar14] + 0xc);
          }
          else {
            uVar13 = uVar14;
          }
          uVar8 = (uint)uVar12;
          if (*(uint *)(plVar7[(int)(uVar13 - 1)] + 0xc) <= *(uint *)(lVar10 + 0xc)) break;
          plVar7[(int)((uint)uVar12 - 1)] = plVar7[(int)(uVar13 - 1)];
          uVar14 = uVar13 * 2;
          uVar12 = (ulong)uVar13;
          uVar8 = uVar13;
        } while ((int)uVar14 <= (int)uVar4);
      }
      plVar7[(int)(uVar8 - 1)] = lVar10;
      bVar1 = 1 < (long)uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar1);
    uVar12 = (ulong)uVar4 - 1;
    uVar9 = uVar12 & 0xffffffff;
    lVar10 = plVar7[uVar9];
    plVar7[uVar9] = *plVar7;
    uVar9 = (ulong)uVar4;
    if (2 < uVar4) {
      do {
        uVar4 = 2;
        uVar14 = 1;
        do {
          if ((int)uVar4 < (int)uVar12) {
            uVar8 = uVar4 | *(uint *)((plVar7 + (int)uVar4)[-1] + 0xc) <
                            *(uint *)(plVar7[(int)uVar4] + 0xc);
          }
          else {
            uVar8 = uVar4;
          }
          lVar11 = (long)(int)(uVar14 - 1);
          if (*(uint *)(plVar7[(int)(uVar8 - 1)] + 0xc) <= *(uint *)(lVar10 + 0xc))
          goto LAB_039f74d0;
          plVar7[lVar11] = plVar7[(int)(uVar8 - 1)];
          uVar4 = uVar8 << 1;
          uVar14 = uVar8;
        } while ((long)(int)uVar4 < (long)uVar9);
        lVar11 = (long)(int)(uVar8 - 1);
LAB_039f74d0:
        plVar7[lVar11] = lVar10;
        uVar9 = uVar12 - 1 & 0xffffffff;
        lVar10 = plVar7[uVar9];
        plVar7[uVar9] = *plVar7;
        bVar1 = 2 < uVar12;
        uVar9 = uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar1);
    }
    break;
  default:
    goto switchD_039f6cb4_default;
  }
  *plVar7 = lVar10;
switchD_039f6cb4_default:
  iVar5 = *(int *)(param_1 + 0x3c);
  puVar15 = *(undefined8 **)(param_1 + 0x28);
  if (0 < iVar5) {
    do {
      puVar6 = (undefined8 *)*puVar15;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | *(uint *)(puVar6 + 1);
      uVar4 = (**(code **)(*(long *)*puVar6 + 0x50))();
      iVar5 = iVar5 + -1;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | uVar4;
      puVar15 = puVar15 + 1;
    } while (iVar5 != 0);
  }
  return;
}

