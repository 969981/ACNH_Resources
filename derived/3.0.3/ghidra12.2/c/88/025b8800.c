
void FUN_025b8800(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined **local_48;
  undefined *puStack_40;
  int local_34;
  
  puStack_40 = (&PTR_s_net_multiplay_has_item_04a85d80)[param_3];
  local_48 = &PTR_LAB_048f9770;
  local_34 = param_3;
  FUN_026012f4(param_1,&local_48,param_2);
  *param_1 = &PTR_FUN_04a85da0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(int *)(param_1 + 5) = local_34;
  puVar1 = PTR_DAT_04bb2268;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*(char *)(*(long *)puVar1 + 0xb1) == '\0') {
    FUN_025b8660(param_1);
    if ((((*(long *)puVar1 == 0) || (*(char *)(*(long *)puVar1 + 0xb1) != '\0')) ||
        (param_1[1] == 0)) || (lVar5 = *(long *)(param_1[1] + 8), lVar5 == 0)) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_03f2a10c(0x120,**(undefined8 **)PTR_DAT_04bc3578,1);
      if ((lVar2 != 0) && (uVar3 = (ulong)*(uint *)(lVar5 + 0x20), 0 < (int)*(uint *)(lVar5 + 0x20))
         ) {
        plVar4 = *(long **)(lVar5 + 0x28);
        do {
          if (*plVar4 == 0) {
            *plVar4 = lVar2;
            goto LAB_025b8898;
          }
          plVar4 = plVar4 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      lVar2 = 0;
      *(undefined1 *)(*(long *)puVar1 + 0xb1) = 1;
    }
LAB_025b8898:
    param_1[9] = lVar2;
  }
  return;
}

