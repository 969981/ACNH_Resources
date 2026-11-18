
uint FUN_034c5bc0(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *local_e0 [4];
  undefined *local_c0 [4];
  undefined *local_a0 [4];
  undefined *local_80 [4];
  undefined *local_60 [2];
  undefined **local_50;
  undefined8 uStack_48;
  undefined ***local_40;
  
  puVar4 = (undefined8 *)
           FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),0x69,PTR_DAT_04bb32e0);
  uVar2 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    if (((DAT_05762700 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05762700), iVar3 != 0)) {
      DAT_057626f8 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(&DAT_05762700);
    }
    uVar5 = (**(code **)*puVar4)(puVar4,&DAT_057626f8);
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      puVar1 = PTR_DAT_04bbba70 + 0x10;
      local_e0[0] = puVar1;
      (**(code **)(*param_1 + 0x10))(param_1,local_e0);
      uStack_48 = puVar4[0x44];
      uVar6 = puVar4[0x55];
      local_40 = &local_50;
      local_50 = &PTR_LAB_04b30148;
      local_60[0] = PTR_DAT_04bc6388 + 0x10;
      local_80[0] = puVar1;
      (**(code **)(local_e0[0] + 0x10))(local_e0,local_80);
      local_c0[0] = puVar1;
      local_a0[0] = puVar1;
      uVar2 = FUN_03467a60(uVar6,local_60,0,local_80,local_a0,local_c0);
    }
  }
  return uVar2 & 1;
}

