
uint FUN_0274b8d0(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  ushort *puVar10;
  char cVar11;
  uint *puVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined4 local_24;
  
  if (param_1 == 0) {
    uVar16 = *(undefined8 *)PTR_DAT_04bb2208;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_24 = FUN_006bd550(param_2[1],0);
    puVar9 = (uint *)FUN_00d654a0(uVar16,&local_24);
    puVar6 = PTR_DAT_04bb6348;
    puVar5 = PTR_DAT_04bb6340;
    if ((puVar9 != (uint *)0x0) && (uVar15 = *puVar9, uVar15 != 0)) {
      cVar11 = *PTR_DAT_04bb6340;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          uVar15 = *puVar9;
        }
        else {
          uVar7 = *(uint *)puVar6;
          if (-1 < (int)uVar7) {
            if ((uint *)((ulong)uVar7 + (long)puVar9) != (uint *)0x0) {
              return *(uint *)((ulong)uVar7 + (long)puVar9);
            }
            break;
          }
          if (uVar7 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)uVar15;
        if (puVar12 == (uint *)0x0) {
          return 0;
        }
        if (puVar9 == puVar12) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar12)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar2 - (long)puVar12);
        if (lVar2 == 0) break;
        uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar12));
        *(undefined4 *)puVar6 = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar14 = (int *)(lVar2 + 4);
        while (piVar14[-1] != 0x4c24f1cf) {
          piVar14 = piVar14 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_0274bb8c;
        }
        iVar1 = 0;
        if (*piVar14 != -1) {
          iVar1 = *piVar14;
        }
        *(int *)puVar6 = iVar1;
        uVar15 = *puVar9;
        if (uVar15 == 0) {
          return 0;
        }
      } while( true );
    }
LAB_0274bb8c:
    uVar15 = 0;
  }
  else {
    if ((*(long **)(param_1 + 0x18320) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(param_1 + 0x18320), puVar8 == (undefined8 *)0x0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar8)();
      uVar7 = uVar7 ^ 1;
    }
    lVar2 = *(long *)(param_1 + 0x18300);
    lVar3 = *(long *)(param_1 + 0x18308);
    puVar9 = (uint *)FUN_0274eeb0(param_2);
    puVar6 = PTR_DAT_04bb6348;
    puVar5 = PTR_DAT_04bb6340;
    if (puVar9 == (uint *)0x0) {
      uVar15 = 0;
    }
    else {
      puVar10 = (ushort *)(lVar3 + lVar2);
      if (*puVar9 != 0) {
        cVar11 = *PTR_DAT_04bb6340;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            uVar15 = *puVar9;
          }
          else {
            uVar15 = *(uint *)(puVar6 + 8);
            if (-1 < (int)uVar15) {
              if (((ushort *)((ulong)uVar15 + (long)puVar9) != (ushort *)0x0) &&
                 (uVar4 = *(ushort *)((ulong)uVar15 + (long)puVar9), uVar4 < 0x800)) {
                puVar10 = puVar10 + uVar4;
              }
              break;
            }
            if (uVar15 != 0xffffffff) break;
            uVar15 = *puVar9;
          }
          if ((uVar15 == 0) || (puVar12 = (uint *)(ulong)uVar15, puVar9 == puVar12)) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar12)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar9 + (lVar2 - (long)puVar12);
          if (lVar2 == 0) break;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar12));
          *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar14 = (int *)(lVar2 + 4);
          while (piVar14[-1] != 0x54706054) {
            piVar14 = piVar14 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_0274bb54;
          }
          iVar1 = 0;
          if (*piVar14 != -1) {
            iVar1 = *piVar14;
          }
          *(int *)(puVar6 + 8) = iVar1;
          if (*puVar9 == 0) break;
        } while( true );
      }
LAB_0274bb54:
      uVar15 = (uint)*puVar10;
    }
    if ((((uVar7 & 1) == 0) && (*(long *)(param_1 + 0x18320) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x18320) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  return uVar15;
}

