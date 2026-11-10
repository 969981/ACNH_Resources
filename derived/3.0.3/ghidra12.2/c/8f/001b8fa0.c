
ulonglong FUN_001b8fa0(long param_1,undefined8 param_2,ulonglong param_3)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_80 [24];
  undefined *local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    FUN_001b8590(param_1);
  }
  puVar2 = PTR_DAT_04bc0ec8;
  local_60[0] = 0;
  local_68 = PTR_DAT_04bc0ec8 + 0x10;
  local_50 = local_60;
  uStack_48 = 0x10;
  FUN_0018b070(&local_68,param_2,0xffffffffffffffff);
  plVar5 = (long *)(param_1 + 0x20);
  plVar6 = (long *)*plVar5;
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar5;
    do {
      uVar3 = FUN_0018b4e0(plVar6 + 4,&local_68);
      plVar1 = plVar6 + 1;
      if ((uVar3 & 1) == 0) {
        plVar4 = plVar6;
        plVar1 = plVar6;
      }
      plVar6 = (long *)*plVar1;
    } while (plVar6 != (long *)0x0);
    if ((plVar4 != plVar5) && (uVar3 = FUN_0018b4e0(&local_68,plVar4 + 4), (uVar3 & 1) == 0)) {
      param_3 = plVar4[9];
      goto LAB_001b90cc;
    }
  }
  plVar5 = (long *)(param_1 + 0x38);
  plVar6 = (long *)*plVar5;
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar5;
    do {
      uVar3 = FUN_0018b4e0(plVar6 + 4,&local_68);
      plVar1 = plVar6 + 1;
      if ((uVar3 & 1) == 0) {
        plVar4 = plVar6;
        plVar1 = plVar6;
      }
      plVar6 = (long *)*plVar1;
    } while (plVar6 != (long *)0x0);
    if ((plVar4 != plVar5) && (uVar3 = FUN_0018b4e0(&local_68,plVar4 + 4), (uVar3 & 1) == 0)) {
      param_3 = strtoull((char *)plVar4[0xc],(char **)0x0,10);
      FUN_001b8e80(auStack_80,param_1,param_2,param_3);
    }
  }
LAB_001b90cc:
  local_68 = puVar2 + 0x10;
  FUN_0018b1a0(&local_68);
  return param_3;
}

