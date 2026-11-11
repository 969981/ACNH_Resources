
void FUN_0052aa40(long *param_1,long param_2)

{
  void *__dest;
  void *__src;
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  void *__dest_00;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  void *__src_00;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  uint local_58;
  uint local_54;
  
  param_1[2] = 1;
  *param_1 = (long)&PTR_LAB_048d59a0;
  param_1[1] = 0xffffffff;
  FUN_0043bd50(param_1 + 3,param_2 + 0x18);
  puVar8 = PTR_DAT_04bdde70;
  param_1[4] = *(long *)(param_2 + 0x20);
  param_1[5] = 0;
  *param_1 = (long)(puVar8 + 0x10);
  param_1[6] = -0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x30);
  __src_00 = *(void **)(param_2 + 0x28);
  uVar11 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_58 = uVar6;
  if ((int)uVar6 < 1) {
    param_1[5] = 0;
    param_1[6] = -0x8000000000000000;
  }
  else {
    __dest_00 = (void *)FUN_00421ed0(uVar11,0xc0,&local_58);
    param_1[5] = (long)__dest_00;
    *(uint *)(param_1 + 6) = uVar6;
    *(uint *)((long)param_1 + 0x34) = local_58;
    uVar1 = uVar6 & 3;
    if (2 < uVar6 - 1) {
      iVar14 = uVar1 - uVar6;
      do {
        memcpy(__dest_00,__src_00,0xc0);
        memcpy((void *)((long)__dest_00 + 0xc0),(void *)((long)__src_00 + 0xc0),0xc0);
        memcpy((void *)((long)__dest_00 + 0x180),(void *)((long)__src_00 + 0x180),0xc0);
        __dest = (void *)((long)__dest_00 + 0x240);
        __src = (void *)((long)__src_00 + 0x240);
        __dest_00 = (void *)((long)__dest_00 + 0x300);
        __src_00 = (void *)((long)__src_00 + 0x300);
        memcpy(__dest,__src,0xc0);
        iVar14 = iVar14 + 4;
      } while (iVar14 != 0);
    }
    if (uVar1 != 0) {
      iVar14 = -uVar1;
      do {
        memcpy(__dest_00,__src_00,0xc0);
        iVar14 = iVar14 + 1;
        __src_00 = (void *)((long)__src_00 + 0xc0);
        __dest_00 = (void *)((long)__dest_00 + 0xc0);
      } while (iVar14 != 0);
    }
  }
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  uVar6 = *(uint *)(param_2 + 0x40);
  puVar12 = *(undefined8 **)(param_2 + 0x38);
  if ((int)uVar6 < 1) {
    param_1[7] = 0;
    param_1[8] = -0x8000000000000000;
  }
  else {
    local_54 = uVar6;
    puVar9 = (undefined8 *)FUN_00421ed0(uVar11,0x30,&local_54);
    *(uint *)(param_1 + 8) = uVar6;
    *(uint *)((long)param_1 + 0x44) = local_54;
    uVar1 = uVar6 & 3;
    param_1[7] = (long)puVar9;
    if (2 < uVar6 - 1) {
      iVar14 = uVar1 - uVar6;
      puVar10 = puVar9;
      puVar13 = puVar12;
      do {
        uVar11 = puVar13[1];
        puVar9 = puVar10 + 0x18;
        *puVar10 = *puVar13;
        puVar10[1] = uVar11;
        iVar14 = iVar14 + 4;
        uVar11 = puVar13[2];
        uVar2 = puVar13[3];
        uVar3 = puVar13[5];
        puVar10[4] = puVar13[4];
        puVar10[5] = uVar3;
        puVar10[2] = uVar11;
        puVar10[3] = uVar2;
        uVar11 = puVar13[6];
        puVar10[7] = puVar13[7];
        uVar2 = puVar13[8];
        uVar4 = puVar13[9];
        uVar3 = puVar13[10];
        uVar5 = puVar13[0xb];
        puVar10[6] = uVar11;
        puVar10[10] = uVar3;
        puVar10[0xb] = uVar5;
        puVar10[8] = uVar2;
        puVar10[9] = uVar4;
        uVar11 = puVar13[0xc];
        puVar10[0xd] = puVar13[0xd];
        uVar2 = puVar13[0xe];
        uVar4 = puVar13[0xf];
        uVar3 = puVar13[0x10];
        uVar5 = puVar13[0x11];
        puVar10[0xc] = uVar11;
        puVar10[0x10] = uVar3;
        puVar10[0x11] = uVar5;
        puVar12 = puVar13 + 0x18;
        puVar10[0xe] = uVar2;
        puVar10[0xf] = uVar4;
        uVar11 = puVar13[0x13];
        puVar10[0x12] = puVar13[0x12];
        puVar10[0x13] = uVar11;
        uVar11 = puVar13[0x14];
        uVar2 = puVar13[0x15];
        uVar3 = puVar13[0x17];
        puVar10[0x16] = puVar13[0x16];
        puVar10[0x17] = uVar3;
        puVar10[0x14] = uVar11;
        puVar10[0x15] = uVar2;
        puVar10 = puVar9;
        puVar13 = puVar12;
      } while (iVar14 != 0);
    }
    if (uVar1 != 0) {
      iVar14 = -uVar1;
      do {
        uVar11 = puVar12[1];
        iVar14 = iVar14 + 1;
        *puVar9 = *puVar12;
        puVar9[1] = uVar11;
        uVar11 = puVar12[2];
        uVar2 = puVar12[3];
        puVar10 = puVar12 + 4;
        uVar3 = puVar12[5];
        puVar12 = puVar12 + 6;
        puVar9[4] = *puVar10;
        puVar9[5] = uVar3;
        puVar9[2] = uVar11;
        puVar9[3] = uVar2;
        puVar9 = puVar9 + 6;
      } while (iVar14 != 0);
    }
  }
  uVar7 = *(undefined4 *)(param_2 + 0x48);
  *(undefined2 *)((long)param_1 + 0x4c) = *(undefined2 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 9) = uVar7;
  return;
}

