
byte FUN_012726c0(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar6 = PTR_DAT_04bbbdb0;
  puVar5 = PTR_DAT_04bbbda8;
  puVar7 = *(uint **)(param_1 + 8);
  if (puVar7 == (uint *)0x0) {
    return 0;
  }
  if (*puVar7 == 0) {
    return 0;
  }
  cVar8 = *PTR_DAT_04bbbda8;
  while( true ) {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
    }
    else {
      uVar4 = *(uint *)(puVar6 + 0xc);
      if (-1 < (int)uVar4) {
        if ((ulong)uVar4 + (long)puVar7 == 0) {
          return 0;
        }
        uVar2 = param_2 + 7;
        if (-1 < (int)param_2) {
          uVar2 = param_2;
        }
        return *(byte *)((ulong)uVar4 + (long)puVar7 + (ulong)(uint)((int)uVar2 >> 3)) >>
               (ulong)(param_2 & 7) & 1;
      }
      if (uVar4 != 0xffffffff) {
        return 0;
      }
    }
    puVar9 = (uint *)(ulong)*puVar7;
    if ((*puVar7 == 0) || (puVar7 == puVar9)) {
      return 0;
    }
    lVar3 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar7 + (lVar3 - (long)puVar9);
    if (lVar3 == 0) break;
    uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
    *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
    if (uVar10 == 0) {
      return 0;
    }
    piVar11 = (int *)(lVar3 + 4);
    while (piVar11[-1] != -0x50c4135b) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar11 != -1) {
      iVar1 = *piVar11;
    }
    *(int *)(puVar6 + 0xc) = iVar1;
    if (*puVar7 == 0) {
      return 0;
    }
  }
  return 0;
}

