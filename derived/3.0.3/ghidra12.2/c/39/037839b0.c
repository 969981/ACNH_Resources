
undefined8 FUN_037839b0(byte *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **local_40;
  undefined2 local_38;
  
  uVar5 = 0;
  if (param_1 != (byte *)0x0) {
    local_40 = &PTR_LAB_04942240;
    if (DAT_05ab5ea8 == 0) {
      uVar5 = 0;
    }
    else {
      if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
           ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (DAT_05ab7608 == 0)) ||
         (lVar6 = *(long *)(DAT_05ab7608 + 8), lVar6 == 0)) {
        local_38 = *(undefined2 *)(DAT_05ab5ea8 + 0x2a);
      }
      else if ((*(long **)(lVar6 + 0x60) == (long *)0x0) ||
              (puVar3 = (undefined8 *)**(long **)(lVar6 + 0x60), puVar3 == (undefined8 *)0x0)) {
        local_38 = *(undefined2 *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + 2);
      }
      else {
        uVar4 = (**(code **)*puVar3)();
        local_38 = *(undefined2 *)(*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40) + 2);
        if ((((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x60) != 0)) &&
           (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x60) + 8), puVar3 != (undefined8 *)0x0)) {
          (**(code **)*puVar3)();
        }
      }
      lVar6 = FUN_03775b80(&local_40);
      uVar5 = 0;
      if (lVar6 != 0) {
        if ((*(long **)(lVar6 + 0x12c0) == (long *)0x0) ||
           (puVar3 = (undefined8 *)**(long **)(lVar6 + 0x12c0), puVar3 == (undefined8 *)0x0)) {
          uVar1 = 1;
        }
        else {
          uVar1 = (**(code **)*puVar3)();
          uVar1 = uVar1 ^ 1;
        }
        *(undefined2 *)(param_1 + 2) =
             *(undefined2 *)(*(long *)(lVar6 + 0x12a8) + *(long *)(lVar6 + 0x12a0));
        *param_1 = *(byte *)(*(long *)(lVar6 + 0x12a8) + *(long *)(lVar6 + 0x12a0) + 3) & 1;
        uVar2 = FUN_0252d29c();
        *(undefined4 *)(param_1 + 4) = uVar2;
        if ((((uVar1 & 1) == 0) && (*(long *)(lVar6 + 0x12c0) != 0)) &&
           (puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x12c0) + 8), puVar3 != (undefined8 *)0x0))
        {
          (**(code **)*puVar3)();
        }
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

