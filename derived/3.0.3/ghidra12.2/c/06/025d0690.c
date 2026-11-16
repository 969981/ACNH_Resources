
void FUN_025d0690(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "save_event_flag_wherearen";
  FUN_025ffac8(param_1,&local_40,param_2);
  *param_1 = &PTR_FUN_04a86260;
  param_1[5] = 0;
  if (*(char *)(DAT_05554928 + 0xb1) == '\0') {
    if ((param_1[1] == 0) || (lVar4 = *(long *)(param_1[1] + 8), lVar4 == 0)) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_03f2a10c(0x400,**(undefined8 **)PTR_DAT_04bc3578,1);
      if ((lVar1 != 0) && (uVar2 = (ulong)*(uint *)(lVar4 + 0x20), 0 < (int)*(uint *)(lVar4 + 0x20))
         ) {
        plVar3 = *(long **)(lVar4 + 0x28);
        do {
          if (*plVar3 == 0) {
            *plVar3 = lVar1;
            goto LAB_025d075c;
          }
          plVar3 = plVar3 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      lVar1 = 0;
      *(undefined1 *)(DAT_05554928 + 0xb1) = 1;
    }
LAB_025d075c:
    param_1[5] = lVar1;
  }
  return;
}

