
undefined8 FUN_021c98f0(long param_1,long *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  undefined1 uVar8;
  undefined *puVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 local_34;
  
  if ((param_1 == 0) || (uVar2 = *(uint *)(param_1 + 0x508), uVar2 == 0xffffffff)) {
    return 0;
  }
  puVar9 = &DAT_053fe348 + (ulong)uVar2 * 0xba0;
  lVar7 = *(long *)PTR_DAT_04bb2208;
  if (9 < uVar2) {
    puVar9 = &DAT_053fe348;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  local_34 = FUN_006bd550(param_2[1],0);
  puVar6 = (uint *)FUN_021cb820(lVar7 + 0x660,&local_34);
  puVar5 = PTR_DAT_04bb6380;
  puVar4 = PTR_DAT_04bb6378;
  if (puVar6 != (uint *)0x0) {
    puVar9 = puVar9 + 0x818;
    if (*puVar6 != 0) {
      cVar10 = *PTR_DAT_04bb6378;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar2 = *puVar6;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar2) {
            if ((ushort *)((ulong)uVar2 + (long)puVar6) != (ushort *)0x0) {
              uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar6);
              if (0xfe < param_3) {
                param_3 = 0xff;
              }
              uVar8 = (undefined1)param_3;
              if (uVar3 < 0x80) {
                puVar9 = puVar9 + uVar3;
              }
              goto LAB_021c9a8c;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
          uVar2 = *puVar6;
        }
        if ((uVar2 == 0) || (puVar11 = (uint *)(ulong)uVar2, puVar6 == puVar11)) break;
        lVar7 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar6 + (lVar7 - (long)puVar11);
        if (lVar7 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar13 = (int *)(lVar7 + 4);
        while (piVar13[-1] != 0x54706054) {
          piVar13 = piVar13 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_021c9a80;
        }
        iVar1 = 0;
        if (*piVar13 != -1) {
          iVar1 = *piVar13;
        }
        *(int *)(puVar5 + 8) = iVar1;
        if (*puVar6 == 0) break;
      } while( true );
    }
LAB_021c9a80:
    if (0xfe < param_3) {
      param_3 = 0xff;
    }
    uVar8 = (undefined1)param_3;
LAB_021c9a8c:
    *puVar9 = uVar8;
  }
  return 1;
}

