
undefined * FUN_00981840(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  undefined *puVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  
  uVar4 = (param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0x600);
  if ((*(uint *)(param_1 + 0x5e0) <= uVar4) ||
     (puVar8 = *(uint **)(*(long *)(param_1 + 0x5e8) + (long)(int)uVar4 * 8), puVar8 == (uint *)0x0)
     ) {
    return (undefined *)0x0;
  }
  uVar4 = *puVar8;
  if (uVar4 == 0) {
LAB_00981934:
    puVar7 = (undefined *)0x0;
LAB_00981938:
    puVar3 = PTR_DAT_04c47db8;
    if (puVar7 != (undefined *)0x0) {
      puVar3 = puVar7;
    }
    return puVar3;
  }
  cVar9 = DAT_04cfabc8;
  do {
    if (cVar9 == '\0') {
      DAT_04cfabcc = -1;
      cVar9 = '\x01';
      uVar4 = *puVar8;
      DAT_04cfabc8 = '\x01';
    }
    else {
      if (-1 < DAT_04cfabcc) {
        puVar7 = (undefined *)((ulong)DAT_04cfabcc._4_4_ + (long)puVar8);
        goto LAB_00981938;
      }
      if (DAT_04cfabcc._4_4_ != 0xffffffff) goto LAB_00981934;
    }
    puVar5 = (uint *)(ulong)uVar4;
    puVar7 = (undefined *)0x0;
    if ((puVar5 == (uint *)0x0) || (puVar7 = (undefined *)0x0, puVar8 == puVar5)) goto LAB_00981938;
    lVar2 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar5)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar8 + (lVar2 - (long)puVar5);
    puVar7 = (undefined *)0x0;
    if (lVar2 == 0) goto LAB_00981938;
    uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar5));
    DAT_04cfabcc = CONCAT44(0xfffffffe,(undefined4)DAT_04cfabcc);
    if (uVar10 == 0) goto LAB_00981934;
    piVar6 = (int *)(lVar2 + 4);
    while (piVar6[-1] != -0x68852032) {
      piVar6 = piVar6 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_00981934;
    }
    iVar1 = 0;
    if (*piVar6 != -1) {
      iVar1 = *piVar6;
    }
    DAT_04cfabcc = CONCAT44(iVar1,(undefined4)DAT_04cfabcc);
    uVar4 = *puVar8;
    if (uVar4 == 0) goto LAB_00981934;
  } while( true );
}

