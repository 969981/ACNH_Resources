
void FUN_03784070(byte *param_1,int param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = CONCAT44(local_48._4_4_,param_2);
  if (param_2 == 5) {
    return;
  }
  if (param_2 == 6) {
    return;
  }
  lVar2 = FUN_03776400();
  if (lVar2 == 0) {
    return;
  }
  lVar1 = lVar2 + 0x70 + (ulong)param_3 * 0x658;
  if (2 < param_3) {
    lVar1 = lVar2 + 0x70;
  }
  lVar2 = *(long *)(lVar1 + 0x610);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
      lVar2 = *(long *)(lVar1 + 0x610);
      uVar3 = uVar3 & 0xffffffff;
      if (lVar2 == 0) goto LAB_0378412c;
    }
    plVar4 = *(long **)(lVar2 + 0x20);
    if (plVar4 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar1 + 0x5f0);
      uStack_40 = *(undefined8 *)(lVar1 + 0x5f8);
      local_38 = 4;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_0378412c:
  *(undefined2 *)(*(long *)(lVar1 + 0x5f8) + *(long *)(lVar1 + 0x5f0)) =
       *(undefined2 *)(param_1 + 2);
  if ((*(long *)(lVar1 + 0x610) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar1 + 0x610) + 0x20), plVar4 != (long *)0x0)) {
    local_48 = *(undefined8 *)(lVar1 + 0x5f0);
    uStack_40 = *(undefined8 *)(lVar1 + 0x5f8);
    local_38 = 4;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
  lVar2 = *(long *)(lVar1 + 0x5f8) + *(long *)(lVar1 + 0x5f0);
  *(byte *)(lVar2 + 3) = *(byte *)(lVar2 + 3) & 0xfe | *param_1;
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x610) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x610) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

