
void FUN_02b59f30(uint param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  long lVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  undefined *local_20;
  undefined8 local_18;
  
  puVar6 = PTR_DAT_04bb5be8;
  puVar5 = PTR_DAT_04bb5be0;
  lVar9 = *(long *)PTR_DAT_04bb5008;
  uVar3 = (param_1 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x9f0);
  if (((*(uint *)(lVar9 + 0x9d0) <= uVar3) ||
      (puVar10 = *(uint **)(*(long *)(lVar9 + 0x9d8) + (long)(int)uVar3 * 8), puVar10 == (uint *)0x0
      )) || (uVar3 = *puVar10, uVar3 == 0)) {
LAB_02b5a05c:
    uVar7 = 0;
LAB_02b5a060:
    local_20 = PTR_DAT_04bc4888 + 0x10;
    uVar7 = uVar7 - *(ushort *)(lVar9 + 0x7f0);
    if (uVar7 < *(uint *)(lVar9 + 2000)) {
      local_18 = *(undefined8 *)(*(long *)(lVar9 + 0x7d8) + (long)(int)uVar7 * 8);
    }
    else {
      local_18 = 0;
    }
    FUN_02af77b0(&local_20);
    return;
  }
  cVar11 = *PTR_DAT_04bb5be0;
  do {
    if (cVar11 == '\0') {
      cVar11 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      uVar3 = *puVar10;
    }
    else {
      uVar7 = *(uint *)(puVar6 + 0xc);
      if (-1 < (int)uVar7) {
        if ((ushort *)((ulong)uVar7 + (long)puVar10) == (ushort *)0x0) goto LAB_02b5a05c;
        uVar7 = (uint)*(ushort *)((ulong)uVar7 + (long)puVar10);
        goto LAB_02b5a060;
      }
      if (uVar7 != 0xffffffff) goto LAB_02b5a05c;
    }
    puVar4 = (uint *)(ulong)uVar3;
    uVar7 = 0;
    if ((puVar4 == (uint *)0x0) || (uVar7 = 0, puVar10 == puVar4)) goto LAB_02b5a060;
    lVar2 = 0xc;
    if (*(char *)((long)puVar10 + (10 - (long)puVar4)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar10 + (lVar2 - (long)puVar4);
    uVar7 = 0;
    if (lVar2 == 0) goto LAB_02b5a060;
    uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar4));
    *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
    if (uVar12 == 0) goto LAB_02b5a05c;
    piVar8 = (int *)(lVar2 + 4);
    while (piVar8[-1] != -0x490afe2e) {
      piVar8 = piVar8 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_02b5a05c;
    }
    uVar7 = 0;
    iVar1 = 0;
    if (*piVar8 != -1) {
      iVar1 = *piVar8;
    }
    *(int *)(puVar6 + 0xc) = iVar1;
    uVar3 = *puVar10;
    if (uVar3 == 0) goto LAB_02b5a060;
  } while( true );
}

