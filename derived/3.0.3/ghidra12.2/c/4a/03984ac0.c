
void FUN_03984ac0(long param_1,byte *param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  void *pvVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2698;
  if (param_3 == (long *)0x0) goto LAB_03984bf8;
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    pvVar4 = malloc(0x20000);
    if (pvVar4 == (void *)0x0) goto LAB_03984b2c;
LAB_03984b10:
    uVar6 = 0x1000;
    *(void **)(param_1 + 0x18) = pvVar4;
    *(undefined4 *)(param_1 + 0x10) = 0x1000;
LAB_03984b38:
    uVar7 = 0;
    do {
      puVar2 = (undefined8 *)((long)pvVar4 + ((long)((ulong)uVar7 << 0x20) >> 0x1b));
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined1 *)(puVar2 + 3) = 0;
      puVar2[2] = 0;
      uVar7 = uVar7 + 1;
    } while (uVar6 != uVar7);
  }
  else {
    pvVar4 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x20000,8);
    if (pvVar4 != (void *)0x0) goto LAB_03984b10;
LAB_03984b2c:
    uVar6 = *(uint *)(param_1 + 0x10);
    if (uVar6 != 0) {
      pvVar4 = *(void **)(param_1 + 0x18);
      goto LAB_03984b38;
    }
  }
  if (*(long *)puVar1 == 0) {
    plVar5 = malloc(0x90);
  }
  else {
    plVar5 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x90,8);
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "hostio";
  pcStack_48 = "hostio";
  local_50 = puVar1;
  local_40 = puVar1;
  FUN_038b1ea0(plVar5,&local_40,&local_50);
  *plVar5 = (long)(PTR_DAT_04bd0bd8 + 0x10);
  puVar3 = PTR_DAT_04bb2130;
  *(long **)(param_1 + 8) = plVar5;
  pcStack_38 = "agl_hostpc";
  local_40 = puVar1;
  FUN_038b54c0(*(undefined8 *)puVar3,plVar5,&local_40);
LAB_03984bf8:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffe | (uint)*param_2;
  return;
}

