
long * FUN_012cfbb0(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_40;
  undefined *local_38;
  undefined8 uStack_30;
  
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      plVar2 = malloc(0xe0);
    }
    else {
      plVar2 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0xe0,8);
    }
    puVar1 = PTR_DAT_04bbc5d0;
    *(undefined4 *)(plVar2 + 1) = 0;
    plVar2[2] = 0;
    plVar2[3] = 0;
    local_58 = PTR_DAT_04bb2018;
    *plVar2 = (long)(puVar1 + 0x10);
    puVar1 = PTR_DAT_04bbc5e0;
    local_58 = local_58 + 0x10;
    *(undefined4 *)(plVar2 + 6) = 0;
    plVar2[4] = (long)local_58;
    plVar2[5] = 0;
    plVar2[0xd] = 0;
    plVar2[9] = 0;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
    *(undefined4 *)(plVar2 + 0xe) = 0;
    plVar2[7] = 0;
    plVar2[8] = (long)(puVar1 + 0x10);
    *(undefined4 *)(plVar2 + 0xf) = 0;
    plVar2[0x10] = 0;
    *(undefined1 *)(plVar2 + 0x11) = 0;
    *(undefined4 *)((long)plVar2 + 0x8c) = 0;
    plVar2[0x1a] = 0;
    *(undefined4 *)(plVar2 + 0x1b) = 0;
    local_46 = 0;
    local_40 = 0;
    local_48 = 0;
    plVar2[0x12] = (long)local_58;
    plVar2[0x13] = 0;
    plVar2[0x14] = 0;
    plVar2[0x15] = (long)(puVar1 + 0x10);
    uStack_30 = 0;
    uStack_60 = 0x3000000030;
    local_50 = DAT_05172fe0;
    uStack_4c = DAT_05172fe4;
    plVar2[0x16] = 0;
    plVar2[0x17] = 0;
    plVar2[0x18] = 0;
    plVar2[0x19] = 0;
    local_68 = param_2;
    local_38 = local_58;
    FUN_013817c0(plVar2,&local_68);
  }
  return plVar2;
}

