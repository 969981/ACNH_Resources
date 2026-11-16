
void FUN_025d9270(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined *local_50;
  char *pcStack_48;
  
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "shop_sell_item";
  FUN_025ffac8(param_1,&local_50,param_2);
  *param_1 = &PTR_FUN_04a86448;
  plVar6 = param_1 + 5;
  *plVar6 = 0;
  puVar2 = PTR_DAT_04bb2268;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar9 = DAT_05ae7600;
  lVar8 = *(long *)puVar2;
  if (*(char *)(lVar8 + 0xb1) != '\0') {
    return;
  }
  if (DAT_05ae7600 == 0) {
    pvVar4 = malloc(0x140);
  }
  else {
    plVar3 = *(long **)(lVar8 + 0x28);
    if (plVar3 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar9 + 8);
      if (lVar8 != 0) {
        plVar3 = (long *)(lVar8 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        lVar8 = *(long *)puVar2;
        goto LAB_025d9428;
      }
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x140,8);
    lVar8 = *(long *)puVar2;
  }
  if (pvVar4 != (void *)0x0) {
    param_1[6] = 0x2800000000;
    param_1[7] = pvVar4;
    if ((((lVar8 != 0) && (*(char *)(lVar8 + 0xb1) == '\0')) && (param_1[1] != 0)) &&
       (lVar8 = *(long *)(param_1[1] + 8), lVar8 != 0)) {
      lVar8 = FUN_03f29260(lVar8,0x28,0x20);
      if (lVar8 != 0) {
        *plVar6 = lVar8;
        puVar2 = PTR_DAT_04bc3578;
        iVar7 = 0;
        do {
          lVar9 = *plVar6;
          lVar8 = FUN_03f2a10c(0x20,**(undefined8 **)puVar2,1);
          if ((lVar8 != 0) &&
             (uVar1 = *(uint *)(lVar9 + 0x38), uVar5 = (ulong)uVar1, 0 < (int)uVar1)) {
            plVar3 = *(long **)(lVar9 + 0x40);
            do {
              if (*plVar3 == 0) {
                *plVar3 = lVar8;
                if (*(int *)(param_1 + 6) < *(int *)((long)param_1 + 0x34)) {
                  *(long *)(param_1[7] + (long)*(int *)(param_1 + 6) * 8) = lVar8;
                  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
                }
                break;
              }
              plVar3 = plVar3 + 1;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          iVar7 = iVar7 + 1;
          if (iVar7 == 0x28) {
            return;
          }
        } while( true );
      }
      *(undefined1 *)(*(long *)puVar2 + 0xb1) = 1;
    }
    *plVar6 = 0;
    return;
  }
LAB_025d9428:
  *(undefined1 *)(lVar8 + 0xb1) = 1;
  return;
}

