
void FUN_0273cb40(undefined8 param_1,long *param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  uint *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  ushort *puVar14;
  char cVar15;
  uint *puVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar7 = FUN_0266c580();
  if (lVar7 == 0) {
    return;
  }
  lVar13 = *(long *)(lVar7 + 0x28);
  if (lVar13 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
      plVar9 = *(long **)(lVar13 + 0x20);
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      uVar8 = uVar8 & 0xffffffff;
      if (*(long *)(lVar7 + 0x28) == 0) goto LAB_0273cbd8;
      plVar9 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20);
    }
    if (plVar9 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar7 + 8);
      uStack_50 = *(undefined8 *)(lVar7 + 0x10);
      local_48 = 0x28a28;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
    }
  }
LAB_0273cbd8:
  puVar1 = (ushort *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x20);
  lVar13 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar6 = FUN_006bd550(param_2[1],0);
  local_58 = CONCAT44(local_58._4_4_,uVar6);
  puVar10 = (uint *)FUN_0273d580(lVar13 + 0x10e0,&local_58);
  puVar5 = PTR_DAT_04bb63d0;
  puVar4 = PTR_DAT_04bb63c8;
  if (puVar10 == (uint *)0x0) {
    uVar12 = 0;
  }
  else {
    puVar14 = puVar1;
    if (*puVar10 != 0) {
      cVar15 = *PTR_DAT_04bb63c8;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
          uVar12 = *puVar10;
        }
        else {
          uVar12 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar12) {
            if (((ushort *)((ulong)uVar12 + (long)puVar10) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar12 + (long)puVar10), uVar3 < 0x80)) {
              puVar14 = puVar1 + uVar3;
            }
            break;
          }
          if (uVar12 != 0xffffffff) break;
          uVar12 = *puVar10;
        }
        if ((uVar12 == 0) || (puVar16 = (uint *)(ulong)uVar12, puVar10 == puVar16)) break;
        lVar13 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar16)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar10 + (lVar13 - (long)puVar16);
        if (lVar13 == 0) break;
        uVar17 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar16));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar18 = (int *)(lVar13 + 4);
        while (piVar18[-1] != 0x54706054) {
          piVar18 = piVar18 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_0273cd08;
        }
        iVar2 = 0;
        if (*piVar18 != -1) {
          iVar2 = *piVar18;
        }
        *(int *)(puVar5 + 8) = iVar2;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_0273cd08:
    uVar12 = (uint)*puVar14;
  }
  FUN_0273c700(puVar1,param_2,uVar12 + param_3);
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 0x18), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  return;
}

