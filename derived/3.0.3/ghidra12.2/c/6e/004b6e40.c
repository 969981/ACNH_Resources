
void FUN_004b6e40(long *param_1,int param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 uVar16;
  void *local_308;
  int local_300;
  undefined *local_258;
  undefined *puStack_250;
  undefined *local_1d8;
  undefined *local_1c0;
  undefined *local_190;
  undefined *local_180;
  long *local_80;
  void *local_78;
  long lStack_70;
  
  iVar7 = (int)param_1[0x6c];
  if ((iVar7 <= param_2) || (*(char *)(param_1[0x6b] + (long)param_2) == '\0')) {
    uVar9 = param_2 + 1;
    if (0 < (int)(uVar9 - iVar7)) {
      lVar10 = param_1[0x6b];
      if ((int)(*(uint *)((long)param_1 + 0x364) & 0x3fffffff) <= param_2) {
        lVar10 = FUN_00426720(*(undefined8 *)PTR_PTR_04bd4d20,uVar9,1,lVar10,iVar7,
                              (long)param_1 + 0x364);
        param_1[0x6b] = lVar10;
      }
      memset((void *)(lVar10 + iVar7),0,(ulong)(uVar9 - iVar7));
      *(uint *)(param_1 + 0x6c) = uVar9;
    }
    *(undefined1 *)(param_1[0x6b] + (long)param_2) = 1;
    if (param_4 == 0) {
      FUN_004225b0(&local_308);
      FUN_00427570(param_3[1],&local_308,0,0);
      lStack_70 = (long)local_308 + (long)local_300 + -1;
      local_78 = local_308;
      uVar6 = FUN_00427340(param_3[1]);
      param_4 = (**(code **)(*param_1 + 8))(param_1,&local_78,uVar6);
      FUN_00422550(&local_308);
    }
    FUN_004c1040(param_4,param_2);
    uVar16 = *(undefined8 *)(param_4 + 0x50);
    uVar3 = *param_3;
    uVar4 = param_3[1];
    iVar7 = FUN_00426fc0(uVar16);
    local_78 = (void *)(**(code **)(param_1[0x28] + 0x10))(param_1 + 0x28,(long)iVar7,0);
    memset(local_78,0,(long)iVar7);
    iVar8 = FUN_004b72e0(param_1 + 0x59,uVar16);
    pvVar5 = local_78;
    uVar11 = *(uint *)(param_1 + 0x5d);
    uVar2 = uVar11;
    if ((int)uVar11 <= (int)uVar9) {
      uVar2 = uVar9;
    }
    if ((int)(*(uint *)((long)param_1 + 0x2ec) & 0x3fffffff) < (int)uVar2) {
      lVar10 = FUN_00426720(*(undefined8 *)PTR_PTR_04bd4d20,uVar2,0x18,param_1[0x5c],uVar11,
                            (long)param_1 + 0x2ec);
      uVar11 = *(uint *)(param_1 + 0x5d);
      param_1[0x5c] = lVar10;
    }
    if (uVar2 - uVar11 == 0 || (int)uVar2 < (int)uVar11) {
      if ((int)uVar2 < (int)uVar11) {
        *(uint *)(param_1 + 0x5d) = uVar2;
      }
    }
    else {
      puVar12 = (undefined8 *)(param_1[0x5c] + (long)(int)uVar11 * 0x18);
      uVar9 = uVar2 - uVar11 & 3;
      *(uint *)(param_1 + 0x5d) = uVar2;
      if (2 < uVar2 + ~uVar11) {
        iVar15 = (uVar11 + uVar9) - uVar2;
        puVar13 = puVar12;
        do {
          puVar12 = puVar13 + 0xc;
          *(undefined4 *)((long)puVar13 + 0x14) = 0;
          *(undefined1 *)(puVar13 + 2) = 0;
          *puVar13 = 0;
          puVar13[1] = 0;
          iVar15 = iVar15 + 4;
          *(undefined4 *)((long)puVar13 + 0x2c) = 0;
          *(undefined1 *)(puVar13 + 5) = 0;
          *(undefined4 *)((long)puVar13 + 0x44) = 0;
          *(undefined1 *)(puVar13 + 8) = 0;
          *(undefined4 *)((long)puVar13 + 0x5c) = 0;
          *(undefined1 *)(puVar13 + 0xb) = 0;
          puVar13[3] = 0;
          puVar13[4] = 0;
          puVar13[6] = 0;
          puVar13[7] = 0;
          puVar13[9] = 0;
          puVar13[10] = 0;
          puVar13 = puVar12;
        } while (iVar15 != 0);
      }
      if (uVar9 != 0) {
        iVar15 = -uVar9;
        do {
          *(undefined4 *)((long)puVar12 + 0x14) = 0;
          *(undefined1 *)(puVar12 + 2) = 0;
          iVar15 = iVar15 + 1;
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12 = puVar12 + 3;
        } while (iVar15 != 0);
      }
    }
    puVar12 = (undefined8 *)(param_1[0x5c] + (long)param_2 * 0x18);
    uVar14 = *(undefined8 *)(param_1[0x5a] + (long)iVar8 * 8);
    *puVar12 = pvVar5;
    puVar12[1] = uVar14;
    *(undefined1 *)(puVar12 + 2) = 0;
    *(undefined4 *)((long)puVar12 + 0x14) = 0;
    uVar16 = FUN_00461bf0(param_1 + 0x4b,uVar4,uVar16);
    plVar1 = param_1 + 0x7d;
    uVar9 = FUN_004b7450(plVar1,&local_78);
    if (*(uint *)(param_1 + 0x7e) == uVar9) {
      if ((*(uint *)((long)param_1 + 0x3f4) & 0x3fffffff) == uVar9) {
        FUN_00426990(*(undefined8 *)PTR_PTR_04bd4d20,plVar1,0x10);
        uVar9 = *(uint *)(param_1 + 0x7e);
      }
      puVar12 = (undefined8 *)(param_1[0x7d] + (long)(int)uVar9 * 0x10);
      *puVar12 = local_78;
      *(int *)(puVar12 + 1) = param_2;
      *(uint *)(param_1 + 0x7e) = uVar9 + 1;
    }
    else {
      *(int *)(*plVar1 + ((long)((ulong)uVar9 << 0x20) >> 0x1c) + 8) = param_2;
    }
    FUN_00466aa0(&local_308);
    pvVar5 = local_78;
    local_258 = PTR_FUN_04bd5ac8;
    puStack_250 = PTR_LAB_04bd5af0;
    local_1c0 = PTR_LAB_04bd5ae8;
    local_1d8 = PTR_LAB_04bd5ad0;
    local_180 = PTR_LAB_04bd5ae0;
    local_190 = PTR_LAB_04bd5af8;
    local_80 = param_1;
    uVar6 = FUN_00426fc0(uVar4);
    FUN_004b7550(&local_308,uVar16,pvVar5,iVar7,uVar3,uVar6,uVar6,iVar7,1);
  }
  return;
}

