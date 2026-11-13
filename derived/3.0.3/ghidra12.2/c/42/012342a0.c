
undefined8 FUN_012342a0(undefined8 param_1,float *param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  
  if (param_2 == (float *)0x0) {
    return 0;
  }
  *param_2 = 0.0;
  lVar2 = DAT_05150358;
  uVar6 = FUN_0277d6c4();
  puVar5 = PTR_DAT_04bbbc78;
  puVar4 = PTR_DAT_04bbbc70;
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
  if (((*(uint *)(lVar2 + 0x1d8) <= uVar6) ||
      (puVar7 = *(uint **)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar6 * 8), puVar7 == (uint *)0x0))
     || (*puVar7 == 0)) {
    return 0;
  }
  cVar8 = *PTR_DAT_04bbbc70;
  while( true ) {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
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
    }
    else {
      uVar6 = *(uint *)(puVar5 + 0x44);
      if (-1 < (int)uVar6) {
        if ((byte *)((ulong)uVar6 + (long)puVar7) == (byte *)0x0) {
          return 0;
        }
        bVar3 = *(byte *)((ulong)uVar6 + (long)puVar7);
        if (bVar3 < 0x10) {
          *param_2 = (float)(int)(char)bVar3 * 0.0625 + 0.03125;
          return 1;
        }
        return 0;
      }
      if (uVar6 != 0xffffffff) {
        return 0;
      }
    }
    puVar9 = (uint *)(ulong)*puVar7;
    if (*puVar7 == 0) {
      return 0;
    }
    if (puVar7 == puVar9) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar7 + (lVar2 - (long)puVar9);
    if (lVar2 == 0) {
      return 0;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
    *(undefined4 *)(puVar5 + 0x44) = 0xfffffffe;
    if (uVar10 == 0) {
      return 0;
    }
    piVar11 = (int *)(lVar2 + 4);
    while (piVar11[-1] != 0x64b8fff8) {
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
    *(int *)(puVar5 + 0x44) = iVar1;
    if (*puVar7 == 0) {
      return 0;
    }
  }
  return 0;
}

