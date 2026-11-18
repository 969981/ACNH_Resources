
/* WARNING: Removing unreachable block (ram,0x037782ec) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_03778220(long param_1,uint param_2,int param_3,uint param_4)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  int iVar11;
  long *plVar12;
  uint *puVar13;
  int iVar14;
  ulong uVar15;
  char cVar16;
  uint uVar17;
  undefined1 *puVar18;
  void *__dest;
  ulong uVar19;
  void *__src;
  long lVar20;
  undefined1 *puVar21;
  uint uVar22;
  long lVar23;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  
  lVar23 = *(long *)PTR_DAT_04bb4e28;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) ||
      (lVar20 = *(long *)PTR_DAT_04bc1530, lVar20 == 0)) ||
     (uVar6 = FUN_036ee480(lVar20,param_2,param_3), uVar6 == 0xffffffff)) {
    lVar20 = *(long *)PTR_DAT_04bb46b0;
    if (lVar20 == 0) {
      lVar20 = 0;
      plVar12 = plRam0000000000000450;
      if (plRam0000000000000450 != (long *)0x0) goto LAB_0377833c;
LAB_03778358:
      uVar6 = 1;
    }
    else {
      local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
      if (((*(byte *)(lVar20 + 0x50d) ^ 0xff) & 6) == 0) {
        lVar7 = (**(code **)(**(long **)(*(long *)(lVar20 + 0x10) + 0x188) + 0x30))();
      }
      else {
        lVar7 = 0;
      }
      lVar20 = 0;
      if (lVar7 != 0) {
        lVar20 = lVar7 + 0xa8;
      }
      plVar12 = *(long **)(lVar20 + 0x450);
      if (*(long **)(lVar20 + 0x450) == (long *)0x0) goto LAB_03778358;
LAB_0377833c:
      if ((undefined8 *)*plVar12 == (undefined8 *)0x0) goto LAB_03778358;
      uVar6 = (*(code *)**(undefined8 **)*plVar12)();
      uVar6 = uVar6 ^ 1;
    }
    uVar22 = 0;
    iVar11 = 0;
    iVar14 = 0;
    local_80 = (undefined *)CONCAT44(local_80._4_4_,param_2);
    do {
      uVar17 = (uint)*(ushort *)
                      (*(long *)(lVar20 + 0x438) + *(long *)(lVar20 + 0x430) + (long)iVar14 * 0x1178
                      + 6);
      if (0x14 < uVar17) {
        uVar17 = 0;
      }
      local_98 = CONCAT44(local_98._4_4_,uVar17);
      if (param_2 == uVar17) {
        if (iVar11 == param_3) goto joined_r0x037783c4;
        iVar11 = iVar11 + 1;
      }
      uVar22 = uVar22 + 1;
      iVar14 = iVar14 + 1;
    } while (uVar22 != 0x26);
    uVar22 = 0xffffffff;
joined_r0x037783c4:
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar20 + 0x450) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar20 + 0x450) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
    if (uVar22 == 0xffffffff) {
      return 0;
    }
    lVar7 = lVar20 + 0x498 + (ulong)uVar22 * 0x16c0;
    if (0x25 < uVar22) {
      lVar7 = lVar20 + 0x498;
    }
    plVar12 = *(long **)(lVar7 + 0x28);
  }
  else {
    if (9 < uVar6) {
      return 0;
    }
    lVar20 = *(long *)(lVar20 + (ulong)uVar6 * 8 + 0x38);
    lVar7 = lVar20 + 0x1178;
    plVar12 = *(long **)(lVar20 + 0x11a0);
  }
  if ((plVar12 == (long *)0x0) || ((undefined8 *)*plVar12 == (undefined8 *)0x0)) {
    uVar19 = 0;
  }
  else {
    uVar19 = (*(code *)**(undefined8 **)*plVar12)();
    uVar19 = uVar19 & 0xffffffff;
  }
  puVar5 = PTR_DAT_04bc0678;
  puVar4 = PTR_DAT_04bc0670;
  local_65 = 0;
  local_6c[0] = 0;
  local_70 = 8;
  local_80 = PTR_DAT_04bb3768 + 0x10;
  lVar20 = *(long *)PTR_DAT_04bb4958;
  local_78 = local_6c;
  if ((lVar20 != 0) &&
     (uVar15 = (ulong)*(ushort *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8)), uVar15 < 500)) {
    uVar3 = *(ushort *)(lVar20 + uVar15 * 2 + 0x620);
    if ((int)*(uint *)(lVar20 + 0x1c0) < 1) {
      if ((((*(long *)(lVar20 + 0xb0) != 0) &&
           (puVar13 = *(uint **)(*(long *)(lVar20 + 0xb0) + 8), puVar13 != (uint *)0x0)) &&
          ((uVar6 = (uint)uVar3, *(uint *)(lVar20 + 200) <= uVar6 ||
           (*(char *)(*(long *)(lVar20 + 0xd0) + (ulong)uVar6) != '\0')))) &&
         (((uVar6 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
        iVar11 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar13 = (uint *)((ulong)(puVar13[1] * uVar6 + (uint)(ushort)puVar13[2] * 8 + iVar11) +
                          (long)puVar13);
        goto joined_r0x03778660;
      }
    }
    else if ((uint)uVar3 < *(uint *)(lVar20 + 0x1c0)) {
      uVar6 = (uint)uVar3;
      if (*(uint *)(lVar20 + 0x1b0) <= uVar6) {
        uVar6 = 0;
      }
      puVar13 = *(uint **)(*(long *)(lVar20 + 0x1b8) + (ulong)uVar6 * 8);
joined_r0x03778660:
      if (puVar13 != (uint *)0x0) {
        if (*puVar13 != 0) {
          cVar16 = *PTR_DAT_04bc0670;
          do {
            if (cVar16 == '\0') {
              cVar16 = '\x01';
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
                puVar18 = (undefined1 *)((ulong)uVar6 + (long)puVar13);
                goto LAB_03778598;
              }
              if (uVar6 != 0xffffffff) break;
            }
            puVar8 = (uint *)(ulong)*puVar13;
            puVar18 = (undefined1 *)0x0;
            if ((*puVar13 == 0) || (puVar13 == puVar8)) goto LAB_03778598;
            lVar20 = 0xc;
            if (*(char *)((long)puVar13 + (10 - (long)puVar8)) != '\0') {
              lVar20 = 0x1c;
            }
            lVar20 = (long)puVar13 + (lVar20 - (long)puVar8);
            if (lVar20 == 0) break;
            uVar15 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar8));
            *(undefined4 *)(puVar5 + 0x48) = 0xfffffffe;
            puVar18 = (undefined1 *)0x0;
            if (uVar15 == 0) goto LAB_03778598;
            piVar9 = (int *)(lVar20 + 4);
            while (piVar9[-1] != 0x34c8eed5) {
              piVar9 = piVar9 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) {
                puVar18 = (undefined1 *)0x0;
                goto LAB_03778598;
              }
            }
            iVar11 = 0;
            if (*piVar9 != -1) {
              iVar11 = *piVar9;
            }
            *(int *)(puVar5 + 0x48) = iVar11;
          } while (*puVar13 != 0);
        }
        puVar18 = (undefined1 *)0x0;
LAB_03778598:
        puVar21 = *(undefined1 **)PTR_PTR_04bc0668;
        if (puVar18 != (undefined1 *)0x0) {
          puVar21 = puVar18;
        }
        if (local_6c != puVar21) {
          lVar20 = 0;
          do {
            if (puVar21[lVar20] == '\0') {
LAB_03778964:
              iVar11 = (int)lVar20;
              if (7 < iVar11) {
                iVar11 = 7;
              }
              goto LAB_03778970;
            }
            if (puVar21[lVar20 + 1] == '\0') {
              lVar20 = lVar20 + 1;
              goto LAB_03778964;
            }
            if (puVar21[lVar20 + 2] == '\0') {
              lVar20 = lVar20 + 2;
              goto LAB_03778964;
            }
            lVar20 = lVar20 + 3;
          } while (lVar20 != 0x80001);
          iVar11 = 0;
LAB_03778970:
          memcpy(local_6c,puVar21,(long)iVar11);
          local_6c[iVar11] = 0;
        }
      }
    }
  }
  puVar21 = *(undefined1 **)(param_1 + 8);
  (**(code **)(local_80 + 0x18))(&local_80);
  puVar18 = local_78;
  if (puVar21 != local_78) {
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar20 = 0;
    do {
      if (local_78[lVar20] == '\0') goto LAB_037786e0;
      if (local_78[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_037786e0;
      }
      if (local_78[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        goto LAB_037786e0;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    lVar20 = 0;
LAB_037786e0:
    iVar11 = (int)lVar20;
    if (*(int *)(param_1 + 0x10) <= (int)lVar20) {
      iVar11 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(puVar21,puVar18,(long)iVar11);
    puVar21[iVar11] = 0;
  }
  *(uint *)(param_1 + 0x20) = (uint)*(byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 2);
  uVar6 = (uint)*(byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 4);
  if (2 < uVar6) {
    uVar6 = 0;
  }
  *(uint *)(param_1 + 0x24) = uVar6;
  uVar6 = (uint)*(ushort *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 6);
  if (0x14 < uVar6) {
    uVar6 = 0;
  }
  *(uint *)(param_1 + 0x28) = uVar6;
  *(int *)(param_1 + 0x2c) = param_3;
  local_98 = 0xfffe;
  FUN_0277d4ac(&local_98);
  local_90 = 0xfffe;
  FUN_0277d4ac(&local_90);
  local_88 = 0xfffe;
  FUN_0277d4ac(&local_88);
  if ((*(long **)(lVar7 + 0x60) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar7 + 0x60), puVar10 == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (**(code **)*puVar10)();
    uVar6 = uVar6 ^ 1;
  }
  puVar1 = (ushort *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40));
  if ((*puVar1 & 1) != 0) {
    local_98 = *(undefined8 *)(puVar1 + 2);
    local_90 = *(undefined8 *)(puVar1 + 6);
    local_88 = *(undefined8 *)(puVar1 + 10);
  }
  if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0x60) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar7 + 0x60) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  *(undefined4 *)(param_1 + 0x30) = (undefined4)local_88;
  *(undefined4 *)(param_1 + 0x34) = local_88._4_4_;
  *(undefined8 *)(param_1 + 0x38) = local_90;
  *(undefined4 *)(param_1 + 0x40) = (undefined4)local_98;
  *(undefined4 *)(param_1 + 0x44) = local_98._4_4_;
  if (((lVar23 != 0) && ((param_4 & 1) != 0)) && (*(int *)(lVar23 + 0xe0) != 0)) {
    lVar20 = (long)*(int *)(lVar23 + 0xe0) << 3;
    plVar12 = *(long **)(lVar23 + 0xe8);
    do {
      lVar23 = *plVar12;
      if ((*(int *)(lVar23 + 0xd8) == *(int *)(param_1 + 0x28)) &&
         (*(int *)(lVar23 + 0xdc) == *(int *)(param_1 + 0x2c))) {
        **(undefined1 **)(param_1 + 8) = 0;
        plVar12 = (long *)(lVar23 + 0x10);
        __dest = *(void **)(param_1 + 8);
        (**(code **)(*plVar12 + 0x18))(plVar12);
        __src = *(void **)(lVar23 + 0x18);
        if (__dest != __src) {
          (**(code **)(*(long *)(lVar23 + 0x10) + 0x18))(plVar12);
          lVar20 = 0;
          goto LAB_037788b0;
        }
        break;
      }
      plVar12 = plVar12 + 1;
      lVar20 = lVar20 + -8;
    } while (lVar20 != 0);
  }
LAB_03778914:
  if ((((uVar19 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return 1;
  while( true ) {
    lVar2 = *(long *)(lVar23 + 0x18) + lVar20;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar20 = lVar20 + 1;
      goto LAB_037788ec;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar20 = lVar20 + 2;
      goto LAB_037788ec;
    }
    lVar20 = lVar20 + 3;
    if (lVar20 == 0x80001) break;
LAB_037788b0:
    if (*(char *)(*(long *)(lVar23 + 0x18) + lVar20) == '\0') goto LAB_037788ec;
  }
  lVar20 = 0;
LAB_037788ec:
  iVar11 = (int)lVar20;
  if (*(int *)(param_1 + 0x10) <= (int)lVar20) {
    iVar11 = *(int *)(param_1 + 0x10) + -1;
  }
  memcpy(__dest,__src,(long)iVar11);
  *(undefined1 *)((long)__dest + (long)iVar11) = 0;
  goto LAB_03778914;
}

