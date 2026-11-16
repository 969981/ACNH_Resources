
void FUN_025aca40(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined *local_50;
  char *pcStack_48;
  
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "growup_player";
  FUN_026012f4(param_1,&local_50,param_2);
  *param_1 = &PTR_LAB_04a85b40;
  param_1[6] = 0;
  param_1[7] = 0;
  plVar6 = param_1 + 5;
  *plVar6 = 0;
  puVar1 = PTR_DAT_04bb2268;
  param_1[8] = 0;
  lVar3 = *(long *)puVar1;
  if (*(char *)(lVar3 + 0xb1) != '\0') {
    return;
  }
  if ((param_1[1] != 0) && (lVar7 = *(long *)(param_1[1] + 8), lVar7 != 0)) {
    lVar2 = FUN_03f2a10c(0x200,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar2 != 0) && (uVar4 = (ulong)*(uint *)(lVar7 + 0x20), 0 < (int)*(uint *)(lVar7 + 0x20)))
    {
      plVar5 = *(long **)(lVar7 + 0x28);
      do {
        if (*plVar5 == 0) {
          *plVar5 = lVar2;
          lVar3 = *(long *)puVar1;
          *plVar6 = lVar2;
          if (lVar3 != 0) goto LAB_025acb14;
          param_1[6] = 0;
          goto LAB_025acc7c;
        }
        plVar5 = plVar5 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    lVar3 = *(long *)puVar1;
    *(undefined1 *)(lVar3 + 0xb1) = 1;
    *plVar6 = 0;
  }
LAB_025acb14:
  if (((*(char *)(lVar3 + 0xb1) == '\0') && (param_1[1] != 0)) &&
     (lVar7 = *(long *)(param_1[1] + 8), lVar7 != 0)) {
    lVar2 = FUN_03f2a10c(0x200,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar2 != 0) && (uVar4 = (ulong)*(uint *)(lVar7 + 0x20), 0 < (int)*(uint *)(lVar7 + 0x20)))
    {
      plVar6 = *(long **)(lVar7 + 0x28);
      do {
        if (*plVar6 == 0) {
          *plVar6 = lVar2;
          lVar3 = *(long *)puVar1;
          param_1[6] = lVar2;
          if (lVar3 == 0) goto LAB_025acc7c;
          goto LAB_025acb20;
        }
        plVar6 = plVar6 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    lVar3 = *(long *)puVar1;
    *(undefined1 *)(lVar3 + 0xb1) = 1;
  }
  param_1[6] = 0;
LAB_025acb20:
  if (((*(char *)(lVar3 + 0xb1) == '\0') && (param_1[1] != 0)) &&
     (lVar7 = *(long *)(param_1[1] + 8), lVar7 != 0)) {
    lVar2 = FUN_03f2a10c(0x200,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar2 != 0) && (uVar4 = (ulong)*(uint *)(lVar7 + 0x20), 0 < (int)*(uint *)(lVar7 + 0x20)))
    {
      plVar6 = *(long **)(lVar7 + 0x28);
      do {
        if (*plVar6 == 0) {
          *plVar6 = lVar2;
          lVar3 = *(long *)puVar1;
          param_1[7] = lVar2;
          if (lVar3 != 0) goto LAB_025acb2c;
          goto LAB_025acb34;
        }
        plVar6 = plVar6 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    lVar3 = *(long *)puVar1;
    *(undefined1 *)(lVar3 + 0xb1) = 1;
  }
  param_1[7] = 0;
LAB_025acb2c:
  if ((*(char *)(lVar3 + 0xb1) == '\0') && (param_1[1] != 0)) {
    lVar7 = *(long *)(param_1[1] + 8);
    lVar3 = 0;
    if ((lVar7 != 0) && (lVar3 = FUN_03f29260(lVar7,8,0x80), lVar3 == 0)) {
      *(undefined1 *)(*(long *)puVar1 + 0xb1) = 1;
    }
  }
  else {
LAB_025acb34:
    lVar3 = 0;
  }
LAB_025acb38:
  param_1[8] = lVar3;
  FUN_025ac530(param_1);
  return;
LAB_025acc7c:
  lVar3 = 0;
  param_1[7] = 0;
  goto LAB_025acb38;
}

