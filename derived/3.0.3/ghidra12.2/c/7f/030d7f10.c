
void FUN_030d7f10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  long local_58;
  undefined *local_50;
  char *pcStack_48;
  
  puVar4 = PTR_PTR_04bb2238;
  puVar3 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "*CompareResult";
  local_50 = puVar1;
  uVar5 = FUN_03c68d44(param_2,&local_50,PTR_PTR_04bb2238);
  *(undefined8 *)(param_1 + 0x208) = uVar5;
  pcStack_48 = "*GaugeSize";
  local_50 = puVar1;
  uVar5 = FUN_03c68d44(param_2,&local_50,puVar4);
  lVar8 = 0;
  *(undefined8 *)(param_1 + 0x210) = uVar5;
  pcStack_48 = "*Icon";
  while ((lVar8 != 0x80000 && (lVar2 = lVar8 + 1, "*Icon"[lVar2] != '\0'))) {
    lVar8 = lVar8 + 1;
    if ("*Icon"[lVar2] == '@') {
      local_50 = puVar1;
      uVar5 = FUN_03c68b00(param_2,&local_50);
LAB_030d7fe4:
      *(undefined8 *)(param_1 + 0x238) = uVar5;
      plVar6 = *(long **)(param_1 + 0x58);
      local_58 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,&local_58);
        if (local_58 != 0) {
          plVar6 = (long *)(local_58 + 0xb8);
          if (*plVar6 != 0) {
            pcVar7 = (char *)FUN_00364d70(plVar6,"TargetNumText");
            if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
              local_50 = puVar3 + 0x10;
              pcStack_48 = pcVar7;
              uVar5 = FUN_03462900(param_1,param_2,&local_50,&local_58);
              *(undefined8 *)(param_1 + 0x218) = uVar5;
            }
            pcVar7 = (char *)FUN_00364d70(plVar6,"BaseNumText");
            if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
              local_50 = puVar3 + 0x10;
              pcStack_48 = pcVar7;
              uVar5 = FUN_03462900(param_1,param_2,&local_50,&local_58);
              *(undefined8 *)(param_1 + 0x220) = uVar5;
            }
            pcVar7 = (char *)FUN_00364d70(plVar6,"DelimiterText");
            if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
              local_50 = puVar3 + 0x10;
              pcStack_48 = pcVar7;
              uVar5 = FUN_03462900(param_1,param_2,&local_50,&local_58);
              *(undefined8 *)(param_1 + 0x228) = uVar5;
            }
            pcVar7 = (char *)FUN_00364d70(plVar6,"NameText");
            if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
              local_50 = puVar3 + 0x10;
              pcStack_48 = pcVar7;
              uVar5 = FUN_03462900(param_1,param_2,&local_50,&local_58);
              *(undefined8 *)(param_1 + 0x230) = uVar5;
            }
          }
        }
      }
      FUN_030bc030(param_1,param_2,param_3);
      return;
    }
  }
  local_50 = puVar1;
  FUN_0386fd70(&local_50);
  uVar5 = FUN_03c688b0(param_2,&local_50);
  goto LAB_030d7fe4;
}

