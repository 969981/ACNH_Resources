
undefined8 FUN_00979900(long *param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *local_178;
  char *local_170;
  int local_168;
  char local_164 [255];
  undefined1 local_65;
  
  local_164[0] = '\0';
  local_168 = 0x100;
  lVar9 = 0;
  local_65 = 0;
  local_178 = PTR_DAT_04bb21f8 + 0x10;
  do {
    if (local_164[lVar9] == '\0') goto LAB_0097999c;
    if (local_164[lVar9 + 1] == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_0097999c;
    }
    if (local_164[lVar9 + 2] == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_0097999c;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_0097999c:
  uVar2 = (uint)lVar9 & ((int)(uint)lVar9 >> 0x1f ^ 0xffffffffU);
  local_170 = local_164;
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar9 = 0;
  do {
    if (*(char *)(param_1[1] + lVar9) == '\0') goto LAB_009799fc;
    lVar1 = param_1[1] + lVar9;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_009799fc;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_009799fc;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_009799fc:
  uVar3 = (uint)lVar9;
  if ((int)(local_168 - uVar2) <= (int)(uint)lVar9) {
    uVar3 = local_168 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1);
    memcpy(local_164 + uVar2,(void *)param_1[1],(ulong)uVar3);
    local_164[(int)(uVar3 + uVar2)] = '\0';
  }
  pcVar7 = local_170;
  (**(code **)(local_178 + 0x18))(&local_178);
  lVar9 = 0;
  do {
    if (local_170[lVar9] == '\0') goto LAB_00979a9c;
    if (local_170[lVar9 + 1] == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_00979a9c;
    }
    if (local_170[lVar9 + 2] == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_00979a9c;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_00979a9c:
  uVar2 = (uint)lVar9 & ((int)(uint)lVar9 >> 0x1f ^ 0xffffffffU);
  uVar3 = 4;
  if ((int)(local_168 - uVar2) < 5) {
    uVar3 = local_168 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy(pcVar7 + uVar2,&DAT_0405c04e,(ulong)uVar3);
    pcVar7[(ulong)uVar3 + (ulong)uVar2] = '\0';
  }
  uVar8 = 0;
  if ((DAT_04cf8698 != 0) && (lVar9 = FUN_009591f0(DAT_04cf8698,&local_178), uVar8 = 0, lVar9 != 0))
  {
    iVar5 = *(int *)(param_2 + 8);
    *(int *)(param_3 + 8) = iVar5;
    iVar6 = *(int *)(param_2 + 0xc);
    *(int *)(param_3 + 0xc) = iVar6;
    iVar4 = *(int *)(lVar9 + 0x10);
    uVar8 = 1;
    *(int *)(param_3 + 8) = iVar5 - *(int *)(lVar9 + 0xc);
    *(int *)(param_3 + 0xc) = iVar6 - iVar4;
  }
  return uVar8;
}

