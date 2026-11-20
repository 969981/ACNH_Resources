
void FUN_03f44a6c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined **local_60;
  char local_58;
  undefined **local_50;
  byte local_48;
  long *local_40;
  long *plStack_38;
  long local_18;
  
  plVar2 = *(long **)(param_2 + 0x180);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 8) = 2;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  (**(code **)(*param_1 + 0x30))(param_1);
  *(undefined4 *)(param_1 + 8) = 5;
  plVar2 = *(long **)(param_2 + 0x180);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  (**(code **)(*param_1 + 0x38))(param_1);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  local_50 = &PTR_LAB_04ba9390;
  local_18 = param_1[3];
  puVar1 = (undefined8 *)param_1[6];
  local_58 = '\0';
  param_1[7] = 0;
  local_60 = &PTR_LAB_04ba9238;
  plStack_38 = &local_18;
  local_48 = *(byte *)((long)param_1 + 9) >> 2 & 1;
  local_40 = param_1;
  if (puVar1 != (undefined8 *)0x0) {
    param_1[6] = 0;
    (**(code **)*puVar1)(puVar1,&local_60,&local_50);
  }
  plVar2 = *(long **)(param_2 + 0x180);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  if (local_58 == '\0') {
    *(undefined4 *)(param_1 + 8) = 4;
    (**(code **)(*param_1 + 0x40))(param_1);
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 8) = 6;
    if ((*(byte *)((long)param_1 + 9) & 1) != 0) {
      *(byte *)((long)param_1 + 9) = *(byte *)((long)param_1 + 9) & 0xfb;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xf));
    }
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}

