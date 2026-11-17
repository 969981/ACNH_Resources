
void FUN_03132e30(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *local_e0;
  undefined1 *puStack_d8;
  undefined4 local_d0;
  undefined1 local_cc [31];
  undefined1 local_ad;
  undefined *local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 local_94 [63];
  undefined1 local_55;
  
  lVar3 = *(long *)(param_2 + 0x18);
  if (lVar3 != 0) {
    if (((DAT_056f7108 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056f7108), iVar1 != 0)) {
      DAT_056f70d8 = PTR_DAT_04bb2020 + 0x10;
      DAT_056f70e0 = "SelectNext";
      DAT_056f7100 = &DAT_040f66fa;
      DAT_056f70f0 = "SelectPrev";
      DAT_056f70e8 = DAT_056f70d8;
      DAT_056f70f8 = DAT_056f70d8;
      __cxa_guard_release(&DAT_056f7108);
    }
    local_55 = 0;
    local_98 = 0x40;
    local_a0 = local_94;
    local_d0 = 0x20;
    local_ad = 0;
    puStack_d8 = local_cc;
    local_cc[0] = 0;
    local_a8 = PTR_DAT_04bb2bc0 + 0x10;
    param_3 = param_3 + 0x10;
    local_94[0] = 0;
    local_e0 = PTR_DAT_04bb2028 + 0x10;
    (**(code **)(DAT_056f6ca8 + 0x18))(&DAT_056f6ca8);
    uVar2 = DAT_056f6cb0;
    (**(code **)(DAT_056f70d8 + 0x18))(&DAT_056f70d8);
    FUN_038d1270(&local_e0,"%s_%s",uVar2,DAT_056f70e0);
    FUN_03d71cb0(param_2,&local_a8,param_3,&local_e0);
    uVar2 = FUN_03ea4cf4(lVar3,&local_a8);
    *(undefined8 *)(param_1 + 0x288) = uVar2;
    *local_a0 = 0;
    (**(code **)(DAT_056f6ca8 + 0x18))(&DAT_056f6ca8);
    uVar2 = DAT_056f6cb0;
    (**(code **)(DAT_056f70e8 + 0x18))();
    FUN_038d1270(&local_e0,"%s_%s",uVar2,DAT_056f70f0);
    FUN_03d71cb0(param_2,&local_a8,param_3,&local_e0);
    uVar2 = FUN_03ea4cf4(lVar3,&local_a8);
    *(undefined8 *)(param_1 + 0x290) = uVar2;
    *local_a0 = 0;
    (**(code **)(DAT_056f6ca8 + 0x18))(&DAT_056f6ca8);
    uVar2 = DAT_056f6cb0;
    (**(code **)(DAT_056f70f8 + 0x18))(&DAT_056f70f8);
    FUN_038d1270(&local_e0,"%s_%s",uVar2,DAT_056f7100);
    FUN_03d71cb0(param_2,&local_a8,param_3,&local_e0);
    uVar2 = FUN_03ea4cf4(lVar3,&local_a8);
    *(undefined8 *)(param_1 + 0x298) = uVar2;
  }
  return;
}

