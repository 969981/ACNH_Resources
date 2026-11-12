
undefined1 FUN_006d462c(long param_1)

{
  undefined1 *puVar1;
  
  if (*(char *)(param_1 + 0xe5) == '\0') {
    puVar1 = &DAT_05ae6794;
  }
  else {
    if (*(char *)(*(long *)(param_1 + 200) + 0x200) == '\0') {
      nn::os::SignalLightEvent((LightEventType *)(*(long *)(param_1 + 200) + 0x128));
    }
    if (*(char *)(*(long *)(param_1 + 0xd0) + 0x200) == '\0') {
      nn::os::SignalLightEvent((LightEventType *)(*(long *)(param_1 + 0xd0) + 0x128));
    }
    if (*(char *)(*(long *)(param_1 + 0xd8) + 0x200) == '\0') {
      nn::os::SignalLightEvent((LightEventType *)(*(long *)(param_1 + 0xd8) + 0x128));
    }
    puVar1 = &DAT_05ae6790;
  }
  return *puVar1;
}

