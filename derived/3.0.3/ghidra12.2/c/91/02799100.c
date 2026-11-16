
undefined4 FUN_02799100(undefined4 *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  uint *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined4 *puVar14;
  long *plVar15;
  char cVar16;
  uint *puVar17;
  undefined4 local_34;
  
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar7 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1), lVar7 == 0)) {
    return 0;
  }
  lVar13 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_34 = FUN_006bd550(param_2[1],0);
  puVar8 = (uint *)FUN_01b1ee90(lVar13 + 0x1b80,&local_34);
  if (puVar8 == (uint *)0x0) {
    return 0;
  }
  puVar10 = puVar8;
  if (*(long **)(lVar7 + 0x18358) == (long *)0x0) {
LAB_027991b8:
    uVar12 = 1;
  }
  else {
    puVar9 = (undefined8 *)**(long **)(lVar7 + 0x18358);
    puVar10 = (uint *)0x0;
    if (puVar9 == (undefined8 *)0x0) goto LAB_027991b8;
    puVar10 = (uint *)(**(code **)*puVar9)();
    uVar12 = (uint)puVar10 ^ 1;
  }
  puVar5 = PTR_DAT_04bb6448;
  puVar4 = PTR_DAT_04bb6440;
  lVar13 = *(long *)(lVar7 + 0x18340) + *(long *)(lVar7 + 0x18338);
  if (*puVar8 != 0) {
    cVar16 = *PTR_DAT_04bb6440;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        uVar2 = *puVar8;
      }
      else {
        uVar2 = *(uint *)(puVar5 + 0x3c);
        if (-1 < (int)uVar2) {
          if ((ushort *)((ulong)uVar2 + (long)puVar8) != (ushort *)0x0) {
            uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar8);
            puVar14 = (undefined4 *)(lVar13 + 0xe98);
            if (uVar3 < 0x200) {
              puVar14 = puVar14 + uVar3;
            }
            goto LAB_027992d0;
          }
          break;
        }
        if (uVar2 != 0xffffffff) break;
        uVar2 = *puVar8;
      }
      if ((uVar2 == 0) || (puVar17 = (uint *)(ulong)uVar2, puVar8 == puVar17)) break;
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar17)) != '\0') {
        lVar1 = 0x1c;
      }
      puVar10 = (uint *)((long)puVar8 + (lVar1 - (long)puVar17));
      if (puVar10 == (uint *)0x0) break;
      uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar17));
      *(undefined4 *)(puVar5 + 0x3c) = 0xfffffffe;
      if (uVar11 == 0) break;
      puVar10 = puVar10 + 1;
      while (puVar10[-1] != 0x54706054) {
        puVar10 = puVar10 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_027992cc;
      }
      uVar2 = 0;
      if (*puVar10 != 0xffffffff) {
        uVar2 = *puVar10;
      }
      *(uint *)(puVar5 + 0x3c) = uVar2;
      if (*puVar8 == 0) break;
    } while( true );
  }
LAB_027992cc:
  puVar14 = (undefined4 *)(lVar13 + 0xe98);
LAB_027992d0:
  uVar6 = *puVar14;
  plVar15 = *(long **)(lVar7 + 0x18358);
  if ((uVar12 & 1) == 0) {
    if (plVar15 == (long *)0x0) goto LAB_02799348;
    if ((undefined8 *)plVar15[1] != (undefined8 *)0x0) {
      puVar10 = (uint *)(*(code *)**(undefined8 **)plVar15[1])();
      plVar15 = *(long **)(lVar7 + 0x18358);
      goto LAB_027992f8;
    }
  }
  else {
LAB_027992f8:
    if (plVar15 == (long *)0x0) goto LAB_02799348;
  }
  puVar10 = (uint *)0x0;
  if ((undefined8 *)*plVar15 != (undefined8 *)0x0) {
    uVar11 = (*(code *)**(undefined8 **)*plVar15)();
    uVar6 = FUN_02798cb0(uVar11,puVar8,uVar6);
    if ((uVar11 & 1) == 0) {
      return uVar6;
    }
    if (*(long *)(lVar7 + 0x18358) == 0) {
      return uVar6;
    }
    puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0x18358) + 8);
    if (puVar9 == (undefined8 *)0x0) {
      return uVar6;
    }
    (**(code **)*puVar9)();
    return uVar6;
  }
LAB_02799348:
  uVar6 = FUN_02798cb0(puVar10,puVar8,uVar6);
  return uVar6;
}

