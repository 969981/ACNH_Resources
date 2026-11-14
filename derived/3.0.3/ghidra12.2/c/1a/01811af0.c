
undefined8 FUN_01811af0(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *local_70;
  long local_68;
  undefined1 local_60;
  byte local_5f;
  undefined *local_58;
  long local_50;
  undefined1 local_48;
  byte local_47;
  undefined4 local_24;
  
  *(undefined1 *)(param_3 + 1) = 0;
  *param_3 = 0xffffffff00000000;
  local_24 = 0;
  uVar5 = FUN_02b5e950(&local_24,param_1);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  local_70 = (undefined *)CONCAT44(local_70._4_4_,param_2);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,local_24);
  if (DAT_05574040 != 0) {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar6 == 0) {
        return 0;
      }
      lVar6 = lVar6 + 0x70;
    }
    else {
      if (puVar7 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar7[0x26] == (long *)0x0) {
        return 0;
      }
      lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      if (lVar6 == 0) {
        return 0;
      }
    }
    if ((uint)local_58 < 8) {
      lVar1 = lVar6 + 0x119228 + ((ulong)local_58 & 0xffffffff) * 0xfa08;
      if (7 < (uint)local_58) {
        lVar1 = lVar6 + 0x119228;
      }
      lVar6 = lVar1 + 0x1df8 + ((ulong)local_70 & 0xffffffff) * 0x2488;
      if (5 < (uint)local_70) {
        lVar6 = lVar1 + 0x1df8;
      }
      if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar7)();
        uVar4 = uVar4 ^ 1;
      }
      local_48 = 1;
      *(undefined1 *)(param_3 + 1) =
           *(undefined1 *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x6c0c);
      local_50 = lVar6 + 0x1ea0;
      if ((*(long **)(lVar6 + 0x1ec8) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x1ec8), puVar7 == (undefined8 *)0x0)) {
        bVar2 = 0;
      }
      else {
        bVar2 = (**(code **)*puVar7)();
      }
      local_47 = bVar2 & 1;
      local_68 = lVar6 + 0x2220;
      local_58 = PTR_DAT_04bb4cb0 + 0x10;
      local_60 = 1;
      if ((*(long **)(lVar6 + 0x2248) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x2248), puVar7 == (undefined8 *)0x0)) {
        local_5f = 0;
        local_70 = PTR_DAT_04bbc500 + 0x10;
        FUN_01811d80(&local_58,&local_70,param_3);
      }
      else {
        bVar3 = (**(code **)*puVar7)();
        local_5f = bVar3 & 1;
        local_70 = PTR_DAT_04bbc500 + 0x10;
        FUN_01811d80(&local_58,&local_70,param_3);
        if ((((bVar3 & 1) != 0) && (*(long *)(lVar6 + 0x2248) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x2248) + 8), puVar7 != (undefined8 *)0x0))
        {
          (**(code **)*puVar7)();
        }
      }
      if ((((bVar2 & 1) != 0) && (*(long *)(lVar6 + 0x1ec8) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x1ec8) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
      return 1;
    }
  }
  return 0;
}

