
undefined4 FUN_0124e270(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  int *piVar11;
  
  if (((param_2 & 1) != 0) && (iVar7 = FUN_0277d6c4(param_1 + 8), iVar7 == 0xea79)) {
    return 0;
  }
  puVar6 = PTR_DAT_04bbbc78;
  puVar5 = PTR_DAT_04bbbc70;
  puVar8 = *(uint **)(param_1 + 0x10);
  if ((puVar8 == (uint *)0x0) || (uVar2 = *puVar8, uVar2 == 0)) {
    return 0;
  }
  cVar9 = *PTR_DAT_04bbbc70;
  while( true ) {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined4 *)(puVar6 + 0x60) = 0xffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
      uVar2 = *puVar8;
    }
    else {
      uVar3 = *(uint *)puVar6;
      if (-1 < (int)uVar3) {
        if ((undefined4 *)((ulong)uVar3 + (long)puVar8) == (undefined4 *)0x0) {
          return 0;
        }
        return *(undefined4 *)((ulong)uVar3 + (long)puVar8);
      }
      if (uVar3 != 0xffffffff) {
        return 0;
      }
    }
    puVar4 = (uint *)(ulong)uVar2;
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    if (puVar8 == puVar4) break;
    lVar1 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar4)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar8 + (lVar1 - (long)puVar4);
    if (lVar1 == 0) {
      return 0;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar4));
    *(undefined4 *)puVar6 = 0xfffffffe;
    if (uVar10 == 0) {
      return 0;
    }
    piVar11 = (int *)(lVar1 + 4);
    while (piVar11[-1] != 0xc315945) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 0;
      }
    }
    iVar7 = 0;
    if (*piVar11 != -1) {
      iVar7 = *piVar11;
    }
    *(int *)puVar6 = iVar7;
    uVar2 = *puVar8;
    if (uVar2 == 0) {
      return 0;
    }
  }
  return 0;
}

