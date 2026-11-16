
void FUN_02744fe0(ushort *param_1,uint *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  int iVar13;
  undefined8 *puVar14;
  ushort uVar15;
  ushort *puVar16;
  char cVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  
  puVar5 = PTR_DAT_04bb2208;
  uVar19 = *param_2;
  lVar21 = *(long *)PTR_DAT_04bb2208;
  FUN_006bd550("invalid_name",0);
  puVar7 = PTR_DAT_04bb63a8;
  puVar6 = PTR_DAT_04bb63a0;
  uVar10 = *(uint *)(lVar21 + 0xe88);
  uVar12 = (ulong)uVar10;
  if (*(char *)(lVar21 + 0xe99) == '\0') {
    if ((int)uVar10 < 1) goto LAB_027450c8;
    puVar14 = *(undefined8 **)(lVar21 + 0xe90);
    uVar10 = 0xffffffff;
    do {
      puVar11 = (uint *)*puVar14;
      if (uVar19 == puVar11[8]) goto LAB_027450dc;
      puVar14 = puVar14 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  else {
    if (uVar10 != 0) {
      if ((int)uVar10 < 2) {
        lVar21 = *(long *)(lVar21 + 0xe90);
        uVar20 = 0;
      }
      else {
        iVar13 = uVar10 - 1;
        lVar21 = *(long *)(lVar21 + 0xe90);
        uVar20 = 0;
        do {
          iVar1 = iVar13 + uVar20;
          if (iVar1 < 0 != SCARRY4(iVar13,uVar20)) {
            iVar1 = iVar1 + 1;
          }
          uVar10 = iVar1 >> 1;
          uVar3 = *(uint *)(*(long *)(lVar21 + (long)(int)uVar10 * 8) + 0x20);
          if (uVar19 == uVar3) goto LAB_027450d4;
          if (uVar3 < uVar19) {
            uVar20 = uVar10 + 1;
          }
          else {
            iVar13 = uVar10 - 1;
          }
        } while ((int)uVar20 < iVar13);
      }
      uVar10 = uVar20;
      if (uVar19 == *(uint *)(*(long *)(lVar21 + (long)(int)uVar20 * 8) + 0x20)) {
LAB_027450d4:
        if (-1 < (int)uVar10) {
          puVar11 = *(uint **)(lVar21 + (ulong)uVar10 * 8);
LAB_027450dc:
          uVar10 = *puVar11;
        }
        goto LAB_027450e0;
      }
    }
LAB_027450c8:
    uVar10 = 0xffffffff;
  }
LAB_027450e0:
  lVar21 = *(long *)puVar5;
  if ((int)*(uint *)(lVar21 + 0xe60) < 1) {
    if (*(long *)(lVar21 + 0xd50) == 0) {
      return;
    }
    puVar11 = *(uint **)(*(long *)(lVar21 + 0xd50) + 8);
    if (puVar11 == (uint *)0x0) {
      return;
    }
    if ((uVar10 < *(uint *)(lVar21 + 0xd68)) &&
       (*(char *)(*(long *)(lVar21 + 0xd70) + (long)(int)uVar10) == '\0')) {
      return;
    }
    if (*puVar11 <= uVar10) {
      return;
    }
    if (puVar11[1] == 0) {
      return;
    }
    if ((ushort)puVar11[2] == 0) {
      return;
    }
    iVar13 = 0xc;
    if (*(char *)((long)puVar11 + 10) != '\0') {
      iVar13 = 0x1c;
    }
    puVar11 = (uint *)((ulong)(puVar11[1] * uVar10 + (uint)(ushort)puVar11[2] * 8 + iVar13) +
                      (long)puVar11);
  }
  else {
    if (*(uint *)(lVar21 + 0xe60) <= uVar10) {
      return;
    }
    if (*(uint *)(lVar21 + 0xe50) <= uVar10) {
      uVar10 = 0;
    }
    puVar11 = *(uint **)(*(long *)(lVar21 + 0xe58) + (ulong)uVar10 * 8);
  }
  if (puVar11 == (uint *)0x0) {
    return;
  }
  puVar16 = param_1;
  if (*puVar11 != 0) {
    cVar17 = *PTR_DAT_04bb63a0;
    do {
      if (cVar17 == '\0') {
        cVar17 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar19 = *(uint *)(puVar7 + 8);
        if (-1 < (int)uVar19) {
          if (((ushort *)((ulong)uVar19 + (long)puVar11) != (ushort *)0x0) &&
             (uVar18 = *(ushort *)((ulong)uVar19 + (long)puVar11), uVar18 < 0x80)) {
            puVar16 = param_1 + uVar18;
          }
          break;
        }
        if (uVar19 != 0xffffffff) break;
      }
      lVar21 = (long)puVar11 - (ulong)*puVar11;
      if ((*puVar11 == 0) || (lVar21 == 0)) break;
      lVar2 = 0xc;
      if (*(char *)(lVar21 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar21 == 0) break;
      uVar12 = (ulong)*(ushort *)(lVar21 + 8);
      *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
      if (uVar12 == 0) break;
      piVar9 = (int *)(lVar2 + lVar21 + 4);
      while (piVar9[-1] != 0x54706054) {
        piVar9 = piVar9 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_027451e8;
      }
      iVar13 = 0;
      if (*piVar9 != -1) {
        iVar13 = *piVar9;
      }
      *(int *)(puVar7 + 8) = iVar13;
      if (*puVar11 == 0) break;
    } while( true );
  }
LAB_027451e8:
  uVar19 = (uint)param_3;
  if (*puVar11 != 0) {
    uVar18 = *puVar16;
    cVar17 = *puVar6;
    do {
      if (cVar17 != '\0') {
        uVar10 = *(uint *)(puVar7 + 0x1c);
        if ((int)uVar10 < 0) {
          if (uVar10 == 0xffffffff) goto LAB_02745238;
        }
        else if (((char *)((ulong)uVar10 + (long)puVar11) != (char *)0x0) &&
                (*(char *)((ulong)uVar10 + (long)puVar11) == '\x03')) {
          uVar10 = *puVar11;
          uVar20 = 1 << (ulong)(uVar19 & 0x1f);
          uVar19 = (uint)uVar18 & (uVar20 ^ 0xffffffff);
          if ((param_3 & 0x10000) != 0) {
            uVar19 = uVar20 | uVar18;
          }
          if (uVar10 == 0) goto LAB_02745670;
          uVar20 = *(uint *)(puVar7 + 8);
          goto LAB_02745384;
        }
LAB_027453f4:
        uVar10 = *puVar11;
        if (uVar10 != 0) {
          uVar20 = *(uint *)(puVar7 + 4);
          goto LAB_02745414;
        }
        break;
      }
      cVar17 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
LAB_02745238:
      lVar21 = (long)puVar11 - (ulong)*puVar11;
      if ((*puVar11 == 0) || (lVar21 == 0)) goto LAB_027453f4;
      lVar2 = 0xc;
      if (*(char *)(lVar21 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar21 == 0) goto LAB_027453f4;
      uVar12 = (ulong)*(ushort *)(lVar21 + 8);
      *(undefined4 *)(puVar7 + 0x1c) = 0xfffffffe;
      if (uVar12 == 0) goto LAB_027453f4;
      piVar9 = (int *)(lVar2 + lVar21 + 4);
      while (piVar9[-1] != 0x4f7333fd) {
        piVar9 = piVar9 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_027453f4;
      }
      iVar13 = 0;
      if (*piVar9 != -1) {
        iVar13 = *piVar9;
      }
      *(int *)(puVar7 + 0x1c) = iVar13;
    } while (*puVar11 != 0);
  }
  goto LAB_02745484;
LAB_02745384:
  if ((int)uVar20 < 0) {
    if ((uVar20 != 0xffffffff) || (lVar21 = (long)puVar11 - (ulong)uVar10, lVar21 == 0))
    goto LAB_02745670;
    lVar2 = 0xc;
    if (*(char *)(lVar21 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar21 == 0) goto LAB_02745670;
    uVar12 = (ulong)*(ushort *)(lVar21 + 8);
    *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
    if (uVar12 == 0) goto LAB_02745670;
    puVar8 = (uint *)(lVar2 + lVar21 + 4);
    while (puVar8[-1] != 0x54706054) {
      puVar8 = puVar8 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_02745670;
    }
    uVar20 = 0;
    if (*puVar8 != 0xffffffff) {
      uVar20 = *puVar8;
    }
    *(uint *)(puVar7 + 8) = uVar20;
    uVar10 = *puVar11;
    if (uVar10 == 0) goto LAB_02745670;
    goto LAB_02745384;
  }
  if ((ushort *)((long)puVar11 + (ulong)uVar20) != (ushort *)0x0) {
    uVar18 = *(ushort *)((long)puVar11 + (ulong)uVar20);
    if (0xfffe < uVar19) {
      uVar19 = 0xffff;
    }
    uVar15 = (ushort)uVar19;
    if (uVar18 < 0x80) {
      param_1 = param_1 + uVar18;
    }
    goto LAB_027454a0;
  }
LAB_02745670:
  if (0xfffe < uVar19) {
    uVar19 = 0xffff;
  }
  uVar15 = (ushort)uVar19;
  goto LAB_027454a0;
LAB_027455ac:
  if (-1 < (int)uVar20) {
    if ((ushort *)((long)puVar11 + (ulong)uVar20) != (ushort *)0x0) {
      uVar4 = *(ushort *)((long)puVar11 + (ulong)uVar20);
      uVar15 = 0;
      if (-1 < (int)uVar19) {
        uVar15 = uVar18;
      }
      if (uVar4 < 0x80) {
        param_1 = param_1 + uVar4;
      }
      goto LAB_027454a0;
    }
    goto LAB_02745498;
  }
  if ((uVar20 != 0xffffffff) || (lVar21 = (long)puVar11 - (ulong)uVar3, lVar21 == 0))
  goto LAB_02745498;
  lVar2 = 0xc;
  if (*(char *)(lVar21 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar21 == 0) goto LAB_02745498;
  uVar12 = (ulong)*(ushort *)(lVar21 + 8);
  *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
  if (uVar12 == 0) goto LAB_02745498;
  puVar8 = (uint *)(lVar2 + lVar21 + 4);
  while (puVar8[-1] != 0x54706054) {
    puVar8 = puVar8 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_02745498;
  }
  uVar20 = 0;
  if (*puVar8 != 0xffffffff) {
    uVar20 = *puVar8;
  }
  *(uint *)(puVar7 + 8) = uVar20;
  uVar3 = *puVar11;
  if (uVar3 == 0) goto LAB_02745498;
  goto LAB_027455ac;
LAB_02745414:
  do {
    if (-1 < (int)uVar20) {
      if ((ushort *)((long)puVar11 + (ulong)uVar20) == (ushort *)0x0) goto LAB_02745578;
      uVar10 = (uint)*(ushort *)((long)puVar11 + (ulong)uVar20);
LAB_0274557c:
      uVar3 = *puVar11;
      uVar20 = uVar19;
      if ((int)uVar10 <= (int)uVar19) {
        uVar20 = uVar10;
      }
      uVar10 = uVar19 >> 0x1f;
      if (0xfffe < uVar20) {
        uVar20 = 0xffff;
      }
      uVar18 = (ushort)uVar20;
      if (uVar3 == 0) goto LAB_02745498;
      uVar20 = *(uint *)(puVar7 + 8);
      goto LAB_027455ac;
    }
    if ((uVar20 != 0xffffffff) || (lVar21 = (long)puVar11 - (ulong)uVar10, lVar21 == 0)) {
LAB_02745578:
      uVar10 = 0;
      goto LAB_0274557c;
    }
    lVar2 = 0xc;
    if (*(char *)(lVar21 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar21 == 0) goto LAB_02745578;
    uVar12 = (ulong)*(ushort *)(lVar21 + 8);
    *(undefined4 *)(puVar7 + 4) = 0xfffffffe;
    if (uVar12 == 0) goto LAB_02745578;
    puVar8 = (uint *)(lVar2 + lVar21 + 4);
    while (puVar8[-1] != 0x110b14c) {
      puVar8 = puVar8 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_02745578;
    }
    uVar20 = 0;
    if (*puVar8 != 0xffffffff) {
      uVar20 = *puVar8;
    }
    *(uint *)(puVar7 + 4) = uVar20;
    uVar10 = *puVar11;
  } while (uVar10 != 0);
LAB_02745484:
  uVar19 = uVar19 & (int)uVar19 >> 0x1f;
  uVar10 = (uint)((param_3 & 0xffffffff) >> 0x1f);
  if (0xfffe < uVar19) {
    uVar19 = 0xffff;
  }
  uVar18 = (ushort)uVar19;
LAB_02745498:
  uVar15 = 0;
  if (uVar10 == 0) {
    uVar15 = uVar18;
  }
LAB_027454a0:
  *param_1 = uVar15;
  if (*puVar11 == 0) {
    return;
  }
  cVar17 = *puVar6;
  while( true ) {
    if (cVar17 == '\0') {
      cVar17 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
    }
    else if (*(int *)(puVar7 + 8) != -1) {
      return;
    }
    lVar21 = (long)puVar11 - (ulong)*puVar11;
    if (*puVar11 == 0) {
      return;
    }
    if (lVar21 == 0) {
      return;
    }
    lVar2 = 0xc;
    if (*(char *)(lVar21 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar21 == 0) break;
    uVar12 = (ulong)*(ushort *)(lVar21 + 8);
    *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
    if (uVar12 == 0) {
      return;
    }
    piVar9 = (int *)(lVar2 + lVar21 + 4);
    while (piVar9[-1] != 0x54706054) {
      piVar9 = piVar9 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) {
        return;
      }
    }
    iVar13 = 0;
    if (*piVar9 != -1) {
      iVar13 = *piVar9;
    }
    *(int *)(puVar7 + 8) = iVar13;
    if (*puVar11 == 0) {
      return;
    }
  }
  return;
}

