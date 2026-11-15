
undefined8 FUN_01f33180(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_40;
  char *pcStack_38;
  
  iVar2 = FUN_0265b400(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508),0);
  if (iVar2 != 5) {
    return 0;
  }
  if (((*(byte *)(*(long *)(param_1 + 8) + 0x69c) & 0x30) == 0) &&
     (lVar5 = *(long *)PTR_DAT_04bb46b0, lVar5 != 0)) {
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 == 0) {
        return 0;
      }
      lVar5 = lVar5 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return 0;
      }
      lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar5 == 0) {
        return 0;
      }
    }
    if ((*(long **)(lVar5 + 0xe6ea0) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0xe6ea0), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    uVar4 = FUN_0284abe0(*(long *)(lVar5 + 0xe6e88) + *(long *)(lVar5 + 0xe6e80),
                         *(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0xe6ea0) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0xe6ea0) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    puVar1 = PTR_DAT_04bb2020;
    if ((uVar4 & 1) != 0) {
      uVar3 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
      if ((uVar3 < 10) && ((&DAT_053fee41)[(ulong)uVar3 * 0xba0] != '\0')) {
        local_40 = PTR_DAT_04bb2020 + 0x10;
        pcStack_38 = "VisitPNPCGoHomeMyself";
        FUN_02199310(&DAT_053fe348 + (ulong)uVar3 * 0xba0,&local_40,1);
      }
      local_40 = puVar1 + 0x10;
      *(undefined4 *)(param_1 + 0x77f0) = *(undefined4 *)(param_1 + 0x77b0);
      *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 0x80;
      pcStack_38 = "VisitPGoHome";
      FUN_01ea5c80(param_1,PTR_PTR_04bb2238,&local_40,0,0,PTR_DAT_04bb32e0);
      return 1;
    }
  }
  return 0;
}

