
uint FUN_01b68c50(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                 byte *param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined **local_68;
  long local_60;
  ushort local_58;
  undefined ***local_50;
  byte local_44 [4];
  
  puVar2 = PTR_DAT_04bc0648;
  puVar9 = PTR_DAT_04bc0640;
  if (*param_3 == 0) {
LAB_01b68df0:
    uVar5 = 0;
LAB_01b68df4:
    return uVar5 & 1;
  }
  cVar10 = *PTR_DAT_04bc0640;
  do {
    if (cVar10 == '\0') {
      cVar10 = '\x01';
      *(undefined8 *)puVar2 = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
      *puVar9 = 1;
      *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
    }
    else {
      uVar5 = *(uint *)(puVar2 + 0x18);
      if (-1 < (int)uVar5) {
        if (((short *)((ulong)uVar5 + (long)param_3) != (short *)0x0) &&
           (*(short *)((ulong)uVar5 + (long)param_3) != 0)) {
          local_44[0] = *param_5;
          local_50 = (undefined ***)0x0;
          if (7 < local_44[0]) {
            local_44[0] = 0xff;
          }
          lVar6 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_44,1);
          puVar9 = PTR_DAT_04bc35d0;
          if (lVar6 != 0) {
            lVar8 = lVar6 + 0x194b0;
            if (*(long *)(lVar6 + 0x194b8) == 0) {
              lVar8 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
            }
            local_60 = lVar8 + 0x8538;
            local_68 = (undefined **)(PTR_DAT_04bc35d0 + 0x10);
            local_58 = 1;
            if (*(long **)(lVar8 + 0x8560) == (long *)0x0) {
              uVar4 = 0;
            }
            else {
              puVar7 = (undefined8 *)**(long **)(lVar8 + 0x8560);
              uVar4 = 0;
              if (puVar7 != (undefined8 *)0x0) {
                uVar4 = (**(code **)*puVar7)();
              }
            }
            local_58 = CONCAT11(uVar4,(undefined1)local_58) & 0x1ff;
            local_68 = &PTR_FUN_04a38ac0;
            local_50 = &local_68;
          }
          uVar5 = FUN_01b6e5d0(param_1,param_2,param_3,param_4,&local_68);
          pppuVar3 = local_50;
          if ((local_50 == (undefined ***)0x0) ||
             (*local_50 = (undefined **)(puVar9 + 0x10), *(char *)((long)pppuVar3 + 0x11) == '\0'))
          goto LAB_01b68df4;
          puVar9 = pppuVar3[1][5];
          if (*(char *)(pppuVar3 + 2) == '\0') {
            if (puVar9 == (undefined *)0x0) goto LAB_01b68df4;
            puVar7 = *(undefined8 **)(puVar9 + 0x18);
          }
          else {
            if (puVar9 == (undefined *)0x0) goto LAB_01b68df4;
            puVar7 = *(undefined8 **)(puVar9 + 8);
          }
          if (puVar7 != (undefined8 *)0x0) {
            (**(code **)*puVar7)();
          }
          goto LAB_01b68df4;
        }
        goto LAB_01b68df0;
      }
      if (uVar5 != 0xffffffff) goto LAB_01b68df0;
    }
    puVar11 = (uint *)(ulong)*param_3;
    uVar5 = 0;
    if ((*param_3 == 0) || (param_3 == puVar11)) goto LAB_01b68df4;
    lVar6 = 0xc;
    if (*(char *)((long)param_3 + (10 - (long)puVar11)) != '\0') {
      lVar6 = 0x1c;
    }
    lVar6 = (long)param_3 + (lVar6 - (long)puVar11);
    if (lVar6 == 0) goto LAB_01b68df0;
    uVar12 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar11));
    *(undefined4 *)(puVar2 + 0x18) = 0xfffffffe;
    if (uVar12 == 0) goto LAB_01b68df0;
    piVar13 = (int *)(lVar6 + 4);
    while (piVar13[-1] != 0x175969e1) {
      piVar13 = piVar13 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_01b68df0;
    }
    iVar1 = 0;
    if (*piVar13 != -1) {
      iVar1 = *piVar13;
    }
    *(int *)(puVar2 + 0x18) = iVar1;
    if (*param_3 == 0) goto LAB_01b68df0;
  } while( true );
}

