
void FUN_00409eb0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  
  lVar6 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    FUN_0040a368(param_1);
                    /* WARNING: Does not return */
    pcVar4 = (code *)UndefinedInstructionException(0,0x40a058);
    (*pcVar4)();
  }
  lVar5 = param_1[2] - *param_1 >> 3;
  uVar8 = lVar5 * 0x5555555555555556;
  if (uVar8 <= uVar1) {
    uVar8 = uVar1;
  }
  if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
    uVar8 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar8 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_00187df4(uVar8 * 0x18);
  }
  puVar13 = (undefined8 *)(lVar5 + lVar6 * 8);
  lVar5 = lVar5 + uVar8 * 0x18;
  puVar13[2] = 0;
  puVar13[1] = 0;
  *puVar13 = puVar13 + 1;
  FUN_0040a060(puVar13,*param_2,param_2 + 1);
  lVar6 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 == lVar6) {
    *param_1 = (long)puVar13;
    param_1[1] = (long)(puVar13 + 3);
    param_1[2] = lVar5;
  }
  else {
    lVar2 = 0;
    do {
      while( true ) {
        lVar7 = lVar2;
        lVar2 = lVar3 + lVar7;
        *(undefined8 *)((long)puVar13 + lVar7 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
        plVar9 = (long *)(lVar2 + -0x10);
        lVar11 = *plVar9;
        plVar10 = (long *)((long)puVar13 + lVar7 + -0x10);
        *plVar10 = lVar11;
        lVar12 = *(long *)(lVar2 + -8);
        *(long *)((long)puVar13 + lVar7 + -8) = lVar12;
        if (lVar12 != 0) break;
        *(long **)((long)puVar13 + lVar7 + -0x18) = plVar10;
        lVar2 = lVar7 + -0x18;
        if (lVar3 + lVar7 + -0x18 == lVar6) goto LAB_00409fe0;
      }
      *(long **)(lVar11 + 0x10) = plVar10;
      *(long **)(lVar2 + -0x18) = plVar9;
      *plVar9 = 0;
      *(undefined8 *)(lVar2 + -8) = 0;
      lVar2 = lVar7 + -0x18;
    } while (lVar3 + lVar7 + -0x18 != lVar6);
LAB_00409fe0:
    lVar3 = *param_1;
    lVar6 = param_1[1];
    *param_1 = (long)puVar13 + lVar7 + -0x18;
    param_1[1] = (long)(puVar13 + 3);
    param_1[2] = lVar5;
    while (lVar6 != lVar3) {
      puVar13 = (undefined8 *)(lVar6 + -0x10);
      lVar6 = lVar6 + -0x18;
      FUN_00404b48(lVar6,*puVar13);
    }
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_00187e4c(lVar3);
  return;
}

