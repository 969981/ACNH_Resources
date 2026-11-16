
void FUN_0258b910(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined *local_50;
  char *pcStack_48;
  
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "app_warning";
  FUN_0260140c(param_1,&local_50);
  *param_1 = &PTR_LAB_04a85320;
  param_1[5] = 0;
  puVar1 = PTR_DAT_04bb2268;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar4 = *(long *)puVar1;
  if (*(char *)(lVar4 + 0xb1) != '\0') {
    return;
  }
  if ((param_1[1] == 0) || (lVar7 = *(long *)(param_1[1] + 8), lVar7 == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar3 != 0) && (uVar5 = (ulong)*(uint *)(lVar7 + 0x20), 0 < (int)*(uint *)(lVar7 + 0x20)))
    {
      plVar6 = *(long **)(lVar7 + 0x28);
      do {
        if (*plVar6 == 0) {
          *plVar6 = lVar3;
          lVar4 = *(long *)puVar1;
          goto LAB_0258b9e8;
        }
        plVar6 = plVar6 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar4 = *(long *)puVar1;
    lVar3 = 0;
    *(undefined1 *)(lVar4 + 0xb1) = 1;
  }
LAB_0258b9e8:
  param_1[5] = lVar3;
  puVar2 = PTR_DAT_04bc3578;
  if (*(char *)(lVar4 + 0xb1) != '\0') {
    return;
  }
  if ((param_1[1] != 0) && (lVar4 = *(long *)(param_1[1] + 8), lVar4 != 0)) {
    lVar7 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar7 != 0) && (uVar5 = (ulong)*(uint *)(lVar4 + 0x20), 0 < (int)*(uint *)(lVar4 + 0x20)))
    {
      plVar6 = *(long **)(lVar4 + 0x28);
      do {
        if (*plVar6 == 0) {
          *plVar6 = lVar7;
          lVar4 = *(long *)puVar1;
          param_1[6] = lVar7;
          if ((((lVar4 == 0) || (*(char *)(lVar4 + 0xb1) != '\0')) || (param_1[1] == 0)) ||
             (lVar4 = *(long *)(param_1[1] + 8), lVar4 == 0)) {
            lVar7 = 0;
            goto LAB_0258baa0;
          }
          lVar7 = FUN_03f2a10c(0x80,**(undefined8 **)puVar2,1);
          if ((lVar7 == 0) ||
             (uVar5 = (ulong)*(uint *)(lVar4 + 0x20), (int)*(uint *)(lVar4 + 0x20) < 1))
          goto LAB_0258baf8;
          plVar6 = *(long **)(lVar4 + 0x28);
          goto LAB_0258bae4;
        }
        plVar6 = plVar6 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    *(undefined1 *)(*(long *)puVar1 + 0xb1) = 1;
  }
  param_1[6] = 0;
  return;
  while( true ) {
    plVar6 = plVar6 + 1;
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) break;
LAB_0258bae4:
    if (*plVar6 == 0) {
      *plVar6 = lVar7;
      goto LAB_0258baa0;
    }
  }
LAB_0258baf8:
  lVar7 = 0;
  *(undefined1 *)(*(long *)puVar1 + 0xb1) = 1;
LAB_0258baa0:
  param_1[7] = lVar7;
  return;
}

