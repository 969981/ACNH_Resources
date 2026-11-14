
void FUN_01b41a4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined2 local_3dc [46];
  undefined1 local_380;
  undefined1 local_324;
  undefined8 local_320;
  undefined4 local_318;
  undefined1 local_314;
  char local_310;
  undefined1 auStack_30e [672];
  ushort local_6e;
  undefined2 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_3dc[0] = 0;
  local_380 = 0;
  local_324 = 0;
  local_320 = 0xfffe00000000;
  local_318 = 0;
  FUN_0277d4ac((long)&local_320 + 4);
  local_314 = 0;
  local_310 = '\0';
  memset(auStack_30e,0,0x2a2);
  local_6c = 0xfffe;
  uVar3 = FUN_01b413d0(param_1,local_3dc,param_3,param_5);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (local_310 == '\0') {
    uVar3 = FUN_027aed78(local_3dc,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (local_320._4_2_ == -2) {
      return;
    }
  }
  else {
    uVar2 = FUN_027aed78(local_3dc,0);
    uVar1 = (uint)local_6e - (uint)*(ushort *)(DAT_05336138 + 0x1f8);
    if (*(uint *)(DAT_05336138 + 0x1d8) <= uVar1) {
      return;
    }
    if (*(long *)(*(long *)(DAT_05336138 + 0x1e0) + (long)(int)uVar1 * 8) == 0 ||
        ((uVar2 ^ 0xffffffff) & 1) != 0) {
      return;
    }
  }
  FUN_02827380(param_2,local_3dc);
  lVar4 = FUN_0265c3e0(*(undefined4 *)(param_1 + 0x20));
  if (lVar4 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar4 + 0x28);
  if (lVar7 == 0) {
    FUN_01b40b80(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8),param_3,param_4,param_1 + 0x2c);
    return;
  }
  if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    lVar7 = *(long *)(lVar4 + 0x28);
    uVar3 = uVar3 & 0xffffffff;
    if (lVar7 == 0) goto LAB_01b41be4;
  }
  plVar5 = *(long **)(lVar7 + 0x20);
  if (plVar5 != (long *)0x0) {
    local_68 = *(undefined8 *)(lVar4 + 8);
    uStack_60 = *(undefined8 *)(lVar4 + 0x10);
    local_58 = 0x13230;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_68);
  }
LAB_01b41be4:
  FUN_01b40b80(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8),param_3,param_4,param_1 + 0x2c);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

