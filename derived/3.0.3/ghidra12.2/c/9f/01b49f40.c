
bool FUN_01b49f40(undefined2 *param_1,undefined4 *param_2,byte *param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_28 [4];
  byte local_24 [4];
  
  local_24[0] = *param_3;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar1 = FUN_02583354(DAT_055021a0,local_24,1);
  if (lVar1 == 0) {
    return false;
  }
  lVar6 = lVar1 + 0x194b0;
  if (*(long *)(lVar1 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar1 = *(long *)(lVar6 + 0x8528);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar1 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar1 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar1 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar6 + 0x8528) == 0) goto LAB_01b4a02c;
      plVar3 = *(long **)(*(long *)(lVar6 + 0x8528) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_58 = *(long *)(lVar6 + 0x8508);
      local_50 = *(undefined8 *)(lVar6 + 0x8510);
      uStack_48 = 0xeab4;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
    }
  }
LAB_01b4a02c:
  puVar4 = (undefined1 *)
           FUN_02830784(*(long *)(lVar6 + 0x8510) + *(long *)(lVar6 + 0x8508),auStack_28);
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 1;
    *(undefined2 *)(puVar4 + 4) = *param_1;
    puVar4[6] = *(undefined1 *)(param_1 + 1);
    puVar4[7] = *(undefined1 *)((long)param_1 + 3);
    *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_1 + 2);
    *(undefined4 *)(puVar4 + 0xc) = *param_2;
  }
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar6 + 0x8528) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x8528) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return puVar4 != (undefined1 *)0x0;
}

