
void FUN_002997d0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar2 = PTR_DAT_04bc1510;
  plVar3 = (long *)FUN_002ba640(*(undefined8 *)PTR_DAT_04bc1510);
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*plVar3 + 0x1f0))(plVar3);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*plVar3 + 0x1f8))(plVar3);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar3 + 0x200))(plVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*plVar3 + 0x208))(plVar3);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    (**(code **)(*plVar3 + 0x210))(plVar3);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*plVar3 + 0x218))(plVar3);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(*plVar3 + 0x288))(plVar3);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    (**(code **)(*plVar3 + 0x290))(plVar3);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    (**(code **)(*plVar3 + 0x250))(plVar3);
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    (**(code **)(*plVar3 + 0x250))(plVar3);
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  if (*(long *)(param_1 + 0x178) != 0) {
    (**(code **)(*plVar3 + 0x248))(plVar3);
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  if (*(long *)(param_1 + 0x188) != 0) {
    (**(code **)(*plVar3 + 0x2a8))(plVar3);
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*plVar3 + 0x228))(plVar3);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    (**(code **)(*plVar3 + 0x220))(plVar3);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*plVar3 + 0x2a0))(plVar3);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*plVar3 + 600))(plVar3);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    FUN_00285dc0(puVar6);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    FUN_00285dc0(puVar6);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x48);
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    FUN_00285dc0(puVar6);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x50);
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    FUN_00285dc0(puVar6);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x148);
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    FUN_00285dc0(puVar6);
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x268);
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    FUN_00285dc0(puVar6);
    *(undefined8 *)(param_1 + 0x268) = 0;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*plVar3 + 0x298))(plVar3);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  lVar5 = *(long *)(param_1 + 0x1d8);
  if (lVar5 != 0) {
    if (*(long *)(param_1 + 0x1c8) == 0) {
LAB_00299b08:
      FUN_00285e00(lVar5);
      FUN_00285dc0(lVar5);
    }
    else {
      puVar6 = (undefined8 *)(param_1 + 0x198);
      if (*(undefined8 **)(param_1 + 0x1a0) != puVar6) {
        puVar4 = *(undefined8 **)(param_1 + 0x1a0);
        do {
          iVar1 = *(int *)(param_1 + 0x1c4);
          puVar7 = (undefined8 *)puVar4[1];
          *puVar4 = 0;
          puVar4[1] = 0;
          FUN_002236e0(param_1 + 0x1b0,param_1 + 0x1b0,(long)iVar1 + (long)puVar4);
          puVar4 = puVar7;
        } while (puVar7 != puVar6);
      }
      FUN_002236b0(puVar6);
      lVar5 = *(long *)(param_1 + 0x1d8);
      if (lVar5 != 0) goto LAB_00299b08;
    }
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  lVar5 = *(long *)(param_1 + 0x220);
  if (lVar5 == 0) goto LAB_00299b8c;
  if (*(long *)(param_1 + 600) == 0) {
LAB_00299b78:
    FUN_00285e00(lVar5);
    FUN_00285dc0(lVar5);
  }
  else {
    puVar6 = (undefined8 *)(param_1 + 0x228);
    if (*(undefined8 **)(param_1 + 0x230) != puVar6) {
      puVar4 = *(undefined8 **)(param_1 + 0x230);
      do {
        iVar1 = *(int *)(param_1 + 0x254);
        puVar7 = (undefined8 *)puVar4[1];
        *puVar4 = 0;
        puVar4[1] = 0;
        FUN_002236e0(param_1 + 0x240,param_1 + 0x240,(long)iVar1 + (long)puVar4);
        puVar4 = puVar7;
      } while (puVar7 != puVar6);
    }
    FUN_002236b0(puVar6);
    lVar5 = *(long *)(param_1 + 0x220);
    if (lVar5 != 0) goto LAB_00299b78;
  }
  *(undefined8 *)(param_1 + 0x220) = 0;
LAB_00299b8c:
  if (*(long *)(param_1 + 200) != 0) {
    FUN_002a1240();
    *(undefined8 *)(param_1 + 200) = 0;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    if (*(long *)puVar2 != 0) {
      FUN_002aafe0(*(long *)puVar2 + 0x10);
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  FUN_00220f6c(param_1 + 0x110);
  return;
}

