
void FUN_027494ac(uint param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined **local_78;
  undefined1 *puStack_70;
  undefined4 local_68;
  undefined1 local_64 [7];
  undefined1 local_5d;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (9 < param_1) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar1 = (**(code **)(*(long *)*puVar4 + 0x38))();
    if (lVar1 == 0) {
      return;
    }
    lVar1 = lVar1 + 0x70;
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar4[0x26] == (long *)0x0) {
      return;
    }
    lVar1 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
    if (lVar1 == 0) {
      return;
    }
  }
  local_5d = 0;
  lVar1 = lVar1 + (ulong)param_1 * 0x10798;
  local_64[0] = 0;
  puStack_70 = local_64;
  local_68 = 8;
  local_78 = &PTR_LAB_04908da0;
  FUN_021d7c00(&local_78,param_1);
  lVar5 = *(long *)(lVar1 + 0xfa30);
  if (lVar5 == 0) {
    FUN_02749650(*(long *)(lVar1 + 0xfa18) + *(long *)(lVar1 + 0xfa10),param_1,param_2,param_3,1);
    return;
  }
  if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    lVar5 = *(long *)(lVar1 + 0xfa30);
    uVar2 = uVar2 & 0xffffffff;
    if (lVar5 == 0) goto LAB_027495f0;
  }
  plVar3 = *(long **)(lVar5 + 0x20);
  if (plVar3 != (long *)0x0) {
    local_58 = *(undefined8 *)(lVar1 + 0xfa10);
    local_50 = *(undefined8 *)(lVar1 + 0xfa18);
    uStack_48 = 0x200;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
  }
LAB_027495f0:
  FUN_02749650(*(long *)(lVar1 + 0xfa18) + *(long *)(lVar1 + 0xfa10),param_1,param_2,param_3,1);
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0xfa30) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0xfa30) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

