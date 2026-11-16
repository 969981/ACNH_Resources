
void FUN_02688634(undefined8 param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  byte local_24 [4];
  
  local_24[0] = *param_2;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar2 = FUN_02583354(DAT_055021a0,local_24,1);
  if (lVar2 == 0) {
    return;
  }
  lVar7 = lVar2 + 0x194b0;
  if (*(long *)(lVar2 + 0x194b8) == 0) {
    lVar7 = *(long *)(DAT_05574040 + 0x20);
    lVar2 = *(long *)(lVar7 + 0x28);
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x194d8);
  }
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar2 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar7 + 0x28) == 0) goto LAB_02688718;
      plVar4 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar7 + 8);
      uStack_50 = *(undefined8 *)(lVar7 + 0x10);
      local_48 = 0x3ce60;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    }
  }
LAB_02688718:
  lVar2 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x30508;
  uVar5 = FUN_028b5a70(lVar2,param_1);
  if ((uVar5 & 1) == 0) {
    FUN_028b5c10(lVar2,param_1);
    if ((*(long *)(lVar7 + 0x28) != 0) &&
       (plVar4 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
      local_58 = *(undefined8 *)(lVar7 + 8);
      uStack_50 = *(undefined8 *)(lVar7 + 0x10);
      local_48 = 0x3ce60;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    }
    lVar2 = *(long *)(lVar7 + 8);
    lVar1 = *(long *)(lVar7 + 0x10);
    FUN_021f6050(&local_58,param_1);
    FUN_02790980(lVar1 + lVar2 + 0x38240,&local_58,param_2);
  }
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

