
void FUN_0306f3f0(long param_1)

{
  void *__src;
  uint *puVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_16d2 [2];
  undefined4 local_16d0 [1448];
  
  puVar5 = PTR_DAT_04bb6298;
  puVar4 = PTR_DAT_04bb27f8;
  lVar10 = *(long *)PTR_DAT_04bb27f8;
  if (lVar10 == 0) {
    return;
  }
  if (((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) && ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)
      ) || ((*(int *)(lVar10 + 0x14) != 4 && (*(int *)(lVar10 + 0x14) != 5)))) {
    if (*(int *)(param_1 + 0xa0) == -1) {
      FUN_007ef010(auStack_16d2,param_1 + 0x98);
      FUN_007e4920(local_16d0,auStack_16d2);
      FUN_007e4bb0(local_16d0);
    }
    iVar9 = *(int *)(param_1 + 8);
    iVar7 = *(int *)(param_1 + 0xc);
    if (iVar9 < iVar7) {
      puVar11 = *(undefined8 **)(param_1 + 0x18);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar11;
      }
      *(undefined4 *)puVar11 = 0;
      iVar9 = *(int *)(param_1 + 8);
      iVar7 = *(int *)(param_1 + 0xc);
      if (iVar9 < iVar7) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar9 * 8) = puVar11;
LAB_0306f5dc:
        iVar7 = *(int *)(param_1 + 0xc);
        iVar9 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar9;
      }
    }
    goto LAB_0306f5e8;
  }
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) goto LAB_0306f760;
  local_16d0[0] = 0;
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
  if (0xff < (uint)(int)sVar3) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 & 1) == 0) {
    local_16d0[0] = 1;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) == 0) goto LAB_0306f760;
    if (*(int *)(param_1 + 0xa0) == -1) {
      FUN_007ef010(auStack_16d2,param_1 + 0x98);
      FUN_007e4920(local_16d0,auStack_16d2);
      uVar6 = FUN_007e4bb0(local_16d0);
      if ((uVar6 & 1) != 0) goto LAB_0306f69c;
    }
    iVar9 = *(int *)(param_1 + 8);
    iVar7 = *(int *)(param_1 + 0xc);
    if (iVar9 < iVar7) {
      puVar11 = *(undefined8 **)(param_1 + 0x18);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar11;
      }
      *(undefined4 *)puVar11 = 0;
      iVar9 = *(int *)(param_1 + 8);
      iVar7 = *(int *)(param_1 + 0xc);
      if (iVar9 < iVar7) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar9 * 8) = puVar11;
        iVar7 = *(int *)(param_1 + 0xc);
        iVar9 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar9;
      }
    }
    if (iVar9 < iVar7) {
      puVar11 = *(undefined8 **)(param_1 + 0x18);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar11;
      }
      *(undefined4 *)puVar11 = 1;
      iVar9 = *(int *)(param_1 + 8);
      iVar7 = *(int *)(param_1 + 0xc);
      if (iVar7 <= iVar9) {
        if (iVar7 <= iVar9) goto LAB_0306f5e8;
LAB_0306fa8c:
        puVar11 = *(undefined8 **)(param_1 + 0x18);
        if (puVar11 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = *puVar11;
        }
        uVar8 = 2;
        goto LAB_0306faa0;
      }
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar9 * 8) = puVar11;
      iVar7 = *(int *)(param_1 + 0xc);
      iVar9 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar9;
      if (iVar9 < iVar7) goto LAB_0306fa8c;
    }
    else if (iVar9 < iVar7) goto LAB_0306fa8c;
