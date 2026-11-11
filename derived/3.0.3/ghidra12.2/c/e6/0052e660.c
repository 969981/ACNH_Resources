
void FUN_0052e660(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  void *pvVar8;
  int iVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  void *pvVar12;
  uint local_64;
  uint local_58;
  uint local_54;
  
  FUN_0052c800();
  *param_1 = &PTR_LAB_048d5de0;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0x50);
  puVar11 = *(undefined2 **)(param_2 + 0x48);
  uVar10 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_64 = uVar5;
  if ((int)uVar5 < 1) {
    param_1[9] = 0;
    param_1[10] = 0x8000000000000000;
  }
  else {
    puVar6 = (undefined2 *)FUN_00421ed0(uVar10,2,&local_64);
    *(uint *)(param_1 + 10) = uVar5;
    *(uint *)((long)param_1 + 0x54) = local_64;
    uVar4 = uVar5 & 3;
    param_1[9] = puVar6;
    if (2 < uVar5 - 1) {
      iVar9 = uVar4 - uVar5;
      puVar7 = puVar6;
      do {
        *puVar7 = *puVar11;
        puVar7[1] = puVar11[1];
        puVar7[2] = puVar11[2];
        puVar1 = puVar11 + 3;
        puVar6 = puVar7 + 4;
        puVar11 = puVar11 + 4;
        puVar7[3] = *puVar1;
        iVar9 = iVar9 + 4;
        puVar7 = puVar6;
      } while (iVar9 != 0);
    }
    if (uVar4 != 0) {
      iVar9 = -uVar4;
      do {
        iVar9 = iVar9 + 1;
        *puVar6 = *puVar11;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar9 != 0);
    }
  }
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  FUN_0052cf60(param_1 + 0xc,param_2 + 0x60);
  *param_1 = &PTR_LAB_048d6040;
  param_1[0x17] = 0;
  param_1[0x18] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0xc0);
  pvVar12 = *(void **)(param_2 + 0xb8);
  local_58 = uVar5;
  if ((int)uVar5 < 1) {
    param_1[0x17] = 0;
    param_1[0x18] = 0x8000000000000000;
  }
  else {
    pvVar8 = (void *)FUN_00421ed0(uVar10,0x100,&local_58);
    param_1[0x17] = pvVar8;
    *(uint *)(param_1 + 0x18) = uVar5;
    *(uint *)((long)param_1 + 0xc4) = local_58;
    uVar4 = uVar5 & 3;
    if (2 < uVar5 - 1) {
      iVar9 = uVar4 - uVar5;
      do {
        memcpy(pvVar8,pvVar12,0x100);
        memcpy((void *)((long)pvVar8 + 0x100),(void *)((long)pvVar12 + 0x100),0x100);
        memcpy((void *)((long)pvVar8 + 0x200),(void *)((long)pvVar12 + 0x200),0x100);
        pvVar2 = (void *)((long)pvVar8 + 0x300);
        pvVar3 = (void *)((long)pvVar12 + 0x300);
        pvVar8 = (void *)((long)pvVar8 + 0x400);
        pvVar12 = (void *)((long)pvVar12 + 0x400);
        memcpy(pvVar2,pvVar3,0x100);
        iVar9 = iVar9 + 4;
      } while (iVar9 != 0);
    }
    if (uVar4 != 0) {
      iVar9 = -uVar4;
      do {
        memcpy(pvVar8,pvVar12,0x100);
        iVar9 = iVar9 + 1;
        pvVar12 = (void *)((long)pvVar12 + 0x100);
        pvVar8 = (void *)((long)pvVar8 + 0x100);
      } while (iVar9 != 0);
    }
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0x8000000000000000;
  uVar5 = *(uint *)(param_2 + 0xd0);
  pvVar12 = *(void **)(param_2 + 200);
  if ((int)uVar5 < 1) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0x8000000000000000;
  }
  else {
    local_54 = uVar5;
    pvVar8 = (void *)FUN_00421ed0(uVar10,0x100,&local_54);
    param_1[0x19] = pvVar8;
    *(uint *)(param_1 + 0x1a) = uVar5;
    *(uint *)((long)param_1 + 0xd4) = local_54;
    uVar4 = uVar5 & 3;
    if (2 < uVar5 - 1) {
      iVar9 = uVar4 - uVar5;
      do {
        memcpy(pvVar8,pvVar12,0x100);
        memcpy((void *)((long)pvVar8 + 0x100),(void *)((long)pvVar12 + 0x100),0x100);
        memcpy((void *)((long)pvVar8 + 0x200),(void *)((long)pvVar12 + 0x200),0x100);
        pvVar2 = (void *)((long)pvVar8 + 0x300);
        pvVar3 = (void *)((long)pvVar12 + 0x300);
        pvVar8 = (void *)((long)pvVar8 + 0x400);
        pvVar12 = (void *)((long)pvVar12 + 0x400);
        memcpy(pvVar2,pvVar3,0x100);
        iVar9 = iVar9 + 4;
      } while (iVar9 != 0);
    }
    if (uVar4 != 0) {
      iVar9 = -uVar4;
      do {
        memcpy(pvVar8,pvVar12,0x100);
        iVar9 = iVar9 + 1;
        pvVar12 = (void *)((long)pvVar12 + 0x100);
        pvVar8 = (void *)((long)pvVar8 + 0x100);
      } while (iVar9 != 0);
    }
  }
  return;
}

