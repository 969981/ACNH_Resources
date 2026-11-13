
undefined2 FUN_0123d070(uint *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar7 = PTR_DAT_04bbbc78;
  puVar6 = PTR_DAT_04bbbc70;
  if (param_1 == (uint *)0x0) {
    return 0xfffe;
  }
  puVar9 = (uint *)((long)param_1 - (ulong)*param_1);
  if (((*param_1 != 0) && (puVar9 != (uint *)0x0)) && (uVar4 = *puVar9, uVar4 != 0)) {
    uVar5 = puVar9[1];
    if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar2 != 0) {
        uVar3 = 0;
        if ((ulong)uVar5 != 0) {
          uVar3 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar5);
        }
        if (uVar4 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < DAT_051503b8) && (*(short *)(DAT_051503c0 + (long)(int)uVar3 * 2) == 0xb))
        goto LAB_0123d314;
      }
    }
    uVar10 = (ulong)puVar9[1];
    if (puVar9[1] == 0) goto LAB_0123d3fc;
    if ((ulong)(ushort)puVar9[2] != 0) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar2 != 0) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = (uint)((ulong)((long)param_1 - lVar2) / uVar10);
        }
        if (uVar4 <= uVar5) {
          uVar5 = 0xffffffff;
        }
        if ((uVar5 < DAT_051503b8) && (*(short *)(DAT_051503c0 + (long)(int)uVar5 * 2) == 0xf))
        goto LAB_0123d314;
      }
    }
    if ((ulong)(ushort)puVar9[2] != 0) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar2 != 0) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = (uint)((ulong)((long)param_1 - lVar2) / uVar10);
        }
        if (uVar4 <= uVar5) {
          uVar5 = 0xffffffff;
        }
        if ((uVar5 < DAT_051503b8) && (*(short *)(DAT_051503c0 + (long)(int)uVar5 * 2) == 0xe))
        goto LAB_0123d314;
      }
    }
    if ((ulong)(ushort)puVar9[2] != 0) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar2 != 0) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = (uint)((ulong)((long)param_1 - lVar2) / uVar10);
        }
        if (uVar4 <= uVar5) {
          uVar5 = 0xffffffff;
        }
        if ((uVar5 < DAT_051503b8) && (*(short *)(DAT_051503c0 + (long)(int)uVar5 * 2) == 0x10))
        goto LAB_0123d314;
      }
    }
    if ((ulong)(ushort)puVar9[2] != 0) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar2 != 0) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = (uint)((ulong)((long)param_1 - lVar2) / uVar10);
        }
        if (uVar4 <= uVar5) {
          uVar5 = 0xffffffff;
        }
        if ((uVar5 < DAT_051503b8) && (*(short *)(DAT_051503c0 + (long)(int)uVar5 * 2) == 0xd))
        goto LAB_0123d314;
      }
    }
    if ((ulong)(ushort)puVar9[2] != 0) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar2 != 0) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = (uint)((ulong)((long)param_1 - lVar2) / uVar10);
        }
        if (uVar4 <= uVar5) {
          uVar5 = 0xffffffff;
        }
        if ((uVar5 < DAT_051503b8) && (*(short *)(DAT_051503c0 + (long)(int)uVar5 * 2) == 0x11))
        goto LAB_0123d314;
      }
    }
    if ((ulong)(ushort)puVar9[2] != 0) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar2 != 0) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = (uint)((ulong)((long)param_1 - lVar2) / uVar10);
        }
        if (uVar4 <= uVar5) {
          uVar5 = 0xffffffff;
        }
        if ((uVar5 < DAT_051503b8) && (*(short *)(DAT_051503c0 + (long)(int)uVar5 * 2) == 0xc)) {
LAB_0123d314:
          cVar8 = *PTR_DAT_04bbbc70;
          do {
            if (cVar8 == '\0') {
              cVar8 = '\x01';
              *(undefined8 *)puVar7 = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
              *puVar6 = 1;
              *(undefined4 *)(puVar7 + 0x60) = 0xffffffff;
              *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
            }
            else {
              uVar4 = *(uint *)(puVar7 + 0x1c);
              if (-1 < (int)uVar4) goto LAB_0123d4fc;
              if (uVar4 != 0xffffffff) {
                return 0xfffe;
              }
            }
            puVar9 = (uint *)(ulong)*param_1;
            if (*param_1 == 0) {
              return 0xfffe;
            }
            if (param_1 == puVar9) {
              return 0xfffe;
            }
            lVar2 = 0xc;
            if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
            if (lVar2 == 0) {
              return 0xfffe;
            }
            uVar10 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
            *(undefined4 *)(puVar7 + 0x1c) = 0xfffffffe;
            if (uVar10 == 0) {
              return 0xfffe;
            }
            piVar11 = (int *)(lVar2 + 4);
            while (piVar11[-1] != 0x76e7fe08) {
              piVar11 = piVar11 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) {
                return 0xfffe;
              }
            }
            iVar1 = 0;
            if (*piVar11 != -1) {
              iVar1 = *piVar11;
            }
            *(int *)(puVar7 + 0x1c) = iVar1;
            if (*param_1 == 0) {
              return 0xfffe;
            }
          } while( true );
        }
      }
    }
  }
LAB_0123d3fc:
  uVar10 = FUN_0123aef0(param_1,3);
  puVar7 = PTR_DAT_04bbbc78;
  puVar6 = PTR_DAT_04bbbc70;
  if ((uVar10 & 1) == 0) {
    return 0xfffe;
  }
  if (*param_1 == 0) {
    return 0xfffe;
  }
  cVar8 = *PTR_DAT_04bbbc70;
  do {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      *(undefined4 *)(puVar7 + 0x60) = 0xffffffff;
      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
    }
    else {
      uVar4 = *(uint *)(puVar7 + 0x1c);
      if (-1 < (int)uVar4) {
LAB_0123d4fc:
        if ((undefined2 *)((ulong)uVar4 + (long)param_1) == (undefined2 *)0x0) {
          return 0xfffe;
        }
        return *(undefined2 *)((ulong)uVar4 + (long)param_1);
      }
      if (uVar4 != 0xffffffff) {
        return 0xfffe;
      }
    }
    puVar9 = (uint *)(ulong)*param_1;
    if (*param_1 == 0) {
      return 0xfffe;
    }
    if (param_1 == puVar9) {
      return 0xfffe;
    }
    lVar2 = 0xc;
    if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
    if (lVar2 == 0) {
      return 0xfffe;
    }
    uVar10 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
    *(undefined4 *)(puVar7 + 0x1c) = 0xfffffffe;
    if (uVar10 == 0) {
      return 0xfffe;
    }
    piVar11 = (int *)(lVar2 + 4);
    while (piVar11[-1] != 0x76e7fe08) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 0xfffe;
      }
    }
    iVar1 = 0;
    if (*piVar11 != -1) {
      iVar1 = *piVar11;
    }
    *(int *)(puVar7 + 0x1c) = iVar1;
    if (*param_1 == 0) {
      return 0xfffe;
    }
  } while( true );
}

