
undefined8 FUN_038f4da0(long *param_1,byte param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  int *piVar14;
  undefined1 auStack_e0 [64];
  int *local_a0 [8];
  
  lVar10 = *param_1;
  uVar8 = *(uint *)(lVar10 + 0xc);
  if ((uVar8 & 1) == 0) {
    lVar11 = 0;
    do {
      uVar2 = FUN_038cd970(*(undefined4 *)(lVar10 + lVar11));
      *(undefined4 *)(lVar10 + lVar11) = uVar2;
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0x150);
    lVar10 = *param_1;
  }
  uVar1 = *(uint *)(lVar10 + 0x1c);
  uVar13 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30);
  (*DAT_04c61f80)(local_a0);
  (**(code **)PTR_DAT_04bcf330)(local_a0,uVar13);
  (**(code **)PTR_DAT_04bcf620)(local_a0,0x62);
  (*DAT_04c61f88)(local_a0,(ulong)uVar1 + lVar10,
                  (ulong)*(uint *)(*param_1 + 0x18) + 0xfff & 0x1fffff000);
  (**(code **)PTR_DAT_04bcf338)(lVar10 + 0x20,local_a0);
  (**(code **)PTR_DAT_04bbd7b8)(auStack_e0,uVar13);
  (**(code **)PTR_DAT_04bbd7b0)(auStack_e0);
  (*DAT_04c62098)(auStack_e0,lVar10 + 0x20,0,(ulong)*(uint *)(*param_1 + 0x18) + 0xfff & 0x1fffff000
                 );
  (*DAT_04c620c0)(*param_1 + 0x120,auStack_e0);
  lVar10 = *param_1;
  uVar1 = *(uint *)(lVar10 + 0xc);
  lVar10 = lVar10 + (ulong)*(uint *)(lVar10 + 0x14);
  if ((uVar8 & 1) != 0) {
    if ((uVar1 >> 1 & 1) != 0) {
      return 1;
    }
    iVar3 = *(int *)(lVar10 + 0x154);
    if (iVar3 != 0) {
      piVar9 = (int *)(lVar10 + 0x158);
      if ((uVar1 >> 2 & 1) == 0) {
        do {
          local_a0[0] = piVar9;
          FUN_038f51d0(local_a0,0);
          iVar3 = iVar3 + -1;
          piVar9 = (int *)((long)piVar9 + (long)*piVar9);
        } while (iVar3 != 0);
      }
      else {
        do {
          local_a0[0] = piVar9;
          FUN_038f51d0(local_a0,*param_1 + 0x150);
          iVar3 = iVar3 + -1;
          piVar9 = (int *)((long)piVar9 + (long)*piVar9);
        } while (iVar3 != 0);
      }
    }
    uVar8 = 2;
    goto LAB_038f5194;
  }
  uVar2 = FUN_038cd970(*(undefined4 *)(lVar10 + 0x150));
  *(undefined4 *)(lVar10 + 0x150) = uVar2;
  iVar3 = FUN_038cd970(*(undefined4 *)(lVar10 + 0x154));
  *(int *)(lVar10 + 0x154) = iVar3;
  if (iVar3 != 0) {
    piVar9 = (int *)(lVar10 + 0x158);
    do {
      iVar4 = FUN_038cd970(*piVar9);
      *piVar9 = iVar4;
      iVar5 = FUN_038cd970(piVar9[1]);
      piVar9[1] = iVar5;
      iVar5 = FUN_038cd970(piVar9[2]);
      piVar9[2] = iVar5;
      iVar5 = FUN_038cd970(piVar9[3]);
      piVar9[3] = iVar5;
      piVar9 = (int *)((long)piVar9 + (long)iVar4);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  lVar11 = *param_1 + (ulong)*(uint *)(*param_1 + 0x14);
  puVar12 = (undefined4 *)(lVar11 + 0x150 + (ulong)*(uint *)(lVar11 + 0x150));
  uVar2 = FUN_038cd970(*puVar12);
  *puVar12 = uVar2;
  iVar3 = FUN_038cd970(puVar12[1]);
  puVar12[1] = iVar3;
  if (iVar3 != 0) {
    piVar14 = puVar12 + 2;
    piVar9 = piVar14;
    do {
      iVar4 = FUN_038cd970(*piVar9);
      *piVar9 = iVar4;
      iVar5 = FUN_038cd970(piVar9[1]);
      piVar9[1] = iVar5;
      iVar5 = FUN_038cd970(piVar9[2]);
      piVar9[2] = iVar5;
      iVar5 = FUN_038cd970(piVar9[3]);
      piVar9[3] = iVar5;
      piVar9 = (int *)((long)piVar9 + (long)iVar4);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = puVar12[1];
    if (iVar3 != 0) {
      iVar4 = 0;
      do {
        uVar8 = piVar14[1];
        puVar12 = (undefined4 *)((long)piVar14 + (ulong)uVar8 + 0x10);
        uVar2 = FUN_038cd970(*puVar12);
        *puVar12 = uVar2;
        iVar5 = FUN_038cd970(*(undefined4 *)((long)piVar14 + (ulong)uVar8 + 0x14));
        *(int *)((long)piVar14 + (ulong)uVar8 + 0x14) = iVar5;
        if (iVar5 != 0) {
          piVar9 = (int *)((long)piVar14 + (ulong)uVar8 + 0x18);
          do {
            iVar6 = FUN_038cd970(*piVar9);
            *piVar9 = iVar6;
            iVar7 = FUN_038cd970(piVar9[1]);
            piVar9[1] = iVar7;
            iVar7 = FUN_038cd970(piVar9[2]);
            piVar9[2] = iVar7;
            iVar7 = FUN_038cd970(piVar9[3]);
            piVar9[3] = iVar7;
            piVar9 = (int *)((long)piVar9 + (long)iVar6);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar4 = iVar4 + 1;
        piVar14 = (int *)((long)piVar14 + (long)*piVar14);
      } while (iVar3 != iVar4);
    }
  }
  iVar3 = *(int *)(lVar10 + 0x154);
  param_2 = (uVar1 & 2) == 0 & param_2;
  if (iVar3 == 0) {
    if (param_2 != 0) goto LAB_038f5180;
  }
  else if (param_2 != 0) {
    piVar9 = (int *)(lVar10 + 0x158);
    if ((uVar1 >> 2 & 1) == 0) {
      do {
        local_a0[0] = piVar9;
        FUN_038f51d0(local_a0,0);
        iVar3 = iVar3 + -1;
        piVar9 = (int *)((long)piVar9 + (long)*piVar9);
      } while (iVar3 != 0);
    }
    else {
      do {
        local_a0[0] = piVar9;
        FUN_038f51d0(local_a0,*param_1 + 0x150);
        iVar3 = iVar3 + -1;
        piVar9 = (int *)((long)piVar9 + (long)*piVar9);
      } while (iVar3 != 0);
    }
LAB_038f5180:
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 2;
  }
  uVar8 = 1;
LAB_038f5194:
  *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | uVar8;
  return 1;
}

