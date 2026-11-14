
uint FUN_01b8bd90(long param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  char cVar9;
  ulong uVar10;
  int *piVar11;
  undefined *local_20;
  undefined2 local_18;
  
  puVar6 = PTR_DAT_04bc06e8;
  puVar5 = PTR_DAT_04bc06e0;
  puVar8 = *(undefined8 **)(param_1 + 8);
  uVar7 = *param_2;
  if (uVar7 == 0) {
LAB_01b8be9c:
    local_18 = 0;
LAB_01b8bea0:
    local_20 = PTR_DAT_04bc06f0 + 0x10;
    uVar7 = (**(code **)*puVar8)(puVar8,&local_20);
    return uVar7 & 1;
  }
  cVar9 = *PTR_DAT_04bc06e0;
  do {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
      uVar7 = *param_2;
    }
    else {
      uVar3 = *(uint *)(puVar6 + 0x40);
      if (-1 < (int)uVar3) {
        if ((undefined2 *)((ulong)uVar3 + (long)param_2) != (undefined2 *)0x0) {
          local_18 = *(undefined2 *)((ulong)uVar3 + (long)param_2);
          goto LAB_01b8bea0;
        }
        goto LAB_01b8be9c;
      }
      if (uVar3 != 0xffffffff) goto LAB_01b8be9c;
    }
    puVar4 = (uint *)(ulong)uVar7;
    local_18 = 0;
    if ((puVar4 == (uint *)0x0) || (local_18 = 0, param_2 == puVar4)) goto LAB_01b8bea0;
    lVar2 = 0xc;
    if (*(char *)((long)param_2 + (10 - (long)puVar4)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)param_2 + (lVar2 - (long)puVar4);
    local_18 = 0;
    if (lVar2 == 0) goto LAB_01b8bea0;
    uVar10 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar4));
    *(undefined4 *)(puVar6 + 0x40) = 0xfffffffe;
    if (uVar10 == 0) goto LAB_01b8be9c;
    piVar11 = (int *)(lVar2 + 4);
    while (piVar11[-1] != 0x54706054) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_01b8be9c;
    }
    iVar1 = 0;
    if (*piVar11 != -1) {
      iVar1 = *piVar11;
    }
    *(int *)(puVar6 + 0x40) = iVar1;
    uVar7 = *param_2;
    if (uVar7 == 0) goto LAB_01b8be9c;
  } while( true );
}

