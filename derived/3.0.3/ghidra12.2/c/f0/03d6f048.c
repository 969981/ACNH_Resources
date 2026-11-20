
void FUN_03d6f048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_58;
  undefined *local_50;
  char *pcStack_48;
  
  puVar3 = PTR_PTR_04bb2238;
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "*Number";
  local_50 = puVar1;
  uVar4 = FUN_03c68d44(param_2,&local_50,PTR_PTR_04bb2238);
  *(undefined8 *)(param_1 + 0x208) = uVar4;
  pcStack_48 = "*Count";
  local_50 = puVar1;
  uVar4 = FUN_03c68d44(param_2,&local_50,puVar3);
  *(undefined8 *)(param_1 + 0x210) = uVar4;
  pcStack_48 = "*Invisible";
  local_50 = puVar1;
  uVar4 = FUN_03c68d44(param_2,&local_50,puVar3);
  *(undefined8 *)(param_1 + 0x218) = uVar4;
  FUN_03d6627c(param_1,param_2,param_3);
  plVar5 = *(long **)(param_1 + 0x58);
  local_58 = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_58);
    if (local_58 != 0) {
      if ((*(long *)(local_58 + 0xb8) != 0) &&
         (pcStack_48 = (char *)FUN_00364d70((long *)(local_58 + 0xb8),&DAT_040d74fc),
         pcStack_48 != (char *)0x0)) {
        local_50 = puVar2 + 0x10;
        if (*pcStack_48 != '\0') {
          uVar4 = FUN_03c688b0(param_2,&local_50);
          *(undefined8 *)(param_1 + 0x200) = uVar4;
        }
      }
    }
  }
  return;
}

