
void FUN_0274ccb0(ushort *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  uint uVar7;
  ushort *puVar8;
  char cVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar6 = (uint *)FUN_0274eeb0(param_2);
  puVar5 = PTR_DAT_04bb6348;
  puVar4 = PTR_DAT_04bb6340;
  if (puVar6 == (uint *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = param_1;
    if (*puVar6 != 0) {
      cVar9 = *PTR_DAT_04bb6340;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar7 = *puVar6;
        }
        else {
          uVar7 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar7) {
            if (((ushort *)((ulong)uVar7 + (long)puVar6) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar7 + (long)puVar6), uVar3 < 0x800)) {
              puVar8 = param_1 + uVar3;
            }
            break;
          }
          if (uVar7 != 0xffffffff) break;
          uVar7 = *puVar6;
        }
        if ((uVar7 == 0) || (puVar10 = (uint *)(ulong)uVar7, puVar6 == puVar10)) break;
        lVar2 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar6 + (lVar2 - (long)puVar10);
        if (lVar2 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar12 = (int *)(lVar2 + 4);
        while (piVar12[-1] != 0x54706054) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_0274cdbc;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar5 + 8) = iVar1;
        if (*puVar6 == 0) break;
      } while( true );
    }
LAB_0274cdbc:
    uVar7 = (uint)*puVar8;
  }
  FUN_0274c120(param_1,param_2,uVar7 + param_3,param_4);
  return;
}

