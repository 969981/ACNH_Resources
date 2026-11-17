
void FUN_030df3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined *local_58;
  undefined8 uStack_50;
  long local_48;
  
  plVar2 = *(long **)(param_1 + 0x58);
  local_48 = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_48);
    if (local_48 != 0) {
      plVar2 = (long *)(local_48 + 0xb8);
      if (*plVar2 != 0) {
        uStack_50 = FUN_00364d70(plVar2,"TitleText");
        bVar4 = false;
        goto LAB_030df46c;
      }
    }
  }
  plVar2 = (long *)0x0;
  uStack_50 = 0;
  bVar4 = true;
LAB_030df46c:
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_58 = puVar1;
  uVar3 = FUN_03462900(param_1,param_2,&local_58,&local_48);
  *(undefined8 *)(param_1 + 0x408) = uVar3;
  if (bVar4) {
    uStack_50 = 0;
  }
  else {
    uStack_50 = FUN_00364d70(plVar2,"GuideText");
  }
  local_58 = puVar1;
  uVar3 = FUN_03462900(param_1,param_2,&local_58,&local_48);
  *(undefined8 *)(param_1 + 0x410) = uVar3;
  FUN_030bf100(param_1,param_2,param_3);
  return;
}

