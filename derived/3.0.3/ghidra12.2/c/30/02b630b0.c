
uint FUN_02b630b0(long param_1,short param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 *puVar10;
  int iVar11;
  uint uVar12;
  undefined **local_c0;
  long *local_b8;
  short *local_b0;
  char *pcStack_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  char local_98 [4];
  short local_94 [2];
  long local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined2 local_68;
  
  puVar3 = PTR_DAT_04bb27a8;
  uVar7 = 0;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_02b63384;
  uVar7 = 0;
  local_94[0] = param_2;
  local_90 = param_1;
  do {
    local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar7);
    if (uVar7 == 0) {
      plVar8 = (long *)(*(long *)puVar3 + 0x1f8);
    }
    else {
      plVar1 = (long *)(*(long *)puVar3 + 0x30);
      plVar8 = plVar1 + uVar7;
      if (0x38 < uVar7) {
        plVar8 = plVar1;
      }
    }
    puVar2 = &DAT_05636dd8;
    if (*plVar8 != 0) {
      puVar2 = (undefined8 *)(*plVar8 + 0x148);
    }
    if (puVar2[1] != 0) {
      local_b8 = &local_90;
      local_98[0] = '\0';
      local_c0 = &PTR_FUN_04aa4c68;
      local_b0 = local_94;
      pcStack_a8 = local_98;
      if (puVar2[1] != 0) {
        plVar8 = (long *)(*(code *)**(undefined8 **)(puVar2[1] + 0x10))();
        iVar6 = (**(code **)(*plVar8 + 0x18))();
        if (0 < iVar6) {
          iVar11 = 0;
          do {
            FUN_01360490(&local_88,puVar2[1],iVar11);
            uVar9 = (*(code *)*local_c0)(&local_c0,&local_88);
            if ((uVar9 & 1) != 0) break;
            bVar5 = iVar6 + -1 != iVar11;
            iVar11 = iVar11 + 1;
          } while (bVar5);
        }
      }
      if (local_98[0] != '\0') {
        uVar7 = 1;
        goto LAB_02b63384;
      }
    }
    sVar4 = local_94[0];
    uVar12 = 0x39;
    if ((int)uVar7 < 0x39) {
      uVar12 = uVar7 + 1;
    }
    uVar7 = uVar12;
  } while (uVar12 != 0x39);
  if (DAT_05612678 == local_94[0]) {
    local_88 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "CommuneExpanded";
    uVar9 = FUN_0273f0a0(&local_88);
    if ((uVar9 & 1) == 0) goto LAB_02b6323c;
    puVar10 = &DAT_05612678;
LAB_02b632f0:
    iVar6 = *(int *)(puVar10 + 2);
    if (*(char *)(puVar10 + 4) == '\0') {
      if (iVar6 == 0x26) {
        FUN_0092e198();
      }
      else {
        FUN_02b93b60(&local_88);
      }
    }
    else {
      local_80._0_4_ = *(undefined4 *)(puVar10 + 0xc);
      local_80._4_4_ = *(undefined4 *)(puVar10 + 0xe);
    }
  }
  else {
LAB_02b6323c:
    puVar10 = &DAT_05612510;
    if ((((((DAT_05612510 == sVar4) || (puVar10 = &DAT_05612538, DAT_05612538 == sVar4)) ||
          (puVar10 = &DAT_05612560, DAT_05612560 == sVar4)) ||
         ((puVar10 = &DAT_05612588, DAT_05612588 == sVar4 ||
          (puVar10 = &DAT_056125b0, DAT_056125b0 == sVar4)))) ||
        ((puVar10 = &DAT_056125d8, DAT_056125d8 == sVar4 ||
         ((puVar10 = &DAT_05612600, DAT_05612600 == sVar4 ||
          (puVar10 = &DAT_05612628, DAT_05612628 == sVar4)))))) ||
       (puVar10 = &DAT_05612650, DAT_05612650 == sVar4)) goto LAB_02b632f0;
    local_80._0_4_ = 0;
    local_80._4_4_ = 0;
    iVar6 = 0;
  }
  local_68 = 0;
  local_88 = (undefined *)CONCAT44(local_88._4_4_,iVar6);
  local_70 = 0;
  local_b0 = (short *)(PTR_DAT_04bb2010 + 0x10);
  local_b8 = (long *)(((ulong)local_b8 >> 8 & 0xffffff) << 8);
  local_c0 = (undefined **)(PTR_DAT_04bc4608 + 0x10);
  local_a0 = 0;
  local_9c = 0;
  pcStack_a8 = (char *)0x0;
  local_78 = (undefined4)local_80;
  uStack_74 = local_80._4_4_;
  local_80 = (char *)local_b0;
  FUN_02a8f958(&local_c0,&local_88);
  uVar7 = FUN_02a8f1dc(&local_c0,local_90);
LAB_02b63384:
  return uVar7 & 1;
}

