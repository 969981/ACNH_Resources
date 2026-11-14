
void FUN_01721af0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined2 uVar8;
  char cVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar5 = PTR_DAT_04bbde90;
  puVar4 = PTR_DAT_04bbde88;
  if (*param_1 == 0) {
LAB_01721bec:
    uVar6 = 0;
LAB_01721bf0:
    if (((*param_1 == 0) || (lVar3 = (long)param_1 - (ulong)*param_1, lVar3 == 0)) ||
       (*(char *)(lVar3 + 0xb) == '\0')) {
      uVar7 = FUN_01723280(uVar6,0);
      if (6 < uVar7) {
        uVar7 = 0;
      }
      uVar8 = (undefined2)uVar7;
    }
    else {
      uVar7 = FUN_017223e0(uVar6,0);
      if (6 < uVar7) {
        uVar7 = 0;
      }
      uVar8 = (undefined2)uVar7;
    }
    puVar10 = (uint *)((long)param_1 - (ulong)*param_1);
    if (((*param_1 != 0) && (puVar10 != (uint *)0x0)) &&
       ((*puVar10 != 0 && ((uVar7 = puVar10[1], uVar7 != 0 && ((ulong)(ushort)puVar10[2] != 0))))))
    {
      lVar3 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar10 + lVar3 + (ulong)(ushort)puVar10[2] * 8;
      if (lVar3 != 0) {
        uVar2 = 0;
        if ((ulong)uVar7 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar3) / (ulong)uVar7);
        }
        if (*puVar10 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (uVar2 < *(uint *)PTR_DAT_04bbdff8) {
          *(undefined2 *)(*(long *)(PTR_DAT_04bbdff8 + 8) + (long)(int)uVar2 * 2) = uVar8;
        }
      }
    }
    return;
  }
  cVar9 = *PTR_DAT_04bbde88;
  do {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
    }
    else {
      uVar7 = *(uint *)(puVar5 + 4);
      if (-1 < (int)uVar7) {
        if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
          uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
          goto LAB_01721bf0;
        }
        goto LAB_01721bec;
      }
      if (uVar7 != 0xffffffff) goto LAB_01721bec;
    }
    puVar10 = (uint *)(ulong)*param_1;
    uVar6 = 0;
    if ((*param_1 == 0) || (param_1 == puVar10)) goto LAB_01721bf0;
    lVar3 = 0xc;
    if (*(char *)((long)param_1 + (10 - (long)puVar10)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)param_1 + (lVar3 - (long)puVar10);
    if (lVar3 == 0) goto LAB_01721bec;
    uVar11 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar10));
    *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_01721bec;
    piVar12 = (int *)(lVar3 + 4);
    while (piVar12[-1] != 0xb69ec1a) {
      piVar12 = piVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_01721bec;
    }
    iVar1 = 0;
    if (*piVar12 != -1) {
      iVar1 = *piVar12;
    }
    *(int *)(puVar5 + 4) = iVar1;
    if (*param_1 == 0) goto LAB_01721bec;
  } while( true );
}

