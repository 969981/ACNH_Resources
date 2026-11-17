
undefined8 FUN_02a066f0(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined1 *)((long)param_2 + 0x11);
  *(undefined2 *)(param_1 + 0x15e8) = 0xffff;
  *(undefined1 *)(param_1 + 0x1668) = uVar2;
  *(undefined4 *)(param_1 + 0x1614) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1608) = 0;
  *(undefined8 *)(param_1 + 0x1600) = 0;
  *(undefined8 *)(param_1 + 0x15f8) = 0;
  *(undefined4 *)(param_1 + 0x163c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1664) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1630) = 0;
  *(undefined8 *)(param_1 + 0x1628) = 0;
  *(undefined8 *)(param_1 + 0x1620) = 0;
  *(undefined8 *)(param_1 + 0x1658) = 0;
  *(undefined8 *)(param_1 + 0x1650) = 0;
  *(undefined8 *)(param_1 + 0x1648) = 0;
  if ((*(long *)PTR_DAT_04bc3ee8 == 0) ||
     (lVar3 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x20), lVar3 == 0)) {
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x14);
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 < 1) goto LAB_02a0683c;
  }
  uVar4 = 0;
  do {
    local_58 = *(undefined8 *)(param_1 + 0x10);
    if ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x10) && uVar4 < *(uint *)(lVar3 + 0x10)) {
      local_50 = *(undefined8 *)(*(long *)(lVar3 + 0x18) + uVar4 * 8);
    }
    else {
      local_50 = 0;
    }
    local_60[0] = *param_2;
    local_44 = param_2[5];
    local_48 = *(undefined1 *)(param_2 + 4);
    FUN_02a0779c(param_1 + 0x20,local_60);
    uVar4 = uVar4 + 1;
  } while ((long)uVar4 < (long)*(int *)(param_1 + 0x18));
  if (0 < *(int *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 0x1698) = 0;
  }
LAB_02a0683c:
  *(undefined8 *)(param_1 + 0x1690) = 0;
  *(undefined8 *)(param_1 + 0x1670) = 0;
  *(undefined8 *)(param_1 + 0x1678) = 0;
  *(undefined1 *)(param_1 + 0x1688) = 0;
  *(undefined8 *)(param_1 + 0x1680) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  return 1;
}

