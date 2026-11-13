
void FUN_012efe10(long param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  char cVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  
  puVar5 = PTR_DAT_04bbbe68;
  puVar4 = PTR_DAT_04bbbe60;
  if (param_2 == (uint *)0x0) {
    return;
  }
  puVar8 = *(uint **)(param_1 + 8);
  if ((puVar8 == (uint *)0x0) || (*puVar8 == 0)) {
LAB_012eff10:
    uVar11 = 0;
  }
  else {
    cVar10 = *PTR_DAT_04bbbe60;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar11 = *(uint *)(puVar5 + 0x28);
        if (-1 < (int)uVar11) {
          if (((byte *)((ulong)uVar11 + (long)puVar8) == (byte *)0x0) ||
             (bVar3 = *(byte *)((ulong)uVar11 + (long)puVar8), uVar11 = (uint)bVar3, 0xc < bVar3))
          goto LAB_012eff10;
          goto LAB_012eff14;
        }
        if (uVar11 != 0xffffffff) goto LAB_012eff10;
      }
      puVar9 = (uint *)(ulong)*puVar8;
      uVar11 = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar9)) goto LAB_012eff14;
      lVar2 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar8 + (lVar2 - (long)puVar9);
      if (lVar2 == 0) goto LAB_012eff10;
      uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
      *(undefined4 *)(puVar5 + 0x28) = 0xfffffffe;
      uVar11 = 0;
      if (uVar12 == 0) goto LAB_012eff14;
      piVar13 = (int *)(lVar2 + 4);
      while (piVar13[-1] != 0x31450aa2) {
        piVar13 = piVar13 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          uVar11 = 0;
          goto LAB_012eff14;
        }
      }
      iVar1 = 0;
      if (*piVar13 != -1) {
        iVar1 = *piVar13;
      }
      *(int *)(puVar5 + 0x28) = iVar1;
    } while (*puVar8 != 0);
    uVar11 = 0;
  }
LAB_012eff14:
  param_2[1] = uVar11;
  puVar8 = *(uint **)(param_1 + 8);
  if (puVar8 == (uint *)0x0) {
LAB_012effa8:
    uVar7 = 0;
  }
  else {
    uVar11 = *puVar8;
    uVar7 = 0;
    if ((uVar11 != 0) && (puVar8 != (uint *)(ulong)uVar11)) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar11);
      uVar7 = 0;
      if (*puVar9 != 0) {
        uVar11 = puVar9[1];
        if ((uVar11 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar2 != 0) {
            uVar7 = 0;
            if ((ulong)uVar11 != 0) {
              uVar7 = (uint)((ulong)((long)puVar8 - lVar2) / (ulong)uVar11);
            }
            if (*puVar9 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < *(uint *)PTR_DAT_04bbbe78) &&
               (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bbbe78 + 8) + (long)(int)uVar7 * 2),
               uVar7 < 3)) goto LAB_012effac;
          }
        }
        goto LAB_012effa8;
      }
    }
  }
LAB_012effac:
  param_2[2] = uVar7;
  puVar8 = *(uint **)(param_1 + 8);
  if (puVar8 == (uint *)0x0) {
LAB_012f0040:
    uVar7 = 0;
  }
  else {
    uVar11 = *puVar8;
    uVar7 = 0;
    if ((uVar11 != 0) && (puVar8 != (uint *)(ulong)uVar11)) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar11);
      uVar7 = 0;
      if (*puVar9 != 0) {
        uVar11 = puVar9[1];
        if ((uVar11 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar2 != 0) {
            uVar7 = 0;
            if ((ulong)uVar11 != 0) {
              uVar7 = (uint)((ulong)((long)puVar8 - lVar2) / (ulong)uVar11);
            }
            if (*puVar9 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < *(uint *)PTR_DAT_04bbbe98) &&
               (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bbbe98 + 8) + (long)(int)uVar7 * 2),
               uVar7 < 2)) goto LAB_012f0044;
          }
        }
        goto LAB_012f0040;
      }
    }
  }
