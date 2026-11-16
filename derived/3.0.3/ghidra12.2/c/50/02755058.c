
void FUN_02755058(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_24 [4];
  
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    return;
  }
  lVar2 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_24,1);
  if (lVar2 == 0) {
    return;
  }
  lVar6 = lVar2 + 0x194b0;
  if (*(long *)(lVar2 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar1 = (long *)(lVar6 + 0x2ad28);
  lVar2 = *(long *)(lVar6 + 0x2ad48);
  if (lVar2 == 0) {
    FUN_027551a0(*(long *)(lVar6 + 0x2ad30) + *plVar1,param_1,param_2,param_3);
    return;
  }
  if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar2 + 0x20);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar6 + 0x2ad48) == 0) goto LAB_02755124;
    plVar4 = *(long **)(*(long *)(lVar6 + 0x2ad48) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar6 + 0x2ad30);
    uStack_48 = 0x100;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  }
LAB_02755124:
  FUN_027551a0(*(long *)(lVar6 + 0x2ad30) + *plVar1,param_1,param_2,param_3);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x2ad48) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x2ad48) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

