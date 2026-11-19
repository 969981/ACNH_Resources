
void FUN_03bd06ac(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  if (param_2 == (long *)0x0) {
    return;
  }
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    plVar3 = malloc(0x18);
  }
  else {
    plVar3 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x18,8);
  }
  puVar2 = PTR_DAT_04bd20e0;
  *(undefined1 *)(plVar3 + 2) = 0;
  *(undefined4 *)((long)plVar3 + 0x14) = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[1] = 0;
  if (*(long *)puVar1 == 0) {
    plVar4 = malloc(0x18);
  }
  else {
    plVar4 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x18,8);
    if (*(long *)puVar1 != 0) {
      puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x100,8);
      goto LAB_03bd0778;
    }
  }
  puVar5 = malloc(0x100);
LAB_03bd0778:
  *(undefined8 *)((long)puVar5 + 0xf7) = 0;
  *puVar5 = 0;
  puVar5[0x1d] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  plVar4[1] = (long)puVar5;
  *(undefined4 *)(plVar4 + 2) = 0x100;
  *(undefined1 *)((long)puVar5 + 0xff) = 0;
  *plVar4 = (long)(PTR_DAT_04bc9388 + 0x10);
  *(undefined1 *)plVar4[1] = 0;
  plVar3[1] = (long)plVar4;
  *(long **)(param_1 + 0x80) = plVar3;
  return;
}

