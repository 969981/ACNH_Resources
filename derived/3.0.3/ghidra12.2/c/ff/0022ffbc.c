
void FUN_0022ffbc(undefined8 param_1,long param_2,int *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 local_c0;
  ErrorResultVariant aEStack_bc [12];
  undefined4 local_b0;
  ErrorResultVariant aEStack_ac [124];
  undefined4 local_24;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    local_b0 = 0x10c07;
  }
  else {
    if (*(long *)(param_2 + 0x16d8) == 0) {
      uVar1 = FUN_0022d1f4();
      uVar2 = FUN_0022d3e8(uVar1,*(undefined4 *)(param_2 + 0x16b8));
      if ((uVar2 & 1) != 0) {
        (**(code **)(**(long **)(param_2 + 0x16c0) + 0x40))();
        *(undefined1 *)(param_2 + 0x10) = 0;
        *(undefined4 *)(param_2 + 0x16c8) = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined1 *)(param_2 + 0x2000) = 0;
        FUN_002b3fa8(&local_b0);
        FUN_002415c4(param_2 + 0x18,&local_b0);
        FUN_00241258(param_2 + 0x18,0);
        *(int **)(param_2 + 0x16d8) = param_3;
        FUN_00220f78(param_3);
        local_c0 = 0;
        local_24 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_bc,(Result *)&local_24);
        FUN_002296c4(param_1,&local_c0);
        FUN_002b4104(&local_b0);
        return;
      }
    }
    local_b0 = 0x10c08;
  }
  local_c0 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_ac,(Result *)&local_c0);
  FUN_002296c4(param_1,&local_b0);
  return;
}

