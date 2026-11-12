
uint FUN_0068f1e0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined **local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  FUN_0068f470(param_3);
  pcStack_80 = (code *)*param_4;
  local_78 = param_4[1];
  uStack_70 = param_4[2];
  local_68 = param_4[3];
  ppuVar11 = &PTR_LAB_048f66b8;
  local_88 = &PTR_LAB_048f66b8;
  puVar3 = (undefined8 *)(*pcStack_80)(8,0x10);
  plVar14 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar14 == plVar1) {
    iVar15 = 0;
LAB_0068f3b4:
    lVar13 = (*(code *)ppuVar11[2])(&local_88,(long)(iVar15 * 0x30),0x10);
    local_a8 = *param_4;
    uStack_a0 = param_4[1];
    local_98 = param_4[2];
    uStack_90 = param_4[3];
    uVar2 = FUN_0068e610(param_1,param_2,puVar3,puVar3 + iVar15,param_3,&local_a8,lVar13,
                         iVar15 * 0x30);
    if ((lVar13 != 0) && ((uVar2 & 1) == 0)) {
      (*(code *)local_88[3])(&local_88,lVar13);
    }
    if (puVar3 != (undefined8 *)0x0) {
      (*(code *)local_88[3])(&local_88,puVar3);
    }
    return uVar2 & 1;
  }
  iVar15 = 0;
  iVar16 = 1;
  lVar13 = *plVar14;
  plVar5 = (long *)*param_1;
  if (plVar5 != plVar14) goto LAB_0068f2a0;
LAB_0068f2b8:
  do {
    if (iVar16 <= iVar15) {
      iVar16 = iVar15 * 2 + 2;
      puVar4 = (undefined8 *)(*(code *)local_88[2])(&local_88,(long)(iVar16 * 8),0x10);
      if (iVar15 != 0) {
        uVar10 = (long)iVar15 & 7;
        puVar7 = puVar4;
        puVar9 = puVar3;
        if (uVar10 != 0) {
          puVar6 = puVar4;
          puVar8 = puVar3;
          do {
            puVar9 = puVar8 + 1;
            uVar10 = uVar10 - 1;
            puVar7 = puVar6 + 1;
            *puVar6 = *puVar8;
            puVar6 = puVar7;
            puVar8 = puVar9;
          } while (uVar10 != 0);
        }
        if (6 < ((long)iVar15 - 1U & 0x1fffffffffffffff)) {
          do {
            *puVar7 = *puVar9;
            puVar7[1] = puVar9[1];
            puVar7[2] = puVar9[2];
            puVar7[3] = puVar9[3];
            puVar7[4] = puVar9[4];
            puVar7[5] = puVar9[5];
            puVar7[6] = puVar9[6];
            puVar6 = puVar9 + 7;
            puVar9 = puVar9 + 8;
            puVar7[7] = *puVar6;
            puVar7 = puVar7 + 8;
          } while (puVar9 != puVar3 + iVar15);
        }
      }
      if (puVar3 != (undefined8 *)0x0) {
        (*(code *)local_88[3])(&local_88,puVar3);
      }
      puVar3 = puVar4;
    }
    lVar12 = (long)iVar15;
    iVar15 = iVar15 + 1;
    puVar3[lVar12] = lVar13;
    while( true ) {
      plVar14 = plVar14 + 1;
      if (plVar14 == plVar1) {
        ppuVar11 = local_88;
        goto LAB_0068f3b4;
      }
      lVar13 = *plVar14;
      plVar5 = (long *)*param_1;
      if (plVar5 == plVar14) break;
LAB_0068f2a0:
      while (*plVar5 != lVar13) {
        plVar5 = plVar5 + 1;
        if (plVar5 == plVar14) goto LAB_0068f2b8;
      }
    }
  } while( true );
}

