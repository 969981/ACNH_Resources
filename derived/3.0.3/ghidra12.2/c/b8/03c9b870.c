
void FUN_03c9b870(long param_1,long *param_2,undefined8 param_3,undefined1 *param_4)

{
  MutexType *pMVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined1 local_1c0 [8];
  undefined8 local_1b8;
  undefined7 uStack_1b0;
  undefined1 local_1a9;
  undefined1 uStack_1a8;
  undefined2 uStack_1a7;
  undefined1 auStack_1a0 [16];
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined *local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined1 local_164 [63];
  undefined1 local_125;
  undefined1 local_65;
  undefined *local_48;
  
  local_65 = 0;
  lVar12 = *(long *)(*(long *)PTR_DAT_04bb2718 + 0x408);
  local_168 = 0x100;
  local_164[0] = 0;
  local_178 = PTR_DAT_04bb21f8 + 0x10;
  local_170 = local_164;
  (**(code **)(**(long **)PTR_DAT_04bb26b8 + 0xe0))(*(long **)PTR_DAT_04bb26b8,&local_178);
  uStack_188 = FUN_03d53e90(*(undefined8 *)(lVar12 + 8),&local_178,param_2);
  local_125 = 0;
  local_190 = PTR_DAT_04bd4578 + 0x10;
  local_168 = 0x40;
  local_164[0] = 0;
  local_178 = PTR_DAT_04bb2bc0 + 0x10;
  local_180 = param_3;
  local_170 = local_164;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_038d1270(&local_178,"%s.bflyt",param_2[1]);
  plVar13 = *(long **)(param_1 + 0x118);
  local_48 = &DAT_04b88e50;
  pMVar1 = (MutexType *)(*plVar13 + 0x60);
  nn::os::LockMutex(pMVar1);
  lVar3 = FUN_03ca21a0(plVar13,param_2,0);
  plVar13 = (long *)(lVar3 + 0x28);
  lVar10 = *plVar13;
  lVar12 = param_1 + *(int *)(lVar3 + 0x3c);
  *plVar13 = lVar12 + 0xa0;
  *(long *)(lVar12 + 0xa0) = lVar10;
  *(long **)(lVar12 + 0xa8) = plVar13;
  if (lVar10 != 0) {
    *(long *)(lVar10 + 8) = lVar12 + 0xa0;
  }
  *(int *)(lVar3 + 0x38) = *(int *)(lVar3 + 0x38) + 1;
  nn::os::UnlockMutex(pMVar1);
  *(long *)(param_1 + 0x120) = lVar3;
  plVar13 = (long *)FUN_03ca2690(*(undefined8 *)(param_1 + 0x118),param_2);
  uVar14 = *(undefined8 *)PTR_DAT_04bd0810;
  FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,plVar13);
  plVar15 = (long *)**(undefined8 **)PTR_DAT_04bd44c8;
  lVar12 = (**(code **)(*plVar15 + 0x78))(plVar15);
  local_1c0[0] = 0;
  uStack_1a8 = *param_4;
  uStack_1a7 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a9 = 0;
  uVar16 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
  uVar4 = (**(code **)(**(long **)(param_1 + 0x120) + 0x20))();
  (**(code **)(local_178 + 0x18))(&local_178);
  uVar5 = FUN_0036803c(param_1,auStack_1a0,uVar16,uVar4,&local_48,&local_190,local_1c0,local_170,0);
  if ((uVar5 & 1) == 0) {
    cVar2 = *(char *)(param_1 + 0xf8);
    plVar6 = (long *)FUN_00367b14(0x100,0x10);
    if (cVar2 == '\0') {
      if (plVar6 != (long *)0x0) {
        FUN_0037bb94(plVar6);
        plVar6[0x1e] = 0;
        puVar8 = PTR_DAT_04bd44b0;
        plVar6[0x1c] = 0;
        plVar6[0x1d] = 0;
        puVar11 = puVar8 + 0x118;
        goto LAB_03c9baf4;
      }
    }
    else if (plVar6 != (long *)0x0) {
      FUN_0037bb94(plVar6);
      plVar6[0x1e] = 0;
      puVar8 = PTR_DAT_04bd44a8;
      plVar6[0x1c] = 0;
      plVar6[0x1d] = 0;
      puVar11 = puVar8 + 0x120;
LAB_03c9baf4:
      *plVar6 = (long)(puVar8 + 0x10);
      plVar6[0x1b] = (long)puVar11;
      *(long **)((long)plVar6 + 0xc9) = plVar6 + 0x1b;
    }
    *(long **)(param_1 + 0x18) = plVar6;
    FUN_0037c2a0(plVar6,"RootPane");
    *(long *)(*(long *)((long)plVar6 + 0xc9) + 0x10) = param_1;
    (**(code **)(*param_2 + 0x18))(param_2);
    *(long *)(param_1 + 0x30) = param_2[1];
    uVar4 = (**(code **)(**(long **)(param_1 + 0x120) + 0x20))();
    *(undefined8 *)(param_1 + 0x40) = uVar4;
  }
  lVar3 = (**(code **)(*plVar15 + 0x78))(plVar15);
  *(long *)(param_1 + 0x158) = lVar12 - lVar3;
  FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,uVar14);
  uVar5 = (**(code **)(*plVar13 + 0x90))(plVar13);
  if ((uVar5 & 1) == 0) {
    iVar7 = (int)plVar13[0x28];
    iVar9 = (int)plVar13[0x23];
    if ((iVar7 == 0) && (iVar9 == 1)) {
      lVar12 = 0;
      if (plVar13[0x22] != 0) {
        lVar12 = plVar13[0x22] - (long)*(int *)((long)plVar13 + 0x11c);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      (**(code **)(plVar13[0x1d] + 0x18))(plVar13 + 0x1d);
      if (lVar12 == plVar13[0x1e]) goto LAB_03c9bb94;
      iVar9 = (int)plVar13[0x23];
      iVar7 = (int)plVar13[0x28];
    }
    if ((iVar9 == 0) && (iVar7 == 1)) {
      lVar12 = 0;
      if (plVar13[0x27] != 0) {
        lVar12 = plVar13[0x27] - (long)*(int *)((long)plVar13 + 0x144);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      (**(code **)(plVar13[0x1d] + 0x18))(plVar13 + 0x1d);
      if (lVar12 == plVar13[0x1e]) goto LAB_03c9bb94;
    }
    *(long **)(param_1 + 0x128) = plVar13;
  }
  else {
LAB_03c9bb94:
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  return;
}

