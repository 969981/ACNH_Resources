
undefined1 FUN_01b870e0(uint *param_1)

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
  
  puVar5 = PTR_DAT_04bb62f0;
  puVar4 = PTR_DAT_04bb62e8;
  if (*param_1 != 0) {
    cVar7 = *PTR_DAT_04bb62e8;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(uint *)(puVar5 + 0x30);
        if (-1 < (int)uVar3) {
          if ((undefined1 *)((ulong)uVar3 + (long)param_1) == (undefined1 *)0x0) {
            return 0;
          }
          return *(undefined1 *)((ulong)uVar3 + (long)param_1);
        }
        if (uVar3 != 0xffffffff) {
          return 0;
        }
      }
      puVar8 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) {
        return 0;
      }
      if (param_1 == puVar8) {
        return 0;
      }
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
      if (lVar2 == 0) {
        return 0;
      }
      uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
      *(undefined4 *)(puVar5 + 0x30) = 0xfffffffe;
      if (uVar6 == 0) {
        return 0;
      }
      piVar9 = (int *)(lVar2 + 4);
      while (piVar9[-1] != 0x185d9096) {
        piVar9 = piVar9 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return 0;
        }
      }
      iVar1 = 0;
      if (*piVar9 != -1) {
        iVar1 = *piVar9;
      }
      *(int *)(puVar5 + 0x30) = iVar1;
    } while (*param_1 != 0);
  }
  return 0;
}

