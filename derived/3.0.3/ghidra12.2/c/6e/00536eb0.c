
void FUN_00536eb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long *plVar14;
  uint uVar15;
  uint local_64;
  
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 1);
  puVar13 = (undefined1 *)*param_2;
  uVar12 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar3 < 1) {
    *param_1 = 0;
    param_1[1] = 0x8000000000000000;
  }
  else {
    local_64 = uVar3;
    puVar6 = (undefined1 *)FUN_00421ed0(uVar12,0x20,&local_64);
    uVar15 = 0;
    *param_1 = puVar6;
    *(uint *)(param_1 + 1) = uVar3;
    *(uint *)((long)param_1 + 0xc) = local_64;
    do {
      *puVar6 = *puVar13;
      *(undefined8 *)(puVar6 + 8) = 0;
      *(undefined8 *)(puVar6 + 0x10) = 0x8000000000000000;
      uVar4 = *(uint *)(puVar13 + 0x10);
      puVar11 = *(undefined4 **)(puVar13 + 8);
      if ((int)uVar4 < 1) {
        *(undefined8 *)(puVar6 + 8) = 0;
        *(undefined8 *)(puVar6 + 0x10) = 0x8000000000000000;
      }
      else {
        local_64 = uVar4;
        puVar7 = (undefined4 *)FUN_00421ed0(uVar12,4,&local_64);
        *(uint *)(puVar6 + 0x10) = uVar4;
        *(uint *)(puVar6 + 0x14) = local_64;
        uVar2 = uVar4 & 7;
        *(undefined4 **)(puVar6 + 8) = puVar7;
        if (6 < uVar4 - 1) {
          iVar10 = uVar2 - uVar4;
          puVar9 = puVar7;
          do {
            *puVar9 = *puVar11;
            puVar9[1] = puVar11[1];
            puVar9[2] = puVar11[2];
            puVar9[3] = puVar11[3];
            puVar9[4] = puVar11[4];
            puVar9[5] = puVar11[5];
            puVar9[6] = puVar11[6];
            puVar1 = puVar11 + 7;
            puVar7 = puVar9 + 8;
            puVar11 = puVar11 + 8;
            puVar9[7] = *puVar1;
            iVar10 = iVar10 + 8;
            puVar9 = puVar7;
          } while (iVar10 != 0);
        }
        if (uVar2 != 0) {
          iVar10 = -uVar2;
          do {
            iVar10 = iVar10 + 1;
            *puVar7 = *puVar11;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
          } while (iVar10 != 0);
        }
      }
      uVar15 = uVar15 + 1;
      *(undefined4 *)(puVar6 + 0x18) = *(undefined4 *)(puVar13 + 0x18);
      puVar6 = puVar6 + 0x20;
      puVar13 = puVar13 + 0x20;
    } while (uVar15 != uVar3);
  }
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 3);
  plVar14 = (long *)param_2[2];
  if ((int)uVar3 < 1) {
    param_1[2] = 0;
    param_1[3] = 0x8000000000000000;
  }
  else {
    local_64 = uVar3;
    plVar8 = (long *)FUN_00421ed0(uVar12,0x30,&local_64);
    uVar15 = 0;
    param_1[2] = plVar8;
    *(uint *)(param_1 + 3) = uVar3;
    *(uint *)((long)param_1 + 0x1c) = local_64;
    do {
      *plVar8 = 0;
      plVar8[1] = -0x8000000000000000;
      uVar4 = *(uint *)(plVar14 + 1);
      puVar11 = (undefined4 *)*plVar14;
      if ((int)uVar4 < 1) {
        *plVar8 = 0;
        plVar8[1] = -0x8000000000000000;
      }
      else {
        local_64 = uVar4;
        puVar7 = (undefined4 *)FUN_00421ed0(uVar12,4,&local_64);
        *(uint *)(plVar8 + 1) = uVar4;
        *(uint *)((long)plVar8 + 0xc) = local_64;
        uVar2 = uVar4 & 7;
        *plVar8 = (long)puVar7;
        if (6 < uVar4 - 1) {
          iVar10 = uVar2 - uVar4;
          puVar9 = puVar7;
          do {
            *puVar9 = *puVar11;
            puVar9[1] = puVar11[1];
            puVar9[2] = puVar11[2];
            puVar9[3] = puVar11[3];
            puVar9[4] = puVar11[4];
            puVar9[5] = puVar11[5];
            puVar9[6] = puVar11[6];
            puVar1 = puVar11 + 7;
            puVar7 = puVar9 + 8;
            puVar11 = puVar11 + 8;
            puVar9[7] = *puVar1;
            iVar10 = iVar10 + 8;
            puVar9 = puVar7;
          } while (iVar10 != 0);
        }
        if (uVar2 != 0) {
          iVar10 = -uVar2;
          do {
            iVar10 = iVar10 + 1;
            *puVar7 = *puVar11;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
          } while (iVar10 != 0);
        }
      }
      plVar8[2] = 0;
      plVar8[3] = -0x8000000000000000;
      uVar4 = *(uint *)(plVar14 + 3);
      puVar11 = (undefined4 *)plVar14[2];
      if ((int)uVar4 < 1) {
        plVar8[2] = 0;
        plVar8[3] = -0x8000000000000000;
      }
      else {
        local_64 = uVar4;
        puVar7 = (undefined4 *)FUN_00421ed0(uVar12,4,&local_64);
        *(uint *)(plVar8 + 3) = uVar4;
        *(uint *)((long)plVar8 + 0x1c) = local_64;
        uVar2 = uVar4 & 7;
        plVar8[2] = (long)puVar7;
        if (6 < uVar4 - 1) {
          iVar10 = uVar2 - uVar4;
          puVar9 = puVar7;
          do {
            *puVar9 = *puVar11;
            puVar9[1] = puVar11[1];
            puVar9[2] = puVar11[2];
            puVar9[3] = puVar11[3];
            puVar9[4] = puVar11[4];
            puVar9[5] = puVar11[5];
            puVar9[6] = puVar11[6];
            puVar1 = puVar11 + 7;
            puVar7 = puVar9 + 8;
            puVar11 = puVar11 + 8;
            puVar9[7] = *puVar1;
            iVar10 = iVar10 + 8;
            puVar9 = puVar7;
          } while (iVar10 != 0);
        }
        if (uVar2 != 0) {
          iVar10 = -uVar2;
          do {
            iVar10 = iVar10 + 1;
            *puVar7 = *puVar11;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
          } while (iVar10 != 0);
        }
      }
      lVar5 = plVar14[5];
      uVar15 = uVar15 + 1;
      plVar8[4] = plVar14[4];
      *(int *)(plVar8 + 5) = (int)lVar5;
      plVar8 = plVar8 + 6;
      plVar14 = plVar14 + 6;
    } while (uVar15 != uVar3);
  }
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  return;
}

