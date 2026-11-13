
undefined * FUN_0130dda0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined *puVar7;
  int *piVar8;
  undefined *puVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  
  puVar7 = PTR_DAT_04bbbeb8;
  puVar3 = PTR_DAT_04bbbeb0;
  puVar10 = *(uint **)(param_1 + 8);
  if (puVar10 == (uint *)0x0) {
    return PTR_DAT_04c48240;
  }
  uVar4 = *puVar10;
  if (uVar4 == 0) {
LAB_0130de88:
    puVar9 = (undefined *)0x0;
LAB_0130de8c:
    puVar3 = PTR_DAT_04c48238;
    if (puVar9 != (undefined *)0x0) {
      puVar3 = puVar9;
    }
    return puVar3;
  }
  cVar11 = *PTR_DAT_04bbbeb0;
  do {
    if (cVar11 == '\0') {
      cVar11 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined4 *)(puVar7 + 8) = 0xffffffff;
      *puVar3 = 1;
      uVar4 = *puVar10;
    }
    else {
      uVar5 = *(uint *)(puVar7 + 8);
      if (-1 < (int)uVar5) {
        puVar9 = (undefined *)((ulong)uVar5 + (long)puVar10);
        goto LAB_0130de8c;
      }
      if (uVar5 != 0xffffffff) goto LAB_0130de88;
    }
    puVar6 = (uint *)(ulong)uVar4;
    puVar9 = (undefined *)0x0;
    if ((puVar6 == (uint *)0x0) || (puVar9 = (undefined *)0x0, puVar10 == puVar6))
    goto LAB_0130de8c;
    lVar2 = 0xc;
    if (*(char *)((long)puVar10 + (10 - (long)puVar6)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar10 + (lVar2 - (long)puVar6);
    puVar9 = (undefined *)0x0;
    if (lVar2 == 0) goto LAB_0130de8c;
    uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar6));
    *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
    if (uVar12 == 0) goto LAB_0130de88;
    piVar8 = (int *)(lVar2 + 4);
    while (piVar8[-1] != -0x975dc9a) {
      piVar8 = piVar8 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_0130de88;
    }
    iVar1 = 0;
    if (*piVar8 != -1) {
      iVar1 = *piVar8;
    }
    *(int *)(puVar7 + 8) = iVar1;
    uVar4 = *puVar10;
    if (uVar4 == 0) goto LAB_0130de88;
  } while( true );
}

