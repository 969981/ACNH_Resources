
void FUN_00a9cffc(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  void *pvVar10;
  undefined8 *puVar11;
  long lVar12;
  
  *param_1 = (long)&PTR_FUN_04931e18;
  plVar1 = DAT_04da8a30;
  if (DAT_04da7d50 == param_1) {
    DAT_04da7d50 = (long *)0x0;
    plVar8 = DAT_04da8a30 + 0x480;
    DAT_04da8a30[0x480] = (long)&PTR_FUN_04933630;
    FUN_00ace190(plVar8);
    plVar1[0x480] = (long)&PTR_LAB_04933688;
    *PTR_DAT_04bb6490 = 1;
    puVar3 = PTR_DAT_04bb6498;
    pvVar10 = (void *)plVar1[0x49a];
    *(undefined8 *)PTR_DAT_04bb6498 = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
    puVar3 = PTR_DAT_04bb2698;
    plVar1[0x496] = 0;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x49a] = 0;
      *(undefined4 *)(plVar1 + 0x499) = 0;
    }
    pvVar10 = (void *)plVar1[0x4b7];
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x4b7] = 0;
      *(undefined4 *)(plVar1 + 0x4b6) = 0;
    }
    pvVar10 = (void *)plVar1[0x4ba];
    *(undefined4 *)(plVar1 + 0x4b8) = 0xffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x4ba] = 0;
      *(undefined4 *)(plVar1 + 0x4b9) = 0;
    }
    puVar6 = PTR_DAT_04bcb440;
    puVar11 = (undefined8 *)plVar1[0x482];
    plVar1[0x480] = (long)(PTR_DAT_04bcb440 + 0x10);
    if (puVar11 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x483] < 1) {
        iVar2 = (int)plVar1[0x483] + -1;
      }
      memset(puVar11,0,(long)iVar2);
      *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x481] + 0x18))(plVar1 + 0x481);
    uVar7 = FUN_006bd550(plVar1[0x482],0);
    *(undefined4 *)(plVar1 + 0x494) = uVar7;
    plVar1[0x495] = 0;
    plVar1[0x496] = 0;
    plVar1[0x497] = 0;
    plVar1[0x43c] = (long)&PTR_FUN_04933518;
    FUN_00acbac0(plVar1 + 0x43c);
    puVar4 = PTR_DAT_04bb6480;
    plVar1[0x43c] = (long)&PTR_LAB_04933570;
    puVar5 = PTR_DAT_04bb6488;
    pvVar10 = (void *)plVar1[0x456];
    plVar1[0x452] = 0;
    *puVar4 = 1;
    *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x456] = 0;
      *(undefined4 *)(plVar1 + 0x455) = 0;
    }
    pvVar10 = (void *)plVar1[0x473];
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x473] = 0;
      *(undefined4 *)(plVar1 + 0x472) = 0;
    }
    pvVar10 = (void *)plVar1[0x476];
    *(undefined4 *)(plVar1 + 0x474) = 0xffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x476] = 0;
      *(undefined4 *)(plVar1 + 0x475) = 0;
    }
    puVar11 = (undefined8 *)plVar1[0x43e];
    plVar1[0x43c] = (long)(puVar6 + 0x10);
    if (puVar11 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x43f] < 1) {
        iVar2 = (int)plVar1[0x43f] + -1;
      }
      memset(puVar11,0,(long)iVar2);
      *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x43d] + 0x18))(plVar1 + 0x43d);
    uVar7 = FUN_006bd550(plVar1[0x43e],0);
    *(undefined4 *)(plVar1 + 0x450) = uVar7;
    plVar1[0x451] = 0;
    plVar1[0x452] = 0;
    plVar1[0x453] = 0;
    plVar1[0x3f8] = (long)&PTR_FUN_04933400;
    FUN_00ac93e0(plVar1 + 0x3f8);
    puVar4 = PTR_DAT_04bb6470;
    plVar1[0x3f8] = (long)&PTR_LAB_04933458;
    *puVar4 = 1;
    puVar4 = PTR_DAT_04bb6478;
    pvVar10 = (void *)plVar1[0x412];
    plVar1[0x40e] = 0;
    *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x412] = 0;
      *(undefined4 *)(plVar1 + 0x411) = 0;
    }
    pvVar10 = (void *)plVar1[0x42f];
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x42f] = 0;
      *(undefined4 *)(plVar1 + 0x42e) = 0;
    }
    pvVar10 = (void *)plVar1[0x432];
    *(undefined4 *)(plVar1 + 0x430) = 0xffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x432] = 0;
      *(undefined4 *)(plVar1 + 0x431) = 0;
    }
    puVar11 = (undefined8 *)plVar1[0x3fa];
    plVar1[0x3f8] = (long)(puVar6 + 0x10);
    if (puVar11 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x3fb] < 1) {
        iVar2 = (int)plVar1[0x3fb] + -1;
      }
      memset(puVar11,0,(long)iVar2);
      *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x3f9] + 0x18))(plVar1 + 0x3f9);
    uVar7 = FUN_006bd550(plVar1[0x3fa],0);
    *(undefined4 *)(plVar1 + 0x40c) = uVar7;
    plVar1[0x40d] = 0;
    plVar1[0x40e] = 0;
    plVar1[0x40f] = 0;
    plVar1[0x3b4] = (long)&PTR_FUN_049332e8;
    FUN_00ac6d00(plVar1 + 0x3b4);
    plVar1[0x3b4] = (long)&PTR_LAB_04933340;
    *PTR_DAT_04bb6460 = 1;
    puVar4 = PTR_DAT_04bb6468;
    pvVar10 = (void *)plVar1[0x3ce];
    plVar1[0x3ca] = 0;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x3ce] = 0;
      *(undefined4 *)(plVar1 + 0x3cd) = 0;
    }
    pvVar10 = (void *)plVar1[0x3eb];
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x3eb] = 0;
      *(undefined4 *)(plVar1 + 0x3ea) = 0;
    }
    pvVar10 = (void *)plVar1[0x3ee];
    *(undefined4 *)(plVar1 + 0x3ec) = 0xffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x3ee] = 0;
      *(undefined4 *)(plVar1 + 0x3ed) = 0;
    }
    puVar11 = (undefined8 *)plVar1[0x3b6];
    plVar1[0x3b4] = (long)(puVar6 + 0x10);
    if (puVar11 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x3b7] < 1) {
        iVar2 = (int)plVar1[0x3b7] + -1;
      }
      memset(puVar11,0,(long)iVar2);
      *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x3b5] + 0x18))(plVar1 + 0x3b5);
    uVar7 = FUN_006bd550(plVar1[0x3b6],0);
    *(undefined4 *)(plVar1 + 0x3c8) = uVar7;
    plVar1[0x3c9] = 0;
    plVar1[0x3ca] = 0;
    plVar1[0x3cb] = 0;
    plVar1[0x370] = (long)&PTR_FUN_04932f20;
    FUN_00ac3840(plVar1 + 0x370);
    FUN_00ac4198(plVar1 + 0x370);
    plVar1[0x32c] = (long)&PTR_FUN_04932e08;
    FUN_00ac05c0(plVar1 + 0x32c);
    FUN_00ac0f18(plVar1 + 0x32c);
    plVar1[0x2e8] = (long)&PTR_FUN_04932cf0;
    FUN_00abe030(plVar1 + 0x2e8);
    plVar1[0x2e8] = (long)&PTR_LAB_04932d48;
    *PTR_DAT_04bb6400 = 1;
    puVar4 = PTR_DAT_04bb6408;
    pvVar10 = (void *)plVar1[0x302];
    plVar1[0x2fe] = 0;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x302] = 0;
      *(undefined4 *)(plVar1 + 0x301) = 0;
    }
    pvVar10 = (void *)plVar1[799];
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[799] = 0;
      *(undefined4 *)(plVar1 + 0x31e) = 0;
    }
    pvVar10 = (void *)plVar1[0x322];
    *(undefined4 *)(plVar1 + 800) = 0xffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x322] = 0;
      *(undefined4 *)(plVar1 + 0x321) = 0;
    }
    puVar11 = (undefined8 *)plVar1[0x2ea];
    plVar1[0x2e8] = (long)(puVar6 + 0x10);
    if (puVar11 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x2eb] < 1) {
        iVar2 = (int)plVar1[0x2eb] + -1;
      }
      memset(puVar11,0,(long)iVar2);
      *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x2e9] + 0x18))(plVar1 + 0x2e9);
    uVar7 = FUN_006bd550(plVar1[0x2ea],0);
    *(undefined4 *)(plVar1 + 0x2fc) = uVar7;
    plVar1[0x2fd] = 0;
    plVar1[0x2fe] = 0;
    plVar1[0x2ff] = 0;
    plVar1[0x2a4] = (long)&PTR_FUN_04932bd8;
    FUN_00abb870(plVar1 + 0x2a4);
    plVar1[0x2a4] = (long)&PTR_LAB_04932c30;
    *PTR_DAT_04bb63f0 = 1;
    puVar4 = PTR_DAT_04bb63f8;
    pvVar10 = (void *)plVar1[0x2be];
    plVar1[0x2ba] = 0;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x2be] = 0;
      *(undefined4 *)(plVar1 + 0x2bd) = 0;
    }
    pvVar10 = (void *)plVar1[0x2db];
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x2db] = 0;
      *(undefined4 *)(plVar1 + 0x2da) = 0;
    }
    pvVar10 = (void *)plVar1[0x2de];
    *(undefined4 *)(plVar1 + 0x2dc) = 0xffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x2de] = 0;
      *(undefined4 *)(plVar1 + 0x2dd) = 0;
    }
    puVar11 = (undefined8 *)plVar1[0x2a6];
    plVar1[0x2a4] = (long)(puVar6 + 0x10);
    if (puVar11 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x2a7] < 1) {
        iVar2 = (int)plVar1[0x2a7] + -1;
      }
      memset(puVar11,0,(long)iVar2);
      *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x2a5] + 0x18))(plVar1 + 0x2a5);
    uVar7 = FUN_006bd550(plVar1[0x2a6],0);
    *(undefined4 *)(plVar1 + 0x2b8) = uVar7;
    plVar1[0x2b9] = 0;
    plVar1[0x2ba] = 0;
    plVar1[699] = 0;
    plVar1[0x260] = (long)&PTR_FUN_04932ac0;
    FUN_00ab91a0(plVar1 + 0x260);
    puVar4 = PTR_DAT_04bb63d8;
    plVar1[0x260] = (long)&PTR_LAB_04932b18;
    puVar5 = PTR_DAT_04bb63e0;
    pvVar10 = (void *)plVar1[0x27a];
    plVar1[0x276] = 0;
    *puVar4 = 1;
    *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x27a] = 0;
      *(undefined4 *)(plVar1 + 0x279) = 0;
    }
    pvVar10 = (void *)plVar1[0x297];
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x297] = 0;
      *(undefined4 *)(plVar1 + 0x296) = 0;
    }
    pvVar10 = (void *)plVar1[0x29a];
    *(undefined4 *)(plVar1 + 0x298) = 0xffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x29a] = 0;
      *(undefined4 *)(plVar1 + 0x299) = 0;
    }
    puVar11 = (undefined8 *)plVar1[0x262];
    plVar1[0x260] = (long)(puVar6 + 0x10);
    if (puVar11 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x263] < 1) {
        iVar2 = (int)plVar1[0x263] + -1;
      }
      memset(puVar11,0,(long)iVar2);
      *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x261] + 0x18))(plVar1 + 0x261);
    uVar7 = FUN_006bd550(plVar1[0x262],0);
    *(undefined4 *)(plVar1 + 0x274) = uVar7;
    plVar1[0x275] = 0;
    plVar1[0x276] = 0;
    plVar1[0x277] = 0;
    plVar1[0x21c] = (long)&PTR_FUN_049329a8;
    FUN_00ab6ac0(plVar1 + 0x21c);
    plVar1[0x21c] = (long)&PTR_LAB_04932a00;
    *PTR_DAT_04bb63c8 = 1;
    puVar4 = PTR_DAT_04bb63d0;
    pvVar10 = (void *)plVar1[0x236];
    plVar1[0x232] = 0;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *(undefined4 *)(puVar4 + 0x18) = 0xffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x236] = 0;
      *(undefined4 *)(plVar1 + 0x235) = 0;
    }
    pvVar10 = (void *)plVar1[0x253];
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x253] = 0;
      *(undefined4 *)(plVar1 + 0x252) = 0;
    }
    pvVar10 = (void *)plVar1[0x256];
    *(undefined4 *)(plVar1 + 0x254) = 0xffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x256] = 0;
      *(undefined4 *)(plVar1 + 0x255) = 0;
    }
    puVar11 = (undefined8 *)plVar1[0x21e];
    plVar1[0x21c] = (long)(puVar6 + 0x10);
    if (puVar11 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x21f] < 1) {
        iVar2 = (int)plVar1[0x21f] + -1;
      }
      memset(puVar11,0,(long)iVar2);
      *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x21d] + 0x18))(plVar1 + 0x21d);
    uVar7 = FUN_006bd550(plVar1[0x21e],0);
    *(undefined4 *)(plVar1 + 0x230) = uVar7;
    plVar1[0x231] = 0;
    plVar1[0x232] = 0;
    plVar1[0x233] = 0;
    plVar1[0x1d8] = (long)&PTR_FUN_04932890;
    FUN_00ab43e0(plVar1 + 0x1d8);
    puVar4 = PTR_DAT_04bb63b8;
    plVar1[0x1d8] = (long)&PTR_LAB_049328e8;
    puVar5 = PTR_DAT_04bb63c0;
    pvVar10 = (void *)plVar1[0x1f2];
    plVar1[0x1ee] = 0;
    *puVar4 = 1;
    *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x1f2] = 0;
      *(undefined4 *)(plVar1 + 0x1f1) = 0;
    }
    pvVar10 = (void *)plVar1[0x20f];
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x20f] = 0;
      *(undefined4 *)(plVar1 + 0x20e) = 0;
    }
    pvVar10 = (void *)plVar1[0x212];
    *(undefined4 *)(plVar1 + 0x210) = 0xffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x212] = 0;
      *(undefined4 *)(plVar1 + 0x211) = 0;
    }
    puVar11 = (undefined8 *)plVar1[0x1da];
    plVar1[0x1d8] = (long)(puVar6 + 0x10);
    if (puVar11 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x1db] < 1) {
        iVar2 = (int)plVar1[0x1db] + -1;
      }
      memset(puVar11,0,(long)iVar2);
      *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x1d9] + 0x18))(plVar1 + 0x1d9);
    uVar7 = FUN_006bd550(plVar1[0x1da],0);
    *(undefined4 *)(plVar1 + 0x1ec) = uVar7;
    plVar1[0x1ed] = 0;
    plVar1[0x1ee] = 0;
    plVar1[0x1ef] = 0;
    plVar1[0x194] = (long)&PTR_LAB_04932778;
    FUN_00ab1d00(plVar1 + 0x194);
    puVar4 = PTR_DAT_04bb63a0;
    plVar1[0x194] = (long)&PTR_LAB_049327d0;
    *puVar4 = 1;
    puVar4 = PTR_DAT_04bb63a8;
    pvVar10 = (void *)plVar1[0x1ae];
    plVar1[0x1aa] = 0;
    *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x1ae] = 0;
      *(undefined4 *)(plVar1 + 0x1ad) = 0;
    }
    pvVar10 = (void *)plVar1[0x1cb];
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x1cb] = 0;
      *(undefined4 *)(plVar1 + 0x1ca) = 0;
    }
    pvVar10 = (void *)plVar1[0x1ce];
    *(undefined4 *)(plVar1 + 0x1cc) = 0xffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x1ce] = 0;
      *(undefined4 *)(plVar1 + 0x1cd) = 0;
    }
    puVar11 = (undefined8 *)plVar1[0x196];
    plVar1[0x194] = (long)(puVar6 + 0x10);
    if (puVar11 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x197] < 1) {
        iVar2 = (int)plVar1[0x197] + -1;
      }
      memset(puVar11,0,(long)iVar2);
      *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x195] + 0x18))(plVar1 + 0x195);
    uVar7 = FUN_006bd550(plVar1[0x196],0);
    pvVar10 = (void *)plVar1[400];
    *(undefined4 *)(plVar1 + 0x1a8) = uVar7;
    plVar1[0x1a9] = 0;
    plVar1[0x1aa] = 0;
    plVar1[0x1ab] = 0;
    plVar1[0x154] = (long)&PTR_FUN_04932720;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[400] = 0;
      *(undefined4 *)(plVar1 + 399) = 0;
    }
    *(undefined4 *)(plVar1 + 0x193) = 0;
    *(undefined1 *)((long)plVar1 + 0xc9c) = 0;
    FUN_00aad1c8(plVar1 + 0x154);
    plVar1[0x154] = (long)&PTR_LAB_049322f0;
    FUN_00aad1c8(plVar1 + 0x154);
    puVar11 = (undefined8 *)plVar1[0x156];
    plVar1[0x154] = (long)(puVar6 + 0x10);
    if (puVar11 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x157] < 1) {
        iVar2 = (int)plVar1[0x157] + -1;
      }
      memset(puVar11,0,(long)iVar2);
      *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x155] + 0x18))(plVar1 + 0x155);
    uVar7 = FUN_006bd550(plVar1[0x156],0);
    *(undefined4 *)(plVar1 + 0x168) = uVar7;
    plVar1[0x169] = 0;
    plVar1[0x16a] = 0;
    plVar1[0x16b] = 0;
    plVar1[0x110] = (long)&PTR_FUN_04932298;
    if (plVar1[0x14c] != 0) {
      pvVar10 = (void *)(plVar1[0x14c] + -8);
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x14c] = 0;
      *(undefined4 *)(plVar1 + 0x14b) = 0;
    }
    pvVar10 = (void *)plVar1[0x14e];
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(puVar3,*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x14d] = 0;
      plVar1[0x14e] = 0;
    }
    *(undefined1 *)((long)plVar1 + 0xa79) = 0;
    FUN_00aad1c8(plVar1 + 0x110);
    plVar1[0x110] = (long)&PTR_LAB_049322f0;
    FUN_00aad1c8(plVar1 + 0x110);
    puVar11 = (undefined8 *)plVar1[0x112];
    plVar1[0x110] = (long)(puVar6 + 0x10);
    if (puVar11 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x113] < 1) {
        iVar2 = (int)plVar1[0x113] + -1;
      }
      memset(puVar11,0,(long)iVar2);
      *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x111] + 0x18))(plVar1 + 0x111);
    uVar7 = FUN_006bd550(plVar1[0x112],0);
    *(undefined4 *)(plVar1 + 0x124) = uVar7;
    plVar1[0x125] = 0;
    plVar1[0x126] = 0;
    plVar1[0x127] = 0;
    plVar1[0xcc] = (long)&PTR_FUN_04932180;
    FUN_00aaa1f0(plVar1 + 0xcc);
    plVar1[0xcc] = (long)&PTR_LAB_049321d8;
    *PTR_DAT_04bb6378 = 1;
    puVar4 = PTR_DAT_04bb6380;
    pvVar10 = (void *)plVar1[0xe6];
    plVar1[0xe2] = 0;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0xe6] = 0;
      *(undefined4 *)(plVar1 + 0xe5) = 0;
    }
    pvVar10 = (void *)plVar1[0x103];
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x103] = 0;
      *(undefined4 *)(plVar1 + 0x102) = 0;
    }
    pvVar10 = (void *)plVar1[0x106];
    *(undefined4 *)(plVar1 + 0x104) = 0xffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x106] = 0;
      *(undefined4 *)(plVar1 + 0x105) = 0;
    }
    puVar11 = (undefined8 *)plVar1[0xce];
    plVar1[0xcc] = (long)(puVar6 + 0x10);
    if (puVar11 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0xcf] < 1) {
        iVar2 = (int)plVar1[0xcf] + -1;
      }
      memset(puVar11,0,(long)iVar2);
      *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0xcd] + 0x18))(plVar1 + 0xcd);
    uVar7 = FUN_006bd550(plVar1[0xce],0);
    *(undefined4 *)(plVar1 + 0xe0) = uVar7;
    plVar1[0xe1] = 0;
    plVar1[0xe2] = 0;
    plVar1[0xe3] = 0;
    plVar1[0x88] = (long)&PTR_FUN_04932068;
    FUN_00aa7a20(plVar1 + 0x88);
    plVar1[0x88] = (long)&PTR_LAB_049320c0;
    *PTR_DAT_04bb6368 = 1;
    puVar4 = PTR_DAT_04bb6370;
    pvVar10 = (void *)plVar1[0xa2];
    plVar1[0x9e] = 0;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *(undefined4 *)(puVar4 + 0x18) = 0xffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0xa2] = 0;
      *(undefined4 *)(plVar1 + 0xa1) = 0;
    }
    pvVar10 = (void *)plVar1[0xbf];
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0xbf] = 0;
      *(undefined4 *)(plVar1 + 0xbe) = 0;
    }
    pvVar10 = (void *)plVar1[0xc2];
    *(undefined4 *)(plVar1 + 0xc0) = 0xffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0xc2] = 0;
      *(undefined4 *)(plVar1 + 0xc1) = 0;
    }
    puVar11 = (undefined8 *)plVar1[0x8a];
    plVar1[0x88] = (long)(puVar6 + 0x10);
    if (puVar11 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x8b] < 1) {
        iVar2 = (int)plVar1[0x8b] + -1;
      }
      memset(puVar11,0,(long)iVar2);
      *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x89] + 0x18))(plVar1 + 0x89);
    uVar7 = FUN_006bd550(plVar1[0x8a],0);
    *(undefined4 *)(plVar1 + 0x9c) = uVar7;
    plVar1[0x9d] = 0;
    plVar1[0x9e] = 0;
    plVar1[0x9f] = 0;
    plVar1[0x44] = (long)&PTR_FUN_04931f50;
    FUN_00aa5330(plVar1 + 0x44);
    puVar4 = PTR_DAT_04bb6358;
    plVar1[0x44] = (long)&PTR_LAB_04931fa8;
    *puVar4 = 1;
    puVar4 = PTR_DAT_04bb6360;
    pvVar10 = (void *)plVar1[0x5e];
    plVar1[0x5a] = 0;
    *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x5e] = 0;
      *(undefined4 *)(plVar1 + 0x5d) = 0;
    }
    pvVar10 = (void *)plVar1[0x7b];
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x7b] = 0;
      *(undefined4 *)(plVar1 + 0x7a) = 0;
    }
    pvVar10 = (void *)plVar1[0x7e];
    *(undefined4 *)(plVar1 + 0x7c) = 0xffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x7e] = 0;
      *(undefined4 *)(plVar1 + 0x7d) = 0;
    }
    puVar11 = (undefined8 *)plVar1[0x46];
    plVar1[0x44] = (long)(puVar6 + 0x10);
    if (puVar11 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[0x47] < 1) {
        iVar2 = (int)plVar1[0x47] + -1;
      }
      memset(puVar11,0,(long)iVar2);
      *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[0x45] + 0x18))(plVar1 + 0x45);
    uVar7 = FUN_006bd550(plVar1[0x46],0);
    *(undefined4 *)(plVar1 + 0x58) = uVar7;
    plVar1[0x59] = 0;
    plVar1[0x5a] = 0;
    plVar1[0x5b] = 0;
    *plVar1 = (long)&PTR_FUN_04931e38;
    FUN_00aa2c40(plVar1);
    puVar4 = PTR_DAT_04bb6340;
    *plVar1 = (long)&PTR_LAB_04931e90;
    *puVar4 = 1;
    puVar4 = PTR_DAT_04bb6348;
    pvVar10 = (void *)plVar1[0x1a];
    plVar1[0x16] = 0;
    *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)puVar4 = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x1a] = 0;
      *(undefined4 *)(plVar1 + 0x19) = 0;
    }
    pvVar10 = (void *)plVar1[0x37];
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x37] = 0;
      *(undefined4 *)(plVar1 + 0x36) = 0;
    }
    pvVar10 = (void *)plVar1[0x3a];
    *(undefined4 *)(plVar1 + 0x38) = 0xffffffff;
    if (pvVar10 != (void *)0x0) {
      if (*(long *)puVar3 == 0) {
        free(pvVar10);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar10);
        }
      }
      plVar1[0x3a] = 0;
      *(undefined4 *)(plVar1 + 0x39) = 0;
    }
    puVar11 = (undefined8 *)plVar1[2];
    *plVar1 = (long)(puVar6 + 0x10);
    if (puVar11 != &DAT_0407ebb1) {
      iVar2 = 0;
      if ((int)plVar1[3] < 1) {
        iVar2 = (int)plVar1[3] + -1;
      }
      memset(puVar11,0,(long)iVar2);
      *(undefined1 *)((long)puVar11 + (long)iVar2) = 0;
    }
    (**(code **)(plVar1[1] + 0x18))(plVar1 + 1);
    uVar7 = FUN_006bd550(plVar1[2],0);
    *(undefined4 *)(plVar1 + 0x14) = uVar7;
    plVar1[0x17] = 0;
    DAT_04da8a30 = (long *)0x0;
    plVar1[0x15] = 0;
    plVar1[0x16] = 0;
  }
  lVar9 = param_1[1];
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar9 != 0) {
    if (lVar9 == 1) {
      return;
    }
    if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = lVar9 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + -1;
    if (lVar12 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar12 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

