
void FUN_01de7320(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  DAT_05372590 = PTR_DAT_04bc1400 + 0x10;
  DAT_05372598 = PTR_LAB_04bc13e8;
  if (DAT_05385868 < DAT_0538586c) {
    *(undefined8 **)(DAT_05385870 + (long)DAT_05385868 * 8) = &DAT_05372580;
    DAT_05385868 = DAT_05385868 + 1;
  }
  if (DAT_05385868 < DAT_0538586c) {
    *(long *)(DAT_05385870 + (long)DAT_05385868 * 8) = **(long **)PTR_DAT_04bb27d0 + 8;
    DAT_05385868 = DAT_05385868 + 1;
  }
  FUN_01d4b980(&DAT_05385868);
  if (DAT_05385868 < DAT_0538586c) {
    *(undefined **)(DAT_05385870 + (long)DAT_05385868 * 8) = PTR_DAT_04bc14c8;
    DAT_05385868 = DAT_05385868 + 1;
  }
  if (DAT_05385868 < DAT_0538586c) {
    *(undefined **)(DAT_05385870 + (long)DAT_05385868 * 8) = PTR_DAT_04bc14d0;
    DAT_05385868 = DAT_05385868 + 1;
  }
  FUN_0255ff38(&DAT_05385868);
  FUN_02560138(&DAT_05385868);
  if (DAT_05385868 < DAT_0538586c) {
    *(undefined8 *)(DAT_05385870 + (long)DAT_05385868 * 8) = *(undefined8 *)PTR_DAT_04bb4768;
    DAT_05385868 = DAT_05385868 + 1;
  }
  if (DAT_05385868 < DAT_0538586c) {
    *(undefined **)(DAT_05385870 + (long)DAT_05385868 * 8) = PTR_DAT_04bc1518;
    DAT_05385868 = DAT_05385868 + 1;
  }
  FUN_02068208(*(undefined8 *)PTR_DAT_04bb7198,&DAT_05385868);
  if (DAT_05385868 < DAT_0538586c) {
    *(undefined **)(DAT_05385870 + (long)DAT_05385868 * 8) = PTR_DAT_04bbc638;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de749c;
LAB_01de78c8:
    *(undefined **)(DAT_05385870 + (long)DAT_05385868 * 8) = PTR_DAT_04bbbc60;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de74a4;
LAB_01de78ec:
    *(undefined8 **)(DAT_05385870 + (long)DAT_05385868 * 8) = &DAT_0514e3c8;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de74ac;
LAB_01de7910:
    *(undefined8 **)(DAT_05385870 + (long)DAT_05385868 * 8) = &DAT_0514e400;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de74b4;
LAB_01de7934:
    *(undefined **)(DAT_05385870 + (long)DAT_05385868 * 8) = PTR_DAT_04bb6280;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de74bc;
LAB_01de7958:
    *(undefined **)(DAT_05385870 + (long)DAT_05385868 * 8) = PTR_DAT_04bb6288;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de74c4;
LAB_01de797c:
    *(undefined **)(DAT_05385870 + (long)DAT_05385868 * 8) = PTR_DAT_04bb6290;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de74cc;
LAB_01de79a0:
    *(undefined **)(DAT_05385870 + (long)DAT_05385868 * 8) = PTR_DAT_04bc2f20;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de74d4;
LAB_01de79c4:
    *(undefined **)(DAT_05385870 + (long)DAT_05385868 * 8) = PTR_DAT_04bc2f28;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de74dc;
LAB_01de79e8:
    *(undefined **)(DAT_05385870 + (long)DAT_05385868 * 8) = PTR_DAT_04bc2f30;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de74e4;
LAB_01de7a0c:
    *(undefined8 **)(DAT_05385870 + (long)DAT_05385868 * 8) = &DAT_055642e8;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de74ec;
  }
  else {
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de78c8;
LAB_01de749c:
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de78ec;
LAB_01de74a4:
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de7910;
LAB_01de74ac:
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de7934;
LAB_01de74b4:
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de7958;
LAB_01de74bc:
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de797c;
LAB_01de74c4:
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de79a0;
LAB_01de74cc:
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de79c4;
LAB_01de74d4:
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de79e8;
LAB_01de74dc:
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de7a0c;
LAB_01de74e4:
    if (DAT_05385868 < DAT_0538586c) {
LAB_01de74ec:
      *(undefined **)(DAT_05385870 + (long)DAT_05385868 * 8) = PTR_DAT_04bc2da8;
      DAT_05385868 = DAT_05385868 + 1;
    }
  }
  lVar5 = *(long *)PTR_DAT_04bb27f0;
  if (lVar5 != 0) {
    if (DAT_05385868 < DAT_0538586c) {
      *(long *)(DAT_05385870 + (long)DAT_05385868 * 8) = lVar5 + 0x378;
      DAT_05385868 = DAT_05385868 + 1;
    }
    if (DAT_05385868 < DAT_0538586c) {
      *(long *)(DAT_05385870 + (long)DAT_05385868 * 8) = lVar5 + 0x3a8;
      DAT_05385868 = DAT_05385868 + 1;
    }
  }
  if (DAT_05385868 < DAT_0538586c) {
    *(undefined8 **)(DAT_05385870 + (long)DAT_05385868 * 8) = &DAT_055b0ed0;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de7568;
LAB_01de7a58:
    *(undefined8 **)(DAT_05385870 + (long)DAT_05385868 * 8) = &DAT_055b0f00;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de7570;
LAB_01de7a7c:
    *(undefined8 **)(DAT_05385870 + (long)DAT_05385868 * 8) = &DAT_055b1ac0;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de7578;
LAB_01de7aa0:
    *(undefined8 **)(DAT_05385870 + (long)DAT_05385868 * 8) = &DAT_05590f08;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de7580;
LAB_01de7ac4:
    *(undefined8 **)(DAT_05385870 + (long)DAT_05385868 * 8) = &DAT_04cca098;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de7588;
LAB_01de7ae8:
    *(undefined8 **)(DAT_05385870 + (long)DAT_05385868 * 8) = &DAT_04cca0c8;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de7590;
LAB_01de7b0c:
    *(long *)(DAT_05385870 + (long)DAT_05385868 * 8) = *(long *)PTR_DAT_04bb4790 + 0x30;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de7598;
LAB_01de7b38:
    *(long *)(DAT_05385870 + (long)DAT_05385868 * 8) = *(long *)PTR_DAT_04bb4798 + 0x30;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de75a0;
LAB_01de7b64:
    *(long *)(DAT_05385870 + (long)DAT_05385868 * 8) = *(long *)PTR_DAT_04bb47b8 + 0x30;
    DAT_05385868 = DAT_05385868 + 1;
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de75a8;
  }
  else {
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de7a58;
LAB_01de7568:
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de7a7c;
LAB_01de7570:
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de7aa0;
LAB_01de7578:
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de7ac4;
LAB_01de7580:
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de7ae8;
LAB_01de7588:
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de7b0c;
LAB_01de7590:
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de7b38;
LAB_01de7598:
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de7b64;
LAB_01de75a0:
    if (DAT_05385868 < DAT_0538586c) {
LAB_01de75a8:
      *(undefined **)(DAT_05385870 + (long)DAT_05385868 * 8) = PTR_DAT_04bbd408;
      DAT_05385868 = DAT_05385868 + 1;
    }
  }
  iVar4 = DAT_0538586c;
  iVar3 = DAT_05385868;
  puVar2 = PTR_DAT_04bbd3e8;
  puVar1 = PTR_FUN_04bbd3d8;
  *(undefined **)(PTR_DAT_04bbd3e8 + 0x10) = PTR_DAT_04bbd428 + 0x10;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  if (iVar3 < iVar4) {
    *(undefined **)(DAT_05385870 + (long)iVar3 * 8) = puVar2;
    DAT_05385868 = DAT_05385868 + 1;
    iVar4 = DAT_0538586c;
    iVar3 = DAT_05385868;
  }
  puVar2 = PTR_DAT_04bbd3f8;
  puVar1 = PTR_LAB_04bbd3e0;
  *(undefined **)(PTR_DAT_04bbd3f8 + 0x10) = PTR_DAT_04bbd430 + 0x10;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  if (iVar3 < iVar4) {
    *(undefined **)(DAT_05385870 + (long)iVar3 * 8) = puVar2;
    DAT_05385868 = DAT_05385868 + 1;
    iVar4 = DAT_0538586c;
    iVar3 = DAT_05385868;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de7630;
LAB_01de7bb0:
    *(undefined **)(DAT_05385870 + (long)iVar3 * 8) = PTR_DAT_04bb6328;
    DAT_05385868 = DAT_05385868 + 1;
    iVar4 = DAT_0538586c;
    iVar3 = DAT_05385868;
    if (DAT_0538586c <= DAT_05385868) goto LAB_01de7638;
LAB_01de7bd4:
    *(undefined **)(DAT_05385870 + (long)iVar3 * 8) = PTR_DAT_04bb5768;
    DAT_05385868 = DAT_05385868 + 1;
    iVar3 = DAT_05385868;
    if (DAT_05385868 < DAT_0538586c) goto LAB_01de7640;
  }
  else {
    if (iVar3 < iVar4) goto LAB_01de7bb0;
LAB_01de7630:
    if (iVar3 < iVar4) goto LAB_01de7bd4;
LAB_01de7638:
    if (iVar3 < iVar4) {
LAB_01de7640:
      *(undefined **)(DAT_05385870 + (long)iVar3 * 8) = PTR_DAT_04bb5780;
      DAT_05385868 = DAT_05385868 + 1;
    }
  }
  FUN_0218818c(&DAT_05385868);
  puVar2 = PTR_DAT_04bb5b28;
  puVar1 = PTR_LAB_04bb5b20;
  *(undefined **)(PTR_DAT_04bb5b28 + 0x10) = PTR_DAT_04bb5b38 + 0x10;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  if (DAT_05385868 < DAT_0538586c) {
    *(undefined **)(DAT_05385870 + (long)DAT_05385868 * 8) = puVar2;
    DAT_05385868 = DAT_05385868 + 1;
  }
  puVar1 = PTR_DAT_04bbe528;
  if (DAT_05385868 < DAT_0538586c) {
    *(undefined **)(DAT_05385870 + (long)DAT_05385868 * 8) = PTR_DAT_04bbe528;
    DAT_05385868 = DAT_05385868 + 1;
  }
  puVar2 = PTR_FUN_04bbe520;
  *(undefined **)(puVar1 + 0x10) = PTR_DAT_04bbe550 + 0x10;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  FUN_02a2d67c(*(undefined8 *)PTR_DAT_04bb26a8,&DAT_05385868);
  lVar5 = *(long *)PTR_DAT_04bc1368;
  if (*(long *)(lVar5 + 8) != lVar5) {
    lVar7 = (long)*(int *)(lVar5 + 0x14);
    plVar6 = (long *)(*(long *)(lVar5 + 8) - lVar7);
    do {
      (**(code **)(*plVar6 + 0x10))(plVar6,&DAT_05385868);
      plVar6 = (long *)(*(long *)((long)plVar6 + lVar7 + 8) - lVar7);
    } while (plVar6 != (long *)(lVar5 - lVar7));
  }
  puVar2 = PTR_DAT_04bc45e8;
  puVar1 = PTR_LAB_04bc45d8;
  *(undefined **)(PTR_DAT_04bc45e8 + 0x10) = PTR_DAT_04bc45f8 + 0x10;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  if (DAT_05385868 < DAT_0538586c) {
    *(undefined **)(DAT_05385870 + (long)DAT_05385868 * 8) = puVar2;
    DAT_05385868 = DAT_05385868 + 1;
  }
  iVar4 = DAT_0538586c;
  iVar3 = DAT_05385868;
  puVar2 = PTR_DAT_04bc45f0;
  puVar1 = PTR_LAB_04bc45e0;
  *(undefined **)(PTR_DAT_04bc45f0 + 0x10) = PTR_DAT_04bc4600 + 0x10;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  if (iVar3 < iVar4) {
    *(undefined **)(DAT_05385870 + (long)iVar3 * 8) = puVar2;
    iVar3 = DAT_05385868 + 1;
    iVar4 = DAT_0538586c;
    DAT_05385868 = iVar3;
  }
  if (iVar3 < iVar4) {
    *(undefined8 **)(DAT_05385870 + (long)iVar3 * 8) = &DAT_04cb5480;
    iVar3 = DAT_05385868 + 1;
    iVar4 = DAT_0538586c;
    DAT_05385868 = iVar3;
  }
  if ((*(long *)PTR_DAT_04bb5ab8 != 0) && (iVar3 < iVar4)) {
    *(long *)(DAT_05385870 + (long)iVar3 * 8) = *(long *)PTR_DAT_04bb5ab8;
    iVar3 = DAT_05385868 + 1;
    iVar4 = DAT_0538586c;
    DAT_05385868 = iVar3;
  }
  lVar5 = *(long *)PTR_DAT_04bb5ae8;
  if (lVar5 == 0) goto LAB_01de7868;
  if (iVar3 < iVar4) {
    *(long *)(DAT_05385870 + (long)iVar3 * 8) = lVar5;
    iVar3 = DAT_05385868 + 1;
    iVar4 = DAT_0538586c;
    DAT_05385868 = iVar3;
    if (DAT_0538586c <= iVar3) goto LAB_01de7848;
LAB_01de7c18:
    *(long *)(DAT_05385870 + (long)iVar3 * 8) = lVar5 + 0x30;
    iVar3 = DAT_05385868 + 1;
    iVar4 = DAT_0538586c;
    DAT_05385868 = iVar3;
    if (DAT_0538586c <= iVar3) goto LAB_01de7868;
  }
  else {
    if (iVar3 < iVar4) goto LAB_01de7c18;
LAB_01de7848:
    if (iVar4 <= iVar3) goto LAB_01de7868;
  }
  *(long *)(DAT_05385870 + (long)iVar3 * 8) = lVar5 + 0x60;
  iVar3 = DAT_05385868 + 1;
  iVar4 = DAT_0538586c;
  DAT_05385868 = iVar3;
LAB_01de7868:
  if (iVar3 < iVar4) {
    *(undefined8 **)(DAT_05385870 + (long)iVar3 * 8) = &DAT_04cadf28;
    DAT_05385868 = DAT_05385868 + 1;
  }
  return;
}