LAB_0306f5e8:
    if (iVar9 < iVar7) goto LAB_0306f5f0;
  }
  else {
    if (*(int *)(param_1 + 0xa0) == -1) {
      FUN_007ef010(auStack_16d2,param_1 + 0x98);
      FUN_007e4920(local_16d0,auStack_16d2);
      uVar6 = FUN_007e4bb0(local_16d0);
      if ((uVar6 & 1) != 0) {
LAB_0306f69c:
        iVar9 = *(int *)(param_1 + 8);
        iVar7 = *(int *)(param_1 + 0xc);
        if (iVar9 < iVar7) {
          puVar11 = *(undefined8 **)(param_1 + 0x18);
          if (puVar11 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x18) = *puVar11;
          }
          *(undefined4 *)puVar11 = 0;
          iVar9 = *(int *)(param_1 + 8);
          iVar7 = *(int *)(param_1 + 0xc);
          if (iVar9 < iVar7) {
            *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar9 * 8) = puVar11;
            iVar7 = *(int *)(param_1 + 0xc);
            iVar9 = *(int *)(param_1 + 8) + 1;
            *(int *)(param_1 + 8) = iVar9;
          }
        }
        if (iVar9 < iVar7) {
          puVar11 = *(undefined8 **)(param_1 + 0x18);
          if (puVar11 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x18) = *puVar11;
          }
          *(undefined4 *)puVar11 = 1;
          iVar9 = *(int *)(param_1 + 8);
          iVar7 = *(int *)(param_1 + 0xc);
          if (iVar9 < iVar7) {
            *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar9 * 8) = puVar11;
            goto LAB_0306f5dc;
          }
        }
        goto LAB_0306f5e8;
      }
    }
    iVar9 = *(int *)(param_1 + 8);
    iVar7 = *(int *)(param_1 + 0xc);
    if (iVar9 < iVar7) {
      puVar11 = *(undefined8 **)(param_1 + 0x18);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar11;
      }
      *(undefined4 *)puVar11 = 0;
      iVar9 = *(int *)(param_1 + 8);
      iVar7 = *(int *)(param_1 + 0xc);
      if (iVar9 < iVar7) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar9 * 8) = puVar11;
        iVar7 = *(int *)(param_1 + 0xc);
        iVar9 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar9;
      }
    }
    if (iVar9 < iVar7) {
      puVar11 = *(undefined8 **)(param_1 + 0x18);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar11;
      }
      *(undefined4 *)puVar11 = 1;
      iVar9 = *(int *)(param_1 + 8);
      iVar7 = *(int *)(param_1 + 0xc);
      if (iVar7 <= iVar9) {
        if (iVar9 < iVar7) goto LAB_0306f89c;
        goto LAB_0306f558;
      }
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar9 * 8) = puVar11;
      iVar7 = *(int *)(param_1 + 0xc);
      iVar9 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar9;
      if (iVar7 <= iVar9) goto LAB_0306f558;
LAB_0306f89c:
      puVar11 = *(undefined8 **)(param_1 + 0x18);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar11;
      }
      *(undefined4 *)puVar11 = 0x13;
      iVar9 = *(int *)(param_1 + 8);
      iVar7 = *(int *)(param_1 + 0xc);
      if (iVar9 < iVar7) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar9 * 8) = puVar11;
        iVar7 = *(int *)(param_1 + 0xc);
        iVar9 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar9;
        if (iVar7 <= iVar9) goto LAB_0306f5e8;
      }
      else if (iVar7 <= iVar9) goto LAB_0306f5e8;
    }
    else {
      if (iVar9 < iVar7) goto LAB_0306f89c;
LAB_0306f558:
      if (iVar7 <= iVar9) goto LAB_0306f5e8;
    }
    puVar11 = *(undefined8 **)(param_1 + 0x18);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar11;
    }
    uVar8 = 0x14;
