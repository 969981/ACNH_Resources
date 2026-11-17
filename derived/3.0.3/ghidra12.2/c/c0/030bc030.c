
void FUN_030bc030(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined *local_98;
  char *local_90;
  undefined *local_40;
  undefined8 *puStack_38;
  
  FUN_0071b954(&local_98,&DAT_040835e1,DAT_05746bd8);
  (**(code **)(local_98 + 0x18))(&local_98);
  if (*local_90 == '\0') {
LAB_030bc0c0:
    FUN_0386fd70(&local_98);
    uVar3 = FUN_03c688b0(param_2,&local_98);
  }
  else {
    if (*local_90 != '@') {
      lVar6 = 0;
      do {
        if ((lVar6 == 0x80000) || (lVar4 = lVar6 + 1, local_90[lVar4] == '\0')) goto LAB_030bc0c0;
        lVar6 = lVar6 + 1;
      } while (local_90[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&local_98);
  }
  *(undefined8 *)(param_1 + 0x200) = uVar3;
  if (*(long *)(param_1 + 0x1b0) == 0) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    if (lVar6 == 0) {
      plVar5 = malloc(0x58);
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar1 = (undefined8 *)(lVar6 + 8);
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x58,8);
    }
    puVar2 = PTR_DAT_04bc81c8;
    *(undefined1 *)(plVar5 + 3) = 0;
    *(undefined2 *)(plVar5 + 10) = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    *plVar5 = (long)(puVar2 + 0x10);
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    FUN_030b9af0(plVar5,param_2);
    local_98 = PTR_DAT_04bb2020 + 0x10;
    local_90 = "*InEffect";
    puStack_38 = &DAT_0407ebb1;
    local_40 = local_98;
    lVar6 = FUN_03c68d44(param_2,&local_98,&local_40);
    plVar5[5] = lVar6;
    *(long **)(param_1 + 0x1b0) = plVar5;
  }
  FUN_03d6627c(param_1,param_2,param_3);
  return;
}

