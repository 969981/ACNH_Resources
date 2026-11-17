
void FUN_03126278(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_f0;
  char *pcStack_e8;
  undefined4 local_e0;
  undefined1 local_dc [31];
  undefined1 local_bd;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  puVar5 = *(undefined8 **)(param_2 + 0x18);
  if (puVar5 != (undefined8 *)0x0) {
    if (((DAT_056f5958 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f5958), iVar2 != 0)) {
      DAT_056f5938 = PTR_DAT_04bb2020 + 0x10;
      DAT_056f5940 = "CursorOn";
      DAT_056f5950 = "Slide";
      DAT_056f5948 = DAT_056f5938;
      __cxa_guard_release(&DAT_056f5958);
    }
    local_65 = 0;
    local_bd = 0;
    local_a8 = 0x40;
    local_e0 = 0x20;
    pcStack_e8 = local_dc;
    local_dc[0] = 0;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    param_3 = param_3 + 0x10;
    local_a4[0] = 0;
    local_f0 = PTR_DAT_04bb2028 + 0x10;
    local_b8 = puVar1;
    local_b0 = local_a4;
    (**(code **)(DAT_056f5928 + 0x18))(&DAT_056f5928);
    uVar3 = DAT_056f5930;
    (**(code **)(DAT_056f5938 + 0x18))(&DAT_056f5938);
    FUN_038d1270(&local_f0,"%s_%s",uVar3,DAT_056f5940);
    FUN_03d71cb0(param_2,&local_b8,param_3,&local_f0);
    uVar3 = FUN_03ea4cf4(puVar5,&local_b8);
    *(undefined8 *)(param_1 + 0x380) = uVar3;
    *local_b0 = 0;
    (**(code **)(DAT_056f5928 + 0x18))(&DAT_056f5928);
    uVar3 = DAT_056f5930;
    (**(code **)(DAT_056f5948 + 0x18))(&DAT_056f5948);
    FUN_038d1270(&local_f0,"%s_%s",uVar3,DAT_056f5950);
    FUN_03d71cb0(param_2,&local_b8,param_3,&local_f0);
    uVar3 = FUN_03ea4cf4(puVar5,&local_b8);
    *(undefined8 *)(param_1 + 0x388) = uVar3;
    local_a8 = 0x40;
    local_65 = 0;
    local_a4[0] = 0;
    local_f0 = PTR_DAT_04bb2020 + 0x10;
    pcStack_e8 = "SliderBarCtrl_SlidePos";
    local_b8 = puVar1;
    local_b0 = local_a4;
    FUN_03d71cb0(param_2,&local_b8,param_3,&local_f0);
    lVar4 = FUN_03ea830c(*puVar5,&local_b8);
    *(long *)(param_1 + 0x390) = lVar4;
    if (lVar4 == 0) {
      uVar3 = FUN_03ea4f54(0xc2c80000,0x42c80000,puVar5,&local_b8);
      *(undefined8 *)(param_1 + 0x390) = uVar3;
    }
  }
  return;
}

