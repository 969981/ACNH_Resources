
void FUN_030d3ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if (((DAT_056ec2f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056ec2f0), iVar2 != 0)) {
    DAT_056ec2c0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056ec2c8 = "N_MapArea_00";
    DAT_056ec2e8 = "P_Map_00";
    DAT_056ec2d8 = "N_Capture_00";
    DAT_056ec2d0 = DAT_056ec2c0;
    DAT_056ec2e0 = DAT_056ec2c0;
    __cxa_guard_release(&DAT_056ec2f0);
  }
  (**(code **)(DAT_056ec2c0 + 0x18))(&DAT_056ec2c0);
  if (*DAT_056ec2c8 == '\0') {
LAB_030d3f30:
    FUN_0386fd70(&DAT_056ec2c0);
    uVar3 = FUN_03c688b0(param_2,&DAT_056ec2c0);
  }
  else {
    if (*DAT_056ec2c8 != '@') {
      lVar6 = 0;
      do {
        if ((lVar6 == 0x80000) || (lVar4 = lVar6 + 1, DAT_056ec2c8[lVar4] == '\0'))
        goto LAB_030d3f30;
        lVar6 = lVar6 + 1;
      } while (DAT_056ec2c8[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056ec2c0);
  }
  *(undefined8 *)(param_1 + 0x288) = uVar3;
  (**(code **)(DAT_056ec2d0 + 0x18))(&DAT_056ec2d0);
  if (*DAT_056ec2d8 == '\0') {
LAB_030d3fb4:
    FUN_0386fd70(&DAT_056ec2d0);
    uVar3 = FUN_03c688b0(param_2,&DAT_056ec2d0);
  }
  else {
    if (*DAT_056ec2d8 != '@') {
      lVar6 = 0;
      do {
        if ((lVar6 == 0x80000) || (lVar4 = lVar6 + 1, DAT_056ec2d8[lVar4] == '\0'))
        goto LAB_030d3fb4;
        lVar6 = lVar6 + 1;
      } while (DAT_056ec2d8[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056ec2d0);
  }
  *(undefined8 *)(param_1 + 0x290) = uVar3;
  (**(code **)(DAT_056ec2e0 + 0x18))(&DAT_056ec2e0);
  if (*DAT_056ec2e8 == '\0') {
LAB_030d4040:
    FUN_0386fd70(&DAT_056ec2e0);
    uVar3 = FUN_03c688b0(param_2,&DAT_056ec2e0);
  }
  else {
    if (*DAT_056ec2e8 != '@') {
      lVar6 = 0;
      do {
        if ((lVar6 == 0x80000) || (lVar4 = lVar6 + 1, DAT_056ec2e8[lVar4] == '\0'))
        goto LAB_030d4040;
        lVar6 = lVar6 + 1;
      } while (DAT_056ec2e8[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056ec2e0);
  }
  *(undefined8 *)(param_1 + 0x298) = uVar3;
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

