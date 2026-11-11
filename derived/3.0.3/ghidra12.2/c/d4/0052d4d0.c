
void FUN_0052d4d0(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  void *pvVar9;
  int iVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  void *pvVar13;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  FUN_0052c800();
  *param_1 = &PTR_LAB_048d5a50;
  uVar5 = *(undefined4 *)(param_2 + 0x50);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 10) = uVar5;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x60);
  puVar12 = *(undefined2 **)(param_2 + 0x58);
  uVar11 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_6c = uVar6;
  if ((int)uVar6 < 1) {
    param_1[0xb] = 0;
    param_1[0xc] = 0x8000000000000000;
  }
  else {
    puVar7 = (undefined2 *)FUN_00421ed0(uVar11,2,&local_6c);
    *(uint *)(param_1 + 0xc) = uVar6;
    *(uint *)((long)param_1 + 100) = local_6c;
    uVar4 = uVar6 & 3;
    param_1[0xb] = puVar7;
    if (2 < uVar6 - 1) {
      iVar10 = uVar4 - uVar6;
      puVar8 = puVar7;
      do {
        *puVar8 = *puVar12;
        puVar8[1] = puVar12[1];
        puVar8[2] = puVar12[2];
        puVar1 = puVar12 + 3;
        puVar7 = puVar8 + 4;
        puVar12 = puVar12 + 4;
        puVar8[3] = *puVar1;
        iVar10 = iVar10 + 4;
        puVar8 = puVar7;
      } while (iVar10 != 0);
    }
    if (uVar4 != 0) {
      iVar10 = -uVar4;
      do {
        iVar10 = iVar10 + 1;
        *puVar7 = *puVar12;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar10 != 0);
    }
  }
  FUN_0052cf60(param_1 + 0xd,param_2 + 0x68);
  *param_1 = &PTR_LAB_048d5b80;
  param_1[0x18] = 0;
  param_1[0x19] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 200);
  pvVar13 = *(void **)(param_2 + 0xc0);
  local_68 = uVar6;
  if ((int)uVar6 < 1) {
    param_1[0x18] = 0;
    param_1[0x19] = 0x8000000000000000;
  }
  else {
    pvVar9 = (void *)FUN_00421ed0(uVar11,0x280,&local_68);
    param_1[0x18] = pvVar9;
    *(uint *)(param_1 + 0x19) = uVar6;
    *(uint *)((long)param_1 + 0xcc) = local_68;
    if (uVar6 != 1) {
      iVar10 = (uVar6 & 1) - uVar6;
      do {
        memcpy(pvVar9,pvVar13,0x280);
        pvVar2 = (void *)((long)pvVar9 + 0x280);
        pvVar3 = (void *)((long)pvVar13 + 0x280);
        pvVar9 = (void *)((long)pvVar9 + 0x500);
        pvVar13 = (void *)((long)pvVar13 + 0x500);
        memcpy(pvVar2,pvVar3,0x280);
        iVar10 = iVar10 + 2;
      } while (iVar10 != 0);
    }
    if ((uVar6 & 1) != 0) {
      memcpy(pvVar9,pvVar13,0x280);
    }
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0xd8);
  pvVar13 = *(void **)(param_2 + 0xd0);
  if ((int)uVar6 < 1) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0x8000000000000000;
  }
  else {
    local_64 = uVar6;
    pvVar9 = (void *)FUN_00421ed0(uVar11,0x400,&local_64);
    param_1[0x1a] = pvVar9;
    *(uint *)(param_1 + 0x1b) = uVar6;
    *(uint *)((long)param_1 + 0xdc) = local_64;
    uVar4 = uVar6 & 3;
    if (2 < uVar6 - 1) {
      iVar10 = uVar4 - uVar6;
      do {
        memcpy(pvVar9,pvVar13,0x400);
        memcpy((void *)((long)pvVar9 + 0x400),(void *)((long)pvVar13 + 0x400),0x400);
        memcpy((void *)((long)pvVar9 + 0x800),(void *)((long)pvVar13 + 0x800),0x400);
        pvVar2 = (void *)((long)pvVar9 + 0xc00);
        pvVar3 = (void *)((long)pvVar13 + 0xc00);
        pvVar9 = (void *)((long)pvVar9 + 0x1000);
        pvVar13 = (void *)((long)pvVar13 + 0x1000);
        memcpy(pvVar2,pvVar3,0x400);
        iVar10 = iVar10 + 4;
      } while (iVar10 != 0);
    }
    if (uVar4 != 0) {
      iVar10 = -uVar4;
      do {
        memcpy(pvVar9,pvVar13,0x400);
        iVar10 = iVar10 + 1;
        pvVar13 = (void *)((long)pvVar13 + 0x400);
        pvVar9 = (void *)((long)pvVar9 + 0x400);
      } while (iVar10 != 0);
    }
  }
  return;
}

