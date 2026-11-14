
uint FUN_01b6e290(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined1 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  char cVar12;
  uint *puVar13;
  ulong uVar14;
  int *piVar15;
  undefined **local_60;
  long local_58;
  ushort local_50;
  long *local_48;
  
  puVar4 = PTR_DAT_04bc0648;
  puVar3 = PTR_DAT_04bc0640;
  if (*param_3 == 0) {
LAB_01b6e414:
    uVar8 = 0;
LAB_01b6e418:
    return uVar8 & 1;
  }
  cVar12 = *PTR_DAT_04bc0640;
  do {
    puVar5 = PTR_DAT_04bc35d0;
    puVar2 = PTR_DAT_04bb46b0;
    if (cVar12 == '\0') {
      cVar12 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
    }
    else {
      uVar8 = *(uint *)(puVar4 + 0x18);
      if (-1 < (int)uVar8) {
        if (((short *)((ulong)uVar8 + (long)param_3) != (short *)0x0) &&
           (*(short *)((ulong)uVar8 + (long)param_3) != 0)) {
          local_48 = (long *)0x0;
          if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
             (lVar9 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_5), lVar9 != 0)) {
            lVar11 = lVar9 + 0x194b0;
            if (*(long *)(lVar9 + 0x194b8) == 0) {
              lVar11 = *(long *)(*(long *)puVar2 + 0x20);
            }
            local_58 = lVar11 + 0x8538;
            local_60 = (undefined **)(puVar5 + 0x10);
            local_50 = 1;
            if (*(long **)(lVar11 + 0x8560) == (long *)0x0) {
              uVar7 = 0;
            }
            else {
              puVar10 = (undefined8 *)**(long **)(lVar11 + 0x8560);
              uVar7 = 0;
              if (puVar10 != (undefined8 *)0x0) {
                uVar7 = (**(code **)*puVar10)();
              }
            }
            local_50 = CONCAT11(uVar7,(undefined1)local_50) & 0x1ff;
            local_60 = &PTR_FUN_04a38ac0;
            local_48 = (long *)&local_60;
          }
          uVar8 = FUN_01b6e5d0(param_1,param_2,param_3,param_4,&local_60);
          plVar6 = local_48;
          if ((local_48 == (long *)0x0) ||
             (*local_48 = (long)(puVar5 + 0x10), *(char *)((long)plVar6 + 0x11) == '\0'))
          goto LAB_01b6e418;
          lVar9 = *(long *)(plVar6[1] + 0x28);
          if ((char)plVar6[2] == '\0') {
            if (lVar9 == 0) goto LAB_01b6e418;
            puVar10 = *(undefined8 **)(lVar9 + 0x18);
          }
          else {
            if (lVar9 == 0) goto LAB_01b6e418;
            puVar10 = *(undefined8 **)(lVar9 + 8);
          }
          if (puVar10 != (undefined8 *)0x0) {
            (**(code **)*puVar10)();
          }
          goto LAB_01b6e418;
        }
        goto LAB_01b6e414;
      }
      if (uVar8 != 0xffffffff) goto LAB_01b6e414;
    }
    puVar13 = (uint *)(ulong)*param_3;
    uVar8 = 0;
    if ((*param_3 == 0) || (param_3 == puVar13)) goto LAB_01b6e418;
    lVar9 = 0xc;
    if (*(char *)((long)param_3 + (10 - (long)puVar13)) != '\0') {
      lVar9 = 0x1c;
    }
    lVar9 = (long)param_3 + (lVar9 - (long)puVar13);
    if (lVar9 == 0) goto LAB_01b6e414;
    uVar14 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar13));
    *(undefined4 *)(puVar4 + 0x18) = 0xfffffffe;
    if (uVar14 == 0) goto LAB_01b6e414;
    piVar15 = (int *)(lVar9 + 4);
    while (piVar15[-1] != 0x175969e1) {
      piVar15 = piVar15 + 2;
      uVar14 = uVar14 - 1;
      if (uVar14 == 0) goto LAB_01b6e414;
    }
    iVar1 = 0;
    if (*piVar15 != -1) {
      iVar1 = *piVar15;
    }
    *(int *)(puVar4 + 0x18) = iVar1;
    if (*param_3 == 0) goto LAB_01b6e414;
  } while( true );
}

