
void FUN_025c8fe0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "reform_nnpc_house";
  FUN_0260140c(param_1,&local_40);
  *param_1 = &PTR_FUN_04a86110;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar1 = PTR_DAT_04bb2268;
  lVar2 = *(long *)PTR_DAT_04bb2268;
  param_1[7] = 0;
  if (*(char *)(lVar2 + 0xb1) == '\0') {
    uVar3 = FUN_0260d56c(lVar2,param_1[1],300);
    lVar2 = *(long *)puVar1;
    param_1[5] = uVar3;
    if (lVar2 == 0) {
      lVar2 = 0;
      param_1[6] = 0;
    }
    else {
      if (((*(char *)(lVar2 + 0xb1) == '\0') && (param_1[1] != 0)) &&
         (lVar7 = *(long *)(param_1[1] + 8), lVar7 != 0)) {
        lVar4 = FUN_03f2a10c(0x100,**(undefined8 **)PTR_DAT_04bc3578,1);
        if ((lVar4 != 0) &&
           (uVar5 = (ulong)*(uint *)(lVar7 + 0x20), 0 < (int)*(uint *)(lVar7 + 0x20))) {
          plVar6 = *(long **)(lVar7 + 0x28);
          do {
            if (*plVar6 == 0) {
              *plVar6 = lVar4;
              lVar2 = *(long *)puVar1;
              param_1[6] = lVar4;
              if (lVar2 == 0) goto LAB_025c906c;
              goto LAB_025c9064;
            }
            plVar6 = plVar6 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar2 = *(long *)puVar1;
        *(undefined1 *)(lVar2 + 0xb1) = 1;
      }
      param_1[6] = 0;
LAB_025c9064:
      if (((*(char *)(lVar2 + 0xb1) == '\0') && (param_1[1] != 0)) &&
         (lVar7 = *(long *)(param_1[1] + 8), lVar7 != 0)) {
        lVar2 = FUN_03f2a10c(0x100,**(undefined8 **)PTR_DAT_04bc3578,1);
        if ((lVar2 != 0) &&
           (uVar5 = (ulong)*(uint *)(lVar7 + 0x20), 0 < (int)*(uint *)(lVar7 + 0x20))) {
          plVar6 = *(long **)(lVar7 + 0x28);
          do {
            if (*plVar6 == 0) {
              *plVar6 = lVar2;
              goto LAB_025c907c;
            }
            plVar6 = plVar6 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar2 = 0;
        *(undefined1 *)(*(long *)puVar1 + 0xb1) = 1;
      }
      else {
LAB_025c906c:
        lVar2 = 0;
      }
    }
LAB_025c907c:
    param_1[7] = lVar2;
  }
  return;
}

