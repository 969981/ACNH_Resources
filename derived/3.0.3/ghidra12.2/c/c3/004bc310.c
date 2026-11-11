
void FUN_004bc310(undefined8 *param_1,long param_2,long param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  void *local_80;
  long lStack_78;
  ulong local_70;
  void *local_68;
  
  uVar7 = param_4;
  if (param_4 == 0xffffffff) {
    uVar7 = 1;
  }
  iVar5 = FUN_00426fc0(*(undefined8 *)(param_3 + 0x50));
  pvVar8 = (void *)(**(code **)(*(long *)(*(long *)(param_2 + 8) + 0x140) + 0x10))
                             (*(long *)(param_2 + 8) + 0x140,(long)(int)(iVar5 * uVar7),0);
  local_68 = pvVar8;
  memset(pvVar8,0,(long)(int)(iVar5 * uVar7));
  lVar16 = *(long *)(param_3 + 0x50);
  *param_1 = pvVar8;
  param_1[1] = lVar16;
  *(uint *)(param_1 + 2) = uVar7;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  param_1[3] = 0;
  if (lVar16 == 0) {
    uVar9 = 0;
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00426fc0(lVar16);
    *(int *)((long)param_1 + 0x14) = iVar5;
    uVar9 = FUN_00428370(lVar16);
    if ((uVar9 & 1) != 0) {
      FUN_0043dd30(uVar9 & 0xfffffffffffffffe);
    }
    param_1[3] = uVar9;
  }
  if (0 < (int)uVar7) {
    uVar17 = (ulong)uVar7;
    if ((uVar9 & 1) == 0) {
      do {
        local_80 = pvVar8;
        lStack_78 = lVar16;
        local_70 = uVar9;
        FUN_00440bc0(&local_80);
        if ((local_70 & 1) != 0) {
          FUN_0043dd50(local_70 & 0xfffffffffffffffe);
        }
        pvVar8 = (void *)((long)pvVar8 + (long)iVar5);
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    else {
      do {
        local_80 = pvVar8;
        lStack_78 = lVar16;
        local_70 = uVar9;
        FUN_0043dd30(uVar9 & 0xfffffffffffffffe);
        FUN_00440bc0(&local_80);
        if ((local_70 & 1) != 0) {
          FUN_0043dd50(local_70 & 0xfffffffffffffffe);
        }
        pvVar8 = (void *)((long)pvVar8 + (long)iVar5);
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  iVar4 = *(int *)(*(long *)(param_2 + 8) + 0x2e8);
  lVar16 = (long)iVar4;
  iVar6 = FUN_004b72e0(*(long *)(param_2 + 8) + 0x2c8,*(undefined8 *)(param_3 + 0x50));
  pvVar8 = local_68;
  lVar18 = *(long *)(param_2 + 8);
  uVar12 = *(uint *)(lVar18 + 0x2e8);
  iVar5 = iVar4 + 1;
  uVar2 = *(uint *)(lVar18 + 0x2ec) & 0x3fffffff;
  uVar3 = uVar12;
  if ((int)uVar12 <= iVar5) {
    uVar3 = iVar4 + 1;
  }
  if (param_4 == 0xffffffff) {
    if ((int)uVar2 < (int)uVar3) {
      uVar10 = FUN_00426720(PTR_DAT_048607b8,uVar3,0x18,*(undefined8 *)(lVar18 + 0x2e0),uVar12,
                            lVar18 + 0x2ec);
      uVar12 = *(uint *)(lVar18 + 0x2e8);
      *(undefined8 *)(lVar18 + 0x2e0) = uVar10;
    }
    if (uVar3 - uVar12 == 0 || (int)uVar3 < (int)uVar12) {
      if ((int)uVar3 < (int)uVar12) {
        *(uint *)(lVar18 + 0x2e8) = uVar3;
      }
    }
    else {
      puVar13 = (undefined8 *)(*(long *)(lVar18 + 0x2e0) + (long)(int)uVar12 * 0x18);
      uVar7 = uVar3 - uVar12 & 3;
      *(uint *)(lVar18 + 0x2e8) = uVar3;
      if (2 < uVar3 + ~uVar12) {
        iVar15 = (uVar12 + uVar7) - uVar3;
        puVar14 = puVar13;
        do {
          puVar13 = puVar14 + 0xc;
          *(undefined4 *)((long)puVar14 + 0x14) = 0;
          *(undefined1 *)(puVar14 + 2) = 0;
          *puVar14 = 0;
          puVar14[1] = 0;
          iVar15 = iVar15 + 4;
          *(undefined4 *)((long)puVar14 + 0x2c) = 0;
          *(undefined1 *)(puVar14 + 5) = 0;
          *(undefined4 *)((long)puVar14 + 0x44) = 0;
          *(undefined1 *)(puVar14 + 8) = 0;
          *(undefined4 *)((long)puVar14 + 0x5c) = 0;
          *(undefined1 *)(puVar14 + 0xb) = 0;
          puVar14[3] = 0;
          puVar14[4] = 0;
          puVar14[6] = 0;
          puVar14[7] = 0;
          puVar14[9] = 0;
          puVar14[10] = 0;
          puVar14 = puVar13;
        } while (iVar15 != 0);
      }
      if (uVar7 != 0) {
        iVar15 = -uVar7;
        do {
          *(undefined4 *)((long)puVar13 + 0x14) = 0;
          *(undefined1 *)(puVar13 + 2) = 0;
          iVar15 = iVar15 + 1;
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13 = puVar13 + 3;
        } while (iVar15 != 0);
      }
    }
    puVar13 = (undefined8 *)(*(long *)(lVar18 + 0x2e0) + lVar16 * 0x18);
    uVar10 = *(undefined8 *)(*(long *)(lVar18 + 0x2d0) + (long)iVar6 * 8);
    *(undefined1 *)(puVar13 + 2) = 0;
    *puVar13 = pvVar8;
    puVar13[1] = uVar10;
    *(undefined4 *)((long)puVar13 + 0x14) = 0;
    FUN_004c1040(param_3,iVar4);
  }
  else {
    if ((int)uVar2 < (int)uVar3) {
      uVar10 = FUN_00426720(PTR_DAT_048607b8,uVar3,0x18,*(undefined8 *)(lVar18 + 0x2e0),uVar12,
                            lVar18 + 0x2ec);
      uVar12 = *(uint *)(lVar18 + 0x2e8);
      *(undefined8 *)(lVar18 + 0x2e0) = uVar10;
    }
    if (uVar3 - uVar12 == 0 || (int)uVar3 < (int)uVar12) {
      if ((int)uVar3 < (int)uVar12) {
        *(uint *)(lVar18 + 0x2e8) = uVar3;
      }
    }
    else {
      puVar13 = (undefined8 *)(*(long *)(lVar18 + 0x2e0) + (long)(int)uVar12 * 0x18);
      uVar2 = uVar3 - uVar12 & 3;
      *(uint *)(lVar18 + 0x2e8) = uVar3;
      if (2 < uVar3 + ~uVar12) {
        iVar15 = (uVar12 + uVar2) - uVar3;
        puVar14 = puVar13;
        do {
          puVar13 = puVar14 + 0xc;
          *(undefined4 *)((long)puVar14 + 0x14) = 0;
          *(undefined1 *)(puVar14 + 2) = 0;
          *puVar14 = 0;
          puVar14[1] = 0;
          iVar15 = iVar15 + 4;
          *(undefined4 *)((long)puVar14 + 0x2c) = 0;
          *(undefined1 *)(puVar14 + 5) = 0;
          *(undefined4 *)((long)puVar14 + 0x44) = 0;
          *(undefined1 *)(puVar14 + 8) = 0;
          *(undefined4 *)((long)puVar14 + 0x5c) = 0;
          *(undefined1 *)(puVar14 + 0xb) = 0;
          puVar14[3] = 0;
          puVar14[4] = 0;
          puVar14[6] = 0;
          puVar14[7] = 0;
          puVar14[9] = 0;
          puVar14[10] = 0;
          puVar14 = puVar13;
        } while (iVar15 != 0);
      }
      if (uVar2 != 0) {
        iVar15 = -uVar2;
        do {
          *(undefined4 *)((long)puVar13 + 0x14) = 0;
          *(undefined1 *)(puVar13 + 2) = 0;
          iVar15 = iVar15 + 1;
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13 = puVar13 + 3;
        } while (iVar15 != 0);
      }
    }
    puVar13 = (undefined8 *)(*(long *)(lVar18 + 0x2e0) + lVar16 * 0x18);
    uVar10 = *(undefined8 *)(*(long *)(lVar18 + 0x2d0) + (long)iVar6 * 8);
    *puVar13 = pvVar8;
    puVar13[1] = uVar10;
    *(undefined1 *)(puVar13 + 2) = 1;
    *(uint *)((long)puVar13 + 0x14) = uVar7;
    thunk_FUN_004c0f40(param_3,iVar4,0,uVar7);
  }
  lVar18 = *(long *)(param_2 + 8);
  iVar6 = *(int *)(lVar18 + 0x360);
  if (0 < iVar5 - iVar6) {
    lVar11 = *(long *)(lVar18 + 0x358);
    if ((int)(*(uint *)(lVar18 + 0x364) & 0x3fffffff) <= iVar4) {
      lVar11 = FUN_00426720(PTR_DAT_048607b8,iVar5,1,lVar11,iVar6,lVar18 + 0x364);
      *(long *)(lVar18 + 0x358) = lVar11;
    }
    memset((void *)(lVar11 + iVar6),0,(ulong)(uint)(iVar5 - iVar6));
    *(int *)(lVar18 + 0x360) = iVar5;
  }
  *(undefined1 *)(*(long *)(lVar18 + 0x358) + lVar16) = 1;
  if (local_68 != (void *)0x0) {
    lVar16 = *(long *)(param_2 + 8);
    plVar1 = (long *)(lVar16 + 1000);
    uVar7 = FUN_004b7450(plVar1,&local_68);
    if (*(uint *)(lVar16 + 0x3f0) == uVar7) {
      if ((*(uint *)(lVar16 + 0x3f4) & 0x3fffffff) == uVar7) {
        FUN_00426990(PTR_DAT_048607b8,plVar1,0x10);
        uVar7 = *(uint *)(lVar16 + 0x3f0);
      }
      puVar13 = (undefined8 *)(*(long *)(lVar16 + 1000) + (long)(int)uVar7 * 0x10);
      *puVar13 = local_68;
      *(int *)(puVar13 + 1) = iVar4;
      *(uint *)(lVar16 + 0x3f0) = uVar7 + 1;
    }
    else {
      *(int *)(*plVar1 + ((long)((ulong)uVar7 << 0x20) >> 0x1c) + 8) = iVar4;
    }
  }
  return;
}

