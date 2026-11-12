
undefined1  [16]
FUN_00692020(undefined8 *param_1,MultiWaitType *param_2,uint param_3,undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  nn::os::InitializeMultiWaitHolder((MultiWaitHolderType *)&local_120,(EventType *)*param_4);
  nn::os::LinkMultiWaitHolder(param_2,(MultiWaitHolderType *)&local_120);
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  nn::os::InitializeMultiWaitHolder((MultiWaitHolderType *)&local_e0,(TimerEventType *)*param_5);
  nn::os::LinkMultiWaitHolder(param_2,(MultiWaitHolderType *)&local_e0);
  uVar4 = (ulong)(param_3 + 2);
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  nn::os::InitializeMultiWaitHolder((MultiWaitHolderType *)&local_a0,(TimerEventType *)*param_6);
  nn::os::LinkMultiWaitHolder(param_2,(MultiWaitHolderType *)&local_a0);
  puVar3 = (undefined8 *)(*(code *)*param_1)(param_2);
  puVar2 = (undefined8 *)0x0;
  if (puVar3 != &local_a0) {
    uVar4 = 0xffffffff;
    puVar2 = puVar3;
  }
  nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)&local_a0);
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)&local_a0);
  uVar1 = (ulong)(param_3 + 1);
  puVar3 = (undefined8 *)0x0;
  if (&local_e0 != puVar2) {
    uVar1 = uVar4;
    puVar3 = puVar2;
  }
  nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)&local_e0);
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)&local_e0);
  uVar4 = (ulong)param_3;
  puVar2 = (undefined8 *)0x0;
  if (&local_120 != puVar3) {
    uVar4 = uVar1;
    puVar2 = puVar3;
  }
  nn::os::UnlinkMultiWaitHolder((MultiWaitHolderType *)&local_120);
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)&local_120);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = puVar2;
  return auVar5;
}

