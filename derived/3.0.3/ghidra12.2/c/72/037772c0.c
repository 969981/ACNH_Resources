
void FUN_037772c0(long *param_1)

{
  undefined2 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined *local_50;
  undefined2 local_48;
  
  local_50 = PTR_DAT_04bb7648 + 0x10;
  lVar6 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar7 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar7 == 0)) {
    puVar1 = (undefined2 *)(lVar6 + 0x2c);
    if ((*(ushort *)(lVar6 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(lVar6 + 0x2a);
    }
    local_48 = *puVar1;
  }
  else if ((*(long **)(lVar7 + 0x60) == (long *)0x0) ||
          (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x60), puVar4 == (undefined8 *)0x0)) {
    local_48 = *(undefined2 *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
  }
  else {
    uVar5 = (**(code **)*puVar4)();
    local_48 = *(undefined2 *)(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x40) + 2);
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0x60) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x60) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  lVar6 = FUN_03775b80(&local_50);
  if (lVar6 != 0) {
    if ((*(long **)(lVar6 + 0x108) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x108), puVar4 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar4)();
      uVar3 = uVar3 ^ 1;
    }
    lVar7 = *(long *)(lVar6 + 0xe8);
    lVar2 = *(long *)(lVar6 + 0xf0);
    uVar5 = (**(code **)(*param_1 + 8))(param_1);
    if ((uVar5 & 1) != 0) {
      iVar8 = 0;
      do {
        if (*(short *)(lVar2 + lVar7 + 4 + (long)iVar8 * 0xc) == -2) break;
        (**(code **)*param_1)(param_1);
        iVar8 = iVar8 + 1;
      } while (iVar8 != 0x1c8);
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0x108) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x108) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return;
}

