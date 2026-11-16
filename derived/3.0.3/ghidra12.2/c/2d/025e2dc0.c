
void FUN_025e2dc0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined *local_50;
  char *pcStack_48;
  
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "sys_start_game";
  FUN_025ffac8(param_1,&local_50,param_2);
  *param_1 = &PTR_FUN_04a86688;
  param_1[5] = 0;
  puVar1 = PTR_DAT_04bb2268;
  param_1[6] = 0;
  lVar3 = *(long *)puVar1;
  if (*(char *)(lVar3 + 0xb1) == '\0') {
    if ((param_1[1] != 0) && (lVar6 = *(long *)(param_1[1] + 8), lVar6 != 0)) {
      lVar2 = FUN_03f2a10c(0xa0,**(undefined8 **)PTR_DAT_04bc3578,1);
      if ((lVar2 != 0) && (uVar4 = (ulong)*(uint *)(lVar6 + 0x20), 0 < (int)*(uint *)(lVar6 + 0x20))
         ) {
        plVar5 = *(long **)(lVar6 + 0x28);
        do {
          if (*plVar5 == 0) {
            *plVar5 = lVar2;
            lVar3 = *(long *)puVar1;
            goto LAB_025e2e90;
          }
          plVar5 = plVar5 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      lVar3 = *(long *)puVar1;
      lVar2 = 0;
      *(undefined1 *)(lVar3 + 0xb1) = 1;
LAB_025e2e90:
      param_1[5] = lVar2;
    }
    if (((*(char *)(lVar3 + 0xb1) == '\0') && (param_1[1] != 0)) &&
       (lVar6 = *(long *)(param_1[1] + 8), lVar6 != 0)) {
      lVar2 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
      if ((lVar2 != 0) && (uVar4 = (ulong)*(uint *)(lVar6 + 0x20), 0 < (int)*(uint *)(lVar6 + 0x20))
         ) {
        plVar5 = *(long **)(lVar6 + 0x28);
        do {
          if (*plVar5 == 0) {
            *plVar5 = lVar2;
            lVar3 = *(long *)puVar1;
            goto LAB_025e2ea0;
          }
          plVar5 = plVar5 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      lVar3 = *(long *)puVar1;
      lVar2 = 0;
      *(undefined1 *)(lVar3 + 0xb1) = 1;
    }
    else {
      lVar2 = 0;
    }
LAB_025e2ea0:
    param_1[6] = lVar2;
    *(ulong *)(lVar3 + 0xb8) = *(ulong *)(lVar3 + 0xb8) | 1;
  }
  return;
}

