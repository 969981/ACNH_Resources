
void FUN_006d5584(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    nn::os::SignalLightEvent((LightEventType *)(*(long *)(param_1 + 0xb8) + 0x128));
  }
  lVar1 = *(long *)(param_1 + 200);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0xe5) != '\0')) {
    if (*(char *)(*(long *)(lVar1 + 200) + 0x200) == '\0') {
      nn::os::SignalLightEvent((LightEventType *)(*(long *)(lVar1 + 200) + 0x128));
    }
    if (*(char *)(*(long *)(lVar1 + 0xd0) + 0x200) == '\0') {
      nn::os::SignalLightEvent((LightEventType *)(*(long *)(lVar1 + 0xd0) + 0x128));
    }
    if (*(char *)(*(long *)(lVar1 + 0xd8) + 0x200) == '\0') {
      nn::os::SignalLightEvent((LightEventType *)(*(long *)(lVar1 + 0xd8) + 0x128));
    }
    *(undefined1 *)(*(long *)(param_1 + 0xd0) + 0x88) = 1;
  }
  return;
}

