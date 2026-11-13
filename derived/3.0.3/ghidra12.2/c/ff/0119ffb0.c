
void FUN_0119ffb0(uint *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  long lVar8;
  char cVar9;
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  int *piVar13;
  long lVar14;
  undefined *local_60;
  uint local_58;
  uint uStack_54;
  long local_50;
  undefined4 local_48;
  uint local_44;
  
  puVar3 = PTR_DAT_04bbb918;
  puVar2 = PTR_DAT_04bbb910;
  puVar7 = *(uint **)(param_2 + 8);
  if ((puVar7 != (uint *)0x0) && (*puVar7 != 0)) {
    cVar9 = *PTR_DAT_04bbb910;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
        uVar5 = *puVar7;
      }
      else {
        uVar5 = *(uint *)(puVar3 + 0xc);
        if (-1 < (int)uVar5) {
          if (((short *)((ulong)uVar5 + (long)puVar7) != (short *)0x0) &&
             (*(short *)((ulong)uVar5 + (long)puVar7) != 0)) {
            puVar7 = *(uint **)(param_2 + 8);
            uVar5 = *puVar7;
            if (uVar5 == 0) goto LAB_011a0170;
            uVar12 = *(uint *)(puVar3 + 8);
            goto LAB_011a00f0;
          }
          break;
        }
        if (uVar5 != 0xffffffff) break;
        uVar5 = *puVar7;
      }
      if ((uVar5 == 0) || (puVar10 = (uint *)(ulong)uVar5, puVar7 == puVar10)) break;
      lVar14 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar7 + (lVar14 - (long)puVar10);
      if (lVar14 == 0) break;
      uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
      *(undefined4 *)(puVar3 + 0xc) = 0xfffffffe;
      if (uVar11 == 0) break;
      piVar13 = (int *)(lVar14 + 4);
      while (piVar13[-1] != 0x54706054) {
        piVar13 = piVar13 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_011a0264;
      }
      iVar1 = 0;
      if (*piVar13 != -1) {
        iVar1 = *piVar13;
      }
      *(int *)(puVar3 + 0xc) = iVar1;
      if (*puVar7 == 0) break;
    } while( true );
  }
  goto LAB_011a0264;
LAB_011a00f0:
  if ((int)uVar12 < 0) {
    if ((uVar12 != 0xffffffff) || (lVar14 = (long)puVar7 - (ulong)uVar5, lVar14 == 0))
    goto LAB_011a0170;
    lVar8 = 0xc;
    if (*(char *)(lVar14 + 10) != '\0') {
      lVar8 = 0x1c;
    }
    if (lVar8 + lVar14 == 0) goto LAB_011a0170;
    uVar11 = (ulong)*(ushort *)(lVar14 + 8);
    *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_011a0170;
    puVar10 = (uint *)(lVar8 + lVar14 + 4);
    while (puVar10[-1] != 0xc33a894e) {
      puVar10 = puVar10 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_011a0170;
    }
    uVar12 = 0;
    if (*puVar10 != 0xffffffff) {
      uVar12 = *puVar10;
    }
    *(uint *)(puVar3 + 8) = uVar12;
    uVar5 = *puVar7;
    if (uVar5 == 0) goto LAB_011a0170;
    goto LAB_011a00f0;
  }
  if ((ushort *)((long)puVar7 + (ulong)uVar12) != (ushort *)0x0) {
    uVar4 = *(ushort *)((long)puVar7 + (ulong)uVar12);
    goto LAB_011a0174;
  }
LAB_011a0170:
  uVar4 = 0xfffe;
LAB_011a0174:
  local_60 = (undefined *)(ulong)uVar4;
  FUN_0277d4ac(&local_60);
  uVar11 = FUN_0277e294(&local_60);
  if ((uVar11 & 1) != 0) {
    uVar4 = FUN_011a03c0(param_2);
    local_48 = (uint)uVar4;
    local_44 = 0;
    FUN_0277d4ac(&local_48);
    puVar7 = *(uint **)(param_2 + 8);
    if (*puVar7 == 0) {
LAB_011a02e8:
      puVar2 = PTR_DAT_04bb43c0;
      local_50 = 0;
      local_60 = PTR_DAT_04bc0510 + 0x10;
      local_58 = local_48;
      uStack_54 = local_44;
      lVar14 = *(long *)PTR_DAT_04bb43c0;
      uVar5 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar2 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar14 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(&local_48);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
             (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8), lVar14 != 0)) {
            local_50 = lVar14;
          }
        }
      }
      uVar6 = FUN_011a0690(param_2);
      FUN_01afade0(&local_60,uVar6);
      *param_1 = local_58;
      param_1[1] = uStack_54;
      return;
    }
    cVar9 = *puVar2;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar3 + 0x10) = 0xffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar3 + 0xc);
        if (-1 < (int)uVar5) {
          if ((((((short *)((ulong)uVar5 + (long)puVar7) != (short *)0x0) &&
                (*(short *)((ulong)uVar5 + (long)puVar7) == 0x1f)) &&
               (lVar14 = *(long *)PTR_DAT_04bb27d0, lVar14 != 0)) &&
              ((lVar8 = *(long *)(lVar14 + 0x28), lVar8 != 0 && (*(int *)(lVar14 + 0x80) == 1)))) &&
             (*(short *)(lVar8 + 0x120) != -2)) {
            local_44 = *(uint *)(lVar8 + 0x124);
            local_48 = CONCAT22(*(undefined2 *)(lVar8 + 0x122),*(short *)(lVar8 + 0x120));
          }
          goto LAB_011a02e8;
        }
        if (uVar5 != 0xffffffff) goto LAB_011a02e8;
      }
      puVar10 = (uint *)(ulong)*puVar7;
      if ((*puVar7 == 0) || (puVar7 == puVar10)) goto LAB_011a02e8;
      lVar14 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar7 + (lVar14 - (long)puVar10);
      if (lVar14 == 0) goto LAB_011a02e8;
      uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
      *(undefined4 *)(puVar3 + 0xc) = 0xfffffffe;
      if (uVar11 == 0) goto LAB_011a02e8;
      piVar13 = (int *)(lVar14 + 4);
      while (piVar13[-1] != 0x54706054) {
        piVar13 = piVar13 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_011a02e8;
      }
      iVar1 = 0;
      if (*piVar13 != -1) {
        iVar1 = *piVar13;
      }
      *(int *)(puVar3 + 0xc) = iVar1;
      if (*puVar7 == 0) goto LAB_011a02e8;
    } while( true );
  }
LAB_011a0264:
  uVar5 = *(uint *)(PTR_DAT_04bb37e0 + 4);
  *param_1 = *(uint *)PTR_DAT_04bb37e0;
  param_1[1] = uVar5;
  return;
}

