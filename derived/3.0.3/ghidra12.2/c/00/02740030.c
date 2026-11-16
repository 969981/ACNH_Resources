
void FUN_02740030(ushort *param_1,long *param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  ushort *puVar8;
  char cVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 local_34;
  
  lVar7 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_34 = FUN_006bd550(param_2[1],0);
  puVar5 = (uint *)FUN_008a1920(lVar7 + 0x880,&local_34);
  puVar4 = PTR_DAT_04bb5810;
  puVar3 = PTR_DAT_04bb5808;
  if (puVar5 == (uint *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar8 = param_1;
    if (*puVar5 != 0) {
      cVar9 = *PTR_DAT_04bb5808;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          uVar6 = *puVar5;
        }
        else {
          uVar6 = *(uint *)(puVar4 + 0x14);
          if (-1 < (int)uVar6) {
            if (((ushort *)((ulong)uVar6 + (long)puVar5) != (ushort *)0x0) &&
               (uVar2 = *(ushort *)((ulong)uVar6 + (long)puVar5), uVar2 < 0x400)) {
              puVar8 = param_1 + uVar2;
            }
            break;
          }
          if (uVar6 != 0xffffffff) break;
          uVar6 = *puVar5;
        }
        if ((uVar6 == 0) || (puVar10 = (uint *)(ulong)uVar6, puVar5 == puVar10)) break;
        lVar7 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar5 + (lVar7 - (long)puVar10);
        if (lVar7 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar12 = (int *)(lVar7 + 4);
        while (piVar12[-1] != 0x54706054) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_0274017c;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar4 + 0x14) = iVar1;
        if (*puVar5 == 0) break;
      } while( true );
    }
LAB_0274017c:
    uVar6 = (uint)*puVar8;
  }
  FUN_0273f520(param_1,param_2,uVar6 + param_3);
  return;
}

