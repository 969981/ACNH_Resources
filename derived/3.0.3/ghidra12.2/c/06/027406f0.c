
void FUN_027406f0(undefined2 *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined2 uVar14;
  char cVar15;
  undefined2 uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  long lVar20;
  
  puVar5 = PTR_DAT_04bb2208;
  uVar17 = *param_2;
  lVar20 = *(long *)PTR_DAT_04bb2208;
  FUN_006bd550("invalid_name",0);
  puVar7 = PTR_DAT_04bb5810;
  puVar6 = PTR_DAT_04bb5808;
  uVar9 = *(uint *)(lVar20 + 0xa68);
  uVar11 = (ulong)uVar9;
  if (*(char *)(lVar20 + 0xa79) == '\0') {
    if ((int)uVar9 < 1) goto LAB_027407d8;
    puVar13 = *(undefined8 **)(lVar20 + 0xa70);
    uVar9 = 0xffffffff;
    do {
      puVar10 = (uint *)*puVar13;
      if (uVar17 == puVar10[8]) goto LAB_027407ec;
      puVar13 = puVar13 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  else {
    if (uVar9 != 0) {
      if ((int)uVar9 < 2) {
        lVar20 = *(long *)(lVar20 + 0xa70);
        uVar18 = 0;
      }
      else {
        iVar12 = uVar9 - 1;
        lVar20 = *(long *)(lVar20 + 0xa70);
        uVar18 = 0;
        do {
          iVar1 = iVar12 + uVar18;
          if (iVar1 < 0 != SCARRY4(iVar12,uVar18)) {
            iVar1 = iVar1 + 1;
          }
          uVar9 = iVar1 >> 1;
          uVar3 = *(uint *)(*(long *)(lVar20 + (long)(int)uVar9 * 8) + 0x20);
          if (uVar17 == uVar3) goto LAB_027407e4;
          if (uVar3 < uVar17) {
            uVar18 = uVar9 + 1;
          }
          else {
            iVar12 = uVar9 - 1;
          }
        } while ((int)uVar18 < iVar12);
      }
      uVar9 = uVar18;
      if (uVar17 == *(uint *)(*(long *)(lVar20 + (long)(int)uVar18 * 8) + 0x20)) {
LAB_027407e4:
        if (-1 < (int)uVar9) {
          puVar10 = *(uint **)(lVar20 + (ulong)uVar9 * 8);
LAB_027407ec:
          uVar9 = *puVar10;
        }
        goto LAB_027407f0;
      }
    }
LAB_027407d8:
    uVar9 = 0xffffffff;
  }
LAB_027407f0:
  lVar20 = *(long *)puVar5;
  if ((int)*(uint *)(lVar20 + 0xa40) < 1) {
    if (*(long *)(lVar20 + 0x930) == 0) {
      return;
    }
    puVar10 = *(uint **)(*(long *)(lVar20 + 0x930) + 8);
    if (puVar10 == (uint *)0x0) {
      return;
    }
    if ((uVar9 < *(uint *)(lVar20 + 0x948)) &&
       (*(char *)(*(long *)(lVar20 + 0x950) + (long)(int)uVar9) == '\0')) {
      return;
    }
    if (*puVar10 <= uVar9) {
      return;
    }
    if (puVar10[1] == 0) {
      return;
    }
    if ((ushort)puVar10[2] == 0) {
      return;
    }
    iVar12 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      iVar12 = 0x1c;
    }
    puVar10 = (uint *)((ulong)(puVar10[1] * uVar9 + (uint)(ushort)puVar10[2] * 8 + iVar12) +
                      (long)puVar10);
  }
  else {
    if (*(uint *)(lVar20 + 0xa40) <= uVar9) {
      return;
    }
    if (*(uint *)(lVar20 + 0xa30) <= uVar9) {
      uVar9 = 0;
    }
    puVar10 = *(uint **)(*(long *)(lVar20 + 0xa38) + (ulong)uVar9 * 8);
  }
  if (puVar10 == (uint *)0x0) {
    return;
  }
  if (*puVar10 != 0) {
    cVar15 = *PTR_DAT_04bb5808;
    uVar17 = 0xffffffff;
    do {
      if (cVar15 != '\0') {
        if (*(uint *)(puVar7 + 0x14) == 0xffffffff) goto LAB_0274087c;
        uVar9 = *puVar10;
        uVar17 = *(uint *)(puVar7 + 0x14);
joined_r0x02740a00:
        if (uVar9 != 0) {
          uVar18 = *(uint *)(puVar7 + 0x10);
          goto LAB_02740980;
        }
        break;
      }
      cVar15 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
LAB_0274087c:
      lVar20 = (long)puVar10 - (ulong)*puVar10;
      if ((*puVar10 == 0) || (lVar20 == 0)) {
LAB_02740960:
        uVar9 = *puVar10;
        goto joined_r0x02740a00;
      }
      lVar2 = 0xc;
      if (*(char *)(lVar20 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar20 == 0) goto LAB_02740960;
      uVar11 = (ulong)*(ushort *)(lVar20 + 8);
      *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
      if (uVar11 == 0) {
LAB_0274095c:
        uVar17 = 0xfffffffe;
        goto LAB_02740960;
      }
      piVar19 = (int *)(lVar2 + lVar20 + 4);
      while (piVar19[-1] != 0x54706054) {
        piVar19 = piVar19 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_0274095c;
      }
      iVar12 = 0;
      if (*piVar19 != -1) {
        iVar12 = *piVar19;
      }
      *(int *)(puVar7 + 0x14) = iVar12;
    } while (*puVar10 != 0);
  }
LAB_02740a04:
  uVar17 = param_3 & (int)param_3 >> 0x1f;
  if (0xfffe < uVar17) {
    uVar17 = 0xffff;
  }
  uVar16 = (undefined2)uVar17;
LAB_02740a18:
  uVar14 = 0;
  if (-1 < (int)param_3) {
    uVar14 = uVar16;
  }
LAB_02740a20:
  *param_1 = uVar14;
  if (*puVar10 == 0) {
    return;
  }
  cVar15 = *puVar6;
  while( true ) {
    if (cVar15 == '\0') {
      cVar15 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
    }
    else if (*(int *)(puVar7 + 0x14) != -1) {
      return;
    }
    lVar20 = (long)puVar10 - (ulong)*puVar10;
    if (*puVar10 == 0) {
      return;
    }
    if (lVar20 == 0) {
      return;
    }
    lVar2 = 0xc;
    if (*(char *)(lVar20 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar20 == 0) break;
    uVar11 = (ulong)*(ushort *)(lVar20 + 8);
    *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
    if (uVar11 == 0) {
      return;
    }
    piVar19 = (int *)(lVar2 + lVar20 + 4);
    while (piVar19[-1] != 0x54706054) {
      piVar19 = piVar19 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        return;
      }
    }
    iVar12 = 0;
    if (*piVar19 != -1) {
      iVar12 = *piVar19;
    }
    *(int *)(puVar7 + 0x14) = iVar12;
    if (*puVar10 == 0) {
      return;
    }
  }
  return;
LAB_02740980:
  do {
    if (-1 < (int)uVar18) {
      if ((uint *)((long)puVar10 + (ulong)uVar18) == (uint *)0x0) goto LAB_02740af8;
      uVar9 = *(uint *)((long)puVar10 + (ulong)uVar18);
LAB_02740afc:
      uVar3 = *puVar10;
      uVar18 = param_3;
      if ((int)uVar9 <= (int)param_3) {
        uVar18 = uVar9;
      }
      if (0xfffe < uVar18) {
        uVar18 = 0xffff;
      }
      uVar16 = (undefined2)uVar18;
      goto joined_r0x02740b18;
    }
    if ((uVar18 != 0xffffffff) || (lVar20 = (long)puVar10 - (ulong)uVar9, lVar20 == 0)) {
LAB_02740af8:
      uVar9 = 0;
      goto LAB_02740afc;
    }
    lVar2 = 0xc;
    if (*(char *)(lVar20 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar20 == 0) goto LAB_02740af8;
    uVar11 = (ulong)*(ushort *)(lVar20 + 8);
    *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_02740af8;
    puVar8 = (uint *)(lVar2 + lVar20 + 4);
    while (puVar8[-1] != 0x344b17d7) {
      puVar8 = puVar8 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_02740af8;
    }
    uVar18 = 0;
    if (*puVar8 != 0xffffffff) {
      uVar18 = *puVar8;
    }
    *(uint *)(puVar7 + 0x10) = uVar18;
    uVar9 = *puVar10;
  } while (uVar9 != 0);
  goto LAB_02740a04;
joined_r0x02740b18:
  if (uVar3 == 0) goto LAB_02740a18;
  if (-1 < (int)uVar17) {
    if ((ushort *)((long)puVar10 + (ulong)uVar17) != (ushort *)0x0) {
      uVar4 = *(ushort *)((long)puVar10 + (ulong)uVar17);
      uVar14 = 0;
      if (-1 < (int)param_3) {
        uVar14 = uVar16;
      }
      if (uVar4 < 0x400) {
        param_1 = param_1 + uVar4;
      }
      goto LAB_02740a20;
    }
    goto LAB_02740a18;
  }
  if (uVar17 != 0xffffffff) goto LAB_02740a18;
  lVar20 = (long)puVar10 - (ulong)*puVar10;
  if ((*puVar10 == 0) || (lVar20 == 0)) goto LAB_02740a18;
  lVar2 = 0xc;
  if (*(char *)(lVar20 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar20 == 0) goto LAB_02740a18;
  uVar11 = (ulong)*(ushort *)(lVar20 + 8);
  *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_02740a18;
  puVar8 = (uint *)(lVar2 + lVar20 + 4);
  while (puVar8[-1] != 0x54706054) {
    puVar8 = puVar8 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_02740a18;
  }
  uVar17 = 0;
  if (*puVar8 != 0xffffffff) {
    uVar17 = *puVar8;
  }
  *(uint *)(puVar7 + 0x14) = uVar17;
  uVar3 = *puVar10;
  goto joined_r0x02740b18;
}

