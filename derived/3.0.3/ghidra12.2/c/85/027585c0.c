
/* WARNING: Removing unreachable block (ram,0x02758608) */

void FUN_027585c0(undefined8 param_1,long *param_2,int param_3)

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
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  char cVar14;
  ulong uVar15;
  ushort *puVar16;
  uint *puVar17;
  int *piVar18;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar12 = *(long *)PTR_DAT_04bb46b0;
  if (lVar12 == 0) {
    return;
  }
  local_68 = CONCAT44(local_68._4_4_,1);
  if (((*(byte *)(lVar12 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar12 = (**(code **)(**(long **)(*(long *)(lVar12 + 0x10) + 0x188) + 0x30))();
  if (lVar12 == 0) {
    return;
  }
  lVar13 = *(long *)(lVar12 + 0x5d4560);
  if (lVar13 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      lVar13 = *(long *)(lVar12 + 0x5d4560);
      uVar7 = uVar7 & 0xffffffff;
      if (lVar13 == 0) goto LAB_027586a8;
    }
    plVar8 = *(long **)(lVar13 + 0x20);
    if (plVar8 != (long *)0x0) {
      local_68 = *(long *)(lVar12 + 0x5d4540);
      local_60 = *(undefined8 *)(lVar12 + 0x5d4548);
      uStack_58 = 0x1000;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_68);
    }
  }
LAB_027586a8:
  puVar1 = (ushort *)(*(long *)(lVar12 + 0x5d4548) + *(long *)(lVar12 + 0x5d4540));
  lVar13 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar6 = FUN_006bd550(param_2[1],0);
  local_68 = CONCAT44(local_68._4_4_,uVar6);
  puVar9 = (uint *)FUN_02759760(lVar13 + 0x1da0,&local_68);
  puVar5 = PTR_DAT_04bb6468;
  puVar4 = PTR_DAT_04bb6460;
  if (puVar9 == (uint *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar16 = puVar1;
    if (*puVar9 != 0) {
      cVar14 = *PTR_DAT_04bb6460;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar11 = *puVar9;
        }
        else {
          uVar11 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar11) {
            if (((ushort *)((ulong)uVar11 + (long)puVar9) != (ushort *)0x0) &&
               (uVar3 = *(ushort *)((ulong)uVar11 + (long)puVar9), uVar3 < 0x800)) {
              puVar16 = puVar1 + uVar3;
            }
            break;
          }
          if (uVar11 != 0xffffffff) break;
          uVar11 = *puVar9;
        }
        if ((uVar11 == 0) || (puVar17 = (uint *)(ulong)uVar11, puVar9 == puVar17)) break;
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
          if (uVar15 == 0) goto LAB_027587fc;
        }
        iVar2 = 0;
        if (*piVar18 != -1) {
          iVar2 = *piVar18;
        }
        *(int *)(puVar5 + 8) = iVar2;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_027587fc:
    uVar11 = (uint)*puVar16;
  }
  FUN_02757f40(puVar1,param_2,uVar11 + param_3,param_1);
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar12 + 0x5d4560) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x5d4560) + 0x18), puVar10 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar10)();
  }
  return;
}