LAB_012f0044:
  param_2[3] = uVar7;
  puVar8 = *(uint **)(param_1 + 8);
  if (puVar8 == (uint *)0x0) {
LAB_012f00d8:
    uVar7 = 0;
  }
  else {
    uVar11 = *puVar8;
    uVar7 = 0;
    if ((uVar11 != 0) && (puVar8 != (uint *)(ulong)uVar11)) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar11);
      uVar7 = 0;
      if (*puVar9 != 0) {
        uVar11 = puVar9[1];
        if ((uVar11 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar2 != 0) {
            uVar7 = 0;
            if ((ulong)uVar11 != 0) {
              uVar7 = (uint)((ulong)((long)puVar8 - lVar2) / (ulong)uVar11);
            }
            if (*puVar9 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < *(uint *)PTR_DAT_04bbbe88) &&
               (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bbbe88 + 8) + (long)(int)uVar7 * 2),
               uVar7 < 3)) goto LAB_012f00dc;
          }
        }
        goto LAB_012f00d8;
      }
    }
  }
LAB_012f00dc:
  param_2[4] = uVar7;
  puVar8 = *(uint **)(param_1 + 8);
  if (puVar8 == (uint *)0x0) {
LAB_012f0170:
    uVar7 = 0;
  }
  else {
    uVar11 = *puVar8;
    uVar7 = 0;
    if ((uVar11 != 0) && (puVar8 != (uint *)(ulong)uVar11)) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar11);
      uVar7 = 0;
      if (*puVar9 != 0) {
        uVar11 = puVar9[1];
        if ((uVar11 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar2 != 0) {
            uVar7 = 0;
            if ((ulong)uVar11 != 0) {
              uVar7 = (uint)((ulong)((long)puVar8 - lVar2) / (ulong)uVar11);
            }
            if (*puVar9 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < *(uint *)PTR_DAT_04bbbea0) &&
               (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bbbea0 + 8) + (long)(int)uVar7 * 2),
               uVar7 < 3)) goto LAB_012f0174;
          }
        }
        goto LAB_012f0170;
      }
    }
  }
LAB_012f0174:
  param_2[5] = uVar7;
  puVar5 = PTR_DAT_04bbbe68;
  puVar4 = PTR_DAT_04bbbe60;
  puVar8 = *(uint **)(param_1 + 8);
  if ((puVar8 != (uint *)0x0) && (*puVar8 != 0)) {
    cVar10 = *PTR_DAT_04bbbe60;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar11 = *(uint *)(puVar5 + 0x2c);
        if (-1 < (int)uVar11) {
          if ((char *)((ulong)uVar11 + (long)puVar8) == (char *)0x0) break;
          bVar6 = *(char *)((ulong)uVar11 + (long)puVar8) != '\0';
          goto LAB_012f0278;
        }
        if (uVar11 != 0xffffffff) break;
      }
      puVar9 = (uint *)(ulong)*puVar8;
      bVar6 = false;
      if ((*puVar8 == 0) || (puVar8 == puVar9)) goto LAB_012f0278;
      lVar2 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar8 + (lVar2 - (long)puVar9);
      if (lVar2 == 0) break;
      uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
      *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
      bVar6 = false;
      if (uVar12 == 0) goto LAB_012f0278;
      piVar13 = (int *)(lVar2 + 4);
      while (piVar13[-1] != -0x6d928228) {
        piVar13 = piVar13 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          bVar6 = false;
          goto LAB_012f0278;
        }
      }
      bVar6 = false;
      iVar1 = 0;
      if (*piVar13 != -1) {
        iVar1 = *piVar13;
      }
      *(int *)(puVar5 + 0x2c) = iVar1;
      if (*puVar8 == 0) goto LAB_012f0278;
    } while( true );
  }
  bVar6 = false;
