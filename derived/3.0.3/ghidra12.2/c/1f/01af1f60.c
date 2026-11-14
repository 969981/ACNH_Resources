
ulong FUN_01af1f60(undefined4 *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  char cVar15;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint *local_68;
  
  puVar5 = PTR_DAT_04bb43c0;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4();
  lVar12 = *(long *)puVar5;
  if (lVar12 == 0) {
    return 0;
  }
  lVar14 = *(long *)(lVar14 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if (*(uint *)(lVar14 + 0x1d8) <= uVar6) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return 0;
  }
  local_68 = (uint *)0x0;
  local_78 = &PTR_FUN_04a36b50;
  local_70 = *param_1;
  uStack_6c = param_1[1];
  uVar6 = FUN_0277d6c4(&local_70);
  lVar14 = DAT_0532a768;
  if (*(long *)puVar5 == 0) {
LAB_01af206c:
    puVar13 = (uint *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_01af206c;
    uVar6 = FUN_0277d6c4(param_1);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (*(uint *)(lVar14 + 0x1d8) <= uVar6) goto LAB_01af206c;
    puVar13 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
    if (puVar13 != (uint *)0x0) {
      local_68 = puVar13;
    }
  }
  uVar9 = FUN_01ad7260(&local_78);
  if ((int)uVar9 == 0) {
    return uVar9;
  }
  uVar9 = FUN_01ae6580(&local_78);
  if ((uVar9 & 1) == 0) {
LAB_01af2098:
    return 0;
  }
  iVar7 = FUN_01afe130(&local_78);
  puVar5 = PTR_DAT_04bbfe90;
  if (iVar7 == 1) goto LAB_01af2098;
  bVar2 = *param_2;
  if (puVar13 == (uint *)0x0) {
    uVar6 = 0xfffe;
  }
  else {
    uVar6 = *puVar13;
    puVar10 = (uint *)((long)puVar13 - (ulong)uVar6);
    if ((uVar6 != 0) && (puVar10 != (uint *)0x0)) {
      if ((*puVar10 == 0) || ((uVar6 = puVar10[1], uVar6 == 0 || ((ulong)(ushort)puVar10[2] == 0))))
      goto LAB_01af217c;
      lVar12 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar12 == 0) goto LAB_01af217c;
      uVar1 = 0;
      if ((ulong)uVar6 != 0) {
        uVar1 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar6);
      }
      if (*puVar10 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if ((*(uint *)PTR_DAT_04bc0160 <= uVar1) ||
         (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0160 + 8) + (long)(int)uVar1 * 2),
         uVar6 = (uint)uVar3, 0x3b < uVar3)) goto LAB_01af217c;
      if (uVar6 != 0) goto LAB_01af2270;
      uVar6 = *puVar13;
    }
    if (uVar6 != 0) {
LAB_01af217c:
      cVar15 = *PTR_DAT_04bbfe88;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *PTR_DAT_04bbfe88 = 1;
          memset(puVar5,0xff,0x1ac);
        }
        else {
          uVar6 = *(uint *)(puVar5 + 0x128);
          if (-1 < (int)uVar6) {
            if ((ushort *)((ulong)uVar6 + (long)puVar13) == (ushort *)0x0) break;
            uVar6 = (uint)*(ushort *)((ulong)uVar6 + (long)puVar13);
            goto LAB_01af2270;
          }
          if (uVar6 != 0xffffffff) break;
        }
        puVar10 = (uint *)(ulong)*puVar13;
        uVar6 = 0;
        if ((*puVar13 == 0) || (puVar13 == puVar10)) goto LAB_01af2270;
        lVar12 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar10)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar13 + (lVar12 - (long)puVar10);
        if (lVar12 == 0) break;
        uVar9 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar10));
        *(undefined4 *)(puVar5 + 0x128) = 0xfffffffe;
        if (uVar9 == 0) break;
        piVar11 = (int *)(lVar12 + 4);
        while (piVar11[-1] != 0x54706054) {
          piVar11 = piVar11 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_01af226c;
        }
        uVar6 = 0;
        iVar7 = 0;
        if (*piVar11 != -1) {
          iVar7 = *piVar11;
        }
        *(int *)(puVar5 + 0x128) = iVar7;
        if (*puVar13 == 0) goto LAB_01af2270;
      } while( true );
    }
LAB_01af226c:
    uVar6 = 0;
  }
LAB_01af2270:
  iVar7 = FUN_01ad7260(&local_78);
  iVar8 = FUN_01af22a0(&local_78);
  uVar1 = iVar7 - iVar8;
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  uVar6 = param_3 + ((uint)bVar2 + ((uint)bVar2 * 0x29 >> 0xc) * -100 & 0xff) + uVar6;
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = uVar6 / uVar1;
  }
  return (ulong)(uVar6 - uVar4 * uVar1);
}

