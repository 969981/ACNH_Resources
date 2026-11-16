
void FUN_0273d160(undefined4 param_1,long *param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  long lVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  ushort *puVar14;
  char cVar15;
  uint *puVar16;
  ulong uVar17;
  int *piVar18;
  ulong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_58 = CONCAT44(local_58._4_4_,param_1);
  lVar12 = *(long *)PTR_DAT_04bb46b0;
  if (lVar12 == 0) {
    return;
  }
  puVar13 = *(undefined8 **)(lVar12 + 0x10);
  if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
    lVar12 = (**(code **)(*(long *)*puVar13 + 0x38))();
    if (lVar12 == 0) {
      return;
    }
    lVar12 = lVar12 + 0x70;
  }
  else {
    if (puVar13 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar13[0x26] == (long *)0x0) {
      return;
    }
    lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
    if (lVar12 == 0) {
      return;
    }
  }
  if (7 < (uint)local_58) {
    return;
  }
  lVar3 = lVar12 + 0x119228 + (local_58 & 0xffffffff) * 0xfa08;
  if (7 < (uint)local_58) {
    lVar3 = lVar12 + 0x119228;
  }
  lVar12 = *(long *)(lVar3 + 0x28);
  if (lVar12 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      lVar12 = *(long *)(lVar3 + 0x28);
      uVar8 = uVar8 & 0xffffffff;
      if (lVar12 == 0) goto LAB_0273d264;
    }
    plVar9 = *(long **)(lVar12 + 0x20);
    if (plVar9 != (long *)0x0) {
      local_58 = *(ulong *)(lVar3 + 8);
      uStack_50 = *(undefined8 *)(lVar3 + 0x10);
      local_48 = 0x28a28;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
    }
  }
LAB_0273d264:
  puVar1 = (ushort *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x20);
  lVar12 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar7 = FUN_006bd550(param_2[1],0);
  local_58 = CONCAT44(local_58._4_4_,uVar7);
  puVar10 = (uint *)FUN_0273d580(lVar12 + 0x10e0,&local_58);
  puVar6 = PTR_DAT_04bb63d0;
  puVar5 = PTR_DAT_04bb63c8;
  if (puVar10 == (uint *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar14 = puVar1;
    if (*puVar10 != 0) {
      cVar15 = *PTR_DAT_04bb63c8;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x18) = 0xffffffff;
          uVar11 = *puVar10;
        }
        else {
          uVar11 = *(uint *)(puVar6 + 8);
          if (-1 < (int)uVar11) {
            if (((ushort *)((ulong)uVar11 + (long)puVar10) != (ushort *)0x0) &&
               (uVar4 = *(ushort *)((ulong)uVar11 + (long)puVar10), uVar4 < 0x80)) {
              puVar14 = puVar1 + uVar4;
            }
            break;
          }
          if (uVar11 != 0xffffffff) break;
          uVar11 = *puVar10;
        }
        if ((uVar11 == 0) || (puVar16 = (uint *)(ulong)uVar11, puVar10 == puVar16)) break;
        lVar12 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar16)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar10 + (lVar12 - (long)puVar16);
        if (lVar12 == 0) break;
        uVar17 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar16));
        *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar18 = (int *)(lVar12 + 4);
        while (piVar18[-1] != 0x54706054) {
          piVar18 = piVar18 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_0273d398;
        }
        iVar2 = 0;
        if (*piVar18 != -1) {
          iVar2 = *piVar18;
        }
        *(int *)(puVar6 + 8) = iVar2;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_0273d398:
    uVar11 = (uint)*puVar14;
  }
  FUN_0273c700(puVar1,param_2,uVar11 + param_3);
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 0x18), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)();
  }
  return;
}

