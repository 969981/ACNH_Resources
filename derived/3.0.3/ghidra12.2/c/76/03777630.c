
void FUN_03777630(long *param_1,uint param_2)

{
  undefined2 *puVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined *local_60;
  undefined2 local_58;
  
  local_60 = PTR_DAT_04bb7648 + 0x10;
  lVar7 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar9 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar9 == 0)) {
    puVar1 = (undefined2 *)(lVar7 + 0x2c);
    if ((*(ushort *)(lVar7 + 0x28) & 0x40) != 0) {
      puVar1 = (undefined2 *)(lVar7 + 0x2a);
    }
    local_58 = *puVar1;
  }
  else if ((*(long **)(lVar9 + 0x60) == (long *)0x0) ||
          (puVar5 = (undefined8 *)**(long **)(lVar9 + 0x60), puVar5 == (undefined8 *)0x0)) {
    local_58 = *(undefined2 *)(*(long *)(lVar9 + 0x48) + *(long *)(lVar9 + 0x40) + 2);
  }
  else {
    uVar6 = (**(code **)*puVar5)();
    local_58 = *(undefined2 *)(*(long *)(lVar9 + 0x48) + *(long *)(lVar9 + 0x40) + 2);
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar9 + 0x60) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar9 + 0x60) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  lVar7 = FUN_03775a30(&local_60);
  if (lVar7 != 0) {
    lVar9 = lVar7 + 0x380 + (ulong)param_2 * 0x658;
    if (1 < param_2) {
      lVar9 = lVar7 + 0x380;
    }
    if ((*(long **)(lVar9 + 0xd0) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar9 + 0xd0), puVar5 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar5)();
      uVar4 = uVar4 ^ 1;
    }
    lVar7 = *(long *)(lVar9 + 0xb0);
    lVar2 = *(long *)(lVar9 + 0xb8);
    uVar6 = (**(code **)(*param_1 + 8))(param_1);
    puVar3 = PTR_DAT_04bbc1c0;
    if ((uVar6 & 1) != 0) {
      iVar8 = 0;
      do {
        if (*(short *)(lVar2 + lVar7 + (long)iVar8 * 6) == *(short *)puVar3) break;
        (**(code **)*param_1)(param_1);
        iVar8 = iVar8 + 1;
      } while (iVar8 != 300);
    }
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar9 + 0xd0) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar9 + 0xd0) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return;
}

