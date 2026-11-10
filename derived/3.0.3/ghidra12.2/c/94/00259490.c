
uint FUN_00259490(long *param_1,undefined1 param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined **local_e0;
  undefined1 auStack_d8 [40];
  undefined *local_b0;
  undefined4 local_a8 [30];
  
  FUN_0024e09c(&local_e0);
  (**(code **)(*(long *)param_1[0x62] + 0x28))((long *)param_1[0x62],param_2,&local_e0);
  uVar4 = (**(code **)(*(long *)param_1[0x62] + 0x38))();
  if (((uVar4 & 1) != 0) && ((int)param_1[0x84] != 0)) {
    uVar2 = FUN_0025975c(param_1,auStack_d8);
    if ((uVar2 >> 0xf & 1) != 0) {
      local_a8[0] = 0;
      local_b0 = (undefined *)0x10;
      FUN_00220138(auStack_d8,&local_b0);
      FUN_00227258(&local_b0);
      FUN_00227440(&local_f0,&local_b0,auStack_d8);
      local_e8 = 0;
      local_f0 = 0x10;
      FUN_00220138(local_a8,&local_f0);
      FUN_0025ddf0(param_1[0x7f],&local_b0);
      local_b0 = PTR_DAT_04bcba18 + 0x10;
      FUN_0021f584(local_a8);
      uVar2 = 0;
      goto LAB_00259728;
    }
  }
  uVar4 = (**(code **)(*(long *)param_1[0x62] + 0x38))();
  if ((uVar4 & 1) == 0) {
    uVar4 = (**(code **)(*(long *)param_1[0x62] + 0x40))();
    if ((uVar4 & 1) != 0) {
      uVar4 = FUN_002200e4(auStack_d8,param_1 + 0x55);
      if ((uVar4 & 1) != 0) {
        uVar3 = (**(code **)(*(long *)param_1[0x62] + 0x88))();
        uVar3 = (**(code **)(*param_1 + 0x250))(param_1,uVar3);
        *(undefined4 *)(param_1 + 0x90) = uVar3;
      }
      if ((int)param_1[0x84] != 0) {
        uVar2 = FUN_0025975c(param_1,auStack_d8);
        sVar1 = (short)uVar2;
        if ((uVar2 >> 0xf & 1) == 0) goto LAB_00259660;
      }
    }
LAB_0025967c:
    uVar2 = 0;
  }
  else {
    uVar4 = FUN_002200e4(auStack_d8,param_1 + 0x55);
    if ((uVar4 & 1) != 0) {
      FUN_0021f54c(param_1 + 0x59,auStack_d8);
      lVar5 = FUN_002ba788(DAT_04c61168);
      FUN_002b4018(&local_b0,lVar5 + 8);
      uVar3 = FUN_002b43f4(&local_b0);
      FUN_002b4104(&local_b0);
      *(undefined4 *)(param_1 + 0x2e0) = uVar3;
      uVar6 = (**(code **)(*(long *)param_1[0x62] + 0xa0))();
      (**(code **)(*param_1 + 0x158))(param_1,uVar6,(long)param_1 + 0x1704,param_1 + 0x2e1);
      uVar3 = (**(code **)(*(long *)param_1[0x62] + 0x88))();
      uVar3 = (**(code **)(*param_1 + 0x250))(param_1,uVar3);
      *(undefined4 *)(param_1 + 0x90) = uVar3;
    }
    if ((int)param_1[0x84] == 0) {
      uVar2 = FUN_002598b4(param_1,&local_e0);
    }
    else {
      (**(code **)(*param_1 + 0x180))(param_1,&local_e0);
      uVar2 = FUN_0025975c(param_1,auStack_d8);
      sVar1 = (short)uVar2;
      if ((uVar2 >> 0xf & 1) != 0) goto LAB_0025967c;
LAB_00259660:
      uVar2 = 1;
      *(undefined4 *)(param_1 + ((ulong)(uint)(int)sVar1 & 0xffff) * 8 + 0x1c) = 2;
    }
  }
  local_a8[0] = 0;
  local_b0 = &DAT_00000010;
  FUN_00220138(auStack_d8,&local_b0);
LAB_00259728:
  local_e0 = &PTR_LAB_04843058;
  FUN_0021f584(auStack_d8);
  return uVar2 & 1;
}

