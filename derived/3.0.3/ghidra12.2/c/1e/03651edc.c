
void FUN_03651edc(long param_1,long *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort local_3c [2];
  ushort local_38 [2];
  ushort local_34 [2];
  ushort local_18 [2];
  char local_14 [4];
  
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xb);
  puVar1 = (ushort *)(param_1 + 0x1a);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar2 = *puVar1;
    local_3c[0] = uVar2 >> 8 | uVar2 << 8;
    if ((int)param_2[2] != 0xff00) {
      local_3c[0] = uVar2;
    }
    (**(code **)(*param_2 + 0x30))(param_2,local_3c);
  }
  else {
    local_38[0] = 0;
    (**(code **)(*param_2 + 0x20))(param_2,local_38,2);
    uVar2 = local_38[0] >> 8 | local_38[0] << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = local_38[0];
    }
    *puVar1 = uVar2;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x18);
  puVar1 = (ushort *)(param_1 + 0x1c);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar2 = *puVar1;
    local_34[0] = uVar2 >> 8 | uVar2 << 8;
    if ((int)param_2[2] != 0xff00) {
      local_34[0] = uVar2;
    }
    (**(code **)(*param_2 + 0x30))(param_2,local_34);
  }
  else {
    local_18[0] = 0;
    (**(code **)(*param_2 + 0x20))(param_2,local_18,2);
    uVar2 = local_18[0] >> 8 | local_18[0] << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = local_18[0];
    }
    *puVar1 = uVar2;
  }
  local_14[0] = *(char *)(param_1 + 0x1e);
  (**(code **)(*param_2 + 0x28))(param_2,local_14);
  *(bool *)(param_1 + 0x1e) = local_14[0] != '\0';
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x1f);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x20);
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 8,3);
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0xc,8);
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x14,4);
  return;
}

