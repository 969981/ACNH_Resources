
uint FUN_01b8bb00(long param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  char cVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  
  puVar5 = PTR_DAT_04bc06e8;
  puVar4 = PTR_DAT_04bc06e0;
  puVar6 = *(uint **)(param_1 + 8);
  if (*param_2 == 0) {
LAB_01b8bc04:
    uVar8 = 0;
  }
  else {
    cVar7 = *PTR_DAT_04bc06e0;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
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
        uVar8 = *(uint *)(puVar5 + 0x50);
        if (-1 < (int)uVar8) {
          if (((byte *)((ulong)uVar8 + (long)param_2) == (byte *)0x0) ||
             (bVar3 = *(byte *)((ulong)uVar8 + (long)param_2), uVar8 = (uint)bVar3, 3 < bVar3))
          goto LAB_01b8bc04;
          goto LAB_01b8bc08;
        }
        if (uVar8 != 0xffffffff) goto LAB_01b8bc04;
      }
      puVar10 = (uint *)(ulong)*param_2;
      uVar8 = 0;
      if ((*param_2 == 0) || (param_2 == puVar10)) goto LAB_01b8bc08;
      lVar2 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar10)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_2 + (lVar2 - (long)puVar10);
      if (lVar2 == 0) goto LAB_01b8bc04;
      uVar9 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x50) = 0xfffffffe;
      uVar8 = 0;
      if (uVar9 == 0) goto LAB_01b8bc08;
      piVar11 = (int *)(lVar2 + 4);
      while (piVar11[-1] != 0x7a6965c5) {
        piVar11 = piVar11 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar8 = 0;
          goto LAB_01b8bc08;
        }
      }
      iVar1 = 0;
      if (*piVar11 != -1) {
        iVar1 = *piVar11;
      }
      *(int *)(puVar5 + 0x50) = iVar1;
    } while (*param_2 != 0);
    uVar8 = 0;
  }
LAB_01b8bc08:
  return *puVar6 >> (ulong)(uVar8 & 0x1f) & 1;
}

