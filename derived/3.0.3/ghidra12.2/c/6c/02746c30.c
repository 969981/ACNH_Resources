
undefined1 FUN_02746c30(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  uint *puVar13;
  long lVar14;
  undefined1 *puVar15;
  char cVar16;
  ulong uVar17;
  int *piVar18;
  undefined1 uVar19;
  undefined4 local_44;
  
  lVar11 = FUN_0265cf70();
  if (lVar11 == 0) {
    uVar19 = 0;
  }
  else {
    if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar12 == (undefined8 *)0x0)) {
      uVar10 = 1;
    }
    else {
      uVar10 = (**(code **)*puVar12)();
      uVar10 = uVar10 ^ 1;
    }
    lVar2 = *(long *)(lVar11 + 8);
    lVar3 = *(long *)(lVar11 + 0x10);
    lVar14 = *(long *)PTR_DAT_04bb2208;
    (**(code **)(*param_3 + 0x18))(param_3);
    local_44 = FUN_006bd550(param_3[1],0);
    puVar13 = (uint *)FUN_020f3140(lVar14 + 0x220,&local_44);
    puVar9 = PTR_DAT_04bb6360;
    puVar8 = PTR_DAT_04bb6358;
    if (puVar13 == (uint *)0x0) {
      uVar19 = 0;
    }
    else {
      uVar4 = *puVar13;
      puVar15 = (undefined1 *)(lVar3 + lVar2);
      if (uVar4 != 0) {
        cVar16 = *PTR_DAT_04bb6358;
        do {
          if (cVar16 == '\0') {
            cVar16 = '\x01';
            *(undefined8 *)puVar9 = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
            *puVar8 = 1;
            *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
            uVar4 = *puVar13;
          }
          else {
            uVar5 = *(uint *)puVar9;
            if (-1 < (int)uVar5) {
              if (((ushort *)((ulong)uVar5 + (long)puVar13) != (ushort *)0x0) &&
                 (uVar6 = *(ushort *)((ulong)uVar5 + (long)puVar13), uVar6 < 0x100)) {
                puVar15 = puVar15 + uVar6;
              }
              break;
            }
            if (uVar5 != 0xffffffff) break;
          }
          puVar7 = (uint *)(ulong)uVar4;
          if ((puVar7 == (uint *)0x0) || (puVar13 == puVar7)) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar13 + (10 - (long)puVar7)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar13 + (lVar2 - (long)puVar7);
          if (lVar2 == 0) break;
          uVar17 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar7));
          *(undefined4 *)puVar9 = 0xfffffffe;
          if (uVar17 == 0) break;
          piVar18 = (int *)(lVar2 + 4);
          while (piVar18[-1] != 0x54706054) {
            piVar18 = piVar18 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_02746dcc;
          }
          iVar1 = 0;
          if (*piVar18 != -1) {
            iVar1 = *piVar18;
          }
          *(int *)puVar9 = iVar1;
          uVar4 = *puVar13;
          if (uVar4 == 0) break;
        } while( true );
      }
LAB_02746dcc:
      uVar19 = *puVar15;
    }
    if ((((uVar10 & 1) == 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
  }
  return uVar19;
}

