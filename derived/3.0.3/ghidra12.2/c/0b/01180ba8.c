
uint FUN_01180ba8(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **local_50;
  char *pcStack_48;
  
  pcStack_48 = "Root";
  if (**(char **)(param_3 + 8) != '\0') {
    pcStack_48 = *(char **)(param_3 + 8);
  }
  local_50 = &PTR_LAB_048f9770;
  nn::os::LockMutex((MutexType *)&DAT_050ca288);
  lVar2 = FUN_011869f0(&DAT_050b8f10);
  *(undefined4 *)(lVar2 + 0x2260) = 1;
  lVar3 = FUN_01185f80(lVar2 + 0x10,param_2,param_1 + 0x10);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar4 = **(undefined8 **)(lVar3 + 0x28);
    *(undefined1 *)(lVar2 + 0x50) = 1;
    *(undefined8 *)(lVar2 + 0x48) = uVar4;
    uVar1 = FUN_01186110(param_2,&local_50,lVar2,lVar2 + 0x2260,param_1 + 0x10);
  }
  nn::os::UnlockMutex((MutexType *)&DAT_050ca288);
  return uVar1 & 1;
}

