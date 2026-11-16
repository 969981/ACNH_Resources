
undefined8 FUN_0262fcf0(long param_1,uint param_2,long param_3,long param_4)

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
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ushort uVar13;
  int *piVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar16 = 0;
  plVar3 = (long *)PTR_DAT_04bb46b0;
LAB_0262fd94:
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
    if (uVar7 <= uVar16) {
      return 1;
    }
    if (0 < (int)uVar11) goto LAB_0262fdd4;
    lVar5 = *(long *)(param_1 + 0xea598);
    puVar4 = (uint *)0x0;
    if ((lVar5 != 0) && (puVar4 = *(uint **)(lVar5 + 8), puVar4 != (uint *)0x0)) {
      if (((*(uint *)(param_1 + 0xea5b0) <= uVar16) ||
          (*(char *)(*(long *)(param_1 + 0xea5b8) + (long)(int)uVar16) != '\0')) &&
         (((uVar16 < *puVar4 && (puVar4[1] != 0)) && ((ushort)puVar4[2] != 0)))) {
        iVar17 = 0xc;
        if (*(char *)((long)puVar4 + 10) != '\0') {
          iVar17 = 0x1c;
        }
        puVar4 = (uint *)((ulong)(puVar4[1] * uVar16 + (uint)(ushort)puVar4[2] * 8 + iVar17) +
                         (long)puVar4);
        goto LAB_0262fe64;
      }
      goto LAB_0262fe60;
    }
  }
  else {
    if (uVar11 <= uVar16) {
      return 1;
    }
LAB_0262fdd4:
    if (uVar16 < uVar11) {
      uVar11 = uVar16;
      if (*(uint *)(param_1 + 0xea698) <= uVar16) {
        uVar11 = 0;
      }
      puVar4 = *(uint **)(*(long *)(param_1 + 0xea6a0) + (ulong)uVar11 * 8);
    }
    else {
LAB_0262fe60:
      puVar4 = (uint *)0x0;
    }
  }
LAB_0262fe64:
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
              (uVar13 = *(ushort *)(uVar8 + (long)puVar4), uVar13 < 0x800)) &&
             (((*(byte *)(param_4 + (ulong)(uVar13 >> 3)) >> (ulong)(uVar13 & 7) & 1) != 0 &&
              (uVar11 = *puVar4, uVar11 != 0)))) {
            uVar12 = DAT_0555772c >> 0x20;
            goto LAB_0262ff60;
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
        if (uVar8 == 0) goto LAB_0262fd90;
      }
      iVar17 = 0;
      if (*piVar14 != -1) {
        iVar17 = *piVar14;
      }
      DAT_0555774c = CONCAT44(iVar17,(undefined4)DAT_0555774c);
      if (*puVar4 == 0) break;
    } while( true );
  }
  goto LAB_0262fd90;
