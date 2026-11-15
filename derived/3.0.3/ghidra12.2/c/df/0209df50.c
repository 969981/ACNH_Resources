
byte FUN_0209df50(uint *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  byte bVar7;
  ulong uVar8;
  uint *puVar9;
  int *piVar10;
  
  puVar5 = PTR_DAT_04bc1578;
  puVar4 = PTR_DAT_04bc1570;
  if (*param_1 == 0) {
LAB_0209e04c:
    bVar7 = 2;
LAB_0209e050:
    if (1 < bVar7) {
      bVar7 = 2;
    }
    return bVar7;
  }
  cVar6 = *PTR_DAT_04bc1570;
  do {
    if (cVar6 == '\0') {
      cVar6 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 0x68) = 0xffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
    }
    else {
      uVar3 = *(uint *)(puVar5 + 0x60);
      if (-1 < (int)uVar3) {
        if ((byte *)((ulong)uVar3 + (long)param_1) != (byte *)0x0) {
          bVar7 = *(byte *)((ulong)uVar3 + (long)param_1);
          goto LAB_0209e050;
        }
        goto LAB_0209e04c;
      }
      if (uVar3 != 0xffffffff) goto LAB_0209e04c;
    }
    puVar9 = (uint *)(ulong)*param_1;
    bVar7 = 2;
    if ((*param_1 == 0) || (param_1 == puVar9)) goto LAB_0209e050;
    lVar2 = 0xc;
    if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
    if (lVar2 == 0) goto LAB_0209e04c;
    uVar8 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
    *(undefined4 *)(puVar5 + 0x60) = 0xfffffffe;
    if (uVar8 == 0) goto LAB_0209e04c;
    piVar10 = (int *)(lVar2 + 4);
    while (piVar10[-1] != -0x72c4527c) {
      piVar10 = piVar10 + 2;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) goto LAB_0209e04c;
    }
    iVar1 = 0;
    if (*piVar10 != -1) {
      iVar1 = *piVar10;
    }
    *(int *)(puVar5 + 0x60) = iVar1;
    if (*param_1 == 0) goto LAB_0209e04c;
  } while( true );
}

