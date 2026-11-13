
undefined1  [16] FUN_0124e3b0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  
  puVar5 = PTR_DAT_04bbbc78;
  puVar4 = PTR_DAT_04bbbc70;
  puVar6 = *(uint **)(param_1 + 0x10);
  if ((puVar6 == (uint *)0x0) || (*puVar6 == 0)) {
LAB_0124e4c0:
    return ZEXT816(0x40800000);
  }
  cVar7 = *PTR_DAT_04bbbc70;
  do {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined4 *)(puVar5 + 0x60) = 0xffffffff;
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
      uVar3 = *puVar6;
    }
    else {
      uVar3 = *(uint *)(puVar5 + 0x4c);
      if (-1 < (int)uVar3) {
        if (((byte *)((ulong)uVar3 + (long)puVar6) != (byte *)0x0) &&
           (2 < *(byte *)((ulong)uVar3 + (long)puVar6))) {
          return ZEXT816(0x40a00000);
        }
        goto LAB_0124e4c0;
      }
      if (uVar3 != 0xffffffff) goto LAB_0124e4c0;
      uVar3 = *puVar6;
    }
    if ((uVar3 == 0) || (puVar8 = (uint *)(ulong)uVar3, puVar6 == puVar8)) goto LAB_0124e4c0;
    lVar2 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar6 + (lVar2 - (long)puVar8);
    if (lVar2 == 0) goto LAB_0124e4c0;
    uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
    *(undefined4 *)(puVar5 + 0x4c) = 0xfffffffe;
    if (uVar9 == 0) goto LAB_0124e4c0;
    piVar10 = (int *)(lVar2 + 4);
    while (piVar10[-1] != -0xa58ccc9) {
      piVar10 = piVar10 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) goto LAB_0124e4c0;
    }
    iVar1 = 0;
    if (*piVar10 != -1) {
      iVar1 = *piVar10;
    }
    *(int *)(puVar5 + 0x4c) = iVar1;
    if (*puVar6 == 0) goto LAB_0124e4c0;
  } while( true );
}

