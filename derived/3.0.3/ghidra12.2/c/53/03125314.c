
void FUN_03125314(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *local_40;
  char *pcStack_38;
  long local_18;
  
  plVar1 = *(long **)(param_1 + 0x58);
  local_18 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_18);
    if (local_18 != 0) {
      if (((*(long *)(local_18 + 0xb8) != 0) &&
          (pcVar2 = (char *)FUN_00364d70((long *)(local_18 + 0xb8),"NumText"), pcVar2 != (char *)0x0
          )) && (*pcVar2 != '\0')) {
        local_40 = PTR_DAT_04bb2020 + 0x10;
        pcStack_38 = pcVar2;
        uVar3 = FUN_03462900(param_1,param_2,&local_40,&local_18);
        *(undefined8 *)(param_1 + 0x250) = uVar3;
      }
    }
  }
  uVar4 = (**(code **)(*(long *)(param_1 + 0x270) + 0x10))(param_1 + 0x270);
  if ((uVar4 & 1) == 0) {
    *(long *)(param_1 + 0x278) = param_1;
    *(undefined1 **)(param_1 + 0x280) = &LAB_03125400;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined ***)(param_1 + 0x270) = &PTR_LAB_04b022d8;
  }
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

