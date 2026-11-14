
undefined8 FUN_01da4fd8(long param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar4 = PTR_DAT_04bb49f0;
  lVar12 = *(long *)PTR_DAT_04bb46b0;
  local_50 = **(undefined8 **)(*(long *)PTR_DAT_04bb49f0 + 8);
  uStack_48 = (*(undefined8 **)(*(long *)PTR_DAT_04bb49f0 + 8))[1];
  if (*(long *)(lVar12 + 8) != 0) {
    lVar7 = (**(code **)(*(long *)**(undefined8 **)(lVar12 + 0x10) + 0x18))();
    uVar8 = FUN_02818404(lVar7 + 0x1e34c0,&local_50);
    if ((uVar8 & 1) != 0) {
      uVar5 = FUN_028189c8(lVar7 + 0x1e34c0,&local_50);
      lVar12 = FUN_026eed64(lVar12,uVar5);
      if (lVar12 != 0) {
        if ((*(long **)(lVar12 + 0x17bb0) == (long *)0x0) ||
           (puVar9 = (undefined8 *)**(long **)(lVar12 + 0x17bb0), puVar9 == (undefined8 *)0x0)) {
          uVar6 = 1;
        }
        else {
          uVar6 = (**(code **)*puVar9)();
          uVar6 = uVar6 ^ 1;
        }
        if (*(int *)(param_1 + 0x68) == 0 && *(int *)(param_1 + 0xb0) == 0) {
          if ((*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0) ||
             (1 < *(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) - 1U)) {
            uVar5 = 0;
            if (**(long **)(*(long *)puVar4 + 8) == 0 && (*(long **)(*(long *)puVar4 + 8))[1] == 0)
            {
              uVar5 = 3;
            }
          }
          else {
            uVar5 = 2;
          }
        }
        else {
          uVar5 = 1;
        }
        lVar7 = *(long *)(lVar12 + 0x17b90);
        lVar2 = *(long *)(lVar12 + 0x17b98);
        *(undefined4 *)(param_1 + 0x168) = uVar5;
        if ((*(int *)(param_1 + 0x168) == 0) &&
           (piVar1 = (int *)(lVar2 + lVar7), (piVar1[7] != 0 && *piVar1 != 0) && *param_2 != 0)) {
          uVar11 = *(undefined8 *)(piVar1 + 2);
          uVar10 = *(undefined8 *)(piVar1 + 4);
          *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)piVar1;
          *(undefined8 *)(param_1 + 0x178) = uVar11;
          *(undefined8 *)(param_1 + 0x180) = uVar10;
          uVar10 = *(undefined8 *)(piVar1 + 8);
          uVar11 = *(undefined8 *)(piVar1 + 10);
          uVar3 = *(undefined8 *)(piVar1 + 0xc);
          *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(piVar1 + 6);
          *(undefined8 *)(param_1 + 0x1a0) = uVar3;
          *(undefined8 *)(param_1 + 0x1a8) = 0;
          *(undefined8 *)(param_1 + 400) = uVar10;
          *(undefined8 *)(param_1 + 0x198) = uVar11;
          uVar11 = 1;
          **(long **)(param_1 + 0x150) = *param_2;
          *(undefined1 *)(param_1 + 0x1b1) = 1;
          *(undefined4 *)(param_1 + 0x138) = 2;
          FUN_03ebb160(param_1 + 0xa8,1);
          *(undefined4 *)(param_1 + 0x168) = 0;
        }
        else {
          uVar11 = 0;
        }
        if ((uVar6 & 1) != 0) {
          return uVar11;
        }
        if (*(long *)(lVar12 + 0x17bb0) == 0) {
          return uVar11;
        }
        puVar9 = *(undefined8 **)(*(long *)(lVar12 + 0x17bb0) + 8);
        if (puVar9 == (undefined8 *)0x0) {
          return uVar11;
        }
        (**(code **)*puVar9)();
        return uVar11;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x168) = 4;
  return 0;
}

