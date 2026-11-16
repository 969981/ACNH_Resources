
void FUN_02749c00(uint param_1,long *param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  char cVar14;
  ulong uVar15;
  ushort *puVar16;
  uint *puVar17;
  int *piVar18;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (9 < param_1) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 == 0) {
    return;
  }
  puVar12 = *(undefined8 **)(lVar11 + 0x10);
  if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
    lVar11 = (**(code **)(*(long *)*puVar12 + 0x38))();
    if (lVar11 == 0) {
      return;
    }
    lVar11 = lVar11 + 0x70;
  }
  else {
    if (puVar12 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar12[0x26] == (long *)0x0) {
      return;
    }
    lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
    if (lVar11 == 0) {
      return;
    }
  }
  lVar11 = lVar11 + (ulong)param_1 * 0x10798;
  lVar13 = *(long *)(lVar11 + 0xfa30);
  if (lVar13 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      lVar13 = *(long *)(lVar11 + 0xfa30);
      uVar7 = uVar7 & 0xffffffff;
      if (lVar13 == 0) goto LAB_02749cfc;
    }
    plVar8 = *(long **)(lVar13 + 0x20);
    if (plVar8 != (long *)0x0) {
      local_68 = *(undefined8 *)(lVar11 + 0xfa10);
      local_60 = *(undefined8 *)(lVar11 + 0xfa18);
      uStack_58 = 0x200;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_68);
    }
  }
LAB_02749cfc:
  puVar1 = (ushort *)(*(long *)(lVar11 + 0xfa18) + *(long *)(lVar11 + 0xfa10));
  lVar13 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar6 = FUN_006bd550(param_2[1],0);
  local_68 = CONCAT44(local_68._4_4_,uVar6);
  puVar9 = (uint *)FUN_0135e7e0(lVar13 + 0x440,&local_68);
  puVar5 = PTR_DAT_04bb6370;
  puVar4 = PTR_DAT_04bb6368;
  if (puVar9 == (uint *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar16 = puVar1;
    if (*puVar9 != 0) {
      cVar14 = *PTR_DAT_04bb6368;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
          uVar10 = *puVar9;
        }
        else {
          uVar10 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar10) {
            if (((ushort *)((ulong)uVar10 + (long)puVar9) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar10 + (long)puVar9), uVar3 < 0x100)) {
              puVar16 = puVar1 + uVar3;
            }
            break;
          }
          if (uVar10 != 0xffffffff) break;
          uVar10 = *puVar9;
        }
        if ((uVar10 == 0) || (puVar17 = (uint *)(ulong)uVar10, puVar9 == puVar17)) break;
        lVar13 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar17)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar9 + (lVar13 - (long)puVar17);
        if (lVar13 == 0) break;
        uVar15 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar17));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar15 == 0) break;
        piVar18 = (int *)(lVar13 + 4);
        while (piVar18[-1] != 0x54706054) {
          piVar18 = piVar18 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_02749e58;
        }
        iVar2 = 0;
        if (*piVar18 != -1) {
          iVar2 = *piVar18;
        }
        *(int *)(puVar5 + 8) = iVar2;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_02749e58:
    uVar10 = (uint)*puVar16;
  }
  FUN_02749650(puVar1,param_1,param_2,uVar10 + param_3,1);
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar11 + 0xfa30) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xfa30) + 0x18), puVar12 != (undefined8 *)0x0))
  {
    (**(code **)*puVar12)();
  }
  return;
}

