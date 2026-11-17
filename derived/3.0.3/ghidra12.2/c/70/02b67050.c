
undefined8 FUN_02b67050(undefined4 param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = CONCAT44(local_48._4_4_,param_1);
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar3 == 0) {
        return 0;
      }
      lVar3 = lVar3 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return 0;
      }
      lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar3 == 0) {
        return 0;
      }
    }
    if ((uint)local_48 < 10) {
      lVar1 = lVar3 + 0x1962d8 + (local_48 & 0xffffffff) * 0x10d8;
      if (9 < (uint)local_48) {
        lVar1 = lVar3 + 0x1962d8;
      }
      lVar3 = *(long *)(lVar1 + 0x28);
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
          lVar3 = *(long *)(lVar1 + 0x28);
          uVar4 = uVar4 & 0xffffffff;
          if (lVar3 == 0) goto LAB_02b6715c;
        }
        plVar5 = *(long **)(lVar3 + 0x20);
        if (plVar5 != (long *)0x0) {
          local_48 = *(ulong *)(lVar1 + 8);
          uStack_40 = *(undefined8 *)(lVar1 + 0x10);
          local_38 = 0x12e8;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
        }
      }
LAB_02b6715c:
      *(undefined2 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0xe) = 0xffff;
      if ((*(long *)(lVar1 + 0x28) != 0) &&
         (plVar5 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
        local_48 = *(ulong *)(lVar1 + 8);
        uStack_40 = *(undefined8 *)(lVar1 + 0x10);
        local_38 = 0x12e8;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
      }
      *(undefined2 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x10) = 0xffff;
      if ((*(long *)(lVar1 + 0x28) != 0) &&
         (plVar5 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
        local_48 = *(ulong *)(lVar1 + 8);
        uStack_40 = *(undefined8 *)(lVar1 + 0x10);
        local_38 = 0x12e8;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
      }
      *(undefined2 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x12) = 0xffff;
      if ((*(long *)(lVar1 + 0x28) != 0) &&
         (plVar5 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
        local_48 = *(ulong *)(lVar1 + 8);
        uStack_40 = *(undefined8 *)(lVar1 + 0x10);
        local_38 = 0x12e8;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
      }
      lVar3 = *(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8);
      uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      *(undefined4 *)(lVar3 + 0x12dc) = *(undefined4 *)PTR_DAT_04bb37e0;
      *(undefined4 *)(lVar3 + 0x12e0) = uVar2;
      if ((*(long *)(lVar1 + 0x28) != 0) &&
         (plVar5 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
        local_48 = *(ulong *)(lVar1 + 8);
        uStack_40 = *(undefined8 *)(lVar1 + 0x10);
        local_38 = 0x12e8;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
      }
      lVar3 = *(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8);
      *(byte *)(lVar3 + 0x12e4) = *(byte *)(lVar3 + 0x12e4) & 0xfe;
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
      return 1;
    }
  }
  return 0;
}

