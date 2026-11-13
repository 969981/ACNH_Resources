
void FUN_00cc24d0(long param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  long lVar13;
  int local_188;
  undefined4 uStack_184;
  undefined *local_180;
  undefined8 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined *local_150;
  undefined1 *puStack_148;
  undefined4 local_140;
  undefined1 local_13c [63];
  undefined1 local_fd;
  undefined *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  undefined1 local_e4 [63];
  undefined1 local_a5;
  undefined8 local_a0;
  undefined6 uStack_98;
  undefined2 local_92;
  undefined6 uStack_90;
  undefined1 auStack_8a [2];
  undefined8 local_88;
  undefined1 local_80;
  undefined2 local_7e;
  uint local_74;
  uint local_70;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  if ((DAT_05370cd0 == 0) || ((int)*(uint *)(DAT_05370cd0 + 0x20) < 1))
  goto switchD_00cc2560_default;
  if (*(uint *)(DAT_05370cd0 + 0x10) == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(DAT_05370cd0 + 8);
  }
  local_188 = 1;
  switch(*(undefined4 *)(lVar13 - *(int *)(DAT_05370cd0 + 0x14))) {
  case 6:
    break;
  case 7:
    local_188 = 2;
    break;
  case 8:
    local_188 = 3;
    break;
  case 9:
    local_188 = 4;
    break;
  case 10:
    if (1 < *(uint *)(DAT_05370cd0 + 0x20)) {
      if (*(uint *)(DAT_05370cd0 + 0x10) < 2) {
        lVar13 = 0;
      }
      else {
        lVar13 = *(long *)(*(long *)(DAT_05370cd0 + 8) + 8);
      }
      uVar5 = *(int *)(lVar13 - *(int *)(DAT_05370cd0 + 0x14)) - 3;
      if (uVar5 < 7) {
        local_188 = *(int *)(&DAT_04168b5c + (long)(int)uVar5 * 4);
        break;
      }
    }
  default:
switchD_00cc2560_default:
    local_188 = 0;
  }
  if (local_188 - 1U < 9) {
    uVar12 = (&DAT_04168b78)[(int)(local_188 - 1U)];
  }
  else {
    uVar12 = 1;
  }
  *param_2 = uVar12;
  uVar12 = 0;
  if (DAT_05370cd0 != 0) {
    uVar12 = *(undefined4 *)(DAT_05370cd0 + 0x18);
  }
  param_2[1] = uVar12;
  local_170 = 0xb;
  local_16c = 0;
  local_168 = 0xffffffff;
  uStack_160 = 0xffffffff00000000;
  puVar1 = (undefined1 *)((long)&local_a0 + 2);
  local_158 = 0xffffffff;
  local_140 = 0x40;
  local_fd = 0;
  local_13c[0] = 0;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  local_e8 = 0x40;
  local_a5 = 0;
  local_e4[0] = 0;
  puVar4 = auStack_8a;
  if (auStack_8a <= puVar1) {
    puVar4 = puVar1;
  }
  puVar3 = PTR_DAT_04bb5128 + 0x10;
  uStack_90 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_92 = 0;
  local_180 = puVar3;
  puStack_178 = &local_a0;
  local_150 = puVar2;
  puStack_148 = local_13c;
  local_f8 = puVar2;
  puStack_f0 = local_e4;
  memset(&local_a0,0,(ulong)(puVar4 + (-0xe1 - (long)&local_180)) & 0xfffffffffffffffc | 2);
  local_88 = 0;
  local_80 = 0;
  local_7e = *(undefined2 *)PTR_DAT_04bb3170;
  iVar8 = FUN_01d778dc(param_1,&local_188);
  uVar11 = CONCAT44(uStack_184,local_188);
  if (iVar8 != 0) {
    uVar11 = 0;
  }
  *(undefined8 *)(param_2 + 2) = uVar11;
  uVar9 = FUN_01d77c78(param_1);
  uVar11 = 0;
  if ((uVar9 & 1) != 0) {
    uVar9 = FUN_01d77c78(param_1);
    puVar6 = PTR_DAT_04bb7bc0;
    if (((uVar9 & 1) != 0) && (*(char *)(param_1 + 0xc) == '\0')) {
      bVar7 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,param_1 + 0xd,param_1);
      *(byte *)(param_1 + 0xc) = bVar7 & 1;
      if ((bVar7 & 1) == 0) {
        puVar10 = (undefined8 *)FUN_01dff648(*(undefined8 *)puVar6,param_1);
        if (puVar10 == (undefined8 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *puVar10;
        }
        goto LAB_00cc275c;
      }
    }
    uVar11 = 0;
  }
LAB_00cc275c:
  *(undefined8 *)(param_2 + 4) = uVar11;
  local_170 = 0xb;
  local_16c = 0;
  local_158 = 0xffffffff;
  local_140 = 0x40;
  local_fd = 0;
  local_13c[0] = 0;
  local_e8 = 0x40;
  local_a5 = 0;
  local_e4[0] = 0;
  local_168 = 0xffffffff;
  uStack_160 = 0xffffffff00000000;
  uStack_90 = 0;
  puVar4 = auStack_8a;
  if (auStack_8a <= puVar1) {
    puVar4 = puVar1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_92 = 0;
  local_180 = puVar3;
  puStack_178 = &local_a0;
  local_150 = puVar2;
  puStack_148 = local_13c;
  local_f8 = puVar2;
  puStack_f0 = local_e4;
  memset(&local_a0,0,(ulong)(puVar4 + (-0xe1 - (long)&local_180)) & 0xfffffffffffffffc | 2);
  local_88 = 0;
  local_80 = 0;
  local_7e = *(undefined2 *)PTR_DAT_04bb3170;
  iVar8 = FUN_01d778dc(param_1,&local_188);
  local_158 = 0xffffffff;
  local_168 = 0xffffffff;
  uStack_160 = 0xffffffff00000000;
  local_170 = 0xb;
  local_16c = 0;
  local_140 = 0x40;
  if (7 < local_74 || iVar8 != 0) {
    local_74 = 0;
  }
  local_fd = 0;
  local_13c[0] = 0;
  local_e8 = 0x40;
  local_a5 = 0;
  local_e4[0] = 0;
  param_2[6] = local_74;
  uStack_90 = 0;
  puVar4 = auStack_8a;
  if (auStack_8a <= puVar1) {
    puVar4 = puVar1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_92 = 0;
  local_180 = puVar3;
  puStack_178 = &local_a0;
  local_150 = puVar2;
  puStack_148 = local_13c;
  local_f8 = puVar2;
  puStack_f0 = local_e4;
  memset(&local_a0,0,(ulong)(puVar4 + (-0xe1 - (long)&local_180)) & 0xfffffffffffffffc | 2);
  local_88 = 0;
  local_80 = 0;
  local_7e = *(undefined2 *)PTR_DAT_04bb3170;
  iVar8 = FUN_01d778dc(param_1,&local_188);
  if (3 < local_70 || iVar8 != 0) {
    local_70 = 0;
  }
  param_2[7] = local_70;
  return;
}

