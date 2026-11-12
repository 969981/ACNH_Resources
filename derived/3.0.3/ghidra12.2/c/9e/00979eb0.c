
bool FUN_00979eb0(long *param_1,long param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6
                 )

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined *local_180;
  char *local_178;
  int local_170;
  char local_16c [255];
  undefined1 local_6d;
  
  local_16c[0] = '\0';
  local_170 = 0x100;
  local_6d = 0;
  lVar4 = 0;
  local_180 = PTR_DAT_04bb21f8 + 0x10;
  do {
    if (local_16c[lVar4] == '\0') goto LAB_00979f5c;
    if (local_16c[lVar4 + 1] == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_00979f5c;
    }
    if (local_16c[lVar4 + 2] == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_00979f5c;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  lVar4 = 0;
LAB_00979f5c:
  uVar1 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
  local_178 = local_16c;
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar4 = 0;
  do {
    if (*(char *)(param_1[1] + lVar4) == '\0') goto LAB_00979fbc;
    lVar5 = param_1[1] + lVar4;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_00979fbc;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_00979fbc;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  lVar4 = 0;
LAB_00979fbc:
  uVar2 = (uint)lVar4;
  if ((int)(local_170 - uVar1) <= (int)(uint)lVar4) {
    uVar2 = local_170 + ~uVar1;
  }
  if (0 < (int)uVar2) {
    (**(code **)(*param_1 + 0x18))(param_1);
    memcpy(local_16c + uVar1,(void *)param_1[1],(ulong)uVar2);
    local_16c[(int)(uVar2 + uVar1)] = '\0';
  }
  pcVar3 = local_178;
  (**(code **)(local_180 + 0x18))(&local_180);
  lVar4 = 0;
  do {
    if (local_178[lVar4] == '\0') goto LAB_0097a08c;
    if (local_178[lVar4 + 1] == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_0097a08c;
    }
    if (local_178[lVar4 + 2] == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_0097a08c;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  lVar4 = 0;
LAB_0097a08c:
  uVar1 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
  uVar2 = 4;
  if ((int)(local_170 - uVar1) < 5) {
    uVar2 = local_170 + ~uVar1;
  }
  if (0 < (int)uVar2) {
    memcpy(pcVar3 + uVar1,&DAT_0405c04e,(ulong)uVar2);
    pcVar3[(ulong)uVar2 + (ulong)uVar1] = '\0';
  }
  lVar4 = FUN_009591f0(*(undefined8 *)PTR_DAT_04bb2228,&local_180);
  if (lVar4 != 0) {
    lVar5 = lVar4 + (ulong)(uint)(*(int *)(param_2 + 8) +
                                 *(int *)(lVar4 + 4) * *(int *)(param_2 + 0xc)) * 0x34;
    *param_3 = (uint)*(byte *)(lVar5 + 0x44);
    *param_4 = (uint)*(byte *)(lVar5 + 0x45);
    *param_5 = (uint)*(byte *)(lVar5 + 0x46);
    *param_6 = (uint)*(byte *)(lVar5 + 0x47);
  }
  return lVar4 != 0;
}

