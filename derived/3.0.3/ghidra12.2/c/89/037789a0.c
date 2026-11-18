
/* WARNING: Removing unreachable block (ram,0x03778a80) */

undefined8 FUN_037789a0(long param_1,undefined8 param_2,ulong param_3)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  short *psVar17;
  char cVar18;
  undefined1 *puVar19;
  void *__dest;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined1 *puVar23;
  void *__src;
  long lVar24;
  long lVar25;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  short local_64 [2];
  
  lVar25 = *(long *)PTR_DAT_04bb4e28;
  local_64[0] = FUN_0376baa0(param_2);
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) ||
      (lVar22 = *(long *)PTR_DAT_04bc1530, lVar22 == 0)) ||
     (uVar6 = FUN_036edff8(lVar22,local_64), uVar6 == 0xffffffff)) {
    lVar22 = *(long *)PTR_DAT_04bb46b0;
    if (lVar22 == 0) {
      lVar22 = 0;
      plVar13 = plRam0000000000000450;
      if (plRam0000000000000450 != (long *)0x0) goto LAB_03778ad0;
LAB_03778aec:
      uVar6 = 1;
    }
    else {
      local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
      if (((*(byte *)(lVar22 + 0x50d) ^ 0xff) & 6) == 0) {
        lVar24 = (**(code **)(**(long **)(*(long *)(lVar22 + 0x10) + 0x188) + 0x30))();
      }
      else {
        lVar24 = 0;
      }
      lVar22 = 0;
      if (lVar24 != 0) {
        lVar22 = lVar24 + 0xa8;
      }
      plVar13 = *(long **)(lVar22 + 0x450);
      if (*(long **)(lVar22 + 0x450) == (long *)0x0) goto LAB_03778aec;
LAB_03778ad0:
      if ((undefined8 *)*plVar13 == (undefined8 *)0x0) goto LAB_03778aec;
      uVar6 = (*(code *)**(undefined8 **)*plVar13)();
      uVar6 = uVar6 ^ 1;
    }
    uVar7 = 0;
    iVar14 = 0;
    local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
    do {
      psVar17 = (short *)(*(long *)(lVar22 + 0x438) + *(long *)(lVar22 + 0x430) +
                         (long)iVar14 * 0x1178);
      uVar15 = (uint)(ushort)psVar17[3];
      if (0x14 < uVar15) {
        uVar15 = 0;
      }
      local_a0 = CONCAT44(local_a0._4_4_,uVar15);
      if ((uint)local_88 != uVar15) {
        local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar15);
      }
      if (*psVar17 == local_64[0]) goto LAB_03778b5c;
      uVar7 = uVar7 + 1;
      iVar14 = iVar14 + 1;
    } while (uVar7 != 0x26);
    uVar7 = 0xffffffff;
