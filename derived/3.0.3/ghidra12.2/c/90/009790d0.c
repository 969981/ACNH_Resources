
undefined8 FUN_009790d0(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_178;
  char *local_170;
  int local_168;
  char local_164 [255];
  undefined1 local_65;
  
  local_164[0] = '\0';
  local_168 = 0x100;
  lVar6 = 0;
  local_65 = 0;
  local_178 = PTR_DAT_04bb21f8 + 0x10;
  do {
    if (local_164[lVar6] == '\0') goto LAB_00979170;
    if (local_164[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_00979170;
    }
    if (local_164[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_00979170;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_00979170:
  uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  local_170 = local_164;
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar6 = 0;
  do {
    if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_009791cc;
    lVar1 = param_1[1] + lVar6;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_009791cc;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_009791cc;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_009791cc:
  uVar3 = (uint)lVar6;
  if ((int)(local_168 - uVar2) <= (int)(uint)lVar6) {
    uVar3 = local_168 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1);
    memcpy(local_164 + uVar2,(void *)param_1[1],(ulong)uVar3);
    local_164[(int)(uVar3 + uVar2)] = '\0';
  }
  pcVar4 = local_170;
  (**(code **)(local_178 + 0x18))(&local_178);
  lVar6 = 0;
  do {
    if (local_170[lVar6] == '\0') goto LAB_0097926c;
    if (local_170[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_0097926c;
    }
    if (local_170[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_0097926c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_0097926c:
  uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  uVar3 = 4;
  if ((int)(local_168 - uVar2) < 5) {
    uVar3 = local_168 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy(pcVar4 + uVar2,&DAT_0405c04e,(ulong)uVar3);
    pcVar4[(ulong)uVar3 + (ulong)uVar2] = '\0';
  }
  uVar5 = 0;
  if ((DAT_04cf8698 != 0) && (lVar6 = FUN_009591f0(DAT_04cf8698,&local_178), uVar5 = 0, lVar6 != 0))
  {
    if (param_2 != 0) {
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(lVar6 + 0xc);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(lVar6 + 0x10);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(lVar6 + 4);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(lVar6 + 8);
    }
    uVar5 = 1;
  }
  return uVar5;
}

