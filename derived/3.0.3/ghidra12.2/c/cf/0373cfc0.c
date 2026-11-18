
undefined * FUN_0373cfc0(long param_1)

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
  
  puVar8 = *(uint **)(param_1 + 8);
  if (puVar8 == (uint *)0x0) {
    return PTR_DAT_04c4b8d0;
  }
  uVar4 = *puVar8;
  if (uVar4 == 0) {
LAB_0373d0a8:
    puVar7 = (undefined *)0x0;
LAB_0373d0ac:
    puVar3 = PTR_DAT_04c4b8c8;
    if (puVar7 != (undefined *)0x0) {
      puVar3 = puVar7;
    }
    return puVar3;
  }
  cVar9 = DAT_05abbe88;
  do {
    if (cVar9 == '\0') {
      DAT_05abbe8c = -1;
      cVar9 = '\x01';
      uVar4 = *puVar8;
      DAT_05abbe88 = '\x01';
    }
    else {
      if (-1 < DAT_05abbe8c) {
        puVar7 = (undefined *)((ulong)DAT_05abbe8c._4_4_ + (long)puVar8);
        goto LAB_0373d0ac;
      }
      if (DAT_05abbe8c._4_4_ != 0xffffffff) goto LAB_0373d0a8;
    }
    puVar5 = (uint *)(ulong)uVar4;
    puVar7 = (undefined *)0x0;
    if ((puVar5 == (uint *)0x0) || (puVar7 = (undefined *)0x0, puVar8 == puVar5)) goto LAB_0373d0ac;
    lVar2 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar5)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar8 + (lVar2 - (long)puVar5);
    puVar7 = (undefined *)0x0;
    if (lVar2 == 0) goto LAB_0373d0ac;
    uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar5));
    DAT_05abbe8c = CONCAT44(0xfffffffe,(undefined4)DAT_05abbe8c);
    if (uVar10 == 0) goto LAB_0373d0a8;
    piVar6 = (int *)(lVar2 + 4);
    while (piVar6[-1] != -0x2304ad18) {
      piVar6 = piVar6 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_0373d0a8;
    }
    iVar1 = 0;
    if (*piVar6 != -1) {
      iVar1 = *piVar6;
    }
    DAT_05abbe8c = CONCAT44(iVar1,(undefined4)DAT_05abbe8c);
    uVar4 = *puVar8;
    if (uVar4 == 0) goto LAB_0373d0a8;
  } while( true );
}

