
/* WARNING: Removing unreachable block (ram,0x02758898) */

uint FUN_02758850(long *param_1)

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
  long lVar10;
  long lVar11;
  ushort *puVar12;
  char cVar13;
  int *piVar14;
  uint *puVar15;
  ulong uVar16;
  uint uVar17;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  lVar10 = *(long *)PTR_DAT_04bb46b0;
  if (((lVar10 == 0) || (local_44 = 1, ((*(byte *)(lVar10 + 0x50d) ^ 0xff) & 6) != 0)) ||
     (lVar10 = (**(code **)(**(long **)(*(long *)(lVar10 + 0x10) + 0x188) + 0x38))(), lVar10 == 0))
  {
    lVar10 = *(long *)PTR_DAT_04bb2208;
    (**(code **)(*param_1 + 0x18))(param_1);
    local_48 = FUN_006bd550(param_1[1],0);
    puVar9 = (uint *)FUN_02759760(lVar10 + 0x1da0,&local_48);
    puVar6 = PTR_DAT_04bb6468;
    puVar5 = PTR_DAT_04bb6460;
    if ((puVar9 != (uint *)0x0) && (uVar17 = *puVar9, uVar17 != 0)) {
      cVar13 = *PTR_DAT_04bb6460;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          uVar17 = *puVar9;
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
        puVar15 = (uint *)(ulong)uVar17;
        if (puVar15 == (uint *)0x0) {
          return 0;
        }
        if (puVar9 == puVar15) {
          return 0;
        }
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar15)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + (lVar10 - (long)puVar15);
        if (lVar10 == 0) break;
        uVar16 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar15));
        *(undefined4 *)puVar6 = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar14 = (int *)(lVar10 + 4);
        while (piVar14[-1] != 0x4c24f1cf) {
          piVar14 = piVar14 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_02758b54;
        }
        iVar1 = 0;
        if (*piVar14 != -1) {
          iVar1 = *piVar14;
        }
        *(int *)puVar6 = iVar1;
        uVar17 = *puVar9;
        if (uVar17 == 0) {
          return 0;
        }
      } while( true );
    }
LAB_02758b54:
    uVar17 = 0;
  }
  else {
    if ((*(long **)(lVar10 + 0x5d4560) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar10 + 0x5d4560), puVar8 == (undefined8 *)0x0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar8)();
      uVar7 = uVar7 ^ 1;
    }
    lVar2 = *(long *)(lVar10 + 0x5d4540);
    lVar3 = *(long *)(lVar10 + 0x5d4548);
    lVar11 = *(long *)PTR_DAT_04bb2208;
    (**(code **)(*param_1 + 0x18))(param_1);
    local_4c = FUN_006bd550(param_1[1],0);
    puVar9 = (uint *)FUN_02759760(lVar11 + 0x1da0,&local_4c);
    puVar6 = PTR_DAT_04bb6468;
    puVar5 = PTR_DAT_04bb6460;
    if (puVar9 == (uint *)0x0) {
      uVar17 = 0;
    }
    else {
      puVar12 = (ushort *)(lVar3 + lVar2);
      if (*puVar9 != 0) {
        cVar13 = *PTR_DAT_04bb6460;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            uVar17 = *puVar9;
          }
          else {
            uVar17 = *(uint *)(puVar6 + 8);
            if (-1 < (int)uVar17) {
              if (((ushort *)((ulong)uVar17 + (long)puVar9) != (ushort *)0x0) &&
                 (uVar4 = *(ushort *)((ulong)uVar17 + (long)puVar9), uVar4 < 0x800)) {
                puVar12 = puVar12 + uVar4;
              }
              break;
            }
            if (uVar17 != 0xffffffff) break;
            uVar17 = *puVar9;
          }
          if ((uVar17 == 0) || (puVar15 = (uint *)(ulong)uVar17, puVar9 == puVar15)) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar15)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar9 + (lVar2 - (long)puVar15);
          if (lVar2 == 0) break;
          uVar16 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar15));
          *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
          if (uVar16 == 0) break;
          piVar14 = (int *)(lVar2 + 4);
          while (piVar14[-1] != 0x54706054) {
            piVar14 = piVar14 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_02758b90;
          }
          iVar1 = 0;
          if (*piVar14 != -1) {
            iVar1 = *piVar14;
          }
          *(int *)(puVar6 + 8) = iVar1;
          if (*puVar9 == 0) break;
        } while( true );
      }
LAB_02758b90:
      uVar17 = (uint)*puVar12;
    }
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar10 + 0x5d4560) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x5d4560) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  return uVar17;
}

