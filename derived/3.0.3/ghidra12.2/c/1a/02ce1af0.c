
void FUN_02ce1af0(long param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  byte bVar6;
  long lVar7;
  byte local_34 [4];
  
  bVar6 = *param_2;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  *(byte *)(param_1 + 8) = bVar6;
  local_34[0] = *param_2;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar1 = FUN_025830c0(DAT_055021a0,local_34,1);
  if (lVar1 != 0) {
    lVar7 = lVar1 + 0x194b0;
    if (*(long *)(lVar1 + 0x194b8) == 0) {
      lVar7 = *(long *)(DAT_05574040 + 0x20);
      plVar4 = *(long **)(lVar7 + 0x178);
    }
    else {
      plVar4 = *(long **)(lVar1 + 0x19628);
    }
    if ((plVar4 == (long *)0x0) || ((undefined8 *)*plVar4 == (undefined8 *)0x0)) {
      FUN_0262a3f0(param_1 + 0xf000,*(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158));
    }
    else {
      uVar2 = (*(code *)**(undefined8 **)*plVar4)();
      FUN_0262a3f0(param_1 + 0xf000,*(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158));
      if (((uVar2 & 1) != 0) &&
         ((*(long *)(lVar7 + 0x178) != 0 &&
          (puVar3 = *(undefined8 **)(*(long *)(lVar7 + 0x178) + 8), puVar3 != (undefined8 *)0x0))))
      {
        (**(code **)*puVar3)();
      }
    }
  }
  bVar6 = *param_2;
  *(undefined8 *)(param_1 + 0x164) = 0;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  *(byte *)(param_1 + 0x160) = bVar6;
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar1 = 0;
    puVar3 = *(undefined8 **)(param_1 + 0x180);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x178) + lVar1 * 8);
      lVar1 = lVar1 + 1;
      *puVar5 = puVar3;
      *(undefined8 **)(param_1 + 0x180) = puVar5;
      puVar3 = puVar5;
    } while (lVar1 < *(int *)(param_1 + 0x170));
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
  memset((void *)(param_1 + 0x5a0),0,60000);
  (**(code **)(*(long *)(param_1 + 0x150) + 0x48))(param_1 + 0x150);
  *(undefined1 *)(param_1 + 0x14c) = 1;
  if (*(int *)(param_1 + 0x68a60) < 0) {
    FUN_02cdeb4c(param_1 + 0x78,param_2);
    FUN_02ce0a2c(param_1 + 0x10,param_2);
  }
  else {
    FUN_02cdf5c0();
    FUN_02ce0db8(param_1 + 0x10,param_2,*(int *)(param_1 + 0x68a60));
  }
  FUN_02ce1ce0(param_1);
  FUN_02ce1ec8(param_1,0);
  return;
}

