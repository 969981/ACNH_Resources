
undefined8 FUN_0069c450(long *param_1)

{
  uint uVar1;
  long lVar2;
  LightEventType *pLVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  pLVar3 = (LightEventType *)FUN_00692d28();
  uVar4 = nn::os::TryWaitLightEvent(pLVar3);
  if ((uVar4 & 1) == 0) {
    lVar2 = param_1[0x3a];
    if (((char)lVar2 != '\0') || (uVar5 = FUN_0069c51c(param_1), (int)uVar5 == 0)) {
      uVar5 = (**(code **)(*param_1 + 0x30))(param_1);
      if (((uint)uVar5 != 0) &&
         ((uVar1 = (uint)uVar5 & 0x3fffff, uVar1 == 0x200cdb || (uVar1 == 0x200adb)))) {
        if ((char)lVar2 == '\0') {
          return 0;
        }
        uVar5 = FUN_0069c51c(param_1);
        if ((uint)uVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0069c4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*param_1 + 0x30))(param_1);
          return uVar5;
        }
        if (((uint)uVar5 & 0x3fffff) == 0x20d2db) {
          *(undefined1 *)(param_1 + 0x3a) = 0;
          return uVar5;
        }
      }
    }
  }
  else {
    uVar5 = 0x18db;
  }
  return uVar5;
}

