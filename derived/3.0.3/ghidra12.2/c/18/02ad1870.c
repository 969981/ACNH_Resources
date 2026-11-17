
uint FUN_02ad1870(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  undefined *local_20;
  long local_18;
  
  puVar3 = PTR_DAT_04bb5bd0;
  puVar2 = PTR_DAT_04bb5bc8;
  puVar5 = *(uint **)(param_1 + 8);
  if ((puVar5 == (uint *)0x0) || (*puVar5 == 0)) {
LAB_02ad19e8:
    uVar4 = 0;
LAB_02ad19ec:
    return uVar4 & 1;
  }
  cVar7 = *PTR_DAT_04bb5bc8;
  do {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
      *(undefined4 *)(puVar3 + 0x48) = 0xffffffff;
      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
      uVar4 = *puVar5;
    }
    else {
      uVar4 = *(uint *)(puVar3 + 0x10);
      if (-1 < (int)uVar4) {
        if ((ushort *)((ulong)uVar4 + (long)puVar5) != (ushort *)0x0) {
          local_20 = PTR_DAT_04bc4730 + 0x10;
          uVar4 = (uint)*(ushort *)((ulong)uVar4 + (long)puVar5);
          if (uVar4 != 0) {
            lVar6 = *(long *)PTR_DAT_04bb5008;
            if ((((*(long *)(lVar6 + 0x2a8) != 0) && (*(long *)(*(long *)(lVar6 + 0x2a8) + 8) != 0))
                && (uVar4 = uVar4 - *(ushort *)(lVar6 + 0x3f0), uVar4 < *(uint *)(lVar6 + 0x3d0)))
               && (local_18 = *(long *)(*(long *)(lVar6 + 0x3d8) + (long)(int)uVar4 * 8),
                  local_18 != 0)) {
              uVar4 = FUN_02acce10(&local_20);
              goto LAB_02ad19ec;
            }
          }
        }
        goto LAB_02ad19e8;
      }
      if (uVar4 != 0xffffffff) goto LAB_02ad19e8;
      uVar4 = *puVar5;
    }
    if ((uVar4 == 0) || (puVar8 = (uint *)(ulong)uVar4, puVar5 == puVar8)) goto LAB_02ad19e8;
    lVar6 = 0xc;
    if (*(char *)((long)puVar5 + (10 - (long)puVar8)) != '\0') {
      lVar6 = 0x1c;
    }
    lVar6 = (long)puVar5 + (lVar6 - (long)puVar8);
    if (lVar6 == 0) goto LAB_02ad19e8;
    uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar8));
    *(undefined4 *)(puVar3 + 0x10) = 0xfffffffe;
    if (uVar9 == 0) goto LAB_02ad19e8;
    piVar10 = (int *)(lVar6 + 4);
    while (piVar10[-1] != 0xd664b5c) {
      piVar10 = piVar10 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) goto LAB_02ad19e8;
    }
    iVar1 = 0;
    if (*piVar10 != -1) {
      iVar1 = *piVar10;
    }
    *(int *)(puVar3 + 0x10) = iVar1;
    if (*puVar5 == 0) goto LAB_02ad19e8;
  } while( true );
}

