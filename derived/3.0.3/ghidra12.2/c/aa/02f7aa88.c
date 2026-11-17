
undefined8 FUN_02f7aa88(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  byte local_44 [4];
  
  if (param_2 < 8) {
    local_44[0] = *(byte *)(param_1 + 0x2e0 + (ulong)param_2 * 0x1d0);
    if ((local_44[0] < 8) &&
       (lVar5 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_44,1), lVar5 != 0)) {
      if ((*(long **)(lVar5 + 0x18518) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x18518), puVar6 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar6)();
        uVar3 = uVar3 ^ 1;
      }
      piVar1 = (int *)(*(long *)(lVar5 + 0x18500) + *(long *)(lVar5 + 0x184f8));
      if (piVar1[4] - 0x23001U < 0xfffdd000) {
        uVar7 = 0;
      }
      else {
        iVar2 = *piVar1;
        iVar4 = FUN_006f6900(piVar1 + 1,0x2301c,0);
        uVar7 = 0;
        if (iVar2 == iVar4) {
          uVar7 = 1;
          *(undefined1 *)(param_1 + 0x2e0 + (ulong)param_2 * 0x1d0 + 0x31) = 1;
        }
      }
      if ((uVar3 & 1) != 0) {
        return uVar7;
      }
      if (*(long *)(lVar5 + 0x18518) == 0) {
        return uVar7;
      }
      puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x18518) + 8);
      if (puVar6 == (undefined8 *)0x0) {
        return uVar7;
      }
      (**(code **)*puVar6)();
      return uVar7;
    }
  }
  return 0;
}

