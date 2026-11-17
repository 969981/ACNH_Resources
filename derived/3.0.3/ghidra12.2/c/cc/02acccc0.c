
undefined * FUN_02acccc0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  char cVar7;
  ulong uVar8;
  undefined *puVar9;
  uint *puVar10;
  int *piVar11;
  
  puVar4 = PTR_DAT_04bc4618;
  puVar5 = PTR_DAT_04bc4610;
  puVar6 = *(uint **)(param_1 + 8);
  if (puVar6 == (uint *)0x0) {
    (**(code **)(DAT_05611830 + 0x18))(&DAT_05611830);
    puVar5 = DAT_05611838;
  }
  else {
    if (*puVar6 != 0) {
      cVar7 = *PTR_DAT_04bc4610;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar4 + 0x4c);
          if (-1 < (int)uVar3) {
            puVar9 = (undefined *)((ulong)uVar3 + (long)puVar6);
            goto LAB_02accdcc;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar10 = (uint *)(ulong)*puVar6;
        puVar9 = (undefined *)0x0;
        if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_02accdcc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar6 + (lVar2 - (long)puVar10);
        if (lVar2 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
        puVar9 = (undefined *)0x0;
        if (uVar8 == 0) goto LAB_02accdcc;
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != -0x42c84029) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            puVar9 = (undefined *)0x0;
            goto LAB_02accdcc;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar4 + 0x4c) = iVar1;
      } while (*puVar6 != 0);
    }
    puVar9 = (undefined *)0x0;
LAB_02accdcc:
    puVar5 = PTR_DAT_04c49e08;
    if (puVar9 != (undefined *)0x0) {
      puVar5 = puVar9;
    }
  }
  return puVar5;
}