LAB_0306faa0:
    *(undefined4 *)puVar11 = uVar8;
    iVar9 = *(int *)(param_1 + 8);
    iVar7 = *(int *)(param_1 + 0xc);
    if (iVar9 < iVar7) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar9 * 8) = puVar11;
      iVar7 = *(int *)(param_1 + 0xc);
      iVar9 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar9;
      if (iVar9 < iVar7) goto LAB_0306f5f0;
    }
    else if (iVar9 < iVar7) {
LAB_0306f5f0:
      puVar11 = *(undefined8 **)(param_1 + 0x18);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar11;
      }
      *(undefined4 *)puVar11 = 3;
      iVar9 = *(int *)(param_1 + 8);
      iVar7 = *(int *)(param_1 + 0xc);
      if (iVar9 < iVar7) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar9 * 8) = puVar11;
        iVar7 = *(int *)(param_1 + 0xc);
        iVar9 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar9;
      }
    }
  }
  if (iVar9 < iVar7) {
    puVar11 = *(undefined8 **)(param_1 + 0x18);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar11;
    }
    *(undefined4 *)puVar11 = 6;
    if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar11;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
  }
LAB_0306f760:
  if (*(int *)(param_1 + 0xa0) == -1) {
    FUN_007ef010(auStack_16d2,param_1 + 0x98);
    FUN_007e4920(local_16d0,auStack_16d2);
    uVar6 = FUN_007e4bb0(local_16d0);
    if (((uVar6 & 1) == 0) && (*(int *)(param_1 + 0xa0) == -1)) {
      return;
    }
  }
  if ((*(long *)puVar4 == 0) || ((*(byte *)(*(long *)puVar4 + 0x1a71) >> 1 & 1) == 0)) {
    sVar3 = *(short *)puVar5;
    if (sVar3 != -1) {
      local_16d0[0] = 0x1a;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x1a & 1) != 0) {
        uVar2 = *(uint *)(param_1 + 8);
        if (0 < (int)uVar2) {
          uVar6 = 0;
          lVar10 = 8;
          lVar12 = 0x100000000;
          do {
            if (**(int **)(*(long *)(param_1 + 0x10) + uVar6 * 8) == 0) {
              if ((int)uVar6 == -1) {
                return;
              }
              if ((int)uVar6 < (int)uVar2) {
                uVar13 = uVar6;
                puVar11 = *(undefined8 **)(param_1 + 0x18);
                do {
                  puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x10) + uVar13 * 8);
                  uVar13 = uVar13 + 1;
                  *puVar14 = puVar11;
                  *(undefined8 **)(param_1 + 0x18) = puVar14;
                  puVar11 = puVar14;
                } while ((long)uVar13 < lVar12 >> 0x20);
              }
              goto LAB_0306fa00;
            }
            uVar6 = uVar6 + 1;
            lVar12 = lVar12 + 0x100000000;
            lVar10 = lVar10 + 8;
          } while (uVar2 != uVar6);
        }
      }
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 8);
    if (0 < (int)uVar2) {
      uVar6 = 0;
      lVar10 = 8;
      lVar12 = 0x100000000;
      do {
        if (**(int **)(*(long *)(param_1 + 0x10) + uVar6 * 8) == 0) {
          if ((int)uVar6 == -1) {
            return;
          }
          if ((int)uVar6 < (int)uVar2) {
            uVar13 = uVar6;
            puVar11 = *(undefined8 **)(param_1 + 0x18);
            do {
              puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x10) + uVar13 * 8);
              uVar13 = uVar13 + 1;
              *puVar14 = puVar11;
              *(undefined8 **)(param_1 + 0x18) = puVar14;
              puVar11 = puVar14;
            } while ((long)uVar13 < lVar12 >> 0x20);
          }
LAB_0306fa00:
          iVar9 = (int)uVar6;
          if (iVar9 < 0) {
            return;
          }
          iVar7 = *(int *)(param_1 + 8);
          if (iVar7 <= iVar9) {
            return;
          }
          if (iVar9 + 1 < iVar7) {
            __src = (void *)(*(long *)(param_1 + 0x10) + lVar10);
            memmove((void *)((long)__src + -8),__src,((long)iVar7 - uVar6) * 8 - 8);
            iVar7 = *(int *)(param_1 + 8);
          }
          *(int *)(param_1 + 8) = iVar7 + -1;
          return;
        }
        uVar6 = uVar6 + 1;
        lVar12 = lVar12 + 0x100000000;
        lVar10 = lVar10 + 8;
      } while (uVar2 != uVar6);
    }
  }
  return;
}

