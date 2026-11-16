
void FUN_02749eb0(ushort *param_1,undefined4 param_2,long *param_3,int param_4,uint param_5)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  uint uVar6;
  ushort *puVar7;
  long lVar8;
  char cVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 local_44;
  
  lVar8 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_3 + 0x18))(param_3);
  local_44 = FUN_006bd550(param_3[1],0);
  puVar5 = (uint *)FUN_0135e7e0(lVar8 + 0x440,&local_44);
  puVar4 = PTR_DAT_04bb6370;
  puVar3 = PTR_DAT_04bb6368;
  if (puVar5 == (uint *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar7 = param_1;
    if (*puVar5 != 0) {
      cVar9 = *PTR_DAT_04bb6368;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar4 + 0x18) = 0xffffffff;
          uVar6 = *puVar5;
        }
        else {
          uVar6 = *(uint *)(puVar4 + 8);
          if (-1 < (int)uVar6) {
            if (((ushort *)((ulong)uVar6 + (long)puVar5) != (ushort *)0x0) &&
               (uVar2 = *(ushort *)((ulong)uVar6 + (long)puVar5), uVar2 < 0x100)) {
              puVar7 = param_1 + uVar2;
            }
            break;
          }
          if (uVar6 != 0xffffffff) break;
          uVar6 = *puVar5;
        }
        if ((uVar6 == 0) || (puVar10 = (uint *)(ulong)uVar6, puVar5 == puVar10)) break;
        lVar8 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar5 + (lVar8 - (long)puVar10);
        if (lVar8 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar12 = (int *)(lVar8 + 4);
        while (piVar12[-1] != 0x54706054) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_02749ffc;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar4 + 8) = iVar1;
        if (*puVar5 == 0) break;
      } while( true );
    }
LAB_02749ffc:
    uVar6 = (uint)*puVar7;
  }
  FUN_02749650(param_1,param_2,param_3,uVar6 + param_4,param_5 & 1);
  return;
}

