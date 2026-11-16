
void FUN_025f80c0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined **local_50;
  undefined *puStack_48;
  
  puStack_48 = (&PTR_s_wherearen_promote_npc_04a86b48)[param_3];
  local_50 = &PTR_LAB_048f9770;
  FUN_025ffac8(param_1,&local_50,param_2);
  *param_1 = &PTR_FUN_04a86b68;
  plVar7 = param_1 + 6;
  *plVar7 = 0;
  *(int *)(param_1 + 5) = param_3;
  puVar1 = PTR_DAT_04bb2268;
  lVar2 = *(long *)PTR_DAT_04bb2268;
  param_1[7] = 0;
  param_1[8] = 0;
  if (*(char *)(lVar2 + 0xb1) == '\0') {
    if ((param_1[1] != 0) && (lVar8 = *(long *)(param_1[1] + 8), lVar8 != 0)) {
      lVar3 = FUN_03f2a10c(0x10,**(undefined8 **)PTR_DAT_04bc3578,1);
      if ((lVar3 != 0) && (uVar5 = (ulong)*(uint *)(lVar8 + 0x20), 0 < (int)*(uint *)(lVar8 + 0x20))
         ) {
        plVar6 = *(long **)(lVar8 + 0x28);
        do {
          if (*plVar6 == 0) {
            *plVar6 = lVar3;
            lVar2 = *(long *)puVar1;
            *plVar7 = lVar3;
            if (lVar2 != 0) goto LAB_025f81b0;
            param_1[7] = 0;
            uVar4 = 0;
            goto LAB_025f823c;
          }
          plVar6 = plVar6 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      lVar2 = *(long *)puVar1;
      *(undefined1 *)(lVar2 + 0xb1) = 1;
      *plVar7 = 0;
    }
LAB_025f81b0:
    if (((*(char *)(lVar2 + 0xb1) == '\0') && (param_1[1] != 0)) &&
       (lVar8 = *(long *)(param_1[1] + 8), lVar8 != 0)) {
      lVar3 = FUN_03f2a10c(0x10,**(undefined8 **)PTR_DAT_04bc3578,1);
      if ((lVar3 != 0) && (uVar5 = (ulong)*(uint *)(lVar8 + 0x20), 0 < (int)*(uint *)(lVar8 + 0x20))
         ) {
        plVar7 = *(long **)(lVar8 + 0x28);
        do {
          if (*plVar7 == 0) {
            *plVar7 = lVar3;
            lVar2 = *(long *)puVar1;
            param_1[7] = lVar3;
            if (lVar2 != 0) goto LAB_025f81bc;
            uVar4 = 0;
            goto LAB_025f823c;
          }
          plVar7 = plVar7 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      lVar2 = *(long *)puVar1;
      *(undefined1 *)(lVar2 + 0xb1) = 1;
    }
    param_1[7] = 0;
LAB_025f81bc:
    if (*(char *)(lVar2 + 0xb1) == '\0') {
      uVar4 = FUN_0260d664(lVar2,param_1[1]);
    }
    else {
      uVar4 = 0;
    }
LAB_025f823c:
    param_1[8] = uVar4;
  }
  return;
}

