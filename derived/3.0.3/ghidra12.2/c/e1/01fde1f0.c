
void FUN_01fde1f0(long param_1)

{
  uint *puVar1;
  undefined8 *__src;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint *puVar16;
  int *piVar17;
  undefined8 *__dest;
  uint uVar18;
  undefined *local_50;
  char *pcStack_48;
  
  puVar5 = PTR_DAT_04bc23c8;
  puVar4 = PTR_DAT_04bc23c0;
  puVar1 = (uint *)(param_1 + 0x123bc);
  lVar10 = *(long *)PTR_DAT_04bb4960;
  if (lVar10 != 0) {
    uVar18 = *puVar1;
    if ((int)*(uint *)(lVar10 + 0x5c0) < 1) {
      if ((((*(long *)(lVar10 + 0x4b0) != 0) &&
           (puVar8 = *(uint **)(*(long *)(lVar10 + 0x4b0) + 8), puVar8 != (uint *)0x0)) &&
          ((*(uint *)(lVar10 + 0x4c8) <= uVar18 ||
           (*(char *)(*(long *)(lVar10 + 0x4d0) + (long)(int)uVar18) != '\0')))) &&
         (((uVar18 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
        iVar6 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          iVar6 = 0x1c;
        }
        puVar8 = (uint *)((ulong)(puVar8[1] * uVar18 + (uint)(ushort)puVar8[2] * 8 + iVar6) +
                         (long)puVar8);
        goto joined_r0x01fde3f8;
      }
    }
    else if (uVar18 < *(uint *)(lVar10 + 0x5c0)) {
      if (*(uint *)(lVar10 + 0x5b0) <= uVar18) {
        uVar18 = 0;
      }
      puVar8 = *(uint **)(*(long *)(lVar10 + 0x5b8) + (ulong)uVar18 * 8);
joined_r0x01fde3f8:
      if (puVar8 != (uint *)0x0) {
        if (*puVar8 != 0) {
          cVar13 = *PTR_DAT_04bc23c0;
          do {
            if (cVar13 == '\0') {
              cVar13 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            }
            else {
              uVar18 = *(uint *)(puVar5 + 0x20);
              if (-1 < (int)uVar18) {
                puVar15 = (undefined8 *)((ulong)uVar18 + (long)puVar8);
                goto LAB_01fde338;
              }
              if (uVar18 != 0xffffffff) break;
            }
            puVar16 = (uint *)(ulong)*puVar8;
            puVar15 = (undefined8 *)0x0;
            if ((*puVar8 == 0) || (puVar8 == puVar16)) goto LAB_01fde338;
            lVar10 = 0xc;
            if (*(char *)((long)puVar8 + (10 - (long)puVar16)) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar8 + (lVar10 - (long)puVar16);
            if (lVar10 == 0) break;
            uVar14 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar16));
            *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
            puVar15 = (undefined8 *)0x0;
            if (uVar14 == 0) goto LAB_01fde338;
            piVar17 = (int *)(lVar10 + 4);
            while (piVar17[-1] != 0x721730b8) {
              piVar17 = piVar17 + 2;
              uVar14 = uVar14 - 1;
              if (uVar14 == 0) {
                puVar15 = (undefined8 *)0x0;
                goto LAB_01fde338;
              }
            }
            iVar6 = 0;
            if (*piVar17 != -1) {
              iVar6 = *piVar17;
            }
            *(int *)(puVar5 + 0x20) = iVar6;
          } while (*puVar8 != 0);
        }
        puVar15 = (undefined8 *)0x0;
LAB_01fde338:
        __dest = *(undefined8 **)(param_1 + 0x8260);
        __src = &DAT_0407ebb1;
        if (puVar15 != (undefined8 *)0x0) {
          __src = puVar15;
        }
        if (__dest != __src) {
          lVar10 = 0;
          do {
            if (*(char *)((long)__src + lVar10) == '\0') goto LAB_01fde40c;
            if (*(char *)((long)__src + lVar10 + 1) == '\0') {
              lVar10 = lVar10 + 1;
              goto LAB_01fde40c;
            }
            if (*(char *)((long)__src + lVar10 + 2) == '\0') {
              lVar10 = lVar10 + 2;
              goto LAB_01fde40c;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_01fde40c:
          iVar6 = (int)lVar10;
          if (*(int *)(param_1 + 0x8268) <= (int)lVar10) {
            iVar6 = *(int *)(param_1 + 0x8268) + -1;
          }
          memcpy(__dest,__src,(long)iVar6);
          *(undefined1 *)((long)__dest + (long)iVar6) = 0;
        }
      }
    }
  }
  uVar3 = *(ushort *)(param_1 + 0x1242c);
  *(ushort *)(param_1 + 0x1242c) = uVar3 | 1;
  if ((uVar3 >> 7 & 1) == 0) {
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar18 = *puVar8 ^ *puVar8 << 0xb;
    uVar2 = puVar8[3];
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar18 = uVar18 >> 8 ^ uVar2 >> 0x13 ^ uVar18 ^ uVar2;
    puVar8[2] = uVar2;
    puVar8[3] = uVar18;
    *(int *)(param_1 + 0x12428) = (int)((ulong)uVar18 * 0x708 >> 0x20) + 0x708;
  }
  else {
    *(ushort *)(param_1 + 0x1242c) = uVar3 & 0xff7f | 1;
  }
  uVar18 = *puVar1;
  if (uVar18 < 0x3d) {
    if ((1L << ((ulong)uVar18 & 0x3f) & 0x2000000004800U) == 0) {
      if (((1L << ((ulong)uVar18 & 0x3f) & 0x1000000000000100U) == 0) ||
         (*(int *)(*(long *)(param_1 + 8) + 0x750) == 3)) goto LAB_01fde500;
      uVar7 = 1;
    }
    else {
      uVar7 = 0x33;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x56c) = uVar7;
    *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) | 0x400000;
  }
LAB_01fde500:
  FUN_01fdf8ac(param_1);
  lVar10 = *(long *)(param_1 + 8);
  if (*(int *)(lVar10 + 0x750) == 3) {
    FUN_0212eca8(param_1 + 0xaa50,1,0);
    lVar10 = *(long *)(param_1 + 8);
    if (*puVar1 != 0x3c) {
      *(uint *)(lVar10 + 0x69c) = *(uint *)(lVar10 + 0x69c) | 0x40000;
      lVar10 = *(long *)(param_1 + 8);
    }
  }
  puVar4 = PTR_DAT_04bb4e28;
  uVar18 = *(uint *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
  if (uVar18 != 0) {
    lVar9 = 0;
    lVar12 = (long)(int)uVar18 << 3;
    lVar11 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
    do {
      if (*(int *)(lVar10 + 0x230) == *(int *)(*(long *)(lVar11 + lVar9 * 8) + 8)) {
        if ((uint)lVar9 < uVar18) {
          lVar10 = *(long *)(lVar11 + lVar9 * 8);
        }
        else {
          lVar10 = 0;
        }
        uVar18 = DAT_05abbc50;
        if (DAT_05abbc50 != *(uint *)(lVar10 + 0xe4)) {
          local_50 = PTR_DAT_04bb2020 + 0x10;
          pcStack_48 = "GetCookingRecipeToday";
          iVar6 = FUN_02758850(&local_50);
          if (iVar6 == 0) {
            if (*(int *)(lVar10 + 0xd8) == 0xd) {
              uVar18 = 0x20;
              goto LAB_01fde620;
            }
            if (*(int *)(lVar10 + 0xd8) == 0xe) {
              uVar18 = 0x21;
              goto LAB_01fde620;
            }
          }
          uVar18 = *(uint *)(lVar10 + 0xe4);
        }
        if ((uVar18 < 0x3d) && ((1L << ((ulong)uVar18 & 0x3f) & 0x1002000000204910U) != 0)) {
          FUN_0212eca8(param_1 + 0xaa50,1,0);
        }
        goto LAB_01fde620;
      }
      lVar9 = lVar9 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  uVar18 = 0;
LAB_01fde620:
  lVar10 = *(long *)puVar4;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xe0) != 0)) {
    lVar9 = 0;
    lVar12 = (long)*(int *)(lVar10 + 0xe0) << 3;
    do {
      if (*(int *)(*(long *)(param_1 + 8) + 0x230) ==
          *(int *)(*(long *)(*(long *)(lVar10 + 0xe8) + lVar9 * 8) + 8)) {
        if (*(int *)(*(long *)(*(long *)(lVar10 + 0xe8) + lVar9 * 8) + 0xd8) == 0x13) {
          *(ulong *)(param_1 + 0xad58) =
               *(ulong *)(param_1 + 0xad58) & 0xfffffffffffffffe | (ulong)(uVar18 != 0x3c);
          return;
        }
        return;
      }
      lVar9 = lVar9 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  return;
}

