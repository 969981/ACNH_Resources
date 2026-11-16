
undefined8 FUN_0262f790(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint *puVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  char cVar9;
  ushort uVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar15 = 0;
  plVar3 = (long *)PTR_DAT_04bb46b0;
LAB_0262f834:
  uVar11 = *(uint *)(param_1 + 0xea6a8);
  if ((int)uVar11 < 1) {
    lVar5 = *(long *)(param_1 + 0xea598);
    uVar7 = 0;
    if (lVar5 != 0) {
      puVar4 = *(uint **)(lVar5 + 8);
      uVar7 = 0;
      if (puVar4 != (uint *)0x0) {
        uVar7 = *puVar4;
      }
    }
    if (uVar7 <= uVar15) {
      return 1;
    }
    if (0 < (int)uVar11) goto LAB_0262f874;
    lVar5 = *(long *)(param_1 + 0xea598);
    puVar4 = (uint *)0x0;
    if ((lVar5 != 0) && (puVar4 = *(uint **)(lVar5 + 8), puVar4 != (uint *)0x0)) {
      if (((*(uint *)(param_1 + 0xea5b0) <= uVar15) ||
          (*(char *)(*(long *)(param_1 + 0xea5b8) + (long)(int)uVar15) != '\0')) &&
         (((uVar15 < *puVar4 && (puVar4[1] != 0)) && ((ushort)puVar4[2] != 0)))) {
        iVar16 = 0xc;
        if (*(char *)((long)puVar4 + 10) != '\0') {
          iVar16 = 0x1c;
        }
        puVar4 = (uint *)((ulong)(puVar4[1] * uVar15 + (uint)(ushort)puVar4[2] * 8 + iVar16) +
                         (long)puVar4);
        goto LAB_0262f904;
      }
      goto LAB_0262f900;
    }
  }
  else {
    if (uVar11 <= uVar15) {
      return 1;
    }
LAB_0262f874:
    if (uVar15 < uVar11) {
      uVar11 = uVar15;
      if (*(uint *)(param_1 + 0xea698) <= uVar15) {
        uVar11 = 0;
      }
      puVar4 = *(uint **)(*(long *)(param_1 + 0xea6a0) + (ulong)uVar11 * 8);
    }
    else {
LAB_0262f900:
      puVar4 = (uint *)0x0;
    }
  }
LAB_0262f904:
  if (*puVar4 != 0) {
    cVar9 = DAT_055576f0;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        DAT_055576f4 = 0xffffffffffffffff;
        DAT_055576fc = 0xffffffffffffffff;
        DAT_055576f0 = '\x01';
        DAT_05557704 = 0xffffffffffffffff;
        DAT_0555770c = 0xffffffffffffffff;
        DAT_05557714 = 0xffffffffffffffff;
        DAT_0555771c = 0xffffffffffffffff;
        DAT_05557724 = 0xffffffffffffffff;
        DAT_0555772c = 0xffffffffffffffff;
        DAT_05557734 = 0xffffffffffffffff;
        DAT_0555773c = 0xffffffffffffffff;
        DAT_05557744 = 0xffffffffffffffff;
        DAT_0555774c = 0xffffffffffffffff;
        DAT_05557754 = 0xffffffffffffffff;
        DAT_0555775c = 0xffffffffffffffff;
      }
      else {
        uVar8 = DAT_0555774c >> 0x20;
        if (-1 < (long)DAT_0555774c) {
          if ((((ushort *)(uVar8 + (long)puVar4) != (ushort *)0x0) &&
              (uVar10 = *(ushort *)(uVar8 + (long)puVar4), uVar10 < 0x800)) &&
             (((*(byte *)(param_3 + (ulong)(uVar10 >> 3)) >> (ulong)(uVar10 & 7) & 1) != 0 &&
              (uVar11 = *puVar4, uVar11 != 0)))) {
            uVar12 = DAT_0555772c >> 0x20;
            goto LAB_0262fa00;
          }
          break;
        }
        if (uVar8 != 0xffffffff) break;
      }
      lVar5 = (long)puVar4 - (ulong)*puVar4;
      if ((*puVar4 == 0) || (lVar5 == 0)) break;
      lVar1 = 0xc;
      if (*(char *)(lVar5 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar5 == 0) break;
      uVar8 = (ulong)*(ushort *)(lVar5 + 8);
      DAT_0555774c = CONCAT44(0xfffffffe,(undefined4)DAT_0555774c);
      if (uVar8 == 0) break;
      piVar14 = (int *)(lVar1 + lVar5 + 4);
      while (piVar14[-1] != 0x54706054) {
        piVar14 = piVar14 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) goto LAB_0262f830;
      }
      iVar16 = 0;
      if (*piVar14 != -1) {
        iVar16 = *piVar14;
      }
      DAT_0555774c = CONCAT44(iVar16,(undefined4)DAT_0555774c);
      if (*puVar4 == 0) break;
    } while( true );
  }
  goto LAB_0262f830;
