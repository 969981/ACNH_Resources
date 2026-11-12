
void FUN_00947800(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  undefined *local_168;
  char *local_160;
  int local_158;
  char local_154 [255];
  undefined1 local_55;
  
  local_154[0] = '\0';
  local_158 = 0x100;
  lVar5 = 0;
  local_55 = 0;
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  do {
    if (local_154[lVar5] == '\0') goto LAB_00947890;
    if (local_154[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_00947890;
    }
    if (local_154[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_00947890;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_00947890:
  uVar2 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
  local_160 = local_154;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar5 = 0;
  do {
    if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_009478ec;
    lVar1 = param_2[1] + lVar5;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_009478ec;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_009478ec;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_009478ec:
  uVar3 = (uint)lVar5;
  if ((int)(local_158 - uVar2) <= (int)(uint)lVar5) {
    uVar3 = local_158 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(*param_2 + 0x18))(param_2);
    memcpy(local_154 + uVar2,(void *)param_2[1],(ulong)uVar3);
    local_154[(int)(uVar3 + uVar2)] = '\0';
  }
  pcVar4 = local_160;
  (**(code **)(local_168 + 0x18))(&local_168);
  lVar5 = 0;
  do {
    if (local_160[lVar5] == '\0') goto LAB_0094798c;
    if (local_160[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_0094798c;
    }
    if (local_160[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_0094798c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_0094798c:
  uVar2 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
  uVar3 = 4;
  if ((int)(local_158 - uVar2) < 5) {
    uVar3 = local_158 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy(pcVar4 + uVar2,&DAT_0405c04e,(ulong)uVar3);
    pcVar4[(ulong)uVar3 + (ulong)uVar2] = '\0';
  }
  FUN_00958c50(*(undefined8 *)PTR_DAT_04bb2228,&local_168);
  return;
}

