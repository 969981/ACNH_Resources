
void FUN_00299e90(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 local_60 [4];
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined1 auStack_40 [16];
  
  puVar2 = PTR_DAT_04bcd350;
  if (*(long *)PTR_DAT_04bcd350 != 0) {
    FUN_00269270();
  }
  if (DAT_04c61168 != 0) {
    FUN_002b9bac();
  }
  if (*(long **)(param_1 + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x168) + 0x10))();
  }
  if (*(long **)(param_1 + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x170) + 0x10))();
  }
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,0);
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,0);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
  }
  plVar3 = *(long **)(param_1 + 0x28);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,0);
    (**(code **)(**(long **)(param_1 + 0x28) + 0x30))();
  }
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,0);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x50))();
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,0);
    FUN_00296e2c(*(undefined8 *)(param_1 + 0x38));
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,0);
    (**(code **)(**(long **)(param_1 + 0x40) + 0x30))();
  }
  plVar3 = *(long **)(param_1 + 0x48);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,0);
    FUN_0029e40c(*(undefined8 *)(param_1 + 0x48));
  }
  plVar3 = *(long **)(param_1 + 0x50);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,0);
    FUN_0029eca0(*(undefined8 *)(param_1 + 0x50));
  }
  plVar3 = *(long **)(param_1 + 0x58);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,0);
    (**(code **)(**(long **)(param_1 + 0x58) + 0x30))();
  }
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,0);
    (**(code **)(**(long **)(param_1 + 0x60) + 0x30))();
  }
  plVar3 = *(long **)(param_1 + 0x78);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,0);
    (**(code **)(**(long **)(param_1 + 0x78) + 0x30))();
  }
  plVar3 = *(long **)(param_1 + 0x70);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,0);
    FUN_00295b80(*(undefined8 *)(param_1 + 0x70));
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  FUN_0029a1f0(param_1,1);
  lVar4 = DAT_04c61168;
  *(undefined4 *)(param_1 + 0x158) = 0;
  local_50 = 0;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)local_60);
  FUN_002296c4(auStack_40,&local_50);
  FUN_002ba4a4(local_60,lVar4,auStack_40);
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,0);
    FUN_002a43a8(*(undefined8 *)(param_1 + 0x10));
  }
  if (*(long *)(param_1 + 0x268) != 0) {
    FUN_002a0ca0();
  }
  puVar1 = (undefined8 *)(param_1 + 0x228);
  if (*(undefined8 **)(param_1 + 0x230) != puVar1) {
    puVar5 = *(undefined8 **)(param_1 + 0x230);
    do {
      puVar6 = (undefined8 *)puVar5[1];
      *puVar5 = 0;
      puVar5[1] = 0;
      FUN_002236e0(param_1 + 0x240,param_1 + 0x240,(long)*(int *)(param_1 + 0x254) + (long)puVar5);
      puVar5 = puVar6;
    } while (puVar6 != puVar1);
  }
  FUN_002236b0(puVar1);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  FUN_00220f24(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined1 *)(param_1 + 0x154) = 0;
  FUN_00223ee0(PTR_DAT_04bccf00);
  FUN_00225804(&DAT_04c5ff68);
  lVar4 = FUN_0022033c();
  if (lVar4 != 0) {
    FUN_0022033c();
    FUN_00220450();
  }
  FUN_0026c254(*(undefined8 *)puVar2,0);
  return;
}

