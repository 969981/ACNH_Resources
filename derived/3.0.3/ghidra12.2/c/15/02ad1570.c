
void FUN_02ad1570(undefined4 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  uint *puVar9;
  char cVar10;
  ulong uVar11;
  
  puVar7 = PTR_DAT_04bb5bd0;
  puVar6 = PTR_DAT_04bb5bc8;
  puVar9 = *(uint **)(param_2 + 8);
  if ((puVar9 == (uint *)0x0) || (uVar3 = *puVar9, uVar3 == 0)) {
LAB_02ad169c:
    *param_1 = 0;
    return;
  }
  cVar10 = *PTR_DAT_04bb5bc8;
  do {
    if (cVar10 == '\0') {
      cVar10 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
      *(undefined4 *)(puVar7 + 0x48) = 0xffffffff;
      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
      uVar3 = *puVar9;
    }
    else {
      uVar4 = *(uint *)puVar7;
      if (-1 < (int)uVar4) {
        if ((float *)((ulong)uVar4 + (long)puVar9) != (float *)0x0) {
          *param_1 = (int)(long)(*(float *)((ulong)uVar4 + (long)puVar9) * 11930465.0);
          return;
        }
        goto LAB_02ad169c;
      }
      if (uVar4 != 0xffffffff) goto LAB_02ad169c;
    }
    puVar5 = (uint *)(ulong)uVar3;
    if ((puVar5 == (uint *)0x0) || (puVar9 == puVar5)) goto LAB_02ad169c;
    lVar2 = 0xc;
    if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar9 + (lVar2 - (long)puVar5);
    if (lVar2 == 0) goto LAB_02ad169c;
    uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
    *(undefined4 *)puVar7 = 0xfffffffe;
    if (uVar11 == 0) goto LAB_02ad169c;
    piVar8 = (int *)(lVar2 + 4);
    while (piVar8[-1] != -0x7700a76d) {
      piVar8 = piVar8 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_02ad169c;
    }
    iVar1 = 0;
    if (*piVar8 != -1) {
      iVar1 = *piVar8;
    }
    *(int *)puVar7 = iVar1;
    uVar3 = *puVar9;
    if (uVar3 == 0) goto LAB_02ad169c;
  } while( true );
}