LAB_012f0278:
  *(bool *)((long)param_2 + 0x19) = bVar6;
  puVar5 = PTR_DAT_04bbbe68;
  puVar4 = PTR_DAT_04bbbe60;
  puVar8 = *(uint **)(param_1 + 8);
  if ((puVar8 != (uint *)0x0) && (*puVar8 != 0)) {
    cVar10 = *PTR_DAT_04bbbe60;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar11 = *(uint *)(puVar5 + 0x24);
        if (-1 < (int)uVar11) {
          if ((char *)((ulong)uVar11 + (long)puVar8) == (char *)0x0) break;
          bVar6 = *(char *)((ulong)uVar11 + (long)puVar8) != '\0';
          goto LAB_012f0378;
        }
        if (uVar11 != 0xffffffff) break;
      }
      puVar9 = (uint *)(ulong)*puVar8;
      bVar6 = false;
      if ((*puVar8 == 0) || (puVar8 == puVar9)) goto LAB_012f0378;
      lVar2 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar8 + (lVar2 - (long)puVar9);
      if (lVar2 == 0) break;
      uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
      *(undefined4 *)(puVar5 + 0x24) = 0xfffffffe;
      bVar6 = false;
      if (uVar12 == 0) goto LAB_012f0378;
      piVar13 = (int *)(lVar2 + 4);
      while (piVar13[-1] != -0x65c8424) {
        piVar13 = piVar13 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          bVar6 = false;
          goto LAB_012f0378;
        }
      }
      bVar6 = false;
      iVar1 = 0;
      if (*piVar13 != -1) {
        iVar1 = *piVar13;
      }
      *(int *)(puVar5 + 0x24) = iVar1;
      if (*puVar8 == 0) goto LAB_012f0378;
    } while( true );
  }
  bVar6 = false;
LAB_012f0378:
  *(bool *)(param_2 + 6) = bVar6;
  puVar8 = *(uint **)(param_1 + 8);
  if (puVar8 == (uint *)0x0) {
LAB_012f040c:
    uVar7 = 0;
  }
  else {
    uVar11 = *puVar8;
    uVar7 = 0;
    if ((uVar11 != 0) && (puVar8 != (uint *)(ulong)uVar11)) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar11);
      uVar7 = 0;
      if (*puVar9 != 0) {
        uVar11 = puVar9[1];
        if ((uVar11 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar2 != 0) {
            uVar7 = 0;
            if ((ulong)uVar11 != 0) {
              uVar7 = (uint)((ulong)((long)puVar8 - lVar2) / (ulong)uVar11);
            }
            if (*puVar9 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < *(uint *)PTR_DAT_04bbbe90) &&
               (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bbbe90 + 8) + (long)(int)uVar7 * 2),
               uVar7 < 2)) goto LAB_012f0410;
          }
        }
        goto LAB_012f040c;
      }
    }
  }
LAB_012f0410:
  *param_2 = uVar7;
  puVar8 = *(uint **)(param_1 + 8);
  if (puVar8 != (uint *)0x0) {
    uVar11 = *puVar8;
    uVar7 = 0;
    if ((uVar11 == 0) || (puVar8 == (uint *)(ulong)uVar11)) goto LAB_012f04a8;
    puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar11);
    uVar7 = 0;
    if (*puVar9 == 0) goto LAB_012f04a8;
    uVar11 = puVar9[1];
    if ((uVar11 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar2 != 0) {
        uVar7 = 0;
        if ((ulong)uVar11 != 0) {
          uVar7 = (uint)((ulong)((long)puVar8 - lVar2) / (ulong)uVar11);
        }
        if (*puVar9 <= uVar7) {
          uVar7 = 0xffffffff;
        }
        if ((uVar7 < *(uint *)PTR_DAT_04bbbe80) &&
           (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bbbe80 + 8) + (long)(int)uVar7 * 2),
           uVar7 < 2)) goto LAB_012f04a8;
      }
    }
  }
  uVar7 = 0;
LAB_012f04a8:
  param_2[7] = uVar7;
  *(bool *)(param_2 + 8) = *(int *)(param_1 + 0x10) == 2;
  return;
}

