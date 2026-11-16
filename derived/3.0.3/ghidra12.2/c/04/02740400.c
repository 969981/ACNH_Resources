
void FUN_02740400(long *param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined2 *puVar14;
  char cVar15;
  uint *puVar16;
  ulong uVar17;
  int *piVar18;
  ulong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 == 0) {
LAB_02740474:
    lVar11 = 0;
  }
  else {
    puVar12 = *(undefined8 **)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar12 + 0x38))();
      lVar11 = 0;
      if (lVar7 != 0) {
        lVar11 = lVar7 + 0x70;
      }
    }
    else {
      if (puVar12 == (undefined8 *)0x0) goto LAB_02740474;
      lVar11 = 0;
      if ((long *)puVar12[0x26] != (long *)0x0) {
        lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
      }
    }
  }
  lVar7 = *(long *)(lVar11 + 0xe7610);
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
      if (*(long *)(lVar11 + 0xe7610) == 0) goto LAB_027404ec;
      plVar9 = *(long **)(*(long *)(lVar11 + 0xe7610) + 0x20);
    }
    if (plVar9 != (long *)0x0) {
      local_60 = *(ulong *)(lVar11 + 0xe75f0);
      local_58 = *(undefined8 *)(lVar11 + 0xe75f8);
      uStack_50 = 0x800;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_60);
    }
  }
LAB_027404ec:
  uVar17 = *(ulong *)(lVar11 + 0xe75f0);
  lVar7 = *(long *)(lVar11 + 0xe75f8);
  lVar13 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_1 + 0x18))(param_1);
  uVar6 = FUN_006bd550(param_1[1],0);
  local_60 = CONCAT44(local_60._4_4_,uVar6);
  puVar10 = (uint *)FUN_008a1920(lVar13 + 0x880,&local_60);
  puVar5 = PTR_DAT_04bb5810;
  puVar4 = PTR_DAT_04bb5808;
  if (puVar10 != (uint *)0x0) {
    puVar14 = (undefined2 *)(lVar7 + uVar17);
    if (*puVar10 != 0) {
      cVar15 = *PTR_DAT_04bb5808;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar2 = *puVar10;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 0x14);
          if (-1 < (int)uVar2) {
            if (((ushort *)((ulong)uVar2 + (long)puVar10) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar10), uVar3 < 0x400)) {
              puVar14 = puVar14 + uVar3;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
          uVar2 = *puVar10;
        }
        if ((uVar2 == 0) || (puVar16 = (uint *)(ulong)uVar2, puVar10 == puVar16)) break;
        lVar7 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar16)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar10 + (lVar7 - (long)puVar16);
        if (lVar7 == 0) break;
        uVar17 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar16));
        *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar18 = (int *)(lVar7 + 4);
        while (piVar18[-1] != 0x54706054) {
          piVar18 = piVar18 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_02740638;
        }
        iVar1 = 0;
        if (*piVar18 != -1) {
          iVar1 = *piVar18;
        }
        *(int *)(puVar5 + 0x14) = iVar1;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_02740638:
    local_60 = (ulong)CONCAT24(*puVar14,(undefined4)local_60);
    (**(code **)(*param_1 + 0x18))(param_1);
    uVar6 = FUN_006bd550(param_1[1],0);
    local_60 = CONCAT44(local_60._4_4_,uVar6);
    local_48 = 0;
    local_58 = CONCAT62(local_58._2_6_,4);
    local_42 = 0;
    local_44 = 0xff00;
    if (-1 < *(int *)(PTR_DAT_04bb6328 + 8)) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(PTR_DAT_04bb6328 + 8),&local_48,
                   &local_60,0xc,0);
    }
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar11 + 0xe7610) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xe7610) + 0x18), puVar12 != (undefined8 *)0x0))
  {
    (**(code **)*puVar12)();
  }
  return;
}

