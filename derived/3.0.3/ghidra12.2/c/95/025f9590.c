
void FUN_025f9590(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined **local_50;
  undefined *puStack_48;
  
  puStack_48 = (&PTR_s_wherearen_sharesns_npc_04a86b90)[param_3];
  local_50 = &PTR_LAB_048f9770;
  FUN_025ffac8(param_1,&local_50,param_2);
  *param_1 = &PTR_FUN_04a86bb0;
  plVar6 = param_1 + 6;
  *plVar6 = 0;
  *(int *)(param_1 + 5) = param_3;
  puVar1 = PTR_DAT_04bb2268;
  lVar3 = *(long *)PTR_DAT_04bb2268;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(char *)(lVar3 + 0xb1) == '\0') {
    if ((param_1[1] != 0) && (lVar7 = *(long *)(param_1[1] + 8), lVar7 != 0)) {
      lVar2 = FUN_03f2a10c(0x10,**(undefined8 **)PTR_DAT_04bc3578,1);
      if ((lVar2 != 0) && (uVar4 = (ulong)*(uint *)(lVar7 + 0x20), 0 < (int)*(uint *)(lVar7 + 0x20))
         ) {
        plVar5 = *(long **)(lVar7 + 0x28);
        do {
          if (*plVar5 == 0) {
            *plVar5 = lVar2;
            lVar3 = *(long *)puVar1;
            *plVar6 = lVar2;
            if (lVar3 != 0) goto LAB_025f9680;
            lVar3 = 0;
            param_1[7] = 0;
            goto LAB_025f9698;
          }
          plVar5 = plVar5 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      lVar3 = *(long *)puVar1;
      *(undefined1 *)(lVar3 + 0xb1) = 1;
      *plVar6 = 0;
    }
LAB_025f9680:
    if (((*(char *)(lVar3 + 0xb1) == '\0') && (param_1[1] != 0)) &&
       (lVar7 = *(long *)(param_1[1] + 8), lVar7 != 0)) {
      lVar2 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
      if ((lVar2 != 0) && (uVar4 = (ulong)*(uint *)(lVar7 + 0x20), 0 < (int)*(uint *)(lVar7 + 0x20))
         ) {
        plVar6 = *(long **)(lVar7 + 0x28);
        do {
          if (*plVar6 == 0) {
            *plVar6 = lVar2;
            lVar3 = *(long *)puVar1;
            param_1[7] = lVar2;
            if (lVar3 == 0) goto LAB_025f9694;
            goto LAB_025f968c;
          }
          plVar6 = plVar6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      lVar3 = *(long *)puVar1;
      *(undefined1 *)(lVar3 + 0xb1) = 1;
    }
    param_1[7] = 0;
LAB_025f968c:
    if (((*(char *)(lVar3 + 0xb1) == '\0') && (param_1[1] != 0)) &&
       (lVar7 = *(long *)(param_1[1] + 8), lVar7 != 0)) {
      lVar3 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
      if ((lVar3 != 0) && (uVar4 = (ulong)*(uint *)(lVar7 + 0x20), 0 < (int)*(uint *)(lVar7 + 0x20))
         ) {
        plVar6 = *(long **)(lVar7 + 0x28);
        do {
          if (*plVar6 == 0) {
            *plVar6 = lVar3;
            goto LAB_025f9698;
          }
          plVar6 = plVar6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      lVar3 = 0;
      *(undefined1 *)(*(long *)puVar1 + 0xb1) = 1;
    }
    else {
LAB_025f9694:
      lVar3 = 0;
    }
LAB_025f9698:
    param_1[8] = lVar3;
  }
  return;
}

