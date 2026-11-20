
long FUN_03eb5cd0(undefined8 param_1,undefined8 *param_2,long *param_3,long param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *local_60;
  char *pcStack_58;
  undefined8 local_38;
  
  uVar7 = param_2[1];
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar8 = param_3[1];
  lVar3 = FUN_039a7bd0(param_1,param_4,param_5);
  puVar1 = PTR_DAT_04bb2020;
  if (lVar3 != 0) {
    local_60 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = (char *)lVar8;
    FUN_039a8120(lVar3,uVar7,&local_60,param_5);
  }
  if (*(char *)(param_4 + 0x18) != '\0') {
    local_38 = 0;
    local_60 = puVar1 + 0x10;
    pcStack_58 = "output/DecalAOObject.bgsysdclao";
    plVar6 = (long *)*param_2;
    if (((*PTR_DAT_04bb2868 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    uVar4 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bb2860);
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)0x0;
    }
    lVar8 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_60,&local_38);
    if (lVar8 != 0) {
      local_38 = CONCAT44(local_38._4_4_,0x80);
      lVar5 = FUN_039bbf70(&local_38,param_5);
      *(long *)(lVar3 + 0x68) = lVar5;
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        if (*(int *)(lVar5 + 0x2d0) < *(int *)(lVar5 + 0x2d4)) {
          *(long *)(*(long *)(lVar5 + 0x2d8) + (long)*(int *)(lVar5 + 0x2d0) * 8) = lVar3;
          *(int *)(lVar5 + 0x2d0) = *(int *)(lVar5 + 0x2d0) + 1;
        }
        if (*(long *)(lVar5 + 0x2c8) == 0) {
          *(long *)(lVar5 + 0x2c8) = lVar3;
        }
        lVar5 = *(long *)(lVar3 + 0x68);
      }
      FUN_03964240(&local_60,lVar8);
      (**(code **)(*(long *)(lVar5 + 0xf0) + 0x50))((long *)(lVar5 + 0xf0),local_60);
    }
  }
  return lVar3;
}

