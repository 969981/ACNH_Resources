
void FUN_00944e70(long param_1,long *param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *local_1a8;
  undefined *puStack_1a0;
  int local_198;
  int iStack_194;
  undefined *local_190;
  int local_188;
  int iStack_184;
  undefined *local_180;
  char *local_178;
  int local_170;
  char local_16c [255];
  undefined1 local_6d;
  
  local_16c[0] = '\0';
  local_170 = 0x100;
  local_6d = 0;
  lVar8 = 0;
  local_180 = PTR_DAT_04bb21f8 + 0x10;
  do {
    if (local_16c[lVar8] == '\0') goto LAB_00944f1c;
    if (local_16c[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_00944f1c;
    }
    if (local_16c[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_00944f1c;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_00944f1c:
  uVar3 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
  local_178 = local_16c;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar8 = 0;
  do {
    if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_00944f7c;
    lVar6 = param_2[1] + lVar8;
    if (*(char *)(lVar6 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_00944f7c;
    }
    if (*(char *)(lVar6 + 2) == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_00944f7c;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_00944f7c:
  uVar4 = (uint)lVar8;
  if ((int)(local_170 - uVar3) <= (int)(uint)lVar8) {
    uVar4 = local_170 + ~uVar3;
  }
  if (0 < (int)uVar4) {
    (**(code **)(*param_2 + 0x18))(param_2);
    memcpy(local_16c + uVar3,(void *)param_2[1],(ulong)uVar4);
    local_16c[(int)(uVar4 + uVar3)] = '\0';
  }
  pcVar5 = local_178;
  (**(code **)(local_180 + 0x18))(&local_180);
  lVar8 = 0;
  do {
    if (local_178[lVar8] == '\0') goto LAB_0094501c;
    if (local_178[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_0094501c;
    }
    if (local_178[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_0094501c;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_0094501c:
  uVar3 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
  uVar4 = 4;
  if ((int)(local_170 - uVar3) < 5) {
    uVar4 = local_170 + ~uVar3;
  }
  if (0 < (int)uVar4) {
    memcpy(pcVar5 + uVar3,&DAT_0405c04e,(ulong)uVar4);
    pcVar5[(ulong)uVar4 + (ulong)uVar3] = '\0';
  }
  lVar8 = FUN_009534b0(*(undefined8 *)PTR_DAT_04bb2228,&local_180);
  if (lVar8 != 0) {
    if ((param_5 & 1) == 0) {
      lVar6 = *(long *)(param_1 + 0x80);
      if (lVar6 == 0) {
        return;
      }
    }
    else {
      lVar6 = *(long *)(param_1 + 0x68);
    }
    uVar7 = FUN_009692a0(0,0,lVar6,lVar8,param_3,0);
    if ((uVar7 & 1) != 0) {
      local_188 = *(int *)(param_3 + 8) * 2;
      iStack_184 = *(int *)(param_3 + 0xc) * 2;
      iVar1 = local_188 + *(int *)(lVar8 + 4);
      iVar2 = iStack_184 + *(int *)(lVar8 + 8);
      local_1a8 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_1a0 = PTR_DAT_04bb2010 + 0x10;
      local_198 = local_188;
      if (iVar1 <= local_188) {
        local_198 = iVar1;
      }
      if (local_188 <= iVar1) {
        local_188 = iVar1;
      }
      iStack_194 = iStack_184;
      if (iVar2 <= iStack_184) {
        iStack_194 = iVar2;
      }
      if (iStack_184 <= iVar2) {
        iStack_184 = iVar2;
      }
      lVar8 = 0x68;
      if ((param_5 & 1) == 0) {
        lVar8 = 0x80;
      }
      local_190 = puStack_1a0;
      FUN_0096e9e0(*(undefined8 *)(param_1 + lVar8),&local_1a8);
      if (param_4 != 0) {
        *(int *)(param_4 + 0x10) = local_198;
        *(int *)(param_4 + 0x14) = iStack_194;
        *(int *)(param_4 + 0x20) = local_188;
        *(int *)(param_4 + 0x24) = iStack_184;
      }
    }
  }
  return;
}