LAB_03778b5c:
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar22 + 0x450) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar22 + 0x450) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
    if (uVar7 == 0xffffffff) {
      return 0;
    }
    lVar24 = lVar22 + 0x498 + (ulong)uVar7 * 0x16c0;
    if (0x25 < uVar7) {
      lVar24 = lVar22 + 0x498;
    }
    if ((*(long **)(lVar24 + 0x28) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar24 + 0x28), puVar8 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar8)();
      uVar6 = uVar6 ^ 1;
    }
    uVar15 = (uint)*(ushort *)(*(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 8) + 6);
    if (0x14 < uVar15) {
      uVar15 = 0;
    }
    local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar15);
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar24 + 0x28) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar24 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
    if ((int)uVar7 < 1) {
      iVar14 = 0;
    }
    else {
      iVar14 = 0;
      uVar20 = (ulong)uVar7;
      plVar13 = (long *)(lVar22 + 0x4c0);
      do {
        uVar6 = (uint)local_88;
        if ((long *)*plVar13 == (long *)0x0) {
          uVar21 = 0;
        }
        else {
          puVar8 = *(undefined8 **)*plVar13;
          uVar21 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            uVar21 = (**(code **)*puVar8)();
          }
        }
        uVar7 = (uint)*(ushort *)(plVar13[-3] + plVar13[-4] + 6);
        if (0x14 < uVar7) {
          uVar7 = 0;
        }
        local_a0 = CONCAT44(local_a0._4_4_,uVar7);
        if ((((uVar21 & 1) != 0) && (*plVar13 != 0)) &&
           (puVar8 = *(undefined8 **)(*plVar13 + 8), puVar8 != (undefined8 *)0x0)) {
          (**(code **)*puVar8)();
        }
        plVar13 = plVar13 + 0x2d8;
        if (uVar6 == uVar7) {
          iVar14 = iVar14 + 1;
        }
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    plVar13 = *(long **)(lVar24 + 0x28);
  }
  else {
    uVar20 = (ulong)uVar6;
    if (9 < uVar6) {
      return 0;
    }
    lVar22 = lVar22 + 0x38;
    lVar24 = *(long *)(lVar22 + uVar20 * 8);
    if ((*(long **)(lVar24 + 0x11a0) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar24 + 0x11a0), puVar8 == (undefined8 *)0x0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar8)();
      uVar7 = uVar7 ^ 1;
    }
    uVar15 = (uint)*(ushort *)(*(long *)(lVar24 + 0x1188) + *(long *)(lVar24 + 0x1180) + 6);
    if (0x14 < uVar15) {
      uVar15 = 0;
    }
    local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar15);
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar24 + 0x11a0) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar24 + 0x11a0) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
    if (uVar6 == 0) {
      iVar14 = 0;
    }
    else {
      uVar21 = 0;
      iVar14 = 0;
      do {
        if (uVar21 < 10) {
          lVar24 = *(long *)(lVar22 + uVar21 * 8);
          uVar6 = (uint)local_88;
          if (*(long **)(lVar24 + 0x11a0) == (long *)0x0) {
            uVar9 = 0;
          }
          else {
            puVar8 = (undefined8 *)**(long **)(lVar24 + 0x11a0);
            uVar9 = 0;
            if (puVar8 != (undefined8 *)0x0) {
              uVar9 = (**(code **)*puVar8)();
            }
          }
          uVar7 = (uint)*(ushort *)(*(long *)(lVar24 + 0x1188) + *(long *)(lVar24 + 0x1180) + 6);
          if (0x14 < uVar7) {
            uVar7 = 0;
          }
          local_a0 = CONCAT44(local_a0._4_4_,uVar7);
          if ((((uVar9 & 1) != 0) && (*(long *)(lVar24 + 0x11a0) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar24 + 0x11a0) + 8), puVar8 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar8)();
          }
          if (uVar6 == uVar7) {
            iVar14 = iVar14 + 1;
          }
        }
        uVar21 = uVar21 + 1;
      } while (uVar20 != uVar21);
    }
    lVar22 = *(long *)(lVar22 + uVar20 * 8);
    lVar24 = lVar22 + 0x1178;
    plVar13 = *(long **)(lVar22 + 0x11a0);
  }
  if ((plVar13 == (long *)0x0) || ((undefined8 *)*plVar13 == (undefined8 *)0x0)) {
    uVar20 = 0;
  }
  else {
    uVar20 = (*(code *)**(undefined8 **)*plVar13)();
    uVar20 = uVar20 & 0xffffffff;
  }
  puVar5 = PTR_DAT_04bc0678;
  puVar4 = PTR_DAT_04bc0670;
  local_6d = 0;
  local_74[0] = 0;
  local_78 = 8;
  local_88 = PTR_DAT_04bb3768 + 0x10;
  lVar22 = *(long *)PTR_DAT_04bb4958;
  local_80 = local_74;
  if ((lVar22 != 0) &&
     (uVar21 = (ulong)*(ushort *)(*(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 8)), uVar21 < 500))
  {
    uVar3 = *(ushort *)(lVar22 + uVar21 * 2 + 0x620);
    if ((int)*(uint *)(lVar22 + 0x1c0) < 1) {
      if ((((*(long *)(lVar22 + 0xb0) != 0) &&
           (puVar16 = *(uint **)(*(long *)(lVar22 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
          ((uVar6 = (uint)uVar3, *(uint *)(lVar22 + 200) <= uVar6 ||
           (*(char *)(*(long *)(lVar22 + 0xd0) + (ulong)uVar6) != '\0')))) &&
         (((uVar6 < *puVar16 && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar16 = (uint *)((ulong)(puVar16[1] * uVar6 + (uint)(ushort)puVar16[2] * 8 + iVar12) +
                          (long)puVar16);
        goto joined_r0x03778ff0;
      }
    }
    else if ((uint)uVar3 < *(uint *)(lVar22 + 0x1c0)) {
      uVar6 = (uint)uVar3;
      if (*(uint *)(lVar22 + 0x1b0) <= uVar6) {
        uVar6 = 0;
      }
      puVar16 = *(uint **)(*(long *)(lVar22 + 0x1b8) + (ulong)uVar6 * 8);
joined_r0x03778ff0:
      if (puVar16 != (uint *)0x0) {
        if (*puVar16 != 0) {
          cVar18 = *PTR_DAT_04bc0670;
          do {
            if (cVar18 == '\0') {
              cVar18 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
            }
            else {
              uVar6 = *(uint *)(puVar5 + 0x48);
              if (-1 < (int)uVar6) {
                puVar19 = (undefined1 *)((ulong)uVar6 + (long)puVar16);
                goto LAB_03778f28;
              }
              if (uVar6 != 0xffffffff) break;
            }
            puVar10 = (uint *)(ulong)*puVar16;
            puVar19 = (undefined1 *)0x0;
            if ((*puVar16 == 0) || (puVar16 == puVar10)) goto LAB_03778f28;
            lVar22 = 0xc;
            if (*(char *)((long)puVar16 + (10 - (long)puVar10)) != '\0') {
              lVar22 = 0x1c;
            }
            lVar22 = (long)puVar16 + (lVar22 - (long)puVar10);
            if (lVar22 == 0) break;
            uVar21 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar10));
            *(undefined4 *)(puVar5 + 0x48) = 0xfffffffe;
            puVar19 = (undefined1 *)0x0;
            if (uVar21 == 0) goto LAB_03778f28;
            piVar11 = (int *)(lVar22 + 4);
            while (piVar11[-1] != 0x34c8eed5) {
              piVar11 = piVar11 + 2;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) {
                puVar19 = (undefined1 *)0x0;
                goto LAB_03778f28;
              }
            }
            iVar12 = 0;
            if (*piVar11 != -1) {
              iVar12 = *piVar11;
            }
            *(int *)(puVar5 + 0x48) = iVar12;
          } while (*puVar16 != 0);
        }
        puVar19 = (undefined1 *)0x0;
LAB_03778f28:
        puVar23 = *(undefined1 **)PTR_PTR_04bc0668;
        if (puVar19 != (undefined1 *)0x0) {
          puVar23 = puVar19;
        }
        if (local_74 != puVar23) {
          lVar22 = 0;
          do {
            if (puVar23[lVar22] == '\0') {
LAB_037792f4:
              iVar12 = (int)lVar22;
              if (7 < iVar12) {
                iVar12 = 7;
              }
              goto LAB_03779300;
            }
            if (puVar23[lVar22 + 1] == '\0') {
              lVar22 = lVar22 + 1;
              goto LAB_037792f4;
            }
            if (puVar23[lVar22 + 2] == '\0') {
              lVar22 = lVar22 + 2;
              goto LAB_037792f4;
            }
            lVar22 = lVar22 + 3;
          } while (lVar22 != 0x80001);
          iVar12 = 0;
LAB_03779300:
          memcpy(local_74,puVar23,(long)iVar12);
          local_74[iVar12] = 0;
        }
      }
    }
  }
  puVar23 = *(undefined1 **)(param_1 + 8);
  (**(code **)(local_88 + 0x18))(&local_88);
  puVar19 = local_80;
  if (puVar23 != local_80) {
    (**(code **)(local_88 + 0x18))(&local_88);
    lVar22 = 0;
    do {
      if (local_80[lVar22] == '\0') goto LAB_03779070;
      if (local_80[lVar22 + 1] == '\0') {
        lVar22 = lVar22 + 1;
        goto LAB_03779070;
      }
      if (local_80[lVar22 + 2] == '\0') {
        lVar22 = lVar22 + 2;
        goto LAB_03779070;
      }
      lVar22 = lVar22 + 3;
    } while (lVar22 != 0x80001);
    lVar22 = 0;
LAB_03779070:
    iVar12 = (int)lVar22;
    if (*(int *)(param_1 + 0x10) <= (int)lVar22) {
      iVar12 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(puVar23,puVar19,(long)iVar12);
    puVar23[iVar12] = 0;
  }
  *(uint *)(param_1 + 0x20) = (uint)*(byte *)(*(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 8) + 2);
  uVar6 = (uint)*(byte *)(*(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 8) + 4);
  if (2 < uVar6) {
    uVar6 = 0;
  }
  *(uint *)(param_1 + 0x24) = uVar6;
  local_a0 = 0xfffe;
  uVar6 = (uint)*(ushort *)(*(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 8) + 6);
  if (0x14 < uVar6) {
    uVar6 = 0;
  }
  *(uint *)(param_1 + 0x28) = uVar6;
  *(int *)(param_1 + 0x2c) = iVar14;
  FUN_0277d4ac(&local_a0);
  local_98 = 0xfffe;
  FUN_0277d4ac(&local_98);
  local_90 = 0xfffe;
  FUN_0277d4ac(&local_90);
  if ((*(long **)(lVar24 + 0x60) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar24 + 0x60), puVar8 == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (**(code **)*puVar8)();
    uVar6 = uVar6 ^ 1;
  }
  puVar1 = (ushort *)(*(long *)(lVar24 + 0x48) + *(long *)(lVar24 + 0x40));
  if ((*puVar1 & 1) != 0) {
    local_a0 = *(undefined8 *)(puVar1 + 2);
    local_98 = *(undefined8 *)(puVar1 + 6);
    local_90 = *(undefined8 *)(puVar1 + 10);
  }
  if ((((uVar6 & 1) == 0) && (*(long *)(lVar24 + 0x60) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar24 + 0x60) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  *(undefined4 *)(param_1 + 0x30) = (undefined4)local_90;
  *(undefined4 *)(param_1 + 0x34) = local_90._4_4_;
  *(undefined8 *)(param_1 + 0x38) = local_98;
  *(undefined4 *)(param_1 + 0x40) = (undefined4)local_a0;
  *(undefined4 *)(param_1 + 0x44) = local_a0._4_4_;
  if (((lVar25 != 0) && ((param_3 & 1) != 0)) && (*(int *)(lVar25 + 0xe0) != 0)) {
    lVar22 = (long)*(int *)(lVar25 + 0xe0) << 3;
    plVar13 = *(long **)(lVar25 + 0xe8);
    do {
      lVar25 = *plVar13;
      if ((*(int *)(lVar25 + 0xd8) == *(int *)(param_1 + 0x28)) &&
         (*(int *)(lVar25 + 0xdc) == *(int *)(param_1 + 0x2c))) {
        **(undefined1 **)(param_1 + 8) = 0;
        plVar13 = (long *)(lVar25 + 0x10);
        __dest = *(void **)(param_1 + 8);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        __src = *(void **)(lVar25 + 0x18);
        if (__dest != __src) {
          (**(code **)(*(long *)(lVar25 + 0x10) + 0x18))(plVar13);
          lVar22 = 0;
          goto LAB_03779240;
        }
        break;
      }
      plVar13 = plVar13 + 1;
      lVar22 = lVar22 + -8;
    } while (lVar22 != 0);
  }
LAB_037792a4:
  if ((((uVar20 & 1) != 0) && (*(long *)(lVar24 + 0x28) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar24 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return 1;
  while( true ) {
    lVar2 = *(long *)(lVar25 + 0x18) + lVar22;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar22 = lVar22 + 1;
      goto LAB_0377927c;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar22 = lVar22 + 2;
      goto LAB_0377927c;
    }
    lVar22 = lVar22 + 3;
    if (lVar22 == 0x80001) break;
LAB_03779240:
    if (*(char *)(*(long *)(lVar25 + 0x18) + lVar22) == '\0') goto LAB_0377927c;
  }
  lVar22 = 0;
LAB_0377927c:
  iVar14 = (int)lVar22;
  if (*(int *)(param_1 + 0x10) <= (int)lVar22) {
    iVar14 = *(int *)(param_1 + 0x10) + -1;
  }
  memcpy(__dest,__src,(long)iVar14);
  *(undefined1 *)((long)__dest + (long)iVar14) = 0;
  goto LAB_037792a4;
}