LAB_0262ff60:
  if (-1 < (int)uVar12) {
    if (((short *)(uVar12 + (long)puVar4) != (short *)0x0) &&
       (*(short *)(uVar12 + (long)puVar4) != -2)) {
      puVar15 = (uint *)((long)puVar4 - (ulong)uVar11);
      if ((puVar15 == (uint *)0x0) ||
         (((*puVar15 == 0 || (uVar11 = puVar15[1], uVar11 == 0)) || ((ulong)(ushort)puVar15[2] == 0)
          ))) {
LAB_0263007c:
        uVar13 = 0;
      }
      else {
        lVar5 = 0xc;
        if (*(char *)((long)puVar15 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar15 + lVar5 + (ulong)(ushort)puVar15[2] * 8;
        if (lVar5 == 0) goto LAB_0263007c;
        uVar7 = 0;
        if ((ulong)uVar11 != 0) {
          uVar7 = (uint)((ulong)((long)puVar4 - lVar5) / (ulong)uVar11);
        }
        if (*puVar15 <= uVar7) {
          uVar7 = 0xffffffff;
        }
        if (uVar7 < DAT_055577b0) {
          uVar13 = *(ushort *)(DAT_055577b8 + (long)(int)uVar7 * 2);
          if (0x52 < uVar13) {
            uVar13 = 0;
          }
        }
        else {
          uVar13 = 0;
        }
      }
      uVar11 = 0x4c7b;
      if (uVar13 != 3) {
        uVar7 = *puVar4;
        uVar10 = 0;
        if ((uVar7 != 0) && (puVar4 != (uint *)(ulong)uVar7)) {
          puVar15 = (uint *)((long)puVar4 - (long)(ulong)uVar7);
          uVar10 = 0;
          if (*puVar15 != 0) {
            uVar7 = puVar15[1];
            if (uVar7 == 0) {
LAB_02630120:
              uVar10 = 0;
            }
            else {
              if ((ulong)(ushort)puVar15[2] != 0) {
                lVar5 = 0xc;
                if (*(char *)((long)puVar15 + 10) != '\0') {
                  lVar5 = 0x1c;
                }
                lVar5 = (long)puVar15 + lVar5 + (ulong)(ushort)puVar15[2] * 8;
                if (lVar5 != 0) {
                  uVar10 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar10 = (uint)((ulong)((long)puVar4 - lVar5) / (ulong)uVar7);
                  }
                  if (*puVar15 <= uVar10) {
                    uVar10 = 0xffffffff;
                  }
                  if (uVar10 < DAT_055577b0) {
                    uVar10 = (uint)*(ushort *)(DAT_055577b8 + (long)(int)uVar10 * 2);
                    if (uVar10 < 0x53) goto LAB_02630138;
                    goto LAB_02630120;
                  }
                }
              }
              uVar10 = 0;
            }
          }
        }
LAB_02630138:
        if (uVar10 == param_2) {
          uVar7 = *puVar4;
          goto joined_r0x02630150;
        }
      }
    }
    goto LAB_0262fd90;
  }
  if ((uVar12 != 0xffffffff) || (lVar5 = (long)puVar4 - (ulong)uVar11, lVar5 == 0))
  goto LAB_0262fd90;
  lVar1 = 0xc;
  if (*(char *)(lVar5 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar5 == 0) goto LAB_0262fd90;
  uVar12 = (ulong)*(ushort *)(lVar5 + 8);
  DAT_0555772c = CONCAT44(0xfffffffe,(undefined4)DAT_0555772c);
  if (uVar12 == 0) goto LAB_0262fd90;
  puVar15 = (uint *)(lVar1 + lVar5 + 4);
  while (puVar15[-1] != 0x89a3482c) {
    puVar15 = puVar15 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_0262fd90;
  }
  uVar12 = 0;
  if (*puVar15 != 0xffffffff) {
    uVar12 = (ulong)*puVar15;
  }
  DAT_0555772c = CONCAT44((int)uVar12,(undefined4)DAT_0555772c);
  uVar11 = *puVar4;
  if (uVar11 == 0) goto LAB_0262fd90;
  goto LAB_0262ff60;
joined_r0x02630150:
  if (uVar7 == 0) goto LAB_026301f8;
  if (-1 < (int)uVar8) {
    if ((ushort *)(uVar8 + (long)puVar4) != (ushort *)0x0) {
      uVar11 = (uint)*(ushort *)(uVar8 + (long)puVar4);
    }
    goto LAB_026301f8;
  }
  if (uVar8 != 0xffffffff) goto LAB_026301f8;
  lVar5 = (long)puVar4 - (ulong)*puVar4;
  if ((*puVar4 == 0) || (lVar5 == 0)) goto LAB_026301f8;
  lVar1 = 0xc;
  if (*(char *)(lVar5 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar5 == 0) goto LAB_026301f8;
  uVar8 = (ulong)*(ushort *)(lVar5 + 8);
  DAT_0555774c = CONCAT44(0xfffffffe,(undefined4)DAT_0555774c);
  if (uVar8 == 0) goto LAB_026301f8;
  puVar15 = (uint *)(lVar1 + lVar5 + 4);
  while (puVar15[-1] != 0x54706054) {
    puVar15 = puVar15 + 2;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) goto LAB_026301f8;
  }
  uVar8 = 0;
  if (*puVar15 != 0xffffffff) {
    uVar8 = (ulong)*puVar15;
  }
  DAT_0555774c = CONCAT44((int)uVar8,(undefined4)DAT_0555774c);
  uVar7 = *puVar4;
  goto joined_r0x02630150;
LAB_026301f8:
  lVar5 = param_3 + 0x194b0;
  if (*(long *)(param_3 + 0x194b8) == 0) {
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
    }
    plVar3 = (long *)PTR_DAT_04bb46b0;
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
LAB_0262fd90:
  uVar16 = uVar16 + 1;
  goto LAB_0262fd94;
}

