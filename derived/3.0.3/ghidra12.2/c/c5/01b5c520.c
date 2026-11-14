
void FUN_01b5c520(long *param_1,uint param_2,byte *param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  byte bVar14;
  uint uVar15;
  char cVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  char local_6c [4];
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar12 = *(long *)PTR_DAT_04bb49a0;
  (**(code **)(*param_1 + 0x18))();
  uVar7 = FUN_006bd550(param_1[1],0);
  local_68 = CONCAT44(local_68._4_4_,uVar7);
  puVar8 = (uint *)FUN_01b5b7f0(lVar12 + 0x470,&local_68);
  puVar5 = PTR_DAT_04bb4f78;
  if (puVar8 == (uint *)0x0) {
    return;
  }
  bVar14 = *param_3;
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  local_68 = CONCAT71(local_68._1_7_,bVar14);
  lVar12 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_68,1);
  if (lVar12 == 0) {
    return;
  }
  lVar19 = lVar12 + 0x194b0;
  if (*(long *)(lVar12 + 0x194b8) == 0) {
    lVar19 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  uVar9 = FUN_01b68ea0(puVar8,param_3);
  if ((uVar9 & 1) == 0) {
    return;
  }
  lVar12 = *(long *)(lVar19 + 0x2c638);
  if (lVar12 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      lVar12 = *(long *)(lVar19 + 0x2c638);
      uVar9 = uVar9 & 0xffffffff;
      if (lVar12 == 0) goto LAB_01b5c654;
    }
    plVar10 = *(long **)(lVar12 + 0x20);
    if (plVar10 != (long *)0x0) {
      local_68 = *(long *)(lVar19 + 0x2c618);
      local_60 = *(undefined8 *)(lVar19 + 0x2c620);
      uStack_58 = 0x2580;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_68);
    }
  }
LAB_01b5c654:
  lVar12 = *(long *)(lVar19 + 0x2c618);
  lVar2 = *(long *)(lVar19 + 0x2c620);
  bVar14 = *param_3;
  lVar13 = *(long *)PTR_DAT_04bb32e8;
  local_68 = *(long *)(lVar13 + 0x20) / 1000000000 + *(long *)(lVar13 + 8) +
             (((*(long *)(lVar13 + 0x10) + (long)*(int *)(lVar13 + 0x38)) - *(long *)(lVar13 + 8)) *
             1000000000) / 1000000000;
  local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
  lVar12 = FUN_02811460(lVar2 + lVar12,&local_68,local_6c);
  if ((local_6c[0] != '\0') && (bVar14 < 8)) {
    local_68 = CONCAT71(local_68._1_7_,bVar14);
    FUN_02583354(*(undefined8 *)puVar5,&local_68,1);
    FUN_01b675a0();
  }
  puVar6 = PTR_DAT_04bc0600;
  puVar5 = PTR_DAT_04bc05f8;
  uVar15 = *puVar8;
  if (uVar15 == 0) {
LAB_01b5c800:
    uVar17 = 0;
LAB_01b5c804:
    lVar12 = lVar12 + uVar17 * 2;
    uVar15 = (uint)*(ushort *)(lVar12 + 0x80) + (param_2 & 0xffff);
    if (0xfffe < uVar15) {
      uVar15 = 0xffff;
    }
    *(short *)(lVar12 + 0x80) = (short)uVar15;
LAB_01b5c820:
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar19 + 0x2c638) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar19 + 0x2c638) + 0x18), puVar11 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar11)();
    }
    return;
  }
  cVar16 = *PTR_DAT_04bc05f8;
  do {
    if (cVar16 == '\0') {
      cVar16 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined4 *)(puVar6 + 8) = 0xffffffff;
      *puVar5 = 1;
      uVar15 = *puVar8;
    }
    else {
      uVar3 = *(uint *)puVar6;
      if (-1 < (int)uVar3) {
        if ((ushort *)((ulong)uVar3 + (long)puVar8) != (ushort *)0x0) {
          uVar17 = (ulong)*(ushort *)((ulong)uVar3 + (long)puVar8);
          if (uVar17 < 0x100) goto LAB_01b5c804;
          goto LAB_01b5c820;
        }
        goto LAB_01b5c800;
      }
      if (uVar3 != 0xffffffff) goto LAB_01b5c800;
    }
    puVar4 = (uint *)(ulong)uVar15;
    uVar17 = 0;
    if ((puVar4 == (uint *)0x0) || (uVar17 = 0, puVar8 == puVar4)) goto LAB_01b5c804;
    lVar2 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar4)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar8 + (lVar2 - (long)puVar4);
    uVar17 = 0;
    if (lVar2 == 0) goto LAB_01b5c804;
    uVar17 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar4));
    *(undefined4 *)puVar6 = 0xfffffffe;
    if (uVar17 == 0) goto LAB_01b5c800;
    piVar18 = (int *)(lVar2 + 4);
    while (piVar18[-1] != 0x54706054) {
      piVar18 = piVar18 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) goto LAB_01b5c800;
    }
    iVar1 = 0;
    if (*piVar18 != -1) {
      iVar1 = *piVar18;
    }
    *(int *)puVar6 = iVar1;
    uVar15 = *puVar8;
    if (uVar15 == 0) goto LAB_01b5c800;
  } while( true );
}

