
/* WARNING: Type propagation algorithm not settling */

void FUN_03774ff0(undefined4 param_1,long *******param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *******pppppppuVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long ******pppppplVar7;
  long *******ppppppplVar8;
  long ******pppppplVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long ******pppppplVar12;
  uint uVar13;
  uint uVar14;
  long *******ppppppplVar15;
  undefined4 uVar16;
  long *******local_828;
  long *******local_820;
  int local_818;
  undefined8 *******local_810;
  undefined8 *******pppppppuStack_808;
  int local_800;
  undefined8 *******local_7f8 [5];
  undefined8 *******local_7d0 [5];
  undefined8 *******local_7a8 [5];
  undefined8 *******local_780 [5];
  undefined8 *******local_758 [5];
  undefined8 *******local_730 [5];
  undefined8 *******local_708 [5];
  undefined8 *******local_6e0 [5];
  undefined8 *******local_6b8 [5];
  undefined8 *******local_690 [5];
  undefined8 *******local_668 [5];
  undefined8 *******local_640 [5];
  undefined8 *******local_618 [5];
  undefined8 *******local_5f0 [5];
  undefined8 *******local_5c8 [5];
  undefined8 *******local_5a0 [5];
  undefined8 *******local_578 [5];
  undefined8 *******local_550 [5];
  undefined8 *******local_528 [5];
  undefined8 *******local_500 [5];
  undefined8 *******local_4d8 [5];
  undefined8 *******local_4b0 [5];
  undefined8 *******local_488 [5];
  undefined8 *******local_460 [5];
  undefined8 *******local_438 [5];
  undefined8 *******local_410 [5];
  undefined8 *******local_3e8 [5];
  undefined8 *******local_3c0 [5];
  undefined8 *******local_398 [5];
  undefined8 *******local_370 [5];
  undefined8 *******local_348 [5];
  undefined8 *******local_320 [5];
  undefined8 *******local_2f8 [5];
  undefined8 *******local_2d0 [5];
  undefined8 *******local_2a8 [5];
  undefined8 *******local_280 [5];
  undefined8 *******local_258 [5];
  undefined8 *******local_230 [5];
  undefined8 *******local_208 [5];
  undefined8 *******local_1e0 [5];
  undefined8 *******local_1b8 [5];
  undefined8 *******local_190 [5];
  undefined8 ******local_168 [5];
  undefined8 *****local_140 [5];
  undefined8 ****local_118 [5];
  undefined8 ***local_f0 [5];
  undefined8 **local_c8 [5];
  undefined8 *local_a0 [5];
  undefined8 local_78 [5];
  
  puVar2 = PTR_DAT_04bb2720;
  uVar14 = *(uint *)(param_2 + 2);
  if (uVar14 == 0) {
    if (*(int *)(param_2 + 5) < 1) {
      return;
    }
    pppppplVar7 = param_2[3];
    if (pppppplVar7 != (long ******)0x0) {
      param_2[3] = (long ******)*pppppplVar7;
    }
    *pppppplVar7 = (long *****)(PTR_DAT_04bb2e18 + 0x10);
    *(undefined4 *)(pppppplVar7 + 1) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)((long)pppppplVar7 + 0xc) = *(undefined4 *)(param_3 + 0xc);
    puVar2 = PTR_DAT_04bb2010;
    *(undefined4 *)(pppppplVar7 + 2) = param_1;
    pppppplVar7[4] = (long *****)0x0;
    *pppppplVar7 = (long *****)(puVar2 + 0x10);
    pppppplVar9 = pppppplVar7 + 3;
    *pppppplVar9 = (long *****)0x0;
    pppppplVar12 = *param_2;
    *param_2 = pppppplVar9;
    pppppplVar7[4] = (long *****)param_2;
    *pppppplVar9 = (long *****)pppppplVar12;
    if (pppppplVar12 != (long ******)0x0) {
      pppppplVar12[1] = (long *****)pppppplVar9;
    }
    *(int *)(param_2 + 2) = *(int *)(param_2 + 2) + 1;
    return;
  }
  if (param_4 < uVar14) {
    param_4 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
    uVar13 = param_4 + 1;
    uVar1 = uVar13 & 3;
    ppppppplVar11 = param_2;
    if (2 < param_4) {
      uVar13 = uVar13 & 0xfffffffc;
      do {
        uVar13 = uVar13 - 4;
        ppppppplVar11 = (long *******)ppppppplVar11[1][1][1][1];
      } while (uVar13 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      ppppppplVar11 = (long *******)ppppppplVar11[1];
    }
  }
  else {
    ppppppplVar11 = (long *******)0x0;
  }
  local_818 = 0;
  local_828 = (long *******)&local_828;
  local_78[0] = 0;
  local_7f8[0] = local_7d0;
  local_7a8[0] = local_780;
  ppppppplVar10 = (long *******)0x0;
  if (ppppppplVar11 != (long *******)0x0) {
    ppppppplVar10 = ppppppplVar11 + -3;
  }
  local_758[0] = local_730;
  local_708[0] = local_6e0;
  local_6b8[0] = local_690;
  local_668[0] = local_640;
  local_7d0[0] = local_7a8;
  local_618[0] = local_5f0;
  local_5f0[0] = local_5c8;
  local_780[0] = local_758;
  local_5c8[0] = local_5a0;
  local_5a0[0] = local_578;
  local_730[0] = local_708;
  local_578[0] = local_550;
  local_550[0] = local_528;
  local_6e0[0] = local_6b8;
  local_528[0] = local_500;
  local_500[0] = local_4d8;
  local_690[0] = local_668;
  local_4d8[0] = local_4b0;
  local_4b0[0] = local_488;
  local_640[0] = local_618;
  local_488[0] = local_460;
  local_460[0] = local_438;
  local_438[0] = local_410;
  local_410[0] = local_3e8;
  local_3e8[0] = local_3c0;
  local_3c0[0] = local_398;
  local_398[0] = local_370;
  local_370[0] = local_348;
  local_348[0] = local_320;
  local_320[0] = local_2f8;
  local_2f8[0] = local_2d0;
  local_2d0[0] = local_2a8;
  local_2a8[0] = local_280;
  local_280[0] = local_258;
  local_258[0] = local_230;
  local_230[0] = local_208;
  local_208[0] = local_1e0;
  local_1e0[0] = local_1b8;
  local_1b8[0] = local_190;
  local_190[0] = local_168;
  local_168[0] = local_140;
  local_140[0] = local_118;
  local_118[0] = local_f0;
  local_f0[0] = local_c8;
  local_c8[0] = local_a0;
  local_a0[0] = local_78;
  local_810 = local_7f8;
  pppppppuStack_808 = local_7f8;
  local_800 = 0x31;
  local_820 = local_828;
  if ((((local_828 != param_2) && (0 < (int)uVar14)) && (param_2[1] != (long ******)0x0)) &&
     (ppppppplVar11 = (long *******)(param_2[1] + -3), ppppppplVar11 != (long *******)0x0)) {
    iVar4 = 0;
    if (0x30 < (int)uVar14) {
      uVar14 = 0x31;
    }
    do {
      pppppppuVar3 = local_810;
      if (iVar4 < local_800) {
        if (local_810 != (undefined8 *******)0x0) {
          local_810 = (undefined8 *******)*local_810;
        }
        *pppppppuVar3 = (undefined8 ******)(PTR_DAT_04bb2e18 + 0x10);
        *(undefined4 *)(pppppppuVar3 + 1) = *(undefined4 *)(ppppppplVar11 + 1);
        uVar16 = *(undefined4 *)((long)ppppppplVar11 + 0xc);
        *pppppppuVar3 = (undefined8 ******)(PTR_DAT_04bb2010 + 0x10);
        *(undefined4 *)((long)pppppppuVar3 + 0xc) = uVar16;
        uVar16 = *(undefined4 *)(ppppppplVar11 + 2);
        ppppppplVar15 = pppppppuVar3 + 3;
        *ppppppplVar15 = (long ******)0x0;
        *ppppppplVar15 = (long ******)local_828;
        pppppppuVar3[4] = &local_828;
        *(undefined4 *)(pppppppuVar3 + 2) = uVar16;
        if (local_828 != (long *******)0x0) {
          local_828[1] = (long ******)ppppppplVar15;
        }
        iVar4 = local_818 + 1;
        local_818 = iVar4;
        local_828 = ppppppplVar15;
      }
      if (((int)uVar14 < 2) || ((long *******)ppppppplVar11[4] == param_2)) break;
      ppppppplVar11 = (long *******)(ppppppplVar11[4] + -3);
      uVar14 = uVar14 - 1;
    } while (ppppppplVar11 != (long *******)0x0);
  }
  ppppppplVar11 = (long *******)&local_820;
  if (((*(long *)PTR_DAT_04bb5ce0 == 0) || (lVar6 = *(long *)PTR_DAT_04bb2720, lVar6 == 0)) ||
     (*(long *)(lVar6 + 0x330) == 0)) {
LAB_037754a4:
    iVar4 = *(int *)(param_2 + 2);
    if (local_800 <= local_818) {
LAB_037754b8:
      pppppplVar7 = *param_2;
      if (iVar4 < 1) {
        pppppplVar7 = (long ******)0x0;
      }
      ppppppplVar15 = (long *******)0x0;
      if (pppppplVar7 != (long ******)0x0) {
        ppppppplVar15 = (long *******)(pppppplVar7 + -3);
      }
      *(undefined4 *)(ppppppplVar15 + 1) = *(undefined4 *)(param_3 + 8);
      uVar16 = *(undefined4 *)(param_3 + 0xc);
      *(undefined4 *)(ppppppplVar15 + 2) = param_1;
      *(undefined4 *)((long)ppppppplVar15 + 0xc) = uVar16;
      if (ppppppplVar10 != ppppppplVar15) {
        ppppppplVar8 = ppppppplVar15 + 3;
        ppppppplVar10 = ppppppplVar10 + 3;
        if (*ppppppplVar8 != (long ******)0x0) {
          (*ppppppplVar8)[1] = (long *****)ppppppplVar15[4];
        }
        if (ppppppplVar15[4] != (long ******)0x0) {
          *ppppppplVar15[4] = (long *****)*ppppppplVar8;
        }
        *ppppppplVar8 = (long ******)0x0;
        ppppppplVar15[4] = (long ******)0x0;
        pppppplVar7 = *ppppppplVar10;
        *ppppppplVar10 = (long ******)ppppppplVar8;
        *ppppppplVar8 = pppppplVar7;
        ppppppplVar15[4] = (long ******)ppppppplVar10;
        if (pppppplVar7 != (long ******)0x0) {
          pppppplVar7[1] = (long *****)ppppppplVar8;
        }
      }
      goto LAB_03775528;
    }
  }
  else {
    puVar5 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
    iVar4 = FUN_006bd550(*puVar5,0);
    if ((((iVar4 != 0x758f7eaf) || (*(long *)puVar2 == 0)) ||
        (lVar6 = *(long *)(*(long *)puVar2 + 0x330), lVar6 == 0)) || (*(int *)(lVar6 + 0x244) == 0))
    goto LAB_037754a4;
    iVar4 = *(int *)(param_2 + 2);
    if (4 < local_818) goto LAB_037754b8;
  }
  if (iVar4 < *(int *)(param_2 + 5)) {
    pppppplVar7 = param_2[3];
    if (pppppplVar7 != (long ******)0x0) {
      param_2[3] = (long ******)*pppppplVar7;
    }
    *pppppplVar7 = (long *****)(PTR_DAT_04bb2e18 + 0x10);
    *(undefined4 *)(pppppplVar7 + 1) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)((long)pppppplVar7 + 0xc) = *(undefined4 *)(param_3 + 0xc);
    puVar2 = PTR_DAT_04bb2010;
    *(undefined4 *)(pppppplVar7 + 2) = param_1;
    pppppplVar7[4] = (long *****)0x0;
    *pppppplVar7 = (long *****)(puVar2 + 0x10);
    pppppplVar9 = pppppplVar7 + 3;
    *pppppplVar9 = (long *****)0x0;
    ppppppplVar10 = ppppppplVar10 + 3;
    pppppplVar12 = *ppppppplVar10;
    *ppppppplVar10 = pppppplVar9;
    pppppplVar7[4] = (long *****)ppppppplVar10;
    *pppppplVar9 = (long *****)pppppplVar12;
    if (pppppplVar12 != (long ******)0x0) {
      pppppplVar12[1] = (long *****)pppppplVar9;
    }
    *(int *)(param_2 + 2) = *(int *)(param_2 + 2) + 1;
  }
LAB_03775528:
  do {
    ppppppplVar10 = (long *******)*ppppppplVar11;
    ppppppplVar11 = ppppppplVar10 + 1;
  } while ((long ********)ppppppplVar10 != &local_828);
  return;
}

