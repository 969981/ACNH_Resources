
undefined2 FUN_02749340(undefined2 *param_1,long *param_2)

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
  puVar7 = (uint *)FUN_0135e7e0(lVar8 + 0x440,&local_14);
  puVar5 = PTR_DAT_04bb6370;
  puVar4 = PTR_DAT_04bb6368;
  uVar6 = 0;
  if (puVar7 != (uint *)0x0) {
    if (*puVar7 != 0) {
      cVar9 = *PTR_DAT_04bb6368;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
          uVar2 = *puVar7;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar2) {
            if (((ushort *)((ulong)uVar2 + (long)puVar7) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar7), uVar3 < 0x100)) {
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
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar12 = (int *)(lVar8 + 4);
        while (piVar12[-1] != 0x54706054) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_02749498;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar5 + 8) = iVar1;
        if (*puVar7 == 0) break;
      } while( true );
    }
LAB_02749498:
    uVar6 = *param_1;
  }
  return uVar6;
}

