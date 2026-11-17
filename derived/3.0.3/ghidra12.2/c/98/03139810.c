
void FUN_03139810(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if (((DAT_056f7598 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f7598), iVar2 != 0)) {
    DAT_056f74b8 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f74c0 = "@T_Line_00";
    DAT_056f74d0 = "@T_Line_06";
    DAT_056f74e0 = "@T_Line_01";
    DAT_056f7500 = "@T_Line_03";
    DAT_056f7510 = "@T_Line_04";
    DAT_056f7520 = "@T_Line_05";
    DAT_056f7540 = "@T_Line_08";
    DAT_056f7530 = "@T_Line_07";
    DAT_056f7550 = "@T_Line_09";
    DAT_056f7560 = "@T_Line_10";
    DAT_056f7570 = "@T_Line_11";
    DAT_056f74f0 = "@T_Line_02";
    DAT_056f7580 = "@T_Line_12";
    DAT_056f7590 = "@T_Line_13";
    DAT_056f74c8 = DAT_056f74b8;
    DAT_056f74d8 = DAT_056f74b8;
    DAT_056f74e8 = DAT_056f74b8;
    DAT_056f74f8 = DAT_056f74b8;
    DAT_056f7508 = DAT_056f74b8;
    DAT_056f7518 = DAT_056f74b8;
    DAT_056f7528 = DAT_056f74b8;
    DAT_056f7538 = DAT_056f74b8;
    DAT_056f7548 = DAT_056f74b8;
    DAT_056f7558 = DAT_056f74b8;
    DAT_056f7568 = DAT_056f74b8;
    DAT_056f7578 = DAT_056f74b8;
    DAT_056f7588 = DAT_056f74b8;
    __cxa_guard_release(&DAT_056f7598);
  }
  uVar3 = FUN_03462740(param_1,param_2,&DAT_056f74b8);
  *(undefined8 *)(param_1 + 0x288) = uVar3;
  uVar3 = FUN_03462740(param_1,param_2,&DAT_056f74c8);
  *(undefined8 *)(param_1 + 0x290) = uVar3;
  uVar3 = FUN_03462740(param_1,param_2,&DAT_056f74d8);
  *(undefined8 *)(param_1 + 0x298) = uVar3;
  uVar3 = FUN_03462740(param_1,param_2,&DAT_056f74e8);
  *(undefined8 *)(param_1 + 0x2a0) = uVar3;
  uVar3 = FUN_03462740(param_1,param_2,&DAT_056f74f8);
  *(undefined8 *)(param_1 + 0x2a8) = uVar3;
  uVar3 = FUN_03462740(param_1,param_2,&DAT_056f7508);
  *(undefined8 *)(param_1 + 0x2b0) = uVar3;
  uVar3 = FUN_03462740(param_1,param_2,&DAT_056f7518);
  *(undefined8 *)(param_1 + 0x2b8) = uVar3;
  uVar3 = FUN_03462740(param_1,param_2,&DAT_056f7528);
  *(undefined8 *)(param_1 + 0x2c0) = uVar3;
  uVar3 = FUN_03462740(param_1,param_2,&DAT_056f7538);
  *(undefined8 *)(param_1 + 0x2c8) = uVar3;
  uVar3 = FUN_03462740(param_1,param_2,&DAT_056f7548);
  *(undefined8 *)(param_1 + 0x2d0) = uVar3;
  uVar3 = FUN_03462740(param_1,param_2,&DAT_056f7558);
  *(undefined8 *)(param_1 + 0x2d8) = uVar3;
  uVar3 = FUN_03462740(param_1,param_2,&DAT_056f7568);
  *(undefined8 *)(param_1 + 0x2e0) = uVar3;
  uVar3 = FUN_03462740(param_1,param_2,&DAT_056f7578);
  *(undefined8 *)(param_1 + 0x2e8) = uVar3;
  uVar3 = FUN_03462740(param_1,param_2,&DAT_056f7588);
  *(undefined8 *)(param_1 + 0x2f0) = uVar3;
  if (((DAT_056f75b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f75b0), iVar2 != 0)) {
    DAT_056f75a0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f75a8 = "N_Pos_00";
    __cxa_guard_release(&DAT_056f75b0);
  }
  (**(code **)(DAT_056f75a0 + 0x18))(&DAT_056f75a0);
  if (*DAT_056f75a8 == '\0') {
LAB_031399d0:
    FUN_0386fd70(&DAT_056f75a0);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f75a0);
  }
  else {
    if (*DAT_056f75a8 != '@') {
      lVar6 = 0;
      do {
        if ((lVar6 == 0x80000) || (lVar4 = lVar6 + 1, DAT_056f75a8[lVar4] == '\0'))
        goto LAB_031399d0;
        lVar6 = lVar6 + 1;
      } while (DAT_056f75a8[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f75a0);
  }
  *(undefined8 *)(param_1 + 0x2f8) = uVar3;
  if (*(long *)(param_1 + 0x250) == 0) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    if (lVar6 == 0) {
      plVar5 = malloc(0x20);
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar1 = (undefined8 *)(lVar6 + 8);
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x20,8);
    }
    plVar5[2] = (long)(plVar5 + 1);
    plVar5[3] = 0x20800000000;
    *plVar5 = (long)(PTR_DAT_04bc9cb0 + 0x10);
    plVar5[1] = (long)(plVar5 + 1);
    *(long **)(param_1 + 0x250) = plVar5;
  }
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