LAB_0262fa00:
  if (-1 < (int)uVar12) {
    if (((short *)(uVar12 + (long)puVar4) != (short *)0x0) &&
       (*(short *)(uVar12 + (long)puVar4) != -2)) {
      puVar13 = (uint *)((long)puVar4 - (ulong)uVar11);
      if (puVar13 == (uint *)0x0) {
LAB_0262fa94:
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        if (*puVar13 != 0) {
          uVar11 = puVar13[1];
          if ((uVar11 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
            lVar5 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar13 + lVar5 + (ulong)(ushort)puVar13[2] * 8;
            if (lVar5 != 0) {
              uVar7 = 0;
              if ((ulong)uVar11 != 0) {
                uVar7 = (uint)((ulong)((long)puVar4 - lVar5) / (ulong)uVar11);
              }
              if (*puVar13 <= uVar7) {
                uVar7 = 0xffffffff;
              }
              if ((uVar7 < DAT_055577b0) &&
                 (uVar10 = *(ushort *)(DAT_055577b8 + (long)(int)uVar7 * 2), uVar10 < 0x53))
              goto LAB_0262fa98;
            }
          }
          goto LAB_0262fa94;
        }
      }
LAB_0262fa98:
      if (uVar10 != 3) {
        uVar11 = *puVar4;
        goto joined_r0x0262faac;
      }
    }
    goto LAB_0262f830;
  }
  if ((uVar12 != 0xffffffff) || (lVar5 = (long)puVar4 - (ulong)uVar11, lVar5 == 0))
  goto LAB_0262f830;
  lVar1 = 0xc;
  if (*(char *)(lVar5 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar5 == 0) goto LAB_0262f830;
  uVar12 = (ulong)*(ushort *)(lVar5 + 8);
  DAT_0555772c = CONCAT44(0xfffffffe,(undefined4)DAT_0555772c);
  if (uVar12 == 0) goto LAB_0262f830;
  puVar13 = (uint *)(lVar1 + lVar5 + 4);
  while (puVar13[-1] != 0x89a3482c) {
    puVar13 = puVar13 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_0262f830;
  }
  uVar12 = 0;
  if (*puVar13 != 0xffffffff) {
    uVar12 = (ulong)*puVar13;
  }
  DAT_0555772c = CONCAT44((int)uVar12,(undefined4)DAT_0555772c);
  uVar11 = *puVar4;
  if (uVar11 == 0) goto LAB_0262f830;
  goto LAB_0262fa00;
joined_r0x0262faac:
  if (uVar11 == 0) goto LAB_0262fba0;
  if (-1 < (int)uVar8) {
    if ((ushort *)(uVar8 + (long)puVar4) != (ushort *)0x0) {
      uVar11 = (uint)*(ushort *)(uVar8 + (long)puVar4);
      goto LAB_0262fba4;
    }
    goto LAB_0262fba0;
  }
  if (uVar8 != 0xffffffff) goto LAB_0262fba0;
  lVar5 = (long)puVar4 - (ulong)*puVar4;
  if (*puVar4 == 0) goto LAB_0262fba0;
  uVar11 = 0x4c7b;
  if (lVar5 == 0) goto LAB_0262fba4;
  lVar1 = 0xc;
  if (*(char *)(lVar5 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar5 == 0) goto LAB_0262fba0;
  uVar8 = (ulong)*(ushort *)(lVar5 + 8);
  DAT_0555774c = CONCAT44(0xfffffffe,(undefined4)DAT_0555774c);
  if (uVar8 == 0) goto LAB_0262fba0;
  puVar13 = (uint *)(lVar1 + lVar5 + 4);
  while (puVar13[-1] != 0x54706054) {
    puVar13 = puVar13 + 2;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) goto LAB_0262fba0;
  }
  uVar8 = 0;
  if (*puVar13 != 0xffffffff) {
    uVar8 = (ulong)*puVar13;
  }
  DAT_0555774c = CONCAT44((int)uVar8,(undefined4)DAT_0555774c);
  uVar11 = *puVar4;
  goto joined_r0x0262faac;
LAB_0262fba0:
  uVar11 = 0x4c7b;
LAB_0262fba4:
  lVar5 = param_2 + 0x194b0;
  if (*(long *)(param_2 + 0x194b8) == 0) {
    lVar5 = *(long *)(*plVar3 + 0x20);
  }
  if (*(long **)(lVar5 + 0x86b0) == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar2 = (undefined8 *)**(long **)(lVar5 + 0x86b0);
    uVar8 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      uVar8 = (**(code **)*puVar2)();
      plVar3 = (long *)PTR_DAT_04bb46b0;
    }
  }
  if (uVar11 < 0x800) {
    bVar6 = *(byte *)(*(long *)(lVar5 + 0x8698) + *(long *)(lVar5 + 0x8690) + (ulong)(uVar11 >> 3))
            >> (ulong)(uVar11 & 7) & 1;
  }
  else {
    bVar6 = 0;
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar5 + 0x86b0) != 0)) &&
     (puVar2 = *(undefined8 **)(*(long *)(lVar5 + 0x86b0) + 8), puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)();
    plVar3 = (long *)PTR_DAT_04bb46b0;
  }
  if (bVar6 == 0) {
    return 0;
  }
LAB_0262f830:
  uVar15 = uVar15 + 1;
  goto LAB_0262f834;
}

