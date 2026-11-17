
void FUN_030c6e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_50;
  char *pcStack_48;
  long local_28;
  
  puVar2 = PTR_DAT_04bb2020;
  local_28 = 0;
  plVar3 = *(long **)(param_1 + 0x58);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_28);
    if (local_28 != 0) {
      plVar3 = (long *)(local_28 + 0xb8);
      if (*plVar3 != 0) {
        pcVar4 = (char *)FUN_00364d70(plVar3,"TitleText");
        if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
          local_50 = puVar2 + 0x10;
          pcStack_48 = pcVar4;
          uVar5 = FUN_03462900(param_1,param_2,&local_50,&local_28);
          *(undefined8 *)(param_1 + 0x220) = uVar5;
        }
        pcStack_48 = (char *)FUN_00364d70(plVar3,"SubText");
        if ((pcStack_48 != (char *)0x0) && (*pcStack_48 != '\0')) {
          local_50 = puVar2 + 0x10;
          uVar5 = FUN_03462900(param_1,param_2,&local_50,&local_28);
          *(undefined8 *)(param_1 + 0x228) = uVar5;
        }
      }
    }
  }
  lVar6 = 0;
  local_50 = puVar2 + 0x10;
  pcStack_48 = "*Picture";
  while ((lVar6 != 0x80000 && (lVar1 = lVar6 + 1, "*Picture"[lVar1] != '\0'))) {
    lVar6 = lVar6 + 1;
    if ("*Picture"[lVar1] == '@') {
      uVar5 = FUN_03c68b00(param_2,&local_50);
LAB_030c6f68:
      *(undefined8 *)(param_1 + 0x230) = uVar5;
      FUN_030bc030(param_1,param_2,param_3);
      return;
    }
  }
  FUN_0386fd70(&local_50);
  uVar5 = FUN_03c688b0(param_2,&local_50);
  goto LAB_030c6f68;
}

