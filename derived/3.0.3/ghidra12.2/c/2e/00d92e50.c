
void FUN_00d92e50(byte *param_1,int *param_2,int param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  byte local_58 [4];
  byte local_54 [4];
  
  puVar2 = PTR_DAT_04bb7bc0;
  if (param_2 != (int *)0x0) {
    *param_2 = (*(uint *)(*(long *)PTR_DAT_04bb7bc0 + 0x610) &
               ((int)*(uint *)(*(long *)PTR_DAT_04bb7bc0 + 0x610) >> 0x1f ^ 0xffffffffU)) +
               (param_4 & 1);
    puVar1 = PTR_DAT_04bb4f78;
    local_54[0] = *param_1;
    if (7 < local_54[0]) {
      local_54[0] = 0xff;
    }
    lVar4 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_54,1);
    if (lVar4 == 0) {
      uVar8 = 0;
    }
    else if ((*(long **)(lVar4 + 0x18438) == (long *)0x0) ||
            (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x18438), puVar5 == (undefined8 *)0x0)) {
      uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0x18420) + *(long *)(lVar4 + 0x18418) + 8);
    }
    else {
      uVar6 = (**(code **)*puVar5)();
      uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0x18420) + *(long *)(lVar4 + 0x18418) + 8);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x18438) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x18438) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
    lVar4 = *(long *)puVar2;
    *(undefined8 *)(param_2 + 2) = uVar8;
    uVar8 = *(undefined8 *)puVar1;
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar4 + 0x2f8);
    local_58[0] = *param_1;
    if (7 < local_58[0]) {
      local_58[0] = 0xff;
    }
    lVar4 = FUN_025830c0(uVar8,local_58,1);
    if (lVar4 != 0) {
      lVar7 = lVar4 + 0x194b0;
      if (*(long *)(lVar4 + 0x194b8) == 0) {
        lVar7 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar7 + 0x2cd38) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar7 + 0x2cd38), puVar5 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
      }
      param_2[6] = *(int *)(*(long *)(lVar7 + 0x2cd20) + *(long *)(lVar7 + 0x2cd18) + 4);
      param_2[7] = *(int *)(*(long *)(lVar7 + 0x2cd20) + *(long *)(lVar7 + 0x2cd18) + 8);
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar7 + 0x2cd38) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x2cd38) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
    param_2[8] = param_3;
  }
  return;
}

