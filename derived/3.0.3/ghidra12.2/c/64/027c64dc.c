
void FUN_027c64dc(ushort *param_1,ushort *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  *param_1 = *param_2 >> 8 | *param_2 << 8;
  uVar3 = (ulong)(byte)*param_2;
  if (0x22 < uVar3) {
    return;
  }
  if ((byte)PTR_DAT_04bc27f0[uVar3] < *(byte *)((long)param_2 + 1)) {
    return;
  }
  if (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(*(byte *)((long)param_2 + 1) & 0x1f) & 1) == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x86) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if (DAT_05574040 == 0) {
    return;
  }
  puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar1 = (**(code **)(*(long *)*puVar4 + 0x38))();
    if (lVar1 == 0) {
      return;
    }
    lVar1 = lVar1 + 0x70;
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar4[0x26] == (long *)0x0) {
      return;
    }
    lVar1 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
    if (lVar1 == 0) {
      return;
    }
  }
  lVar5 = *(long *)(lVar1 + 0xd0);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      lVar5 = *(long *)(lVar1 + 0xd0);
      uVar3 = uVar3 & 0xffffffff;
      if (lVar5 == 0) goto LAB_027c6610;
    }
    plVar2 = *(long **)(lVar5 + 0x20);
    if (plVar2 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar1 + 0xb0);
      uStack_40 = *(undefined8 *)(lVar1 + 0xb8);
      local_38 = 0x1e3388;
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
    }
  }
LAB_027c6610:
  uVar6 = (ulong)(byte)*param_2;
  if (0x22 < (byte)*param_2) {
    uVar6 = 0;
  }
  lVar5 = *(long *)(lVar1 + 0xb8) + *(long *)(lVar1 + 0xb0) + uVar6 * 4;
  *(uint *)(lVar5 + 0xbf5e0) =
       *(uint *)(lVar5 + 0xbf5e0) | 1 << (ulong)(*(byte *)((long)param_2 + 1) & 0x1f);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0xd0) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0xd0) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

