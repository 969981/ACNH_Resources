
void FUN_03f3a2c0(long param_1,long param_2,int *param_3,long *param_4)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  uint local_258;
  undefined4 uStack_254;
  long local_250;
  undefined **local_1c0;
  undefined1 *local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [255];
  undefined1 local_ad;
  char local_a8;
  undefined *local_a0;
  long local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  plVar7 = *(long **)(param_1 + 0x28);
  local_78 = 0;
  uStack_70 = 0;
  local_90 = (long *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_a0 = PTR_DAT_04bb2818 + 0x10;
  local_98 = 0;
  if (((char)plVar7[0xf] == '\0') ||
     (local_98 = (**(code **)(*plVar7 + 0xd0))(plVar7,&local_a0,param_4), local_98 == 0)) {
    *(undefined4 *)(param_2 + 8) = 1;
  }
  else {
    local_90 = plVar7;
    (**(code **)(*(long *)(param_1 + 0xb0) + 0x18))((long *)(param_1 + 0xb0));
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0xb8) + lVar6) == '\0') {
LAB_03f3a410:
        iVar5 = 1 - (int)lVar6;
        goto LAB_03f3a418;
      }
      lVar1 = *(long *)(param_1 + 0xb8) + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_03f3a410;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_03f3a410;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    iVar5 = 1;
LAB_03f3a418:
    do {
      while( true ) {
        local_ad = 0;
        local_a8 = '\0';
        local_1b0 = 0x100;
        local_1ac[0] = 0;
        local_1c0 = &PTR_LAB_048f9a70;
        local_1b8 = local_1ac;
        if (((char)plVar7[0xf] == '\0') ||
           (uVar4 = (**(code **)(*plVar7 + 0x48))(plVar7,&local_a0), (uVar4 & 1) == 0))
        goto LAB_03f3a398;
        local_258 = 0;
        bVar3 = (**(code **)(*plVar7 + 0xe0))(plVar7,&local_258,&local_a0,&local_1c0,1);
        bVar2 = local_258 < 2;
        if (local_258 == 0) goto LAB_03f3a398;
        (**(code **)(*param_4 + 0x18))(param_4);
        lVar6 = param_4[1];
        (*(code *)local_1c0[3])(&local_1c0);
        FUN_0074fda4(&local_258,"%s/%s",lVar6,local_1b8);
        if (local_a8 != '\0') break;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
        (**(code **)(CONCAT44(uStack_254,local_258) + 0x18))(&local_258);
        lVar6 = 0;
        do {
          if (*(char *)(local_250 + lVar6) == '\0') goto LAB_03f3a56c;
          if (*(char *)(local_250 + lVar6 + 1) == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_03f3a56c;
          }
          if (*(char *)(local_250 + lVar6 + 2) == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_03f3a56c;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
LAB_03f3a56c:
        *param_3 = (int)lVar6 + iVar5 + *param_3;
        if ((bVar3 & bVar2) == 0) goto LAB_03f3a398;
      }
      FUN_03f3a2c0(param_1,param_2,param_3,&local_258);
    } while ((bVar3 & bVar2) != 0);
  }
LAB_03f3a398:
  plVar7 = local_90;
  local_a0 = &DAT_048fa060;
  if (((local_90 != (long *)0x0) && ((char)local_90[0xf] != '\0')) &&
     (uVar4 = (**(code **)(*local_90 + 0x48))(local_90,&local_a0), (uVar4 & 1) != 0)) {
    (**(code **)(*plVar7 + 0xd8))(plVar7,&local_a0);
  }
  return;
}

