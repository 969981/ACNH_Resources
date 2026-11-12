
undefined1 FUN_006d46b0(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0xe5) == '\0') {
    puVar1 = &DAT_05ae6794;
  }
  else {
    lVar2 = *(long *)(param_1 + 200);
    if (*(char *)(lVar2 + 0x200) != '\0') {
      thunk_FUN_00691d40(lVar2 + 0x178);
      nn::os::WaitLightEvent((LightEventType *)(lVar2 + 0x1f0));
    }
    lVar2 = *(long *)(param_1 + 0xd0);
    if (*(char *)(lVar2 + 0x200) != '\0') {
      thunk_FUN_00691d40(lVar2 + 0x178);
      nn::os::WaitLightEvent((LightEventType *)(lVar2 + 0x1f0));
    }
    lVar2 = *(long *)(param_1 + 0xd8);
    if (*(char *)(lVar2 + 0x200) != '\0') {
      thunk_FUN_00691d40(lVar2 + 0x178);
      nn::os::WaitLightEvent((LightEventType *)(lVar2 + 0x1f0));
    }
    puVar1 = &DAT_05ae6790;
  }
  return *puVar1;
}

