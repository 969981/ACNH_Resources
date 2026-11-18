
ushort FUN_03746ed0(long param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  long lVar7;
  undefined *local_38;
  undefined2 local_30;
  uint local_24;
  
  if ((*(ushort *)(param_1 + 0xa0) & 0xf) == 1) {
    local_38 = PTR_DAT_04bb7648 + 0x10;
    lVar5 = *(long *)PTR_DAT_04bb27f8;
    if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
       (lVar7 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar7 == 0)) {
      puVar1 = (undefined2 *)(lVar5 + 0x2c);
      if ((*(ushort *)(lVar5 + 0x28) & 0x40) != 0) {
        puVar1 = (undefined2 *)(lVar5 + 0x2a);
      }
      local_30 = *puVar1;
    }
    else if ((*(long **)(lVar7 + 0x60) == (long *)0x0) ||
            (puVar3 = (undefined8 *)**(long **)(lVar7 + 0x60), puVar3 == (undefined8 *)0x0)) {
      local_30 = *(undefined2 *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
    }
    else {
      uVar4 = (**(code **)*puVar3)();
      local_30 = *(undefined2 *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x60) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar7 + 0x60) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
    local_24 = 0;
    lVar5 = FUN_03775b80(&local_38);
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      lVar7 = lVar5 + 0x380 + (ulong)local_24 * 0x658;
      if (1 < local_24) {
        lVar7 = lVar5 + 0x380;
      }
      if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
         (puVar3 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar3 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar3)();
        uVar2 = uVar2 ^ 1;
      }
      local_38 = (undefined *)CONCAT44(local_38._4_4_,1);
      uVar6 = *(ushort *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x153c) >> 1 & 1;
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}

