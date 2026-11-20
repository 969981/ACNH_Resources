
void FUN_03d5ada4(undefined8 *param_1)

{
  long *plVar1;
  
  if ((*(uint *)(param_1 + 9) | 4) == 5) {
    plVar1 = (long *)*param_1;
    *(undefined4 *)(param_1 + 9) = 4;
    (**(code **)(*plVar1 + 0x38))(plVar1,0);
    nn::os::SignalLightEvent((LightEventType *)(plVar1 + 0x2c));
    (**(code **)(*plVar1 + 0x40))(plVar1);
    (**(code **)(*plVar1 + 8))(plVar1);
    plVar1 = (long *)param_1[1];
    (**(code **)(*plVar1 + 0x38))(plVar1,0);
    nn::os::SignalLightEvent((LightEventType *)(plVar1 + 0x2c));
    (**(code **)(*plVar1 + 0x40))(plVar1);
    (**(code **)(*plVar1 + 8))(plVar1);
    plVar1 = (long *)param_1[2];
    (**(code **)(*plVar1 + 0x38))(plVar1,0);
    nn::os::SignalLightEvent((LightEventType *)(plVar1 + 0x2c));
    (**(code **)(*plVar1 + 0x40))(plVar1);
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  FUN_038e1c80(param_1 + 3);
  return;
}

