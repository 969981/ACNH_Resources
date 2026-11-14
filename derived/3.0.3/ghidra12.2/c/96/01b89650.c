
undefined2 FUN_01b89650(uint *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  char cVar7;
  uint *puVar8;
  int *piVar9;
  
  puVar5 = PTR_DAT_04bc06b8;
  puVar4 = PTR_DAT_04bc06b0;
  if (*param_1 == 0) {
    return 0xffff;
  }
  cVar7 = *PTR_DAT_04bc06b0;
  while( true ) {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined4 *)(puVar5 + 0x30) = 0xffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
    }
    else {
      uVar3 = *(uint *)(puVar5 + 8);
      if (-1 < (int)uVar3) {
        if ((undefined2 *)((ulong)uVar3 + (long)param_1) == (undefined2 *)0x0) {
          return 0xffff;
        }
        return *(undefined2 *)((ulong)uVar3 + (long)param_1);
      }
      if (uVar3 != 0xffffffff) {
        return 0xffff;
      }
    }
    puVar8 = (uint *)(ulong)*param_1;
    if (*param_1 == 0) {
      return 0xffff;
    }
    if (param_1 == puVar8) break;
    lVar2 = 0xc;
    if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
    if (lVar2 == 0) {
      return 0xffff;
    }
    uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
    *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
    if (uVar6 == 0) {
      return 0xffff;
    }
    piVar9 = (int *)(lVar2 + 4);
    while (piVar9[-1] != -0x5cd90574) {
      piVar9 = piVar9 + 2;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        return 0xffff;
      }
    }
    iVar1 = 0;
    if (*piVar9 != -1) {
      iVar1 = *piVar9;
    }
    *(int *)(puVar5 + 8) = iVar1;
    if (*param_1 == 0) {
      return 0xffff;
    }
  }
  return 0xffff;
}

