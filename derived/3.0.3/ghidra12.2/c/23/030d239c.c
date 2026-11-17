
void FUN_030d239c(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 local_58;
  float fStack_54;
  undefined4 local_50;
  float local_4c [3];
  undefined *local_40;
  undefined8 local_38;
  undefined1 *local_18;
  
  uVar2 = *(undefined4 *)(param_1 + 0xe28);
  local_4c[1] = 0.0;
  local_38 = 0;
  uVar3 = FUN_0092ddf4();
  FUN_00924d20(&local_40,uVar2,uVar3);
  local_50 = 0x40a00000;
  fStack_54 = (float)local_38._4_4_ * 5.0;
  local_4c[0] = (float)(int)local_38 * 5.0;
  if (*(long *)(param_1 + 0xe00) != 0) {
    plVar4 = *(long **)(*(long *)(param_1 + 0xe00) + 0x1d0);
    local_18 = &DAT_3f8000003f800000;
    local_4c[2] = fStack_54;
    local_58 = FUN_030cd3bc(param_1,local_4c);
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_38._0_4_ = 8;
    local_40 = puVar1;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
    (**(code **)(plVar4[3] + 0x98))(plVar4[1],&local_58);
    plVar4 = *(long **)(*(long *)(param_1 + 0xe00) + 0x1d0);
    local_38 = CONCAT44(local_38._4_4_,10);
    local_40 = puVar1;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
    (**(code **)(plVar4[3] + 0xb8))(plVar4[1],&local_18);
  }
  return;
}

