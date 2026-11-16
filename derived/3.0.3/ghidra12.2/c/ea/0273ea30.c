
undefined2 FUN_0273ea30(long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined2 *puVar13;
  char cVar14;
  uint *puVar15;
  ulong uVar16;
  int *piVar17;
  undefined2 uVar18;
  undefined4 local_44;
  
  lVar10 = *(long *)PTR_DAT_04bb46b0;
  if (lVar10 != 0) {
    puVar11 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar11 + 0x38))();
      lVar10 = 0;
      if (lVar8 != 0) {
        lVar10 = lVar8 + 0x70;
      }
      goto LAB_0273eaa8;
    }
    if (puVar11 != (undefined8 *)0x0) {
      lVar10 = 0;
      if ((long *)puVar11[0x26] != (long *)0x0) {
        lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      }
      goto LAB_0273eaa8;
    }
  }
  lVar10 = 0;
LAB_0273eaa8:
  if ((*(long **)(lVar10 + 0xe7610) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar10 + 0xe7610), puVar11 == (undefined8 *)0x0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = (**(code **)*puVar11)();
    uVar7 = uVar7 ^ 1;
  }
  lVar8 = *(long *)(lVar10 + 0xe75f0);
  lVar2 = *(long *)(lVar10 + 0xe75f8);
  lVar12 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_1 + 0x18))(param_1);
  local_44 = FUN_006bd550(param_1[1],0);
  puVar9 = (uint *)FUN_008a1920(lVar12 + 0x880,&local_44);
  puVar6 = PTR_DAT_04bb5810;
  puVar5 = PTR_DAT_04bb5808;
  if (puVar9 == (uint *)0x0) {
    uVar18 = 0;
  }
  else {
    puVar13 = (undefined2 *)(lVar2 + lVar8);
    if (*puVar9 != 0) {
      cVar14 = *PTR_DAT_04bb5808;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          uVar3 = *puVar9;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x14);
          if (-1 < (int)uVar3) {
            if (((ushort *)((ulong)uVar3 + (long)puVar9) != (ushort *)0x0) &&
               (uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar9), uVar4 < 0x400)) {
              puVar13 = puVar13 + uVar4;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
          uVar3 = *puVar9;
        }
        if ((uVar3 == 0) || (puVar15 = (uint *)(ulong)uVar3, puVar9 == puVar15)) break;
        lVar8 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar15)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar9 + (lVar8 - (long)puVar15);
        if (lVar8 == 0) break;
        uVar16 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar15));
        *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar17 = (int *)(lVar8 + 4);
        while (piVar17[-1] != 0x54706054) {
          piVar17 = piVar17 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_0273ec24;
        }
        iVar1 = 0;
        if (*piVar17 != -1) {
          iVar1 = *piVar17;
        }
        *(int *)(puVar6 + 0x14) = iVar1;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_0273ec24:
    uVar18 = *puVar13;
  }
  if ((((uVar7 & 1) == 0) && (*(long *)(lVar10 + 0xe7610) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0xe7610) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  return uVar18;
}

