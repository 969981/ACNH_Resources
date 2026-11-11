
void FUN_0052c630(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  uint local_38;
  uint local_34;
  
  FUN_0052c800();
  *param_1 = &PTR_LAB_048d4918;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x50);
  puVar13 = *(undefined8 **)(param_2 + 0x48);
  uVar12 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_38 = uVar5;
  if ((int)uVar5 < 1) {
    param_1[9] = 0;
    param_1[10] = 0x8000000000000000;
  }
  else {
    puVar6 = (undefined8 *)FUN_00421ed0(uVar12,8,&local_38);
    *(uint *)(param_1 + 10) = uVar5;
    *(uint *)((long)param_1 + 0x54) = local_38;
    uVar3 = uVar5 & 3;
    param_1[9] = puVar6;
    if (2 < uVar5 - 1) {
      iVar10 = uVar3 - uVar5;
      puVar7 = puVar6;
      do {
        *puVar7 = *puVar13;
        puVar7[1] = puVar13[1];
        puVar7[2] = puVar13[2];
        puVar2 = puVar13 + 3;
        puVar6 = puVar7 + 4;
        puVar13 = puVar13 + 4;
        puVar7[3] = *puVar2;
        iVar10 = iVar10 + 4;
        puVar7 = puVar6;
      } while (iVar10 != 0);
    }
    if (uVar3 != 0) {
      iVar10 = -uVar3;
      do {
        iVar10 = iVar10 + 1;
        *puVar6 = *puVar13;
        puVar6 = puVar6 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar10 != 0);
    }
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x60);
  puVar14 = *(undefined2 **)(param_2 + 0x58);
  if ((int)uVar5 < 1) {
    param_1[0xb] = 0;
    param_1[0xc] = 0x8000000000000000;
  }
  else {
    local_34 = uVar5;
    puVar8 = (undefined2 *)FUN_00421ed0(uVar12,2,&local_34);
    *(uint *)(param_1 + 0xc) = uVar5;
    *(uint *)((long)param_1 + 100) = local_34;
    uVar3 = uVar5 & 3;
    param_1[0xb] = puVar8;
    if (2 < uVar5 - 1) {
      iVar10 = uVar3 - uVar5;
      puVar9 = puVar8;
      do {
        *puVar9 = *puVar14;
        puVar9[1] = puVar14[1];
        puVar9[2] = puVar14[2];
        puVar1 = puVar14 + 3;
        puVar8 = puVar9 + 4;
        puVar14 = puVar14 + 4;
        puVar9[3] = *puVar1;
        iVar10 = iVar10 + 4;
        puVar9 = puVar8;
      } while (iVar10 != 0);
    }
    if (uVar3 != 0) {
      iVar10 = -uVar3;
      do {
        iVar10 = iVar10 + 1;
        *puVar8 = *puVar14;
        puVar8 = puVar8 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar10 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  uVar11 = *(undefined8 *)(param_2 + 0x80);
  uVar12 = *(undefined8 *)(param_2 + 0x70);
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  param_1[0xf] = uVar4;
  param_1[0x10] = uVar11;
  param_1[0xe] = uVar12;
  return;
}

