
/* WARNING: Removing unreachable block (ram,0x01fa1c28) */

void FUN_01fa19e0(long *param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  void *__src;
  long *plVar5;
  undefined4 local_560 [25];
  undefined4 local_4fc;
  undefined1 local_4f8;
  undefined4 local_4f4;
  undefined4 local_3b8 [2];
  long *local_3b0;
  undefined4 local_354;
  undefined4 local_2dc;
  undefined4 local_2d8;
  int local_2cc;
  void *local_2a0;
  int local_298;
  undefined8 local_210;
  long local_208;
  undefined8 local_200;
  undefined1 local_1dd;
  undefined4 local_1ac;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_120;
  undefined4 local_6c;
  
  *(undefined4 *)((long)param_1 + 0xaf8c) = 5;
  FUN_01e63f1c(local_3b8);
  FUN_02081400(&local_210,param_1[0x15f7],(undefined4 *)(param_2 + 0x68));
  local_2dc = (undefined4)local_210;
  plVar5 = (long *)(param_2 + 0x10);
  local_2d8 = local_210._4_4_;
  (**(code **)(*plVar5 + 0x18))(plVar5);
  __src = *(void **)(param_2 + 0x18);
  if (local_2a0 != __src) {
    (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(plVar5);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x18) + lVar4) == '\0') goto LAB_01fa1adc;
      lVar1 = *(long *)(param_2 + 0x18) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01fa1adc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01fa1adc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01fa1adc:
    iVar3 = (int)lVar4;
    if (local_298 <= (int)lVar4) {
      iVar3 = local_298 + -1;
    }
    memcpy(local_2a0,__src,(long)iVar3);
    *(undefined1 *)((long)local_2a0 + (long)iVar3) = 0;
  }
  iVar3 = 0x708;
  if (*(int *)(param_2 + 0x70) != 0) {
    iVar3 = *(int *)(param_2 + 0x70);
  }
  if (*(int *)(param_2 + 0xc) == 5) {
    local_210 = (undefined *)CONCAT44(local_210._4_4_,5);
    *(undefined4 *)(param_1 + 0x1601) = 5;
    *(undefined4 *)(param_1 + 0x1610) = 0;
                    /* WARNING: Could not recover jumptable at 0x01fa1c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)DAT_041793b0 * 4 + 0x1fa1c28))();
    return;
  }
  if (*(int *)(param_2 + 0xc) == 8) {
    if ((int)param_1[0x15f1] == 0) {
      local_210 = (undefined *)((ulong)local_210._4_4_ << 0x20);
      lVar4 = param_1[2];
      local_560[0] = 0;
      FUN_01e5a930(0x40000000,lVar4,0xe,PTR_DAT_04bb2150,&local_210,local_560,PTR_DAT_04bc1600,6);
      local_1dd = 0;
      local_200 = (long *)CONCAT35(local_200._5_3_,0x20);
      *(undefined2 *)(lVar4 + 0x408) = *(undefined2 *)(param_2 + 0x68);
      *(undefined1 *)(lVar4 + 0x40a) = *(undefined1 *)(param_2 + 0x6a);
      *(undefined1 *)(lVar4 + 0x40b) = *(undefined1 *)(param_2 + 0x6b);
      *(undefined4 *)(lVar4 + 0x40c) = *(undefined4 *)(param_2 + 0x6c);
      local_208 = (long)&local_200 + 4;
      lVar4 = *(long *)(lVar4 + 0x358);
      local_210 = PTR_DAT_04bb2028 + 0x10;
      (**(code **)(*(long *)(lVar4 + 0x3e0) + 0x18))(lVar4 + 0x3e0);
      FUN_038d1270(&local_210,"NpcActorAction.%s",*(undefined8 *)(lVar4 + 1000));
    }
    else {
      plVar5 = param_1 + 0x1619;
      FUN_01e63f1c(local_560);
      local_4f4 = 0x1e;
      local_560[0] = 1;
      local_4fc = 1;
      local_4f8 = 1;
      if ((int)*plVar5 < *(int *)((long)param_1 + 0xb0cc)) {
        FUN_021920b0(plVar5,local_560);
      }
      *(undefined4 *)((long)param_1 + 0xaf8c) = 1;
      FUN_01e63f1c(&local_210);
      local_120 = 1;
      local_210 = (undefined *)CONCAT44(local_210._4_4_,10);
      local_6c = 0;
      local_1ac = 1;
      iVar3 = (**(code **)(*param_1 + 0x610))(param_1);
      puVar2 = (undefined4 *)((long)param_1 + 0xae84);
      if (iVar3 != 1) {
        puVar2 = (undefined4 *)(param_2 + 0x68);
      }
      local_200 = param_1 + 0x243b;
      local_134 = *puVar2;
      local_130 = puVar2[1];
      param_1[0x243c] = (long)param_1;
      param_1[0x243d] = (long)&LAB_01fbf3a4;
      param_1[0x243e] = 0;
      if ((int)*plVar5 < *(int *)((long)param_1 + 0xb0cc)) {
        FUN_021920b0(plVar5,&local_210);
      }
    }
  }
  else {
    local_3b8[0] = 0x55;
    local_2cc = iVar3;
    if ((param_3 & 1) == 0) {
      local_3b8[0] = 0x55;
      param_1[0x2446] = 0;
      param_1[0x2444] = (long)param_1;
      param_1[0x2445] = (long)&LAB_01fc13b0;
      local_3b0 = param_1 + 0x2443;
    }
  }
  local_354 = 1;
  FUN_01fb1020(param_1,local_3b8,0x1e);
  return;
}

