
uint FUN_01f997c0(uint *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  char cVar9;
  int *piVar10;
  
  puVar7 = PTR_DAT_04bc2340;
  puVar6 = PTR_DAT_04bc2338;
  uVar3 = *param_1;
  if (uVar3 != 0) {
    cVar9 = *PTR_DAT_04bc2338;
    do {
      if (cVar9 == '\0') {
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        cVar9 = '\x01';
        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
        *(undefined4 *)(puVar7 + 0x38) = 0xffffffff;
        *puVar6 = 1;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
        uVar3 = *param_1;
      }
      else {
        uVar4 = *(uint *)puVar7;
        if (-1 < (int)uVar4) {
          if ((uint *)((ulong)uVar4 + (long)param_1) == (uint *)0x0) {
            return 0;
          }
          uVar3 = *(uint *)((ulong)uVar4 + (long)param_1);
          if (uVar3 < 9) {
            return uVar3;
          }
          return 0;
        }
        if (uVar4 != 0xffffffff) {
          return 0;
        }
      }
      puVar5 = (uint *)(ulong)uVar3;
      if (puVar5 == (uint *)0x0) {
        return 0;
      }
      if (param_1 == puVar5) {
        return 0;
      }
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar5)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar5);
      if (lVar2 == 0) {
        return 0;
      }
      uVar8 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar5));
      *(undefined4 *)puVar7 = 0xfffffffe;
      if (uVar8 == 0) {
        return 0;
      }
      piVar10 = (int *)(lVar2 + 4);
      while (piVar10[-1] != 0x21eefaac) {
        piVar10 = piVar10 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          return 0;
        }
      }
      iVar1 = 0;
      if (*piVar10 != -1) {
        iVar1 = *piVar10;
      }
      *(int *)puVar7 = iVar1;
      uVar3 = *param_1;
    } while (uVar3 != 0);
  }
  return 0;
}

