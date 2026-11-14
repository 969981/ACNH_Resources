
byte FUN_0170a4f0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  uint *puVar6;
  ulong uVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  
  if (*(long *)(param_1 + 0x1138) == 0) {
    puVar6 = (uint *)FUN_0171ee68(&DAT_04c931a0);
    pcVar4 = PTR_DAT_04bbde88;
    puVar5 = (undefined8 *)PTR_DAT_04bbde90;
  }
  else {
    puVar6 = (uint *)FUN_0171ee68(*(long *)(*(long *)(param_1 + 0x1138) + 0x88) + 0x60);
    pcVar4 = PTR_DAT_04bbde88;
    puVar5 = (undefined8 *)PTR_DAT_04bbde90;
  }
  PTR_DAT_04bbde88 = pcVar4;
  PTR_DAT_04bbde90 = (undefined *)puVar5;
  if ((puVar6 != (uint *)0x0) && (*puVar6 != 0)) {
    cVar8 = *pcVar4;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *puVar5 = 0xffffffffffffffff;
        puVar5[1] = 0xffffffffffffffff;
        *pcVar4 = '\x01';
        puVar5[6] = 0xffffffffffffffff;
        puVar5[2] = 0xffffffffffffffff;
        puVar5[3] = 0xffffffffffffffff;
        puVar5[4] = 0xffffffffffffffff;
        puVar5[5] = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(uint *)((long)puVar5 + 0x2c);
        if (-1 < (int)uVar3) {
          if ((ulong)uVar3 + (long)puVar6 == 0) {
            return 0;
          }
          return *(byte *)((ulong)uVar3 + (long)puVar6 + 1) >> 5 & 1;
        }
        if (uVar3 != 0xffffffff) {
          return 0;
        }
      }
      puVar9 = (uint *)(ulong)*puVar6;
      if (*puVar6 == 0) {
        return 0;
      }
      if (puVar6 == puVar9) {
        return 0;
      }
      lVar2 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
      if (lVar2 == 0) {
        return 0;
      }
      uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
      *(undefined4 *)((long)puVar5 + 0x2c) = 0xfffffffe;
      if (uVar7 == 0) {
        return 0;
      }
      piVar10 = (int *)(lVar2 + 4);
      while (piVar10[-1] != 0x42ad246a) {
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
      *(int *)((long)puVar5 + 0x2c) = iVar1;
    } while (*puVar6 != 0);
  }
  return 0;
}

