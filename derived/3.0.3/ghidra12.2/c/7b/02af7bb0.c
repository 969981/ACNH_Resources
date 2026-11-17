
uint FUN_02af7bb0(ushort *param_1,ushort *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  int *piVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  char cVar12;
  ushort uVar13;
  ulong uVar14;
  
  puVar5 = PTR_DAT_04bc4628;
  puVar4 = PTR_DAT_04bc4620;
  lVar10 = *(long *)PTR_DAT_04bb5008;
  uVar13 = *(ushort *)(lVar10 + 0x7f0);
  uVar9 = *(uint *)(lVar10 + 2000);
  uVar3 = (uint)*param_1 - (uint)uVar13;
  if ((uVar3 < uVar9) &&
     (puVar11 = *(uint **)(*(long *)(lVar10 + 0x7d8) + (long)(int)uVar3 * 8), puVar11 != (uint *)0x0
     )) {
    uVar8 = 0;
    if (*puVar11 != 0) {
      cVar12 = *PTR_DAT_04bc4620;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 4);
          if (-1 < (int)uVar3) {
            uVar8 = 0;
            if ((ushort *)((ulong)uVar3 + (long)puVar11) != (ushort *)0x0) {
              uVar8 = *(ushort *)((ulong)uVar3 + (long)puVar11);
            }
            break;
          }
          if (uVar3 != 0xffffffff) goto LAB_02af7cbc;
        }
        puVar6 = (uint *)(ulong)*puVar11;
        uVar8 = 0;
        if ((*puVar11 == 0) || (puVar11 == puVar6)) break;
        lVar2 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar6)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar11 + (lVar2 - (long)puVar6);
        if (lVar2 == 0) goto LAB_02af7cbc;
        uVar14 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar6));
        *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
        uVar8 = 0;
        if (uVar14 == 0) break;
        piVar7 = (int *)(lVar2 + 4);
        while (piVar7[-1] != 0x37d4e515) {
          piVar7 = piVar7 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) {
            uVar8 = 0;
            goto LAB_02af7cc0;
          }
        }
        uVar8 = 0;
        iVar1 = 0;
        if (*piVar7 != -1) {
          iVar1 = *piVar7;
        }
        *(int *)(puVar5 + 4) = iVar1;
        if (*puVar11 == 0) break;
      } while( true );
    }
  }
  else {
LAB_02af7cbc:
    uVar8 = 0;
  }
LAB_02af7cc0:
  puVar5 = PTR_DAT_04bc4628;
  puVar4 = PTR_DAT_04bc4620;
  uVar3 = (uint)*param_2 - (uint)uVar13;
  if (((uVar9 <= uVar3) ||
      (puVar11 = *(uint **)(*(long *)(lVar10 + 0x7d8) + (long)(int)uVar3 * 8),
      puVar11 == (uint *)0x0)) || (*puVar11 == 0)) {
LAB_02af7ddc:
    uVar13 = 0;
LAB_02af7de0:
    if (uVar8 < uVar13) {
      return 0xffffffff;
    }
    if (uVar8 != uVar13) {
      return 1;
    }
    uVar9 = 0xffffffff;
    if (*param_2 <= *param_1) {
      uVar9 = (uint)(*param_1 != *param_2);
    }
    return uVar9;
  }
  cVar12 = *PTR_DAT_04bc4620;
  do {
    if (cVar12 == '\0') {
      cVar12 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
    }
    else {
      uVar9 = *(uint *)(puVar5 + 4);
      if (-1 < (int)uVar9) {
        if ((ushort *)((ulong)uVar9 + (long)puVar11) == (ushort *)0x0) goto LAB_02af7ddc;
        uVar13 = *(ushort *)((ulong)uVar9 + (long)puVar11);
        goto LAB_02af7de0;
      }
      if (uVar9 != 0xffffffff) goto LAB_02af7ddc;
    }
    puVar6 = (uint *)(ulong)*puVar11;
    uVar13 = 0;
    if ((*puVar11 == 0) || (puVar11 == puVar6)) goto LAB_02af7de0;
    lVar10 = 0xc;
    if (*(char *)((long)puVar11 + (10 - (long)puVar6)) != '\0') {
      lVar10 = 0x1c;
    }
    lVar10 = (long)puVar11 + (lVar10 - (long)puVar6);
    if (lVar10 == 0) goto LAB_02af7ddc;
    uVar14 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar6));
    *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
    uVar13 = 0;
    if (uVar14 == 0) goto LAB_02af7de0;
    piVar7 = (int *)(lVar10 + 4);
    while (piVar7[-1] != 0x37d4e515) {
      piVar7 = piVar7 + 2;
      uVar14 = uVar14 - 1;
      if (uVar14 == 0) {
        uVar13 = 0;
        goto LAB_02af7de0;
      }
    }
    uVar13 = 0;
    iVar1 = 0;
    if (*piVar7 != -1) {
      iVar1 = *piVar7;
    }
    *(int *)(puVar5 + 4) = iVar1;
    if (*puVar11 == 0) goto LAB_02af7de0;
  } while( true );
}

