
uint FUN_032d720c(long *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined ***local_68;
  undefined **local_60;
  long lStack_58;
  undefined4 local_50;
  byte local_4c;
  undefined1 local_4b;
  
  uStack_78 = *(undefined8 *)(*param_1 + 0xd8);
  local_80 = PTR_DAT_04bb8610 + 0x10;
  uVar1 = FUN_032d6ca0(param_1,&local_80,param_2,param_3,0);
  lVar6 = *param_1;
  lVar2 = FUN_032cbf00(*(undefined8 *)(lVar6 + 0x18));
  if (lVar2 != 0) {
    ppuVar5 = &PTR_LAB_04b1bb10;
    local_60 = &PTR_LAB_04b1bb10;
    local_68 = &local_60;
    local_4c = (byte)param_3 & 1;
    local_4b = 0;
    local_70 = PTR_DAT_04bc8e60 + 0x10;
    plVar4 = *(long **)(lVar2 + 0xf0);
    lStack_58 = lVar6;
    local_50 = param_2;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
      if (local_68 == (undefined ***)0x0) {
        *(undefined8 *)(lVar2 + 0xf0) = 0;
        goto LAB_032d72fc;
      }
      ppuVar5 = *local_68;
    }
    uVar3 = (*(code *)ppuVar5[3])(local_68,lVar2 + 0xf8);
    *(undefined8 *)(lVar2 + 0xf0) = uVar3;
    if (local_68 != (undefined ***)0x0) {
      (*(code *)(*local_68)[1])();
    }
  }
LAB_032d72fc:
  return uVar1 & 1;
}

