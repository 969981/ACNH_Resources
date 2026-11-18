
/* WARNING: Removing unreachable block (ram,0x03299fb8) */
/* WARNING: Removing unreachable block (ram,0x03299d1c) */
/* WARNING: Removing unreachable block (ram,0x0329a250) */

void FUN_03299ce0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  MutexType *pMVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  void *__ptr;
  int local_11c;
  undefined *local_118;
  long *local_110;
  undefined *local_e8;
  char *pcStack_e0;
  char *local_d8;
  undefined7 uStack_d0;
  undefined4 local_c9;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined *local_80;
  undefined8 *puStack_78;
  undefined *local_70;
  undefined8 *puStack_68;
  undefined *local_60;
  char *pcStack_58;
  
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
  puVar15 = (undefined8 *)*param_2;
  plVar7 = (long *)*puVar15;
  uVar8 = (**(code **)(*plVar7 + 0x30))(plVar7,0xf80,8);
  FUN_032d04c4(uVar8,puVar15);
  __ptr = *(void **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar7 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,__ptr);
      }
    }
  }
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (undefined8 *)0x0;
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  local_d8 = "DBtmBaseNml.bflyt";
  uStack_d0 = 1000;
  local_c9 = 0;
  local_e8 = (undefined *)0x0;
  pcStack_e0 = puVar1;
  FUN_032d0880(*(undefined8 *)(param_1 + 0x28),&local_e8);
  if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)();
  }
  puVar15 = (undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x50) = *param_2;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xf0);
  FUN_032c6b2c(puVar15,3);
  FUN_032c6ccc(puVar15);
  pcStack_e0 = &DAT_04b18838;
  pcStack_58 = &DAT_04b18838;
  puStack_68 = &DAT_0407ebb1;
  puStack_78 = &DAT_0407ebb1;
  local_e8 = puVar1;
  local_80 = puVar1;
  local_70 = puVar1;
  local_60 = puVar1;
  FUN_032c7320(puVar15,&local_e8,&local_60,&local_70,&local_80);
  pcStack_e0 = s_OutYes_04b1883d;
  pcStack_58 = s_OutYes_04b1883d;
  puStack_68 = &DAT_0407ebb1;
  puStack_78 = &DAT_0407ebb1;
  local_e8 = puVar1;
  local_80 = puVar1;
  local_70 = puVar1;
  local_60 = puVar1;
  FUN_032c7320(puVar15,&local_e8,&local_60,&local_70,&local_80);
  pcStack_e0 = s_OutNo_04b18846;
  pcStack_58 = s_OutNo_04b18846;
  puStack_68 = &DAT_0407ebb1;
  puStack_78 = &DAT_0407ebb1;
  local_e8 = puVar1;
  local_80 = puVar1;
  local_70 = puVar1;
  local_60 = puVar1;
  FUN_032c7320(puVar15,&local_e8,&local_60,&local_70,&local_80);
  pcStack_e0 = s_ContentsIn_04b1884e;
  pcStack_58 = s_ContentsIn_04b1884e;
  puStack_68 = &DAT_0407ebb1;
  puStack_78 = &DAT_0407ebb1;
  local_e8 = puVar1;
  local_80 = puVar1;
  local_70 = puVar1;
  local_60 = puVar1;
  FUN_032c7320(puVar15,&local_e8,&local_60,&local_70,&local_80);
  pcStack_e0 = s_ContentsOut_04b1885b;
  pcStack_58 = s_ContentsOut_04b1885b;
  puStack_68 = &DAT_0407ebb1;
  puStack_78 = &DAT_0407ebb1;
  local_e8 = puVar1;
  local_80 = puVar1;
  local_70 = puVar1;
  local_60 = puVar1;
  FUN_032c7320(puVar15,&local_e8,&local_60,&local_70,&local_80);
  pcStack_e0 = s_ContentsUIn_04b18869;
  pcStack_58 = s_ContentsUIn_04b18869;
  puStack_68 = &DAT_0407ebb1;
  puStack_78 = &DAT_0407ebb1;
  local_e8 = puVar1;
  local_80 = puVar1;
  local_70 = puVar1;
  local_60 = puVar1;
  FUN_032c7320(puVar15,&local_e8,&local_60,&local_70,&local_80);
  pcStack_e0 = s_ContentsUOut_04b18877;
  pcStack_58 = s_ContentsUOut_04b18877;
  puStack_68 = &DAT_0407ebb1;
  puStack_78 = &DAT_0407ebb1;
  local_e8 = puVar1;
  local_80 = puVar1;
  local_70 = puVar1;
  local_60 = puVar1;
  FUN_032c7320(puVar15,&local_e8,&local_60,&local_70,&local_80);
  plVar7 = DAT_0572e5c8;
  if (*(long *)(param_1 + 0x38) == 0) {
    pMVar2 = (MutexType *)(DAT_0572e5c8 + 5);
    nn::os::LockMutex(pMVar2);
    puVar5 = (undefined8 *)*plVar7;
    if ((undefined8 *)*plVar7 == (undefined8 *)0x0) {
      *plVar7 = (long)puVar15;
    }
    else {
      do {
        puVar10 = puVar5;
        puVar5 = (undefined8 *)puVar10[2];
      } while ((undefined8 *)puVar10[2] != (undefined8 *)0x0);
      puVar10[2] = puVar15;
      *(undefined8 **)(param_1 + 0x40) = puVar10;
      plVar7 = (long *)*puVar10;
    }
    *puVar15 = plVar7;
    nn::os::UnlockMutex(pMVar2);
  }
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
  FUN_03291da0(param_1 + 0xae0,*(undefined8 *)*param_2,1);
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = param_2[2];
  lVar3 = param_1 + 0x6f0;
  lVar11 = *(long *)(param_1 + 0x4d0);
  *(ushort *)(param_1 + 0x740) = *(ushort *)(param_1 + 0x740) | 0x20;
  lVar12 = param_1 + 0x4d0;
  if (lVar11 == 0) {
    lVar11 = *(long *)(param_1 + 0x4e0);
    if (lVar11 != 0) {
      lVar13 = *(long *)(param_1 + 0x4e8);
      goto LAB_0329a024;
    }
LAB_0329a028:
    if (*(long *)(param_1 + 0x4e8) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x4e8) + 0x10) = *(undefined8 *)(param_1 + 0x4e0);
    }
  }
  else {
    lVar13 = *(long *)(param_1 + 0x4e8);
    if (*(long *)(lVar11 + 8) != lVar12) {
      lVar11 = *(long *)(param_1 + 0x4e0);
LAB_0329a024:
      *(long *)(lVar11 + 0x18) = lVar13;
      goto LAB_0329a028;
    }
    if (lVar13 == 0) {
      *(undefined8 *)(lVar11 + 8) = 0;
    }
    else {
      *(long *)(lVar11 + 8) = lVar13;
      *(undefined8 *)(*(long *)(param_1 + 0x4e8) + 0x10) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(long *)(param_1 + 0x4d0) = lVar3;
  if (*(long *)(param_1 + 0x6f8) == 0) {
    *(long *)(param_1 + 0x6f8) = lVar12;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x6f8);
    do {
      lVar13 = lVar11;
      lVar11 = *(long *)(lVar13 + 0x18);
    } while (*(long *)(lVar13 + 0x18) != 0);
    *(long *)(lVar13 + 0x18) = lVar12;
    *(long *)(param_1 + 0x4e0) = lVar13;
  }
  if ((*(ushort *)(param_1 + 0x520) >> 6 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_1 + 0x718);
  }
  plVar7 = (long *)(param_1 + 0x90);
  lVar12 = *plVar7;
  if (lVar12 == 0) {
    lVar12 = *(long *)(param_1 + 0xa0);
    if (lVar12 != 0) {
      lVar11 = *(long *)(param_1 + 0xa8);
      goto LAB_0329a0dc;
    }
LAB_0329a0e0:
    if (*(long *)(param_1 + 0xa8) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x10) = *(undefined8 *)(param_1 + 0xa0);
    }
  }
  else {
    lVar11 = *(long *)(param_1 + 0xa8);
    if (*(long **)(lVar12 + 8) != plVar7) {
      lVar12 = *(long *)(param_1 + 0xa0);
LAB_0329a0dc:
      *(long *)(lVar12 + 0x18) = lVar11;
      goto LAB_0329a0e0;
    }
    if (lVar11 == 0) {
      *(undefined8 *)(lVar12 + 8) = 0;
    }
    else {
      *(long *)(lVar12 + 8) = lVar11;
      *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x10) = 0;
    }
  }
  *(long *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(long *)(param_1 + 0x90) = lVar3;
  lVar12 = *(long *)(param_1 + 0x6f8);
  if (*(long *)(param_1 + 0x6f8) == 0) {
    *(long **)(param_1 + 0x6f8) = plVar7;
  }
  else {
    do {
      lVar11 = lVar12;
      lVar12 = *(long *)(lVar11 + 0x18);
    } while (*(long *)(lVar11 + 0x18) != 0);
    *(long **)(lVar11 + 0x18) = plVar7;
    *(long *)(param_1 + 0xa0) = lVar11;
  }
  if ((*(ushort *)(param_1 + 0xe0) >> 6 & 1) != 0) {
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x718);
  }
  lVar11 = *(long *)(param_1 + 0x2b0);
  lVar12 = param_1 + 0x2b0;
  if (lVar11 == 0) {
    lVar11 = *(long *)(param_1 + 0x2c0);
    if (lVar11 != 0) {
      lVar13 = *(long *)(param_1 + 0x2c8);
      goto LAB_0329a18c;
    }
  }
  else {
    lVar13 = *(long *)(param_1 + 0x2c8);
    if (*(long *)(lVar11 + 8) == lVar12) {
      if (lVar13 == 0) {
        *(undefined8 *)(lVar11 + 8) = 0;
      }
      else {
        *(long *)(lVar11 + 8) = lVar13;
        *(undefined8 *)(*(long *)(param_1 + 0x2c8) + 0x10) = 0;
      }
      goto LAB_0329a1bc;
    }
    lVar11 = *(long *)(param_1 + 0x2c0);
LAB_0329a18c:
    *(long *)(lVar11 + 0x18) = lVar13;
  }
  if (*(long *)(param_1 + 0x2c8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x2c8) + 0x10) = *(undefined8 *)(param_1 + 0x2c0);
  }
