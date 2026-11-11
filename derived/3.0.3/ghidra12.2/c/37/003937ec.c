
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003937ec(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t sVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  void *pvVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ushort *puVar21;
  ulong uVar22;
  
  puVar9 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x88) + 0x10) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 **)(*(long *)(param_1 + 0x88) + 0x10) = puVar9 + 6;
  *(undefined8 **)(param_1 + 0x20) = puVar9;
  uVar7 = _UNK_04102888;
  uVar6 = _DAT_04102880;
  uVar5 = _DAT_04102200;
  puVar9[1] = _UNK_04102208;
  *puVar9 = uVar5;
  puVar9[3] = uVar7;
  puVar9[2] = uVar6;
  uVar5 = _DAT_041023d0;
  puVar9[5] = _UNK_041023d8;
  puVar9[4] = uVar5;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x28) + 0x91) >> 1 & 1) != 0)) {
    FUN_00391f00(param_1 + 0x40);
  }
  uVar20 = *(uint *)(param_1 + 0xc0);
  pvVar16 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
  *(void **)(*(long *)(param_1 + 0x88) + 0x10) = (void *)((long)pvVar16 + (long)(int)uVar20 * 0x30);
  if (0 < (int)uVar20 && pvVar16 != (void *)0x0) {
    memset(pvVar16,0,(ulong)uVar20 * 0x30);
  }
  *(void **)(param_1 + 0xa8) = pvVar16;
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar18 = 0;
    do {
      lVar19 = *(long *)(param_1 + 0xa0);
      puVar21 = (ushort *)(lVar19 + uVar18 * 0xa0);
      pvVar16 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
      uVar1 = *puVar21;
      sVar8 = (ulong)uVar1 * 8;
      *(void **)(*(long *)(param_1 + 0x88) + 0x10) = (void *)((long)pvVar16 + sVar8);
      if ((ulong)uVar1 != 0 && pvVar16 != (void *)0x0) {
        memset(pvVar16,0,sVar8);
      }
      *(void **)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x18) = pvVar16;
      if (*puVar21 == 0) {
LAB_00393b34:
        pvVar16 = (void *)0x0;
        uVar20 = 0;
      }
      else {
        uVar22 = 0;
        do {
          switch(**(undefined1 **)(*(long *)(lVar19 + uVar18 * 0xa0 + 8) + uVar22 * 8)) {
          case 0:
            plVar17 = *(long **)(*(long *)(param_1 + 0x88) + 0x10);
            *(long **)(*(long *)(param_1 + 0x88) + 0x10) = plVar17 + 7;
            if (plVar17 != (long *)0x0) {
              FUN_0038f5f0(plVar17);
            }
            *(undefined4 *)(plVar17 + 6) = *(undefined4 *)(param_1 + 200);
            goto LAB_00393968;
          case 1:
            plVar17 = *(long **)(*(long *)(param_1 + 0x88) + 0x10);
            *(long **)(*(long *)(param_1 + 0x88) + 0x10) = plVar17 + 7;
            if (plVar17 != (long *)0x0) {
              FUN_00390004(plVar17);
              goto LAB_00393968;
            }
            break;
          case 2:
            plVar17 = *(long **)(*(long *)(param_1 + 0x88) + 0x10);
            *(long **)(*(long *)(param_1 + 0x88) + 0x10) = plVar17 + 8;
            if (plVar17 != (long *)0x0) {
              FUN_00390470(plVar17);
              goto LAB_00393968;
            }
            break;
          case 3:
            plVar17 = *(long **)(*(long *)(param_1 + 0x88) + 0x10);
            *(long **)(*(long *)(param_1 + 0x88) + 0x10) = plVar17 + 8;
            if (plVar17 != (long *)0x0) {
              FUN_00390dac(plVar17);
            }
            *(undefined4 *)((long)plVar17 + 0x34) = *(undefined4 *)(param_1 + 200);
LAB_00393968:
            (**(code **)(*plVar17 + 0x10))(plVar17);
            break;
          default:
            plVar17 = (long *)0x0;
          }
          *(long **)(*(long *)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x18) + uVar22 * 8) =
               plVar17;
          uVar22 = uVar22 + 1;
          uVar1 = *puVar21;
        } while (uVar22 < uVar1);
        if (uVar1 == 0) goto LAB_00393b34;
        lVar11 = lVar19 + uVar18 * 0xa0;
        uVar22 = 0;
        uVar20 = 0;
        uVar2 = *(ushort *)(lVar11 + 0x10);
        do {
          uVar3 = *(ushort *)(*(long *)(*(long *)(lVar11 + 8) + uVar22 * 8) + 2);
          uVar12 = (ulong)uVar3;
          if ((uint)uVar3 < (uint)uVar2) {
            uVar4 = (uint)uVar2 - (uint)uVar3;
            uVar15 = (ulong)uVar4 & 3;
            uVar14 = uVar12;
            if ((uVar4 & 3) != 0) {
              do {
                lVar13 = uVar14 * 8;
                uVar14 = uVar14 + 1;
                if (**(byte **)(*(long *)(lVar11 + 0x18) + lVar13) < 2) {
                  uVar20 = uVar20 + 1;
                }
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            if (2 < ~uVar12 + (ulong)uVar2) {
              lVar13 = uVar2 - uVar14;
              puVar9 = (undefined8 *)(*(long *)(lVar11 + 0x18) + 0x10 + uVar14 * 8);
              do {
                if (*(byte *)puVar9[-2] < 2) {
                  uVar20 = uVar20 + 1;
                }
                if (*(byte *)puVar9[-1] < 2) {
                  uVar20 = uVar20 + 1;
                }
                if (*(byte *)*puVar9 < 2) {
                  uVar20 = uVar20 + 1;
                }
                if (*(byte *)puVar9[1] < 2) {
                  uVar20 = uVar20 + 1;
                }
                lVar13 = lVar13 + -4;
                puVar9 = puVar9 + 4;
              } while (lVar13 != 0);
            }
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar1);
        if (uVar20 == 0) {
          pvVar16 = (void *)0x0;
        }
        else {
          pvVar16 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
          *(void **)(*(long *)(param_1 + 0x88) + 0x10) =
               (void *)((long)pvVar16 + (long)(int)uVar20 * 0x18);
          if ((0 < (int)uVar20) && (pvVar16 != (void *)0x0)) {
            memset(pvVar16,0,(ulong)uVar20 * 0x18);
          }
        }
      }
      *(void **)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x28) = pvVar16;
      *(uint *)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x20) = uVar20;
      puVar21 = (ushort *)(lVar19 + uVar18 * 0xa0 + 0x10);
      if ((ulong)*puVar21 == 0) {
        pvVar16 = (void *)0x0;
      }
      else {
        sVar8 = (ulong)*puVar21 * 8;
        pvVar16 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
        *(void **)(*(long *)(param_1 + 0x88) + 0x10) = (void *)((long)pvVar16 + sVar8);
        if (pvVar16 != (void *)0x0) {
          memset(pvVar16,0,sVar8);
        }
      }
      *(void **)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 8) = pvVar16;
      uVar1 = *puVar21;
      pvVar16 = *(void **)(*(long *)(param_1 + 0x88) + 0x10);
      sVar8 = (ulong)uVar1 * 0x10;
      *(void **)(*(long *)(param_1 + 0x88) + 0x10) = (void *)((long)pvVar16 + sVar8);
      if (((ulong)uVar1 != 0) && (pvVar16 != (void *)0x0)) {
        memset(pvVar16,0,sVar8);
      }
      *(void **)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x10) = pvVar16;
      if (*puVar21 != 0) {
        uVar22 = 0;
        lVar19 = 8;
        do {
          pcVar10 = *(char **)(*(long *)(*(long *)(param_1 + 0xa0) + uVar18 * 0xa0 + 0x18) +
                              uVar22 * 8);
          uVar22 = uVar22 + 1;
          if (*pcVar10 != '\x01') {
            pcVar10 = (char *)0x0;
          }
          *(char **)(*(long *)(*(long *)(param_1 + 0xa8) + uVar18 * 0x30 + 0x10) + lVar19) = pcVar10
          ;
          lVar19 = lVar19 + 0x10;
        } while (uVar22 < *puVar21);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(param_1 + 0xc0));
  }
  return;
}

