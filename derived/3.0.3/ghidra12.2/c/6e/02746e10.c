
undefined1 FUN_02746e10(undefined1 *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  uint *puVar9;
  long lVar10;
  char cVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 local_14;
  
  lVar10 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_14 = FUN_006bd550(param_2[1],0);
  puVar9 = (uint *)FUN_020f3140(lVar10 + 0x220,&local_14);
  puVar7 = PTR_DAT_04bb6360;
  puVar6 = PTR_DAT_04bb6358;
  uVar8 = 0;
  if (puVar9 != (uint *)0x0) {
    uVar2 = *puVar9;
    if (uVar2 != 0) {
      cVar11 = *PTR_DAT_04bb6358;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar2 = *puVar9;
        }
        else {
          uVar3 = *(uint *)puVar7;
          if (-1 < (int)uVar3) {
            if (((ushort *)((ulong)uVar3 + (long)puVar9) != (ushort *)0x0) &&
               (uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar9), uVar4 < 0x100)) {
              param_1 = param_1 + uVar4;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar2;
        if ((puVar5 == (uint *)0x0) || (puVar9 == puVar5)) break;
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + (lVar10 - (long)puVar5);
        if (lVar10 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
        *(undefined4 *)puVar7 = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar13 = (int *)(lVar10 + 4);
        while (piVar13[-1] != 0x54706054) {
          piVar13 = piVar13 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_02746f68;
        }
        iVar1 = 0;
        if (*piVar13 != -1) {
          iVar1 = *piVar13;
        }
        *(int *)puVar7 = iVar1;
        uVar2 = *puVar9;
        if (uVar2 == 0) break;
      } while( true );
    }
LAB_02746f68:
    uVar8 = *param_1;
  }
  return uVar8;
}

