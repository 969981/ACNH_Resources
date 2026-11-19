
void FUN_03b41cfc(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 *puVar6;
  undefined8 uVar5;
  
  *param_1 = param_2;
  lVar2 = *(long *)(param_1 + 2);
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    if (param_2 == 2) {
      puVar6 = (undefined8 *)(lVar2 + 0x10);
    }
    else {
      if (param_2 != 1) goto LAB_03b41d58;
      puVar6 = (undefined8 *)(lVar2 + 0x18);
    }
    uVar5 = *puVar6;
  }
  *(undefined8 *)(lVar2 + 8) = uVar5;
LAB_03b41d58:
  if (*(long *)(DAT_05aebb78 + 0x140) == 0) {
    if (DAT_05aebc00 == '\0') {
      uVar4 = 1;
      if (*param_1 == 2) {
        uVar4 = 2;
      }
      uVar1 = 0;
      if (*param_1 != 0) {
        uVar1 = uVar4;
      }
      uVar5 = FUN_03b38a74();
      FUN_003b6380(uVar5,uVar1,0);
    }
  }
  else {
    plVar3 = *(long **)(*(long *)(DAT_05aebb78 + 0x140) + 8);
    if (*param_1 < 3) {
      uVar4 = *(undefined4 *)(&DAT_041e0210 + (long)(int)*param_1 * 4);
    }
    else {
      uVar4 = 4;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,uVar4);
  }
  if ((DAT_05aebb78 == 0) || (lVar2 = *(long *)(DAT_05aebb78 + 0x38), lVar2 == 0)) {
    return;
  }
  if (*(long *)(lVar2 + 0x38) != 0) {
    FUN_03bc7ff0();
  }
  FUN_03bc7350(lVar2);
  return;
}

