
void FUN_0052aff0(long *param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint local_38;
  uint local_34;
  
  param_1[2] = 1;
  *param_1 = (long)&PTR_LAB_048d59a0;
  param_1[1] = 0xffffffff;
  FUN_0043bd50(param_1 + 3,param_2 + 0x18);
  puVar4 = PTR_DAT_04bdddd8;
  param_1[4] = *(long *)(param_2 + 0x20);
  param_1[5] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[6] = -0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x30);
  puVar11 = *(undefined8 **)(param_2 + 0x28);
  uVar10 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_38 = uVar3;
  if ((int)uVar3 < 1) {
    param_1[5] = 0;
    param_1[6] = -0x8000000000000000;
  }
  else {
    puVar5 = (undefined8 *)FUN_00421ed0(uVar10,0x10,&local_38);
    *(uint *)(param_1 + 6) = uVar3;
    *(uint *)((long)param_1 + 0x34) = local_38;
    uVar2 = uVar3 & 3;
    param_1[5] = (long)puVar5;
    if (2 < uVar3 - 1) {
      iVar8 = uVar2 - uVar3;
      puVar6 = puVar5;
      puVar12 = puVar11;
      do {
        uVar9 = puVar12[1];
        puVar5 = puVar6 + 8;
        *puVar6 = *puVar12;
        puVar6[1] = uVar9;
        puVar11 = puVar12 + 8;
        uVar9 = puVar12[3];
        iVar8 = iVar8 + 4;
        puVar6[2] = puVar12[2];
        puVar6[3] = uVar9;
        uVar9 = puVar12[5];
        puVar6[4] = puVar12[4];
        puVar6[5] = uVar9;
        uVar9 = puVar12[7];
        puVar6[6] = puVar12[6];
        puVar6[7] = uVar9;
        puVar6 = puVar5;
        puVar12 = puVar11;
      } while (iVar8 != 0);
    }
    if (uVar2 != 0) {
      iVar8 = -uVar2;
      do {
        uVar9 = puVar11[1];
        *puVar5 = *puVar11;
        puVar5[1] = uVar9;
        iVar8 = iVar8 + 1;
        puVar5 = puVar5 + 2;
        puVar11 = puVar11 + 2;
      } while (iVar8 != 0);
    }
  }
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 0x40);
  puVar11 = *(undefined8 **)(param_2 + 0x38);
  if ((int)uVar3 < 1) {
    param_1[7] = 0;
    param_1[8] = -0x8000000000000000;
  }
  else {
    local_34 = uVar3;
    puVar5 = (undefined8 *)FUN_00421ed0(uVar10,0x14,&local_34);
    *(uint *)(param_1 + 8) = uVar3;
    *(uint *)((long)param_1 + 0x44) = local_34;
    uVar2 = uVar3 & 3;
    param_1[7] = (long)puVar5;
    if (2 < uVar3 - 1) {
      iVar8 = uVar2 - uVar3;
      puVar6 = puVar5;
      do {
        uVar10 = *puVar11;
        uVar9 = puVar11[1];
        *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar11 + 2);
        *puVar6 = uVar10;
        puVar6[1] = uVar9;
        uVar10 = *(undefined8 *)((long)puVar11 + 0x14);
        uVar9 = *(undefined8 *)((long)puVar11 + 0x1c);
        *(undefined4 *)((long)puVar6 + 0x24) = *(undefined4 *)((long)puVar11 + 0x24);
        *(undefined8 *)((long)puVar6 + 0x1c) = uVar9;
        *(undefined8 *)((long)puVar6 + 0x14) = uVar10;
        uVar10 = puVar11[5];
        uVar9 = puVar11[6];
        *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(puVar11 + 7);
        puVar6[5] = uVar10;
        puVar6[6] = uVar9;
        uVar10 = *(undefined8 *)((long)puVar11 + 0x3c);
        uVar9 = *(undefined8 *)((long)puVar11 + 0x44);
        puVar1 = (undefined4 *)((long)puVar11 + 0x4c);
        puVar5 = puVar6 + 10;
        puVar11 = puVar11 + 10;
        *(undefined4 *)((long)puVar6 + 0x4c) = *puVar1;
        *(undefined8 *)((long)puVar6 + 0x44) = uVar9;
        *(undefined8 *)((long)puVar6 + 0x3c) = uVar10;
        iVar8 = iVar8 + 4;
        puVar6 = puVar5;
      } while (iVar8 != 0);
    }
    if (uVar2 != 0) {
      iVar8 = -uVar2;
      do {
        uVar10 = *puVar11;
        uVar9 = puVar11[1];
        *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar11 + 2);
        *puVar5 = uVar10;
        puVar5[1] = uVar9;
        puVar5 = (undefined8 *)((long)puVar5 + 0x14);
        puVar11 = (undefined8 *)((long)puVar11 + 0x14);
        iVar8 = iVar8 + 1;
      } while (iVar8 != 0);
    }
  }
  lVar7 = *(long *)(param_2 + 0x48);
  *(undefined8 *)((long)param_1 + 0x4d) = *(undefined8 *)(param_2 + 0x4d);
  param_1[9] = lVar7;
  return;
}

