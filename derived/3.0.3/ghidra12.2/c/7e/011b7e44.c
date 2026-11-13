
void FUN_011b7e44(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 local_68;
  undefined **local_60;
  undefined8 *puStack_58;
  undefined4 *local_50;
  undefined4 local_24;
  
  if (DAT_05574040 != 0) {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar3 == 0) {
        return;
      }
      lVar3 = lVar3 + 0x70;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar5[0x26] == (long *)0x0) {
        return;
      }
      lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      if (lVar3 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar3 + 0x1bf260) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar3 + 0x1bf260), puVar5 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar5)();
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN_028d6b0c(*(long *)(lVar3 + 0x1bf248) + *(long *)(lVar3 + 0x1bf240));
    local_68 = FUN_01d69460(*(undefined8 *)(*(long *)PTR_DAT_04bb27d0 + 0x10),DAT_04c487d4);
    if (uVar2 < 0xc) {
      puStack_58 = (undefined8 *)(&PTR_DAT_049868c8)[uVar2];
    }
    else {
      puStack_58 = &DAT_0407ebb1;
    }
    local_60 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    uVar4 = FUN_028d4a98(&local_68,&local_60);
    if (((uVar4 & 1) != 0) && (uVar2 != 0)) {
      if (uVar2 < 0xc) {
        puVar5 = (undefined8 *)(&PTR_DAT_049868c8)[uVar2];
      }
      else {
        puVar5 = &DAT_0407ebb1;
      }
      local_24 = FUN_006bd550(puVar5,0);
      local_60 = &PTR_LAB_04986428;
      local_50 = &local_24;
      puStack_58 = param_1;
      FUN_011bc6f0(&local_60);
    }
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x1bf260) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x1bf260) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return;
}

