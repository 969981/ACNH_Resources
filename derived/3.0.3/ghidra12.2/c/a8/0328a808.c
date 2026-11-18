
void FUN_0328a808(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined *local_60;
  undefined ***local_58;
  undefined **local_50;
  long lStack_48;
  long local_18;
  
  local_18 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  local_60 = PTR_DAT_04bc8e68 + 0x10;
  local_58 = *(undefined ****)(param_3 + 8);
  lVar1 = FUN_0328b6d0(&local_18,&local_60,0);
  local_18 = lVar1;
  FUN_032d7320(&local_18,param_2);
  lVar2 = FUN_032cbf00(*(undefined8 *)(lVar1 + 0x18));
  if (lVar2 != 0) {
    local_58 = &local_50;
    ppuVar5 = &PTR_LAB_04b1bb48;
    local_50 = &PTR_LAB_04b1bb48;
    local_60 = PTR_DAT_04bc8e60 + 0x10;
    plVar4 = *(long **)(lVar2 + 0xf0);
    lStack_48 = lVar1;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
      if (local_58 == (undefined ***)0x0) {
        *(undefined8 *)(lVar2 + 0xf0) = 0;
        return;
      }
      ppuVar5 = *local_58;
    }
    uVar3 = (*(code *)ppuVar5[3])(local_58,lVar2 + 0xf8);
    *(undefined8 *)(lVar2 + 0xf0) = uVar3;
    if (local_58 != (undefined ***)0x0) {
      (*(code *)(*local_58)[1])();
    }
  }
  return;
}

