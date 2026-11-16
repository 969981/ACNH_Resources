
undefined2 FUN_027490f0(uint param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
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
  
  if ((param_1 < 10) && (lVar10 = *(long *)PTR_DAT_04bb46b0, lVar10 != 0)) {
    puVar11 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar10 == 0) goto LAB_027491a4;
      lVar10 = lVar10 + 0x70;
    }
    else if (((puVar11 == (undefined8 *)0x0) || ((long *)puVar11[0x26] == (long *)0x0)) ||
            (lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar10 == 0))
    goto LAB_027491a4;
    lVar10 = lVar10 + (ulong)param_1 * 0x10798;
    if ((*(long **)(lVar10 + 0xfa30) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar10 + 0xfa30), puVar11 == (undefined8 *)0x0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = (**(code **)*puVar11)();
      uVar8 = uVar8 ^ 1;
    }
    lVar2 = *(long *)(lVar10 + 0xfa10);
    lVar3 = *(long *)(lVar10 + 0xfa18);
    lVar12 = *(long *)PTR_DAT_04bb2208;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_44 = FUN_006bd550(param_2[1],0);
    puVar9 = (uint *)FUN_0135e7e0(lVar12 + 0x440,&local_44);
    puVar7 = PTR_DAT_04bb6370;
    puVar6 = PTR_DAT_04bb6368;
    if (puVar9 == (uint *)0x0) {
      uVar18 = 0;
    }
    else {
      puVar13 = (undefined2 *)(lVar3 + lVar2);
      if (*puVar9 != 0) {
        cVar14 = *PTR_DAT_04bb6368;
        do {
          if (cVar14 == '\0') {
            cVar14 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar6 = 1;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar7 + 0x18) = 0xffffffff;
            uVar4 = *puVar9;
          }
          else {
            uVar4 = *(uint *)(puVar7 + 8);
            if (-1 < (int)uVar4) {
              if (((ushort *)((ulong)uVar4 + (long)puVar9) != (ushort *)0x0) &&
                 (uVar5 = *(ushort *)((ulong)uVar4 + (long)puVar9), uVar5 < 0x100)) {
                puVar13 = puVar13 + uVar5;
              }
              break;
            }
            if (uVar4 != 0xffffffff) break;
            uVar4 = *puVar9;
          }
          if ((uVar4 == 0) || (puVar15 = (uint *)(ulong)uVar4, puVar9 == puVar15)) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar15)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar9 + (lVar2 - (long)puVar15);
          if (lVar2 == 0) break;
          uVar16 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar15));
          *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
          if (uVar16 == 0) break;
          piVar17 = (int *)(lVar2 + 4);
          while (piVar17[-1] != 0x54706054) {
            piVar17 = piVar17 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_02749310;
          }
          iVar1 = 0;
          if (*piVar17 != -1) {
            iVar1 = *piVar17;
          }
          *(int *)(puVar7 + 8) = iVar1;
          if (*puVar9 == 0) break;
        } while( true );
      }
LAB_02749310:
      uVar18 = *puVar13;
    }
    if ((((uVar8 & 1) == 0) && (*(long *)(lVar10 + 0xfa30) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0xfa30) + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
  }
  else {
LAB_027491a4:
    uVar18 = 0;
  }
  return uVar18;
}

