
undefined2 FUN_0274bbb0(undefined2 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  uint *puVar8;
  char cVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar8 = (uint *)FUN_0274eeb0(param_2);
  puVar6 = PTR_DAT_04bb6348;
  puVar5 = PTR_DAT_04bb6340;
  uVar7 = 0;
  if (puVar8 != (uint *)0x0) {
    if (*puVar8 != 0) {
      cVar9 = *PTR_DAT_04bb6340;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          uVar3 = *puVar8;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 8);
          if (-1 < (int)uVar3) {
            if (((ushort *)((ulong)uVar3 + (long)puVar8) != (ushort *)0x0) &&
               (uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar8), uVar4 < 0x800)) {
              param_1 = param_1 + uVar4;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
          uVar3 = *puVar8;
        }
        if ((uVar3 == 0) || (puVar10 = (uint *)(ulong)uVar3, puVar8 == puVar10)) break;
        lVar2 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar8 + (lVar2 - (long)puVar10);
        if (lVar2 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
        *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar12 = (int *)(lVar2 + 4);
        while (piVar12[-1] != 0x54706054) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_0274bcc8;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar6 + 8) = iVar1;
        if (*puVar8 == 0) break;
      } while( true );
    }
LAB_0274bcc8:
    uVar7 = *param_1;
  }
  return uVar7;
}

