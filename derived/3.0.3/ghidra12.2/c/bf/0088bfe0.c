
long FUN_0088bfe0(uint *param_1,uint param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  
  puVar6 = PTR_DAT_04bb57e8;
  puVar5 = PTR_DAT_04bb57e0;
  if (*param_1 != 0) {
    uVar2 = 0;
    if (param_2 < 9) {
      uVar2 = (ulong)param_2;
    }
    cVar8 = *PTR_DAT_04bb57e0;
    while( true ) {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      }
      uVar4 = *(uint *)(puVar6 + uVar2 * 4);
      if (-1 < (int)uVar4) {
        return (ulong)uVar4 + (long)param_1;
      }
      if (((uVar4 != 0xffffffff) || (puVar9 = (uint *)(ulong)*param_1, *param_1 == 0)) ||
         (param_1 == puVar9)) break;
      lVar3 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)param_1 + (lVar3 - (long)puVar9);
      if (lVar3 == 0) {
        return 0;
      }
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
      *(undefined4 *)(puVar6 + uVar2 * 4) = 0xfffffffe;
      if (uVar7 == 0) {
        return 0;
      }
      piVar10 = (int *)(lVar3 + 4);
      while (piVar10[-1] != param_3) {
        piVar10 = piVar10 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) {
          return 0;
        }
      }
      iVar1 = 0;
      if (*piVar10 != -1) {
        iVar1 = *piVar10;
      }
      *(int *)(puVar6 + uVar2 * 4) = iVar1;
      if (*param_1 == 0) {
        return 0;
      }
    }
  }
  return 0;
}

