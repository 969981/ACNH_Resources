
void FUN_01e26d20(long param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint *puVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  puVar3 = PTR_DAT_04bc1578;
  puVar2 = PTR_DAT_04bc1570;
  lVar4 = *(long *)PTR_DAT_04bb3968;
  if (lVar4 != 0) {
    uVar8 = *(uint *)(param_1 + 0xc);
    if ((int)*(uint *)(lVar4 + 0x16ca0) < 1) {
      if ((((*(long *)(lVar4 + 0x16b90) != 0) &&
           (puVar5 = *(uint **)(*(long *)(lVar4 + 0x16b90) + 8), puVar5 != (uint *)0x0)) &&
          ((*(uint *)(lVar4 + 0x16ba8) <= uVar8 ||
           (*(char *)(*(long *)(lVar4 + 0x16bb0) + (long)(int)uVar8) != '\0')))) &&
         (((uVar8 < *puVar5 && (puVar5[1] != 0)) && ((ushort)puVar5[2] != 0)))) {
        iVar6 = 0xc;
        if (*(char *)((long)puVar5 + 10) != '\0') {
          iVar6 = 0x1c;
        }
        puVar5 = (uint *)((ulong)(puVar5[1] * uVar8 + (uint)(ushort)puVar5[2] * 8 + iVar6) +
                         (long)puVar5);
        goto joined_r0x01e26de4;
      }
    }
    else if (uVar8 < *(uint *)(lVar4 + 0x16ca0)) {
      if (*(uint *)(lVar4 + 0x16c90) <= uVar8) {
        uVar8 = 0;
      }
      puVar5 = *(uint **)(*(long *)(lVar4 + 0x16c98) + (ulong)uVar8 * 8);
joined_r0x01e26de4:
      if (puVar5 != (uint *)0x0) {
        uVar8 = *puVar5;
        goto joined_r0x01e26d74;
      }
    }
  }
  uVar8 = *(uint *)PTR_DAT_04bc2820;
  puVar5 = (uint *)PTR_DAT_04bc2820;
joined_r0x01e26d74:
  if (uVar8 == 0) {
LAB_01e26ef4:
    uVar8 = 2;
LAB_01e26ef8:
    *(uint *)(param_1 + 0x10) = uVar8;
    *(undefined4 *)(param_1 + 100) = 1;
    return;
  }
  cVar7 = *PTR_DAT_04bc1570;
  do {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
      *(undefined4 *)(puVar3 + 0x68) = 0xffffffff;
      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
    }
    else {
      uVar8 = *(uint *)(puVar3 + 0xc);
      if (-1 < (int)uVar8) {
        if (((byte *)((ulong)uVar8 + (long)puVar5) != (byte *)0x0) &&
           (bVar1 = *(byte *)((ulong)uVar8 + (long)puVar5), uVar8 = (uint)bVar1, bVar1 < 0x28))
        goto LAB_01e26ef8;
        goto LAB_01e26ef4;
      }
      if (uVar8 != 0xffffffff) goto LAB_01e26ef4;
    }
    puVar10 = (uint *)(ulong)*puVar5;
    uVar8 = 2;
    if ((*puVar5 == 0) || (puVar5 == puVar10)) goto LAB_01e26ef8;
    lVar4 = 0xc;
    if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
      lVar4 = 0x1c;
    }
    lVar4 = (long)puVar5 + (lVar4 - (long)puVar10);
    if (lVar4 == 0) goto LAB_01e26ef4;
    uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
    *(undefined4 *)(puVar3 + 0xc) = 0xfffffffe;
    if (uVar9 == 0) goto LAB_01e26ef4;
    piVar11 = (int *)(lVar4 + 4);
    while (piVar11[-1] != 0x40876b17) {
      piVar11 = piVar11 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) goto LAB_01e26ef4;
    }
    iVar6 = 0;
    if (*piVar11 != -1) {
      iVar6 = *piVar11;
    }
    *(int *)(puVar3 + 0xc) = iVar6;
    if (*puVar5 == 0) goto LAB_01e26ef4;
  } while( true );
}

