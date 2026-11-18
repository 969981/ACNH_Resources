
void FUN_0365850c(long param_1,long *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort local_28 [2];
  ushort local_24 [2];
  
  (**(code **)(*param_2 + 0x28))(param_2,param_1);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 1);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 2);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 3);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 4);
  puVar1 = (ushort *)(param_1 + 6);
  if ((int)param_2[1] == 2) {
                    /* WARNING: Could not recover jumptable at 0x036585f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,2);
    return;
  }
  if ((int)param_2[1] == 1) {
    uVar2 = *puVar1;
    local_28[0] = uVar2 >> 8 | uVar2 << 8;
    if ((int)param_2[2] != 0xff00) {
      local_28[0] = uVar2;
    }
    (**(code **)(*param_2 + 0x30))(param_2,local_28);
  }
  else {
    local_24[0] = 0;
    (**(code **)(*param_2 + 0x20))(param_2,local_24,2);
    uVar2 = local_24[0] >> 8 | local_24[0] << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = local_24[0];
    }
    *puVar1 = uVar2;
  }
  return;
}

