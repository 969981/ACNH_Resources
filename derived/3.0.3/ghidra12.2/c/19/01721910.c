
void FUN_01721910(uint *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined2 uVar9;
  char cVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar6 = PTR_DAT_04bbde90;
  puVar5 = PTR_DAT_04bbde88;
  uVar8 = *param_1;
  if (uVar8 == 0) {
LAB_01721a1c:
    uVar7 = 0;
LAB_01721a20:
    if (((*param_1 == 0) || (lVar3 = (long)param_1 - (ulong)*param_1, lVar3 == 0)) ||
       (*(char *)(lVar3 + 0xb) == '\0')) {
      uVar8 = FUN_01721cc0(uVar7,0);
      if (0x74 < uVar8) {
        uVar8 = 0;
      }
      uVar9 = (undefined2)uVar8;
    }
    else {
      uVar8 = FUN_007c23b0(uVar7,0);
      if (0x74 < uVar8) {
        uVar8 = 0;
      }
      uVar9 = (undefined2)uVar8;
    }
    puVar4 = (uint *)((long)param_1 - (ulong)*param_1);
    if (((*param_1 != 0) && (puVar4 != (uint *)0x0)) &&
       ((*puVar4 != 0 && ((uVar8 = puVar4[1], uVar8 != 0 && ((ulong)(ushort)puVar4[2] != 0)))))) {
      lVar3 = 0xc;
      if (*(char *)((long)puVar4 + 10) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar4 + lVar3 + (ulong)(ushort)puVar4[2] * 8;
      if (lVar3 != 0) {
        uVar2 = 0;
        if ((ulong)uVar8 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar3) / (ulong)uVar8);
        }
        if (*puVar4 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < *(uint *)PTR_DAT_04bbe028) {
          *(undefined2 *)(*(long *)(PTR_DAT_04bbe028 + 8) + (long)(int)uVar2 * 2) = uVar9;
        }
      }
    }
    return;
  }
  cVar10 = *PTR_DAT_04bbde88;
  do {
    if (cVar10 == '\0') {
      cVar10 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      uVar8 = *param_1;
    }
    else {
      uVar2 = *(uint *)puVar6;
      if (-1 < (int)uVar2) {
        if ((undefined4 *)((ulong)uVar2 + (long)param_1) != (undefined4 *)0x0) {
          uVar7 = *(undefined4 *)((ulong)uVar2 + (long)param_1);
          goto LAB_01721a20;
        }
        goto LAB_01721a1c;
      }
      if (uVar2 != 0xffffffff) goto LAB_01721a1c;
    }
    puVar4 = (uint *)(ulong)uVar8;
    uVar7 = 0;
    if ((puVar4 == (uint *)0x0) || (uVar7 = 0, param_1 == puVar4)) goto LAB_01721a20;
    lVar3 = 0xc;
    if (*(char *)((long)param_1 + (10 - (long)puVar4)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)param_1 + (lVar3 - (long)puVar4);
    if (lVar3 == 0) goto LAB_01721a1c;
    uVar11 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar4));
    *(undefined4 *)puVar6 = 0xfffffffe;
    if (uVar11 == 0) goto LAB_01721a1c;
    piVar12 = (int *)(lVar3 + 4);
    while (piVar12[-1] != 0x58102055) {
      piVar12 = piVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_01721a1c;
    }
    iVar1 = 0;
    if (*piVar12 != -1) {
      iVar1 = *piVar12;
    }
    *(int *)puVar6 = iVar1;
    uVar8 = *param_1;
    if (uVar8 == 0) goto LAB_01721a1c;
  } while( true );
}

