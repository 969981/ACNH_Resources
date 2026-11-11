
undefined8 FUN_00477b40(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_70;
  long lStack_68;
  undefined1 auStack_60 [64];
  
  if ((int)param_1[4] == -1) {
    if (*param_1 == param_1[1]) {
      if (*(int *)((long)param_1 + 0x24) == -1) {
        if (DAT_04c70968 == '\0') {
          return 0;
        }
        FUN_00444bc0(auStack_60,&DAT_04c70918,1);
        lVar1 = FUN_004446b0(auStack_60,
                             "Found incorrectly defined patch {}. Add new class patch (HK_CLASS_ADDED) has \'destination\' class version set to HK_CLASS_REMOVED."
                             ,&DAT_048654e0,param_1);
        uVar2 = 0x12f;
      }
      else {
        if (param_1[2] != param_1[3]) {
          return 1;
        }
        if (DAT_04c70968 == '\0') {
          return 0;
        }
        FUN_00444bc0(auStack_60,&DAT_04c70918,1);
        lVar1 = FUN_004446b0(auStack_60,
                             "Found incorrectly defined patch {}. Add new class patch (HK_CLASS_ADDED) has \'destination\' class name set to null."
                             ,&DAT_048654e0,param_1);
        uVar2 = 0x134;
      }
    }
    else {
      if (DAT_04c70968 == '\0') {
        return 0;
      }
      FUN_00444bc0(auStack_60,&DAT_04c70918,1);
      local_70 = *param_1;
      lStack_68 = param_1[1];
      lVar1 = FUN_004446b0(auStack_60,
                           "Found incorrectly defined patch {}. Add new class patch (HK_CLASS_ADDED) has \'source\' class name  set to \'{}\', but must be HK_NULL."
                           ,DAT_04bd5b38,param_1,&local_70);
      uVar2 = 0x12a;
    }
  }
  else {
    if (*param_1 != param_1[1]) {
      return 1;
    }
    if (DAT_04c70968 == '\0') {
      return 0;
    }
    FUN_00444bc0(auStack_60,&DAT_04c70918,1);
    lVar1 = FUN_004446b0(auStack_60,
                         "Found incorrectly defined patch {}. Update class patch has \'source\' class name set to HK_NULL."
                         ,&DAT_048654e0,param_1);
    uVar2 = 0x149;
  }
  *(char **)(lVar1 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkReflectPatchRegistry.cpp"
  ;
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  FUN_00444c00(auStack_60);
  return 0;
}

