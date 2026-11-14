
void FUN_01c87374(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  bool bVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  undefined4 local_18;
  undefined4 uStack_14;
  
  puVar9 = PTR_DAT_04bcb7d8;
  uVar12 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x70) + 0x20))
                     (*(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x70),&local_18,0);
  puVar8 = PTR_DAT_04bb29d0;
  if ((uVar12 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1a1) = 0;
    if (((*(char *)(param_1 + 0x1a0) == '\0') || (*(long *)(param_1 + 0x188) == -1)) ||
       (*(long *)(param_1 + 400) == -1)) {
      *(undefined8 *)(param_1 + 0x188) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 400) = 0xffffffffffffffff;
    }
    else {
      lVar14 = *(long *)puVar8;
      *(long *)(param_1 + 0x188) = *(long *)(param_1 + 0x188) + 0x21;
      *(long *)(param_1 + 400) = (lVar14 * 0x21) / 1000 + *(long *)(param_1 + 400);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1a1) = 1;
    *(ulong *)(param_1 + 0x188) = CONCAT44(uStack_14,local_18);
    *(undefined8 *)(param_1 + 400) =
         *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar9 + 0x70) + 0x10) + 0x148);
  }
  *(long *)(param_1 + 0x198) =
       (long)(*(long *)puVar8 * (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) *
             5) / 1000;
  FUN_01c8aa20(DAT_05354288);
  FUN_01c918c0(DAT_053565a0);
  FUN_01c8f100(DAT_05355a58);
  FUN_01ca4b40(DAT_05358908);
  FUN_01c9aed0(DAT_05357d70);
  FUN_01dbcaf0(DAT_0537d558);
  FUN_01da5378(DAT_05379880);
  FUN_01d8042c(DAT_05372848);
  lVar14 = DAT_05357d70;
  if (DAT_053535d8 == 1) {
    local_18 = 4;
    iVar4 = 4;
    if (*(uint *)(DAT_05357d70 + 0x20) < 5) {
      iVar4 = 0;
    }
    if (*(char *)(*(long *)(DAT_05357d70 + 0x28) + (long)iVar4 * 0x38 + 0x2c) != '\0') {
      local_18 = 4;
      iVar4 = 4;
      if (*(uint *)(DAT_05357d70 + 0x20) < 5) {
        iVar4 = 0;
      }
      *(undefined1 *)(*(long *)(DAT_05357d70 + 0x28) + (long)iVar4 * 0x38 + 0x2c) = 0;
      iVar4 = 4;
      if (*(uint *)(lVar14 + 0x20) < 5) {
        iVar4 = 0;
      }
      *(undefined1 *)(*(long *)(lVar14 + 0x28) + (long)iVar4 * 0x38 + 0x2d) = 0;
      iVar4 = 4;
      if (*(uint *)(lVar14 + 0x20) < 5) {
        iVar4 = 0;
      }
      *(undefined4 *)(*(long *)(lVar14 + 0x28) + (long)iVar4 * 0x38) = 0;
      iVar4 = 4;
      if (*(uint *)(lVar14 + 0x20) < 5) {
        iVar4 = 0;
      }
      *(undefined1 *)(*(long *)(lVar14 + 0x28) + (long)iVar4 * 0x38 + 0x2f) = 0;
      DAT_053535d8 = 2;
    }
  }
  FUN_01d82d30(DAT_05373f28);
  plVar10 = DAT_05382a08;
  if (DAT_05382a08[1] != -1) {
    lVar14 = *(long *)(DAT_05354240 + 0x188);
    if (*(char *)(DAT_05354240 + 0x1a0) == '\0') {
      lVar14 = -1;
    }
    iVar5 = (int)DAT_05382a08[2];
    auVar7 = SEXT816(lVar14 - DAT_05382a08[1]) * SEXT816(0x20c49ba5e353f7cf);
    iVar4 = (int)(auVar7._8_8_ >> 7) - (auVar7._12_4_ >> 0x1f);
    iVar1 = iVar4;
    if (iVar5 <= iVar4) {
      iVar1 = iVar5;
    }
    iVar2 = 0;
    if (-1 < iVar4) {
      iVar2 = iVar1;
    }
    *(int *)((long)DAT_05382a08 + 0x14) = iVar5 - iVar2;
    if ((iVar5 - iVar2 == 0) && ((char)plVar10[3] == '\0')) {
      if ((undefined8 *)*plVar10 != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)*plVar10)();
      }
      *(undefined1 *)(plVar10 + 3) = 1;
    }
  }
  lVar14 = DAT_0537bd88;
  *(undefined1 *)(DAT_0537bd88 + 0xe0) = 1;
  uVar13 = *(uint *)(lVar14 + 8);
  if ((uVar13 == 0xffffffff) && (*(char *)(lVar14 + 0x20) != '\0')) {
    puVar18 = (undefined1 *)(lVar14 + 0x21);
    *puVar18 = 1;
    uVar6 = *(undefined4 *)(lVar14 + 0xc);
    *(undefined8 *)(lVar14 + 0xc) = 0xffffffff00000000;
    *(undefined4 *)(lVar14 + 0x14) = uVar6;
    uVar13 = *(uint *)(lVar14 + 0x18);
    *(uint *)(lVar14 + 8) = uVar13;
    if (uVar13 != 0xffffffff) {
      uVar16 = *(uint *)(lVar14 + 0x28);
      lVar15 = *(long *)(lVar14 + 0x30);
      uVar3 = uVar13;
      if (uVar16 <= uVar13) {
        uVar3 = 0;
      }
      puVar17 = *(undefined8 **)(lVar15 + (long)(int)uVar3 * 0x40);
      if (puVar17 != (undefined8 *)0x0) {
        (*(code *)*puVar17)();
        uVar13 = *(uint *)(lVar14 + 8);
        goto LAB_01c876cc;
      }
      *puVar18 = 0;
      goto LAB_01c876f4;
    }
    *puVar18 = 0;
LAB_01c8771c:
    *(int *)(lVar14 + 0xc) = *(int *)(lVar14 + 0xc) + 1;
  }
  else {
LAB_01c876cc:
    *(undefined1 *)(lVar14 + 0x21) = 0;
    if (uVar13 == 0xffffffff) goto LAB_01c8771c;
    uVar16 = *(uint *)(lVar14 + 0x28);
    lVar15 = *(long *)(lVar14 + 0x30);
LAB_01c876f4:
    if (uVar16 <= uVar13) {
      uVar13 = 0;
    }
    lVar15 = *(long *)(lVar15 + (long)(int)uVar13 * 0x40);
    if ((lVar15 == 0) || ((**(code **)(lVar15 + 8))(), *(char *)(lVar14 + 0x21) == '\0'))
    goto LAB_01c8771c;
  }
  FUN_01d8fcb0(DAT_053762d8);
  FUN_01dc4ef8(DAT_0537f040);
  lVar14 = DAT_0537f088;
  uVar13 = *(uint *)(DAT_0537f088 + 8);
  if ((uVar13 == 0xffffffff) && (*(char *)(DAT_0537f088 + 0x20) != '\0')) {
    puVar18 = (undefined1 *)(DAT_0537f088 + 0x21);
    *puVar18 = 1;
    uVar6 = *(undefined4 *)(lVar14 + 0xc);
    *(undefined8 *)(lVar14 + 0xc) = 0xffffffff00000000;
    *(undefined4 *)(lVar14 + 0x14) = uVar6;
    uVar13 = *(uint *)(lVar14 + 0x18);
    *(uint *)(lVar14 + 8) = uVar13;
    if (uVar13 != 0xffffffff) {
      uVar16 = *(uint *)(lVar14 + 0x28);
      lVar15 = *(long *)(lVar14 + 0x30);
      uVar3 = uVar13;
      if (uVar16 <= uVar13) {
        uVar3 = 0;
      }
      puVar17 = *(undefined8 **)(lVar15 + (long)(int)uVar3 * 0x40);
      if (puVar17 != (undefined8 *)0x0) {
        (*(code *)*puVar17)();
        uVar13 = *(uint *)(lVar14 + 8);
        goto LAB_01c877c0;
      }
      *puVar18 = 0;
      goto LAB_01c877e8;
    }
    *puVar18 = 0;
LAB_01c87810:
    *(int *)(lVar14 + 0xc) = *(int *)(lVar14 + 0xc) + 1;
  }
  else {
LAB_01c877c0:
    *(undefined1 *)(lVar14 + 0x21) = 0;
    if (uVar13 == 0xffffffff) goto LAB_01c87810;
    uVar16 = *(uint *)(lVar14 + 0x28);
    lVar15 = *(long *)(lVar14 + 0x30);
LAB_01c877e8:
    if (uVar16 <= uVar13) {
      uVar13 = 0;
    }
    lVar15 = *(long *)(lVar15 + (long)(int)uVar13 * 0x40);
    if ((lVar15 == 0) || ((**(code **)(lVar15 + 8))(), *(char *)(lVar14 + 0x21) == '\0'))
    goto LAB_01c87810;
  }
  FUN_01dceef0(DAT_053807b0);
  lVar14 = DAT_05372500;
  uVar13 = *(uint *)(DAT_05372500 + 8);
  if ((uVar13 == 0xffffffff) && (*(char *)(DAT_05372500 + 0x20) != '\0')) {
    puVar18 = (undefined1 *)(DAT_05372500 + 0x21);
    *puVar18 = 1;
    uVar6 = *(undefined4 *)(lVar14 + 0xc);
    *(undefined8 *)(lVar14 + 0xc) = 0xffffffff00000000;
    *(undefined4 *)(lVar14 + 0x14) = uVar6;
    uVar13 = *(uint *)(lVar14 + 0x18);
    *(uint *)(lVar14 + 8) = uVar13;
    if (uVar13 != 0xffffffff) {
      uVar16 = *(uint *)(lVar14 + 0x28);
      lVar15 = *(long *)(lVar14 + 0x30);
      uVar3 = uVar13;
      if (uVar16 <= uVar13) {
        uVar3 = 0;
      }
      puVar17 = *(undefined8 **)(lVar15 + (long)(int)uVar3 * 0x40);
      if (puVar17 != (undefined8 *)0x0) {
        (*(code *)*puVar17)();
        uVar13 = *(uint *)(lVar14 + 8);
        goto LAB_01c878a4;
      }
      *puVar18 = 0;
      goto LAB_01c878cc;
    }
    *puVar18 = 0;
LAB_01c878f4:
    *(int *)(lVar14 + 0xc) = *(int *)(lVar14 + 0xc) + 1;
  }
  else {
LAB_01c878a4:
    *(undefined1 *)(lVar14 + 0x21) = 0;
    if (uVar13 == 0xffffffff) goto LAB_01c878f4;
    uVar16 = *(uint *)(lVar14 + 0x28);
    lVar15 = *(long *)(lVar14 + 0x30);
LAB_01c878cc:
    if (uVar16 <= uVar13) {
      uVar13 = 0;
    }
    lVar15 = *(long *)(lVar15 + (long)(int)uVar13 * 0x40);
    if ((lVar15 == 0) || ((**(code **)(lVar15 + 8))(), *(char *)(lVar14 + 0x21) == '\0'))
    goto LAB_01c878f4;
  }
  FUN_01e057a0(DAT_0538adc8);
  FUN_01c72fb8(DAT_05351250);
  FUN_01c7c980(DAT_05351408);
  plVar10 = DAT_053512e0;
  if (*DAT_053512e0 == 0) {
LAB_01c87964:
    bVar11 = false;
  }
  else {
    FUN_03463948(*DAT_053512e0 + 0x5a8);
    if (*plVar10 == 0) goto LAB_01c87964;
    bVar11 = *(char *)(*plVar10 + 0x798) != '\0';
  }
  FUN_01c76740(plVar10,bVar11);
  FUN_01c76eac(plVar10);
  FUN_01c77330(plVar10,bVar11);
  FUN_01c77544(plVar10);
  FUN_01de2de4(DAT_05384078);
  lVar14 = DAT_05387118;
  uVar13 = *(uint *)(DAT_05387118 + 8);
  if ((uVar13 == 0xffffffff) && (*(char *)(DAT_05387118 + 0x20) != '\0')) {
    puVar18 = (undefined1 *)(DAT_05387118 + 0x21);
    *puVar18 = 1;
    uVar6 = *(undefined4 *)(lVar14 + 0xc);
    *(undefined8 *)(lVar14 + 0xc) = 0xffffffff00000000;
    *(undefined4 *)(lVar14 + 0x14) = uVar6;
    uVar13 = *(uint *)(lVar14 + 0x18);
    *(uint *)(lVar14 + 8) = uVar13;
    if (uVar13 == 0xffffffff) {
      *puVar18 = 0;
      goto LAB_01c87a68;
    }
    uVar16 = *(uint *)(lVar14 + 0x28);
    lVar15 = *(long *)(lVar14 + 0x30);
    uVar3 = uVar13;
    if (uVar16 <= uVar13) {
      uVar3 = 0;
    }
    puVar17 = *(undefined8 **)(lVar15 + (long)(int)uVar3 * 0x40);
    if (puVar17 != (undefined8 *)0x0) {
      (*(code *)*puVar17)();
      uVar13 = *(uint *)(lVar14 + 8);
      goto LAB_01c87a18;
    }
    *puVar18 = 0;
  }
  else {
LAB_01c87a18:
    *(undefined1 *)(lVar14 + 0x21) = 0;
    if (uVar13 == 0xffffffff) goto LAB_01c87a68;
    uVar16 = *(uint *)(lVar14 + 0x28);
    lVar15 = *(long *)(lVar14 + 0x30);
  }
  if (uVar16 <= uVar13) {
    uVar13 = 0;
  }
  lVar15 = *(long *)(lVar15 + (long)(int)uVar13 * 0x40);
  if ((lVar15 != 0) && ((**(code **)(lVar15 + 8))(), *(char *)(lVar14 + 0x21) != '\0')) {
    return;
  }
LAB_01c87a68:
  *(int *)(lVar14 + 0xc) = *(int *)(lVar14 + 0xc) + 1;
  return;
}

