
void FUN_009471c0(long param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *local_2a0;
  undefined4 *local_298;
  int local_290;
  undefined4 local_28c;
  undefined *local_288;
  int local_280;
  uint uStack_27c;
  undefined1 local_18d;
  undefined *local_188;
  undefined8 local_180;
  undefined *local_178;
  char *local_170;
  int local_168;
  char local_164 [255];
  undefined1 local_65;
  
  puVar5 = PTR_DAT_04bb21f8;
  local_164[0] = '\0';
  local_168 = 0x100;
  lVar11 = 0;
  local_65 = 0;
  local_178 = PTR_DAT_04bb21f8 + 0x10;
  local_170 = local_164;
  do {
    if (local_164[lVar11] == '\0') goto LAB_0094725c;
    if (local_164[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_0094725c;
    }
    if (local_164[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_0094725c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_0094725c:
  uVar2 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar11 = 0;
  do {
    if (*(char *)(param_2[1] + lVar11) == '\0') goto LAB_009472bc;
    lVar1 = param_2[1] + lVar11;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_009472bc;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_009472bc;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_009472bc:
  uVar3 = (uint)lVar11;
  if ((int)(local_168 - uVar2) <= (int)(uint)lVar11) {
    uVar3 = local_168 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(*param_2 + 0x18))(param_2);
    memcpy(local_164 + uVar2,(void *)param_2[1],(ulong)uVar3);
    local_164[(int)(uVar3 + uVar2)] = '\0';
  }
  pcVar8 = local_170;
  local_2a0 = PTR_DAT_04bb2020 + 0x10;
  local_298 = (undefined4 *)&DAT_0405c04e;
  (**(code **)(local_178 + 0x18))(&local_178);
  lVar11 = 0;
  do {
    if (local_170[lVar11] == '\0') goto LAB_0094737c;
    if (local_170[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_0094737c;
    }
    if (local_170[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_0094737c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_0094737c:
  uVar2 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_2a0 + 0x18))(&local_2a0);
  lVar11 = 0;
  do {
    if (*(char *)((long)local_298 + lVar11) == '\0') goto LAB_009473dc;
    if (*(char *)((long)local_298 + lVar11 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_009473dc;
    }
    if (*(char *)((long)local_298 + lVar11 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_009473dc;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_009473dc:
  uVar3 = (uint)lVar11;
  if ((int)(local_168 - uVar2) <= (int)(uint)lVar11) {
    uVar3 = local_168 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(local_2a0 + 0x18))(&local_2a0);
    memcpy(pcVar8 + uVar2,local_298,(ulong)uVar3);
    pcVar8[(int)(uVar3 + uVar2)] = '\0';
  }
  puVar6 = PTR_DAT_04bb2228;
  lVar11 = FUN_00953340(*(undefined8 *)PTR_DAT_04bb2228,&local_178);
  if (lVar11 != 0) {
    local_188 = PTR_DAT_04bb2018 + 0x10;
    local_180 = 0x1000000010;
    uVar9 = FUN_009692a0(0,0,*(undefined8 *)(param_1 + 0x80),lVar11,&local_188,1);
    if ((uVar9 & 1) != 0) {
      local_2a0 = PTR_DAT_04bbc1a0 + 0x10;
      local_280 = *(int *)(lVar11 + 0xc) + (int)local_180 * 2;
      uStack_27c = *(int *)(lVar11 + 0x10) + local_180._4_4_ * 2;
      local_298 = (undefined4 *)(PTR_DAT_04bb2010 + 0x10);
      iVar4 = *(int *)(lVar11 + 4) + local_280 + -1;
      uVar2 = (*(int *)(lVar11 + 8) + uStack_27c) - 1;
      local_290 = local_280;
      if (iVar4 <= local_280) {
        local_290 = iVar4;
      }
      if (local_280 <= iVar4) {
        local_280 = iVar4;
      }
      local_28c = uStack_27c;
      if ((int)uVar2 <= (int)uStack_27c) {
        local_28c = uVar2;
      }
      if ((int)uStack_27c <= (int)uVar2) {
        uStack_27c = uVar2;
      }
      local_288 = (undefined *)local_298;
      FUN_0096e9e0(*(undefined8 *)(param_1 + 0x80),&local_2a0);
      if (param_3 != 0) {
        *(int *)(param_3 + 0x10) = local_290;
        *(uint *)(param_3 + 0x14) = local_28c;
        *(int *)(param_3 + 0x20) = local_280;
        *(uint *)(param_3 + 0x24) = uStack_27c;
      }
      FUN_00970be0(*(undefined8 *)(param_1 + 0x80),&local_2a0,0);
    }
    lVar11 = 0;
    local_28c = local_28c & 0xffffff00;
    local_290 = 0x100;
    local_2a0 = puVar5 + 0x10;
    local_18d = 0;
    do {
      if (*(char *)((long)&local_28c + lVar11) == '\0') goto LAB_00947570;
      if (*(char *)((long)&local_28c + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_00947570;
      }
      if (*(char *)((long)&local_28c + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_00947570;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_00947570:
    uVar2 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
    local_298 = &local_28c;
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar11 = 0;
    do {
      if (*(char *)(param_2[1] + lVar11) == '\0') goto LAB_009475cc;
      lVar1 = param_2[1] + lVar11;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_009475cc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_009475cc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_009475cc:
    uVar3 = (uint)lVar11;
    if ((int)(local_290 - uVar2) <= (int)(uint)lVar11) {
      uVar3 = local_290 + ~uVar2;
    }
    if (0 < (int)uVar3) {
      (**(code **)(*param_2 + 0x18))(param_2);
      memcpy((void *)((long)&local_28c + (ulong)uVar2),(void *)param_2[1],(ulong)uVar3);
      *(undefined1 *)((long)&local_28c + (long)(int)(uVar3 + uVar2)) = 0;
    }
    puVar7 = local_298;
    (**(code **)(local_2a0 + 0x18))(&local_2a0);
    lVar11 = 0;
    do {
      if (*(char *)((long)local_298 + lVar11) == '\0') goto LAB_0094766c;
      if (*(char *)((long)local_298 + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0094766c;
      }
      if (*(char *)((long)local_298 + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0094766c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0094766c:
    uVar2 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
    uVar3 = 10;
    if ((int)(local_290 - uVar2) < 0xb) {
      uVar3 = local_290 + ~uVar2;
    }
    if (0 < (int)uVar3) {
      memcpy((void *)((long)puVar7 + (ulong)uVar2),"Camera.pbc",(ulong)uVar3);
      *(undefined1 *)((long)puVar7 + (ulong)uVar3 + (ulong)uVar2) = 0;
    }
    uVar10 = FUN_00953340(*(undefined8 *)puVar6,&local_2a0);
    *(undefined8 *)(param_1 + 0x1168) = uVar10;
  }
  return;
}

