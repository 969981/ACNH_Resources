
void FUN_03ca2690(long param_1,long *param_2)

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
    if (local_154[lVar5] == '\0') goto LAB_03ca272c;
    if (local_154[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_03ca272c;
    }
    if (local_154[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_03ca272c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_03ca272c:
  uVar2 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
  uVar3 = 0xd;
  if (0xf2 < uVar2) {
    uVar3 = 0xff - uVar2;
  }
  local_160 = local_154;
  if (0 < (int)uVar3) {
    memcpy(local_154 + uVar2,"EuiAllocator:",(ulong)uVar3);
    local_154[(ulong)uVar3 + (ulong)uVar2] = '\0';
  }
  pcVar4 = local_160;
  (**(code **)(local_168 + 0x18))(&local_168);
  lVar5 = 0;
  do {
    if (local_160[lVar5] == '\0') goto LAB_03ca27cc;
    if (local_160[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_03ca27cc;
    }
    if (local_160[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_03ca27cc;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_03ca27cc:
  uVar2 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar5 = 0;
  do {
    if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_03ca282c;
    lVar1 = param_2[1] + lVar5;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_03ca282c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_03ca282c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_03ca282c:
  uVar3 = (uint)lVar5;
  if ((int)(local_158 - uVar2) <= (int)(uint)lVar5) {
    uVar3 = local_158 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(*param_2 + 0x18))(param_2);
    memcpy(pcVar4 + uVar2,(void *)param_2[1],(ulong)uVar3);
    pcVar4[(int)(uVar3 + uVar2)] = '\0';
  }
  FUN_03c9ef54(&local_168,*(undefined8 *)(param_1 + 0x28),1);
  return;
}

