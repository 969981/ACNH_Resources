
void FUN_020ec6c4(undefined4 param_1,byte *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  byte bVar7;
  undefined1 local_5c;
  undefined1 local_5b;
  byte local_5a;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  byte local_28 [4];
  int local_24;
  
  local_28[0] = *param_2;
  if (7 < local_28[0]) {
    return;
  }
  local_24 = param_3;
  uVar2 = FUN_02669430(local_28);
  if ((uVar2 & 1) == 0) {
    bVar7 = *param_2;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    local_58 = CONCAT71(local_58._1_7_,bVar7);
    lVar3 = FUN_025830c0(DAT_055021a0,&local_58,1);
    if (lVar3 == 0) {
      return;
    }
    if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    lVar5 = FUN_0265cc60(param_1,*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0xc154);
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
    if (lVar5 == 0) {
      return;
    }
    if ((*(long *)(lVar5 + 0x28) == 0) ||
       (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 0x10), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 & 0xffffffff;
    }
    if (local_24 == 1) {
      if ((*(long *)(lVar5 + 0x28) != 0) &&
         (plVar6 = *(long **)(*(long *)(lVar5 + 0x28) + 0x20), plVar6 != (long *)0x0)) {
        local_58 = *(undefined8 *)(lVar5 + 8);
        uStack_50 = *(undefined8 *)(lVar5 + 0x10);
        local_48 = 0x158;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
      }
      FUN_027a8e60(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8));
    }
    else {
      if (local_24 != 0) goto LAB_020ec92c;
      if ((*(long *)(lVar5 + 0x28) != 0) &&
         (plVar6 = *(long **)(*(long *)(lVar5 + 0x28) + 0x20), plVar6 != (long *)0x0)) {
        local_58 = *(undefined8 *)(lVar5 + 8);
        uStack_50 = *(undefined8 *)(lVar5 + 0x10);
        local_48 = 0x158;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
      }
      FUN_027a8ad0(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8));
    }
  }
  else {
    bVar7 = *param_2;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    local_58 = CONCAT71(local_58._1_7_,bVar7);
    lVar3 = FUN_025830c0(DAT_055021a0,&local_58,1);
    if (lVar3 == 0) {
      return;
    }
    if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    lVar5 = FUN_0265ca50(param_1,*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0xc154);
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
    if (lVar5 == 0) {
      return;
    }
    if ((*(long *)(lVar5 + 0x28) == 0) ||
       (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 0x10), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 & 0xffffffff;
    }
    if (local_24 == 1) {
      if ((*(long *)(lVar5 + 0x28) != 0) &&
         (plVar6 = *(long **)(*(long *)(lVar5 + 0x28) + 0x20), plVar6 != (long *)0x0)) {
        local_58 = *(undefined8 *)(lVar5 + 8);
        uStack_50 = *(undefined8 *)(lVar5 + 0x10);
        local_48 = 0x5f0;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
      }
      FUN_027b6820(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8));
    }
    else {
      if (local_24 != 0) {
LAB_020ec92c:
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(long *)(lVar5 + 0x28) == 0) {
          return;
        }
        puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 0x18);
        if (puVar4 == (undefined8 *)0x0) {
          return;
        }
        (**(code **)*puVar4)();
        return;
      }
      if ((*(long *)(lVar5 + 0x28) != 0) &&
         (plVar6 = *(long **)(*(long *)(lVar5 + 0x28) + 0x20), plVar6 != (long *)0x0)) {
        local_58 = *(undefined8 *)(lVar5 + 8);
        uStack_50 = *(undefined8 *)(lVar5 + 0x10);
        local_48 = 0x5f0;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
      }
      FUN_027b6490(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8));
    }
  }
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  local_5a = *param_2;
  local_5c = (undefined1)param_1;
  uVar2 = (ulong)local_58 >> 0x30;
  local_5b = (undefined1)local_24;
  local_58 = CONCAT26((ushort)uVar2 & 0xff00,0xff0000000000);
  if (7 < local_5a) {
    local_5a = 0xff;
  }
  if (-1 < DAT_053d0ad0) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0ad0,&local_58,&local_5c,3,0);
  }
  return;
}