LAB_0329a1bc:
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(long *)(param_1 + 0x2b0) = lVar3;
  if (*(long *)(param_1 + 0x6f8) == 0) {
    *(long *)(param_1 + 0x6f8) = lVar12;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x6f8);
    do {
      lVar11 = lVar3;
      lVar3 = *(long *)(lVar11 + 0x18);
    } while (*(long *)(lVar11 + 0x18) != 0);
    *(long *)(lVar11 + 0x18) = lVar12;
    *(long *)(param_1 + 0x2c0) = lVar11;
  }
  if ((*(ushort *)(param_1 + 0x300) >> 6 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x718);
  }
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
  *(ushort *)(param_1 + 0x300) = *(ushort *)(param_1 + 0x300) & 0xfffe;
  FUN_032c2100();
  *(undefined4 *)(param_1 + 0x950) = 1;
  *(undefined8 *)(param_1 + 0x948) = 0x100000000;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
  plVar7 = (long *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x20,8);
  puVar1 = PTR_DAT_04bc8ea0;
  plVar7[2] = 0;
  *(undefined1 *)(plVar7 + 3) = 0;
  *plVar7 = (long)(puVar1 + 0x10);
  plVar7[1] = 0;
  plVar9 = *(long **)(param_1 + 0xb18);
  *(long **)(param_1 + 0xb18) = plVar7;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
    plVar7 = *(long **)(param_1 + 0xb18);
  }
  uVar8 = *param_2;
  uVar4 = param_2[1];
  uVar14 = param_2[2];
  local_118 = PTR_DAT_04bc8ec8 + 0x10;
  local_110 = (long *)0x0;
  iVar6 = FUN_032862c0(0);
  local_11c = 0;
  if (iVar6 != -1) {
    local_11c = iVar6;
  }
  FUN_03285bcc(plVar7,uVar8,uVar4,uVar14,&local_118,&local_11c);
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 8))();
  }
  return;
}

