
undefined8 FUN_0266a2d0(long *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte bVar6;
  undefined4 local_70 [2];
  long local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  
  bVar6 = *param_2;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  local_60 = (undefined *)CONCAT71(local_60._1_7_,bVar6);
  lVar2 = FUN_025830c0(DAT_055021a0,&local_60,1);
  uVar3 = 0;
  if ((param_3 < 8) && (lVar2 != 0)) {
    lVar2 = lVar2 + (ulong)param_3 * 0x2450;
    if ((*(long **)(lVar2 + 0x3f28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar2 + 0x3f28), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    uVar5 = FUN_026e9ac0(*(long *)(lVar2 + 0x3f10) + *(long *)(lVar2 + 0x3f08));
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0x3f28) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0x3f28) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      if ((*(long **)(lVar2 + 0x5818) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar2 + 0x5818), puVar4 == (undefined8 *)0x0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = (**(code **)*puVar4)();
        uVar1 = uVar1 ^ 1;
      }
      local_70[0] = 0x30;
      local_68 = *(long *)(lVar2 + 0x5800) + *(long *)(lVar2 + 0x57f8);
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x38))(param_1);
        local_48 = 0;
        uStack_40 = 0;
        local_50 = 0;
        local_38 = 1;
        local_34 = 0;
        local_60 = PTR_DAT_04bc0cd8 + 0x10;
        uStack_58 = 0;
        FUN_02906b00(&local_60,param_1,local_70);
      }
      if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0x5818) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0x5818) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

