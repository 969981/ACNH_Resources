
void FUN_03f3a590(long param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
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
  
  plVar8 = *(long **)(param_1 + 0x28);
  local_78 = 0;
  uStack_70 = 0;
  local_90 = (long *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_a0 = PTR_DAT_04bb2818 + 0x10;
  local_98 = 0;
  if (((char)plVar8[0xf] == '\0') ||
     (local_98 = (**(code **)(*plVar8 + 0xd0))(plVar8,&local_a0), local_98 == 0)) {
    *(undefined4 *)(param_2 + 8) = 1;
  }
  else {
    local_90 = plVar8;
    (**(code **)(*(long *)(param_1 + 0xb0) + 0x18))((long *)(param_1 + 0xb0));
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0xb8) + lVar7) == '\0') {
LAB_03f3a6e0:
        uVar6 = (int)lVar7 + 1;
        goto LAB_03f3a6e4;
      }
      lVar1 = *(long *)(param_1 + 0xb8) + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03f3a6e0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_03f3a6e0;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    uVar6 = 1;
LAB_03f3a6e4:
    do {
      while( true ) {
        local_ad = 0;
        local_a8 = '\0';
        local_1b0 = 0x100;
        local_1ac[0] = 0;
        local_1c0 = &PTR_LAB_048f9a70;
        local_1b8 = local_1ac;
        if (((char)plVar8[0xf] == '\0') ||
           (uVar5 = (**(code **)(*plVar8 + 0x48))(plVar8,&local_a0), (uVar5 & 1) == 0))
        goto LAB_03f3a668;
        local_258 = 0;
        bVar4 = (**(code **)(*plVar8 + 0xe0))(plVar8,&local_258,&local_a0,&local_1c0,1);
        bVar3 = local_258 < 2;
        if (local_258 == 0) goto LAB_03f3a668;
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar7 = param_3[1];
        (*(code *)local_1c0[3])(&local_1c0);
        FUN_0074fda4(&local_258,"%s/%s",lVar7,local_1b8);
        if (local_a8 != '\0') break;
        uVar9 = *(undefined8 *)(param_2 + 0x18);
        (**(code **)(CONCAT44(uStack_254,local_258) + 0x18))(&local_258);
        lVar7 = 0;
        do {
          if (*(char *)(local_250 + lVar7) == '\0') goto LAB_03f3a82c;
          if (*(char *)(local_250 + lVar7 + 1) == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_03f3a82c;
          }
          if (*(char *)(local_250 + lVar7 + 2) == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_03f3a82c;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_03f3a82c:
        puVar2 = &DAT_0419b684;
        if ((int)uVar6 <= (int)lVar7 && -1 < (int)uVar6) {
          puVar2 = (undefined1 *)(local_250 + (ulong)uVar6);
        }
        FUN_038d17d4(uVar9,&DAT_040e1e8e,puVar2);
        if ((bVar4 & bVar3) == 0) goto LAB_03f3a668;
      }
      FUN_03f3a590(param_1,param_2,&local_258);
    } while ((bVar4 & bVar3) != 0);
  }
LAB_03f3a668:
  plVar8 = local_90;
  local_a0 = &DAT_048fa060;
  if (((local_90 != (long *)0x0) && ((char)local_90[0xf] != '\0')) &&
     (uVar5 = (**(code **)(*local_90 + 0x48))(local_90,&local_a0), (uVar5 & 1) != 0)) {
    (**(code **)(*plVar8 + 0xd8))(plVar8,&local_a0);
  }
  return;
}

