
void FUN_004bb490(long *param_1,int param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  int iVar18;
  byte *pbVar19;
  undefined8 uVar20;
  long *plVar21;
  void *local_310;
  int local_308;
  undefined *local_260;
  undefined *puStack_258;
  undefined *local_1e0;
  undefined *local_1c8;
  undefined *local_198;
  undefined *local_188;
  long *local_88;
  void *local_80;
  long lStack_78;
  long local_70 [2];
  
  iVar2 = (int)param_1[0x6c];
  if ((iVar2 <= param_2) || (*(char *)(param_1[0x6b] + (long)param_2) == '\0')) {
    uVar8 = param_2 + 1;
    if (0 < (int)(uVar8 - iVar2)) {
      lVar13 = param_1[0x6b];
      if ((int)(*(uint *)((long)param_1 + 0x364) & 0x3fffffff) <= param_2) {
        lVar13 = FUN_00426720(*(undefined8 *)PTR_PTR_04bd4d20,uVar8,1,lVar13,iVar2,
                              (long)param_1 + 0x364);
        param_1[0x6b] = lVar13;
      }
      memset((void *)(lVar13 + iVar2),0,(ulong)(uVar8 - iVar2));
      *(uint *)(param_1 + 0x6c) = uVar8;
    }
    lVar13 = (long)param_2;
    *(undefined1 *)(param_1[0x6b] + lVar13) = 1;
    pbVar19 = (byte *)param_3[1];
    if (pbVar19 != (byte *)0x0) {
      iVar6 = *(int *)(param_3 + 3);
      uVar20 = *param_3;
      local_70[0] = 0;
      iVar2 = -iVar6;
      if (-1 < iVar6) {
        iVar2 = iVar6;
      }
      lVar10 = FUN_00427270(pbVar19);
      if (((lVar10 == 0) || (uVar11 = FUN_00428440(pbVar19), (uVar11 & 0x1f) != 7)) ||
         (uVar4 = FUN_004274f0(pbVar19), (uVar4 >> 5 & 1) != 0)) {
        if ((*pbVar19 & 1) == 0) {
          plVar21 = local_70;
          do {
            FUN_00451ea0(&local_310);
            FUN_004522c0(&local_310,pbVar19,0xffffffff);
            lVar10 = FUN_004535c0(&local_310,param_1 + 0x28);
            *plVar21 = lVar10;
            pbVar19 = *(byte **)(pbVar19 + 8);
            plVar21 = (long *)(lVar10 + 8);
            FUN_00451fa0(&local_310);
          } while ((*pbVar19 & 1) == 0);
        }
        else {
          plVar21 = local_70;
        }
        lVar10 = FUN_004bb9d0(param_1,pbVar19);
        FUN_004bbd90(param_1,lVar10,param_2,0,iVar2);
      }
      else {
        if (param_4 == 0) {
          FUN_004225b0(&local_310);
          FUN_00427570(pbVar19,&local_310,0,0);
          lStack_78 = (long)local_310 + (long)local_308 + -1;
          local_80 = local_310;
          uVar5 = FUN_00427340(pbVar19);
          param_4 = (**(code **)(*param_1 + 8))(param_1,&local_80,uVar5);
          FUN_00422550(&local_310);
        }
        lVar10 = *(long *)(param_4 + 0x50);
        thunk_FUN_004c0f40(param_4,param_2,0,iVar2);
        plVar21 = local_70;
      }
      *plVar21 = lVar10;
      iVar6 = FUN_00426fc0(lVar10);
      iVar6 = iVar6 * iVar2;
      local_80 = (void *)0x0;
      if (iVar6 != 0) {
        local_80 = (void *)(**(code **)(param_1[0x28] + 0x10))(param_1 + 0x28,(long)iVar6,0);
        memset(local_80,0,(long)iVar6);
      }
      pvVar3 = local_80;
      iVar7 = FUN_004b72e0(param_1 + 0x59,local_70[0]);
      uVar14 = *(uint *)(param_1 + 0x5d);
      uVar4 = uVar14;
      if ((int)uVar14 <= (int)uVar8) {
        uVar4 = uVar8;
      }
      if ((int)(*(uint *)((long)param_1 + 0x2ec) & 0x3fffffff) < (int)uVar4) {
        lVar12 = FUN_00426720(*(undefined8 *)PTR_PTR_04bd4d20,uVar4,0x18,param_1[0x5c],uVar14,
                              (long)param_1 + 0x2ec);
        uVar14 = *(uint *)(param_1 + 0x5d);
        param_1[0x5c] = lVar12;
      }
      if (uVar4 - uVar14 == 0 || (int)uVar4 < (int)uVar14) {
        if ((int)uVar4 < (int)uVar14) {
          *(uint *)(param_1 + 0x5d) = uVar4;
        }
      }
      else {
        puVar15 = (undefined8 *)(param_1[0x5c] + (long)(int)uVar14 * 0x18);
        uVar1 = uVar4 - uVar14 & 3;
        *(uint *)(param_1 + 0x5d) = uVar4;
        if (2 < uVar4 + ~uVar14) {
          iVar18 = (uVar14 + uVar1) - uVar4;
          puVar16 = puVar15;
          do {
            puVar15 = puVar16 + 0xc;
            *(undefined4 *)((long)puVar16 + 0x14) = 0;
            *(undefined1 *)(puVar16 + 2) = 0;
            *puVar16 = 0;
            puVar16[1] = 0;
            iVar18 = iVar18 + 4;
            *(undefined4 *)((long)puVar16 + 0x2c) = 0;
            *(undefined1 *)(puVar16 + 5) = 0;
            *(undefined4 *)((long)puVar16 + 0x44) = 0;
            *(undefined1 *)(puVar16 + 8) = 0;
            *(undefined4 *)((long)puVar16 + 0x5c) = 0;
            *(undefined1 *)(puVar16 + 0xb) = 0;
            puVar16[3] = 0;
            puVar16[4] = 0;
            puVar16[6] = 0;
            puVar16[7] = 0;
            puVar16[9] = 0;
            puVar16[10] = 0;
            puVar16 = puVar15;
          } while (iVar18 != 0);
        }
        if (uVar1 != 0) {
          iVar18 = -uVar1;
          do {
            *(undefined4 *)((long)puVar15 + 0x14) = 0;
            *(undefined1 *)(puVar15 + 2) = 0;
            iVar18 = iVar18 + 1;
            *puVar15 = 0;
            puVar15[1] = 0;
            puVar15 = puVar15 + 3;
          } while (iVar18 != 0);
        }
      }
      puVar15 = (undefined8 *)(param_1[0x5c] + lVar13 * 0x18);
      uVar17 = *(undefined8 *)(param_1[0x5a] + (long)iVar7 * 8);
      *puVar15 = pvVar3;
      puVar15[1] = uVar17;
      *(undefined1 *)(puVar15 + 2) = 1;
      *(int *)((long)puVar15 + 0x14) = iVar2;
      iVar7 = (int)param_1[0x6c];
      if (0 < (int)(uVar8 - iVar7)) {
        lVar12 = param_1[0x6b];
        if ((int)(*(uint *)((long)param_1 + 0x364) & 0x3fffffff) <= param_2) {
          lVar12 = FUN_00426720(*(undefined8 *)PTR_PTR_04bd4d20,uVar8,1,lVar12,iVar7,
                                (long)param_1 + 0x364);
          param_1[0x6b] = lVar12;
        }
        memset((void *)(lVar12 + iVar7),0,(ulong)(uVar8 - iVar7));
        *(uint *)(param_1 + 0x6c) = uVar8;
      }
      *(undefined1 *)(param_1[0x6b] + lVar13) = 1;
      if (iVar2 != 0) {
        uVar17 = FUN_00461bf0(param_1 + 0x4b,pbVar19,lVar10);
        plVar21 = param_1 + 0x7d;
        uVar8 = FUN_004b7450(plVar21,&local_80);
        if (*(uint *)(param_1 + 0x7e) == uVar8) {
          if ((*(uint *)((long)param_1 + 0x3f4) & 0x3fffffff) == uVar8) {
            FUN_00426990(*(undefined8 *)PTR_PTR_04bd4d20,plVar21,0x10);
            uVar8 = *(uint *)(param_1 + 0x7e);
          }
          puVar15 = (undefined8 *)(param_1[0x7d] + (long)(int)uVar8 * 0x10);
          *puVar15 = local_80;
          *(int *)(puVar15 + 1) = param_2;
          *(uint *)(param_1 + 0x7e) = uVar8 + 1;
        }
        else {
          *(int *)(*plVar21 + ((long)((ulong)uVar8 << 0x20) >> 0x1c) + 8) = param_2;
        }
        FUN_00466aa0(&local_310);
        pvVar3 = local_80;
        local_260 = PTR_FUN_04bd5ac8;
        puStack_258 = PTR_LAB_04bd5af0;
        local_1c8 = PTR_LAB_04bd5ae8;
        local_1e0 = PTR_LAB_04bd5ad0;
        local_188 = PTR_LAB_04bd5ae0;
        local_198 = PTR_LAB_04bd5af8;
        local_88 = param_1;
        iVar7 = FUN_00426fc0(pbVar19);
        uVar5 = FUN_00426fc0(lVar10);
        uVar9 = FUN_00426fc0(pbVar19);
        FUN_004b7550(&local_310,uVar17,pvVar3,iVar6,uVar20,iVar7 * iVar2,uVar5,uVar9,iVar2);
      }
    }
  }
  return;
}

