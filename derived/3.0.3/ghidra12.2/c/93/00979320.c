
undefined8
FUN_00979320(long *param_1,long param_2,undefined4 *param_3,undefined4 *param_4,undefined4 param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_180;
  char *local_178;
  int local_170;
  char local_16c [255];
  undefined1 local_6d;
  
  local_16c[0] = '\0';
  local_170 = 0x100;
  local_6d = 0;
  lVar6 = 0;
  local_180 = PTR_DAT_04bb21f8 + 0x10;
  do {
    if (local_16c[lVar6] == '\0') goto LAB_009793cc;
    if (local_16c[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_009793cc;
    }
    if (local_16c[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_009793cc;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_009793cc:
  uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  local_178 = local_16c;
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar6 = 0;
  do {
    if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_0097942c;
    lVar1 = param_1[1] + lVar6;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_0097942c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_0097942c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_0097942c:
  uVar3 = (uint)lVar6;
  if ((int)(local_170 - uVar2) <= (int)(uint)lVar6) {
    uVar3 = local_170 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1);
    memcpy(local_16c + uVar2,(void *)param_1[1],(ulong)uVar3);
    local_16c[(int)(uVar3 + uVar2)] = '\0';
  }
  pcVar4 = local_178;
  (**(code **)(local_180 + 0x18))(&local_180);
  lVar6 = 0;
  do {
    if (local_178[lVar6] == '\0') goto LAB_009794cc;
    if (local_178[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_009794cc;
    }
    if (local_178[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_009794cc;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_009794cc:
  uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  uVar3 = 4;
  if ((int)(local_170 - uVar2) < 5) {
    uVar3 = local_170 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy(pcVar4 + uVar2,&DAT_0405c04e,(ulong)uVar3);
    pcVar4[(ulong)uVar3 + (ulong)uVar2] = '\0';
  }
  uVar5 = 0;
  if ((DAT_04cf8698 != 0) &&
     (lVar6 = FUN_009598e0(DAT_04cf8698,&local_180,param_5), uVar5 = 0, lVar6 != 0)) {
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

