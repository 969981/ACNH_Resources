
undefined2 FUN_027985e0(undefined2 *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  uint *puVar7;
  long lVar8;
  char cVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 local_14;
  
  lVar8 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_14 = FUN_006bd550(param_2[1],0);
  puVar7 = (uint *)FUN_00ad5fc0(lVar8 + 0x1960,&local_14);
  puVar5 = PTR_DAT_04bb6428;
  puVar4 = PTR_DAT_04bb6420;
  uVar6 = 0;
  if (puVar7 != (uint *)0x0) {
    if (*puVar7 != 0) {
      cVar9 = *PTR_DAT_04bb6420;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
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
          uVar2 = *puVar7;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 0x20);
          if (-1 < (int)uVar2) {
            if (((ushort *)((ulong)uVar2 + (long)puVar7) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar7), uVar3 < 0x200)) {
              param_1 = param_1 + uVar3;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
          uVar2 = *puVar7;
        }
        if ((uVar2 == 0) || (puVar10 = (uint *)(ulong)uVar2, puVar7 == puVar10)) break;
        lVar8 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar7 + (lVar8 - (long)puVar10);
        if (lVar8 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
        *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar12 = (int *)(lVar8 + 4);
        while (piVar12[-1] != 0x54706054) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_02798748;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar5 + 0x20) = iVar1;
        if (*puVar7 == 0) break;
      } while( true );
    }
LAB_02798748:
    uVar6 = *param_1;
  }
  return uVar6;
}

