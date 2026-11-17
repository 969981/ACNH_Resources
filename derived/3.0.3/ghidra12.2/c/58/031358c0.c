
void FUN_031358c0(undefined **param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined ***pppuVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long *plVar14;
  long lVar15;
  byte bVar16;
  undefined **ppuVar17;
  long lVar18;
  long lVar19;
  undefined **local_a8;
  char *pcStack_a0;
  undefined **local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined **local_78;
  undefined ***local_70;
  char local_62;
  
  lVar15 = param_2[1];
  if (lVar15 == 0) {
    return;
  }
  if (*(int *)(param_1 + 3) != 0) {
    ppuVar3 = param_1 + 1;
    ppuVar8 = (undefined **)param_1[2];
    while (ppuVar8 != ppuVar3) {
      ppuVar17 = (undefined **)ppuVar8[1];
      *ppuVar8 = (undefined *)0x0;
      ppuVar8[1] = (undefined *)0x0;
      ppuVar8 = ppuVar17;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[1] = (undefined *)ppuVar3;
    param_1[2] = (undefined *)ppuVar3;
  }
  puVar13 = PTR_DAT_04bc5180;
  local_70 = &local_98;
  local_88 = &LAB_03137e70;
  uStack_80 = 0;
  local_98 = &PTR_LAB_04b03998;
  local_78 = (undefined **)(PTR_DAT_04bc5180 + 0x10);
  local_90 = param_1;
  if (*(long *)(lVar15 + 0x40) != lVar15 + 0x38) {
    lVar19 = (long)*(int *)(lVar15 + 0x4c);
    lVar18 = *(long *)(lVar15 + 0x40) - lVar19;
    do {
      uVar11 = (*(code *)*local_78)(&local_78,lVar18);
      if ((uVar11 & 1) != 0) break;
      lVar18 = *(long *)(lVar18 + lVar19 + 8) - lVar19;
    } while (lVar18 != (lVar15 + 0x38) - lVar19);
  }
  lVar15 = param_2[1];
  if (lVar15 != 0) {
    local_88 = &LAB_03135f50;
    uStack_80 = 0;
    local_78 = (undefined **)(puVar13 + 0x10);
    local_70 = &local_98;
    local_98 = &PTR_LAB_04b03998;
    local_90 = param_1;
    if (*(long *)(lVar15 + 0x40) != lVar15 + 0x38) {
      lVar19 = (long)*(int *)(lVar15 + 0x4c);
      lVar18 = *(long *)(lVar15 + 0x40) - lVar19;
      do {
        uVar11 = (*(code *)*local_78)(&local_78,lVar18);
        if ((uVar11 & 1) != 0) break;
        lVar18 = *(long *)(lVar18 + lVar19 + 8) - lVar19;
      } while (lVar18 != (lVar15 + 0x38) - lVar19);
    }
  }
  puVar9 = PTR_DAT_04bb3350;
  puVar13 = PTR_DAT_04bb2698;
  if (*param_2 != 0) {
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (lVar15 == 0) {
      puVar12 = malloc(200);
    }
    else {
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar15 + 8);
      if (lVar18 != 0) {
        puVar12 = (undefined8 *)(lVar18 + 0xa8);
      }
      puVar12 = (undefined8 *)(**(code **)(*(long *)*puVar12 + 0x30))((long *)*puVar12,200,8);
    }
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[0xc] = 0;
    puVar12[0xd] = 0;
    puVar12[0xe] = 0;
    puVar12[0xf] = 0;
    puVar12[0x10] = 0;
    puVar12[0x11] = 0;
    puVar12[0x12] = 0;
    puVar12[0x13] = 0;
    puVar12[0x14] = 0;
    puVar2 = PTR_DAT_04bc77b8;
    puVar1 = PTR_DAT_04bc77b8 + 0x10;
    puVar12[0xb] = puVar1;
    puVar12[0xf] = puVar1;
    puVar12[0x13] = puVar1;
    *(undefined2 *)((long)puVar12 + 0xbc) = 0x101;
    *(undefined1 *)((long)puVar12 + 0xbe) = 0;
    puVar12[0x18] = 0;
    puVar12[2] = 0xffffffff00000000;
    puVar12[3] = puVar1;
    *(undefined4 *)(puVar12 + 0x17) = 0xfffffffe;
    puVar12[0x15] = 0;
    puVar12[0x16] = 0;
    puVar12[7] = puVar1;
    puVar12[8] = 0;
    param_1[8] = (undefined *)puVar12;
    local_98 = (undefined **)&LAB_03136230;
    local_90 = (undefined **)0x0;
    local_78 = param_1;
    FUN_03136018(puVar12,3,&local_78,&local_98);
    local_98 = (undefined **)&LAB_03136530;
    local_90 = (undefined **)0x0;
    local_78 = param_1;
    FUN_03136018(param_1[8],1,&local_78,&local_98);
    FUN_03d59634(*param_2,0,DAT_056f717c,param_1[8]);
    param_1[0x18] = param_1[8];
    (**(code **)(param_1[0x17] + 0x20))(param_1 + 0x17);
    param_1[0x1a] = (undefined *)(param_1 + 0x16);
    lVar15 = *(long *)puVar13;
    if (lVar15 == 0) {
      puVar12 = malloc(200);
    }
    else {
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
      puVar12 = (undefined8 *)(lVar15 + 8);
      if (lVar18 != 0) {
        puVar12 = (undefined8 *)(lVar18 + 0xa8);
      }
      puVar12 = (undefined8 *)(**(code **)(*(long *)*puVar12 + 0x30))((long *)*puVar12,200,8);
    }
    puVar2 = puVar2 + 0x10;
    *(undefined2 *)((long)puVar12 + 0xbc) = 0x101;
    puVar12[2] = 0xffffffff00000000;
    puVar12[3] = puVar2;
    *puVar12 = 0;
    puVar12[1] = 0;
    *(undefined4 *)(puVar12 + 0x17) = 0xfffffffe;
    *(undefined1 *)((long)puVar12 + 0xbe) = 0;
    puVar12[0x18] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[0xc] = 0;
    puVar12[0xb] = puVar2;
    puVar12[0xd] = 0;
    puVar12[0xe] = 0;
    puVar12[0xf] = 0;
    puVar12[0x10] = 0;
    puVar12[0xf] = puVar2;
    puVar12[0x11] = 0;
    puVar12[0x12] = 0;
    puVar12[0x13] = 0;
    puVar12[0x14] = 0;
    puVar12[0x13] = puVar2;
    puVar12[0x15] = 0;
    puVar12[0x16] = 0;
    puVar12[7] = puVar2;
    puVar12[8] = 0;
    param_1[9] = (undefined *)puVar12;
    local_98 = (undefined **)&LAB_03136230;
    local_90 = (undefined **)0x0;
    local_78 = param_1;
    FUN_03136018(puVar12,3,&local_78,&local_98);
    local_98 = (undefined **)&LAB_03136530;
    local_90 = (undefined **)0x0;
    local_78 = param_1;
    FUN_03136018(param_1[9],1,&local_78,&local_98);
    FUN_03d59634(*param_2,0,DAT_056f7178,param_1[9]);
    param_1[0x1e] = param_1[9];
    (**(code **)(param_1[0x1d] + 0x20))(param_1 + 0x1d);
    param_1[0x20] = (undefined *)(param_1 + 0x16);
  }
  *(undefined1 *)(param_1 + 7) = 0;
  bVar6 = *(byte *)(param_2 + 2);
  *(byte *)(param_1 + 7) = bVar6;
  if (*(int *)(param_1 + 3) < 1) {
LAB_03135cbc:
    bVar16 = 2;
LAB_03135cc0:
    *(byte *)(param_1 + 7) = bVar16 | bVar6;
  }
  else {
    bVar16 = 2;
    if ((param_1[2] == (undefined *)0x0) ||
       (lVar15 = (long)param_1[2] - (long)*(int *)((long)param_1 + 0x1c), lVar15 == 0))
    goto LAB_03135cc0;
    iVar4 = *(int *)(lVar15 + 0x26c);
    if (iVar4 == 0) goto LAB_03135cbc;
    if (iVar4 == 1) {
      bVar16 = 4;
      goto LAB_03135cc0;
    }
  }
  uVar5 = *(uint *)((long)param_2 + 0x14);
  uVar7 = uVar5 - 1;
  if ((0 < (int)uVar5) && (param_1[0x13] == (undefined *)0x0)) {
    lVar15 = *(long *)PTR_DAT_04bb2698;
    if (lVar15 == 0) {
      puVar13 = malloc((ulong)uVar5 * 0x78);
    }
    else {
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar14 = (long *)(lVar15 + 8);
      if (lVar18 != 0) {
        plVar14 = (long *)(lVar18 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) goto LAB_03135cdc;
      puVar13 = (undefined *)(**(code **)(*plVar14 + 0x30))(plVar14,(ulong)uVar5 * 0x78,8);
    }
    if (puVar13 != (undefined *)0x0) {
      param_1[0x14] = puVar13;
      if (1 < uVar5) {
        if (uVar7 == 1) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          plVar14 = (long *)(puVar13 + 0x70);
          do {
            uVar11 = uVar11 + 2;
            plVar14[-0xe] = (long)plVar14;
            *plVar14 = (long)(plVar14 + 0xe);
            plVar14 = plVar14 + 0x1c;
          } while (((ulong)uVar7 & 0xfffffffe) != uVar11);
        }
        if ((uVar7 & 1) != 0) {
          *(long **)(puVar13 + uVar11 * 0x70) = (long *)((long)(puVar13 + uVar11 * 0x70) + 0x70);
        }
      }
      *(undefined8 *)(puVar13 + (long)(int)(uVar7 * 0xe) * 8) = 0;
      param_1[0x15] = puVar13;
      if (puVar13 + (ulong)uVar5 * 0x70 != (undefined *)0x0) {
        param_1[0x13] = puVar13 + (ulong)uVar5 * 0x70;
        *(undefined4 *)(param_1 + 0x12) = 0;
        *(uint *)((long)param_1 + 0x94) = uVar5;
      }
    }
  }
LAB_03135cdc:
  *(uint *)(param_1 + 6) = (*(byte *)(param_1 + 7) >> 2 & 1) - 1;
  param_1[10] = (undefined *)param_2[3];
  param_1[0xb] = (undefined *)param_2[4];
  puVar13 = PTR_DAT_04bb2120;
  lVar15 = param_2[1];
  if (lVar15 == 0) {
    return;
  }
  ppuVar3 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  pcStack_a0 = "Share";
  local_88._0_7_ = (uint7)(uint6)local_88;
  local_90 = (undefined **)PTR_DAT_04bb2120;
  local_a8 = ppuVar3;
  local_98 = ppuVar3;
  FUN_03c5a110(&local_98,&local_a8,0xffffffff,0);
  local_70 = (undefined ***)puVar13;
  local_62 = '\0';
  local_78 = ppuVar3;
  FUN_03c5a110(&local_78,PTR_PTR_04bb2238,0xffffffff,0);
  puVar13 = (undefined *)FUN_03c5a760(lVar15 + 0x138,&local_98,&local_78);
  if ((local_62 != '\0') &&
     ((*(code *)local_78[3])(&local_78), pppuVar10 = local_70, local_70 != (undefined ***)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(local_70);
      goto joined_r0x03135dcc;
    }
    plVar14 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_70);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x38))(plVar14,pppuVar10);
    }
  }
joined_r0x03135dcc:
  if ((local_88._6_1_ != '\0') &&
     ((*(code *)local_98[3])(&local_98), ppuVar3 = local_90, local_90 != (undefined **)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(local_90);
    }
    else {
      plVar14 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_90);
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x38))(plVar14,ppuVar3);
      }
    }
  }
  param_1[0xc] = puVar13;
  return;
}

