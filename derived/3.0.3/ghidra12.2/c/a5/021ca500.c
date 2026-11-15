
undefined1 FUN_021ca500(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  uint *puVar7;
  undefined1 *puVar8;
  long lVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 local_14;
  
  lVar9 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_14 = FUN_006bd550(param_2[1],0);
  puVar7 = (uint *)FUN_021cb9c0(lVar9 + 0x2400,&local_14);
  puVar5 = PTR_DAT_04bb6498;
  puVar4 = PTR_DAT_04bb6490;
  uVar6 = 0;
  if (puVar7 != (uint *)0x0) {
    puVar8 = (undefined1 *)(param_1 + 0x22c);
    if (*puVar7 != 0) {
      cVar10 = *PTR_DAT_04bb6490;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar2 = *puVar7;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar2) {
            if (((ushort *)((ulong)uVar2 + (long)puVar7) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar7), uVar3 < 0x80)) {
              puVar8 = puVar8 + uVar3;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
          uVar2 = *puVar7;
        }
        if ((uVar2 == 0) || (puVar11 = (uint *)(ulong)uVar2, puVar7 == puVar11)) break;
        lVar9 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar7 + (lVar9 - (long)puVar11);
        if (lVar9 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar13 = (int *)(lVar9 + 4);
        while (piVar13[-1] != 0x54706054) {
          piVar13 = piVar13 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_021ca658;
        }
        iVar1 = 0;
        if (*piVar13 != -1) {
          iVar1 = *piVar13;
        }
        *(int *)(puVar5 + 8) = iVar1;
        if (*puVar7 == 0) break;
      } while( true );
    }
LAB_021ca658:
    uVar6 = *puVar8;
  }
  return uVar6;
}

