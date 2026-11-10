
void FUN_0033a910(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    FUN_0032c410("SuperStripe instance is null\n");
    return;
  }
  if (*(char *)(lVar2 + 0x90) == '\0') {
    FUN_0032c410("SuperStripe instance is not used\n");
    return;
  }
  if (*(long *)(*(long *)(param_1 + 0x10) + 0x4a8) == 0) {
    FUN_0032c410("EmitterPluginUserData is empty\n");
    return;
  }
  lVar1 = FUN_0031e3e8();
  FUN_00338258(*(undefined8 *)(lVar1 + 0x1a08),param_1,lVar2);
  return;
}

