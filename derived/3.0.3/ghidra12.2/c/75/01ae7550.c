
ushort FUN_01ae7550(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint *puVar10;
  ushort uVar11;
  uint *puVar12;
  long lVar13;
  
  puVar3 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_1 + 8);
  if (*(long *)puVar3 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
        (iVar7 = FUN_01af93e8(param_1), iVar7 != 0)) &&
       (uVar8 = FUN_01ae59b0(param_1), (uVar8 & 1) == 0)) {
      uVar8 = FUN_01ae59b0(param_1);
      bVar1 = *(byte *)(param_1 + 10) >> 2 & 1;
      if ((uVar8 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 4;
      }
      if (bVar1 == 0) {
        return 7;
      }
    }
  }
  uVar8 = FUN_01ae7a70(param_1);
  if ((uVar8 & 1) == 0) {
    puVar10 = *(uint **)(param_1 + 0x10);
LAB_01ae78c4:
    uVar6 = *puVar10;
    if (uVar6 == 0) {
      return 0;
    }
    if (puVar10 == (uint *)(ulong)uVar6) {
      return 0;
    }
    puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
    uVar6 = *puVar12;
    if (uVar6 == 0) {
      return 0;
    }
    uVar2 = puVar12[1];
    if (uVar2 == 0) {
      return 0;
    }
    if ((ulong)(ushort)puVar12[2] == 0) {
      return 0;
    }
    lVar13 = 0xc;
    if (*(char *)((long)puVar12 + 10) != '\0') {
      lVar13 = 0x1c;
    }
    lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
    if (lVar13 == 0) {
      return 0;
    }
    uVar9 = 0;
    if ((ulong)uVar2 != 0) {
      uVar9 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar2);
    }
    bVar4 = uVar9 <= uVar6;
    bVar5 = uVar6 == uVar9;
    puVar10 = &DAT_05326da0;
  }
  else {
    if ((*(byte *)(param_1 + 10) >> 3 & 1) == 0) {
      puVar10 = *(uint **)(param_1 + 0x10);
      if (puVar10 == (uint *)0x0) {
        uVar11 = 0xbc;
      }
      else {
        uVar6 = *puVar10;
        uVar11 = 0;
        if ((uVar6 != 0) && (puVar10 != (uint *)(ulong)uVar6)) {
          puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
          uVar11 = 0;
          if (*puVar12 != 0) {
            uVar6 = puVar12[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar13 != 0) {
                uVar2 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar6);
                }
                if (*puVar12 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar11 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar11 < 0xbd))
                goto LAB_01ae78b0;
              }
            }
            uVar11 = 0;
          }
        }
      }
LAB_01ae78b0:
      if ((uVar11 & 0xfffd) == 0xa4) {
        return 0;
      }
      goto LAB_01ae78c4;
    }
    puVar10 = *(uint **)(param_1 + 0x10);
    if (puVar10 == (uint *)0x0) {
LAB_01ae7974:
      uVar11 = 0xbc;
LAB_01ae7978:
      if ((uVar11 & 0xfffd) != 0xa4) {
        FUN_01ad6a30(param_1,0x49);
        return 10;
      }
      uVar6 = FUN_03853b94();
      if (DAT_05326da0 <= uVar6) {
        return 0;
      }
      uVar11 = *(ushort *)(DAT_05326da8 + (long)(int)uVar6 * 2);
      goto LAB_01ae79ac;
    }
    uVar6 = *puVar10;
    uVar11 = 0;
    if ((uVar6 != 0) && (puVar10 != (uint *)(ulong)uVar6)) {
      puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
      uVar11 = 0;
      if (*puVar12 != 0) {
        uVar6 = puVar12[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar13 != 0) {
            uVar2 = 0;
            if ((ulong)uVar6 != 0) {
              uVar2 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar6);
            }
            if (*puVar12 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326af0) &&
               (uVar11 = *(ushort *)(DAT_05326af8 + (long)(int)uVar2 * 2), uVar11 < 0xa2))
            goto LAB_01ae775c;
          }
        }
        uVar11 = 0;
      }
    }
LAB_01ae775c:
    if (uVar11 == 0x21) {
      uVar11 = 0;
      uVar6 = *puVar10;
      if ((uVar6 != 0) && (puVar10 != (uint *)(ulong)uVar6)) {
        puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
        uVar11 = 0;
        if (*puVar12 != 0) {
          uVar6 = puVar12[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar13 != 0) {
              uVar2 = 0;
              if ((ulong)uVar6 != 0) {
                uVar2 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar6);
              }
              if (*puVar12 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar11 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar11 < 0xbd))
              goto LAB_01ae7804;
            }
          }
          uVar11 = 0;
        }
      }
LAB_01ae7804:
      if (uVar11 == 0x72) {
        return 10;
      }
      if (puVar10 == (uint *)0x0) goto LAB_01ae7974;
      uVar6 = *puVar10;
      uVar11 = 0;
      if ((uVar6 != 0) && (puVar10 != (uint *)(ulong)uVar6)) {
        puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
        uVar11 = 0;
        if (*puVar12 != 0) {
          uVar6 = puVar12[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar13 != 0) {
              uVar2 = 0;
              if ((ulong)uVar6 != 0) {
                uVar2 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar6);
              }
              if (*puVar12 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar11 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar11 < 0xbd))
              goto LAB_01ae7978;
            }
          }
          uVar11 = 0;
        }
      }
      goto LAB_01ae7978;
    }
    puVar10 = (uint *)FUN_01ada7a0(param_1);
    if (puVar10 == (uint *)0x0) {
      return 10;
    }
    uVar6 = *puVar10;
    if (uVar6 == 0) {
      return 0;
    }
    if (puVar10 == (uint *)(ulong)uVar6) {
      return 0;
    }
    puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
    uVar6 = *puVar12;
    if (uVar6 == 0) {
      return 0;
    }
    uVar2 = puVar12[1];
    if (uVar2 == 0) {
      return 0;
    }
    if ((ulong)(ushort)puVar12[2] == 0) {
      return 0;
    }
    lVar13 = 0xc;
    if (*(char *)((long)puVar12 + 10) != '\0') {
      lVar13 = 0x1c;
    }
    lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
    if (lVar13 == 0) {
      return 0;
    }
    uVar9 = 0;
    if ((ulong)uVar2 != 0) {
      uVar9 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar2);
    }
    bVar4 = uVar9 <= uVar6;
    bVar5 = uVar6 == uVar9;
    puVar10 = &DAT_05326b80;
  }
  if (!bVar4 || bVar5) {
    uVar9 = 0xffffffff;
  }
  if (*puVar10 <= uVar9) {
    return 0;
  }
  uVar11 = *(ushort *)(*(long *)(puVar10 + 2) + (long)(int)uVar9 * 2);
LAB_01ae79ac:
  if (uVar11 < 0xf) {
    return uVar11;
  }
  return 0;
}

