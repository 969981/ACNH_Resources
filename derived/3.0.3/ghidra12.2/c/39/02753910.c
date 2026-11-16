
void FUN_02753910(byte *param_1,long *param_2,int param_3)

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
  char cVar14;
  ulong uVar15;
  ushort *puVar16;
  uint *puVar17;
  int *piVar18;
  byte local_5c [4];
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_5c[0] = *param_1;
  if (7 < local_5c[0]) {
    return;
  }
  lVar7 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_5c,1);
  if (lVar7 == 0) {
    return;
  }
  lVar13 = lVar7 + 0x194b0;
  if (*(long *)(lVar7 + 0x194b8) == 0) {
    lVar13 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  lVar7 = *(long *)(lVar13 + 0x2ad10);
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
      plVar9 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar8 = uVar8 & 0xffffffff;
      if (*(long *)(lVar13 + 0x2ad10) == 0) goto LAB_027539f0;
      plVar9 = *(long **)(*(long *)(lVar13 + 0x2ad10) + 0x20);
    }
    if (plVar9 != (long *)0x0) {
      local_58 = *(long *)(lVar13 + 0x2acf0);
      local_50 = *(undefined8 *)(lVar13 + 0x2acf8);
      uStack_48 = 0x200;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
    }
  }
LAB_027539f0:
  puVar1 = (ushort *)(*(long *)(lVar13 + 0x2acf8) + *(long *)(lVar13 + 0x2acf0));
  lVar7 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar6 = FUN_006bd550(param_2[1],0);
  local_58 = CONCAT44(local_58._4_4_,uVar6);
  puVar10 = (uint *)FUN_02753d00(lVar7 + 0x1520,&local_58);
  puVar5 = PTR_DAT_04bb63f8;
  puVar4 = PTR_DAT_04bb63f0;
  if (puVar10 == (uint *)0x0) {
    uVar12 = 0;
  }
  else {
    puVar16 = puVar1;
    if (*puVar10 != 0) {
      cVar14 = *PTR_DAT_04bb63f0;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar12 = *puVar10;
        }
        else {
          uVar12 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar12) {
            if (((ushort *)((ulong)uVar12 + (long)puVar10) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar12 + (long)puVar10), uVar3 < 0x100)) {
              puVar16 = puVar1 + uVar3;
            }
            break;
          }
          if (uVar12 != 0xffffffff) break;
          uVar12 = *puVar10;
        }
        if ((uVar12 == 0) || (puVar17 = (uint *)(ulong)uVar12, puVar10 == puVar17)) break;
        lVar7 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar17)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar10 + (lVar7 - (long)puVar17);
        if (lVar7 == 0) break;
        uVar15 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar17));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar15 == 0) break;
        piVar18 = (int *)(lVar7 + 4);
        while (piVar18[-1] != 0x54706054) {
          piVar18 = piVar18 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_02753b48;
        }
        iVar2 = 0;
        if (*piVar18 != -1) {
          iVar2 = *piVar18;
        }
        *(int *)(puVar5 + 8) = iVar2;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_02753b48:
    uVar12 = (uint)*puVar16;
  }
  FUN_027534e0(puVar1,param_2,uVar12 + param_3);
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x2ad10) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar13 + 0x2ad10) + 0x18), puVar11 != (undefined8 *)0x0))
  {
    (**(code **)*puVar11)();
  }
  return;
}

