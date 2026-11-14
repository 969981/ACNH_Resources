
undefined8 FUN_01b69400(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char cVar8;
  ulong uVar9;
  int *piVar10;
  
  puVar6 = PTR_DAT_04bc0648;
  puVar5 = PTR_DAT_04bc0640;
  if (*param_3 == 0) {
    return 0;
  }
  cVar8 = *PTR_DAT_04bc0640;
  while( true ) {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
    }
    else {
      uVar3 = *(uint *)(puVar6 + 0x18);
      if (-1 < (int)uVar3) {
        if ((short *)((ulong)uVar3 + (long)param_3) == (short *)0x0) {
          return 0;
        }
        if (*(short *)((ulong)uVar3 + (long)param_3) == 0) {
          return 0;
        }
        uVar7 = FUN_01b695b0();
        return uVar7;
      }
      if (uVar3 != 0xffffffff) {
        return 0;
      }
    }
    lVar4 = (long)param_3 - (ulong)*param_3;
    if (*param_3 == 0) {
      return 0;
    }
    if (lVar4 == 0) break;
    lVar2 = 0xc;
    if (*(char *)(lVar4 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar4 == 0) {
      return 0;
    }
    uVar9 = (ulong)*(ushort *)(lVar4 + 8);
    *(undefined4 *)(puVar6 + 0x18) = 0xfffffffe;
    if (uVar9 == 0) {
      return 0;
    }
    piVar10 = (int *)(lVar2 + lVar4 + 4);
    while (piVar10[-1] != 0x175969e1) {
      piVar10 = piVar10 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar10 != -1) {
      iVar1 = *piVar10;
    }
    *(int *)(puVar6 + 0x18) = iVar1;
    if (*param_3 == 0) {
      return 0;
    }
  }
  return 0;
}

