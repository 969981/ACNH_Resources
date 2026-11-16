
void FUN_0273fd90(long *param_1,int param_2)

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
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  char cVar14;
  ulong uVar15;
  ushort *puVar16;
  uint *puVar17;
  int *piVar18;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar12 = *(long *)PTR_DAT_04bb46b0;
  if (lVar12 == 0) {
LAB_0273fe08:
    lVar12 = 0;
  }
  else {
    puVar13 = *(undefined8 **)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar13 + 0x38))();
      lVar12 = 0;
      if (lVar7 != 0) {
        lVar12 = lVar7 + 0x70;
      }
    }
    else {
      if (puVar13 == (undefined8 *)0x0) goto LAB_0273fe08;
      lVar12 = 0;
      if ((long *)puVar13[0x26] != (long *)0x0) {
        lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
      }
    }
  }
  lVar7 = *(long *)(lVar12 + 0xe7610);
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
      if (*(long *)(lVar12 + 0xe7610) == 0) goto LAB_0273fe80;
      plVar9 = *(long **)(*(long *)(lVar12 + 0xe7610) + 0x20);
    }
    if (plVar9 != (long *)0x0) {
      local_58 = *(long *)(lVar12 + 0xe75f0);
      local_50 = *(undefined8 *)(lVar12 + 0xe75f8);
      uStack_48 = 0x800;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
    }
  }
LAB_0273fe80:
  puVar1 = (ushort *)(*(long *)(lVar12 + 0xe75f8) + *(long *)(lVar12 + 0xe75f0));
  lVar7 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_1 + 0x18))(param_1);
  uVar6 = FUN_006bd550(param_1[1],0);
  local_58 = CONCAT44(local_58._4_4_,uVar6);
  puVar10 = (uint *)FUN_008a1920(lVar7 + 0x880,&local_58);
  puVar5 = PTR_DAT_04bb5810;
  puVar4 = PTR_DAT_04bb5808;
  if (puVar10 == (uint *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar16 = puVar1;
    if (*puVar10 != 0) {
      cVar14 = *PTR_DAT_04bb5808;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar11 = *puVar10;
        }
        else {
          uVar11 = *(uint *)(puVar5 + 0x14);
          if (-1 < (int)uVar11) {
            if (((ushort *)((ulong)uVar11 + (long)puVar10) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar11 + (long)puVar10), uVar3 < 0x400)) {
              puVar16 = puVar1 + uVar3;
            }
            break;
          }
          if (uVar11 != 0xffffffff) break;
          uVar11 = *puVar10;
        }
        if ((uVar11 == 0) || (puVar17 = (uint *)(ulong)uVar11, puVar10 == puVar17)) break;
        lVar7 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar17)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar10 + (lVar7 - (long)puVar17);
        if (lVar7 == 0) break;
        uVar15 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar17));
        *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
        if (uVar15 == 0) break;
        piVar18 = (int *)(lVar7 + 4);
        while (piVar18[-1] != 0x54706054) {
          piVar18 = piVar18 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_0273ffdc;
        }
        iVar2 = 0;
        if (*piVar18 != -1) {
          iVar2 = *piVar18;
        }
        *(int *)(puVar5 + 0x14) = iVar2;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_0273ffdc:
    uVar11 = (uint)*puVar16;
  }
  FUN_0273f520(puVar1,param_1,uVar11 + param_2);
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar12 + 0xe7610) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0xe7610) + 0x18), puVar13 != (undefined8 *)0x0))
  {
    (**(code **)*puVar13)();
  }
  return;
}

