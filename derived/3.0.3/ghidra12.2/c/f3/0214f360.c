
void FUN_0214f360(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *local_48;
  char *pcStack_40;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "FireworksFieldNpc";
  local_48 = puVar1;
  local_34 = param_2;
  FUN_021be8c0(&local_34,&local_48,0);
  pcStack_40 = "FireworksFieldLater";
  local_48 = puVar1;
  FUN_021be8c0(&local_34,&local_48,0);
  pcStack_40 = "FireworksAroundWater";
  local_48 = puVar1;
  FUN_021be8c0(&local_34,&local_48,0);
  pcStack_40 = "ArrivedInEventPlaza";
  local_48 = puVar1;
  FUN_021be8c0(&local_34,&local_48,0);
  pcStack_40 = "FireworksApproachTalk";
  local_48 = puVar1;
  FUN_021be8c0(&local_34,&local_48,0);
  plVar3 = *(long **)(param_1 + 0x78);
  if (plVar3 != (long *)(param_1 + 0x70)) {
    plVar2 = plVar3 + -2;
    do {
      if (*(int *)((long)plVar2 + 4) == 0x1c) {
        if (*(long **)(param_1 + 0x1f0) != plVar2) {
          if (*plVar3 != 0) {
            *(long *)(*plVar3 + 8) = plVar3[1];
          }
          if ((long *)plVar3[1] != (long *)0x0) {
            *(long *)plVar3[1] = *plVar3;
          }
          *plVar3 = 0;
          plVar3[1] = 0;
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
          *plVar2 = *(long *)(param_1 + 0x88);
          *(long **)(param_1 + 0x88) = plVar2;
          return;
        }
        *(undefined8 *)(param_1 + 0x1f0) = 0;
        *(undefined4 *)(param_1 + 0x1fc) = 0x1c;
        FUN_0214d220(param_1);
        *(undefined1 *)(param_1 + 0x236) = 1;
        if (*plVar3 != 0) {
          *(long *)(*plVar3 + 8) = plVar3[1];
        }
        if ((long *)plVar3[1] != (long *)0x0) {
          *(long *)plVar3[1] = *plVar3;
        }
        *plVar3 = 0;
        plVar3[1] = 0;
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
        *plVar2 = *(long *)(param_1 + 0x88);
        *(long **)(param_1 + 0x88) = plVar2;
        FUN_0214d690(param_1,param_2,1,0);
        return;
      }
      plVar3 = (long *)plVar3[1];
      plVar2 = plVar3 + -2;
    } while (plVar2 != (long *)(param_1 + 0x60));
  }
  return;
}

