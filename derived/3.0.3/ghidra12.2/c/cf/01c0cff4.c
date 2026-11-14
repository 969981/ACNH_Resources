
void FUN_01c0cff4(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auStack_1722 [2];
  undefined1 auStack_1720 [8];
  long local_1718;
  long local_1710;
  undefined4 local_80 [2];
  long local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  
  FUN_007ef010(auStack_1722);
  FUN_007e4920(auStack_1720,auStack_1722);
  uVar2 = FUN_007e4bb0(auStack_1720);
  if ((uVar2 & 1) == 0) {
    if (local_1718 == 0) {
      return;
    }
    lVar4 = local_1718;
    if (*(long **)(local_1718 + 0x28) != (long *)0x0) {
      puVar3 = (undefined8 *)**(long **)(local_1718 + 0x28);
      goto joined_r0x01c0d070;
    }
  }
  else {
    if (local_1710 == 0) {
      return;
    }
    lVar4 = local_1710;
    if (*(long **)(local_1710 + 0x28) != (long *)0x0) {
      puVar3 = (undefined8 *)**(long **)(local_1710 + 0x28);
joined_r0x01c0d070:
      if (puVar3 != (undefined8 *)0x0) {
        uVar1 = (**(code **)*puVar3)();
        uVar1 = uVar1 ^ 1;
        goto LAB_01c0d08c;
      }
    }
  }
  uVar1 = 1;
LAB_01c0d08c:
  local_78 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0x10;
  local_80[0] = 0x14;
  (**(code **)(*param_1 + 0x38))(param_1);
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  local_48 = 1;
  local_44 = 0;
  local_70 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_68 = 0;
  FUN_02906b00(&local_70,param_1,local_80);
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  return;
}

