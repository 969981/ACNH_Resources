
/* WARNING: Removing unreachable block (ram,0x01dbb23c) */

void FUN_01dbb130(byte *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  byte local_3c [4];
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_3c[0] = *param_1;
  if (7 < local_3c[0]) {
    local_3c[0] = 0xff;
  }
  lVar1 = FUN_02583354(DAT_055021a0,local_3c,1);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = lVar1 + 0x194b0;
  if (*(long *)(lVar1 + 0x194b8) == 0) {
    lVar5 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar1 = *(long *)(lVar5 + 0x2aca0);
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
      if (*(long *)(lVar5 + 0x2aca0) == 0) goto LAB_01dbb21c;
      plVar3 = *(long **)(*(long *)(lVar5 + 0x2aca0) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_38 = *(long *)(lVar5 + 0x2ac80);
      local_30 = *(undefined8 *)(lVar5 + 0x2ac88);
      uStack_28 = 0x180;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    }
  }
LAB_01dbb21c:
  local_38 = CONCAT44(local_38._4_4_,1);
  lVar1 = *(long *)(lVar5 + 0x2ac88) + *(long *)(lVar5 + 0x2ac80);
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar5 + 0x2aca0) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x2aca0) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

