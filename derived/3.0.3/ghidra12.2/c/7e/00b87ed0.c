
void FUN_00b87ed0(undefined8 param_1,byte *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  byte local_44 [4];
  
  lVar6 = FUN_0265c3e0();
  local_44[0] = *param_2;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  lVar7 = FUN_025830c0(DAT_055021a0,local_44,1);
  if (lVar6 == 0) {
    return;
  }
  if (lVar7 == 0) {
    return;
  }
  if ((*(long **)(lVar7 + 0x17bb0) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x17bb0), puVar8 == (undefined8 *)0x0)) {
    lVar7 = *(long *)(lVar7 + 0x17b98) + *(long *)(lVar7 + 0x17b90);
    local_60 = *(undefined8 *)(lVar7 + 0x1c);
    uStack_58 = *(undefined8 *)(lVar7 + 0x24);
    local_50 = *(undefined8 *)(lVar7 + 0x2c);
    local_48 = *(undefined4 *)(lVar7 + 0x34);
  }
  else {
    uVar9 = (**(code **)*puVar8)();
    lVar1 = *(long *)(lVar7 + 0x17b98) + *(long *)(lVar7 + 0x17b90);
    local_60 = *(undefined8 *)(lVar1 + 0x1c);
    uStack_58 = *(undefined8 *)(lVar1 + 0x24);
    local_50 = *(undefined8 *)(lVar1 + 0x2c);
    local_48 = *(undefined4 *)(lVar1 + 0x34);
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x17bb0) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x17bb0) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  if ((*(long *)(lVar6 + 0x28) == 0) ||
     (puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 0x10), puVar8 == (undefined8 *)0x0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)*puVar8)();
    uVar9 = uVar9 & 0xffffffff;
  }
  local_8c = 0xfffe;
  FUN_0277d4ac(&local_8c);
  uVar5 = DAT_05453f5c;
  local_64 = 0;
  local_6c = 0;
  local_74 = 0;
  local_7c = 0;
  local_84 = 0;
  if (-1 < (int)DAT_05453f5c) {
    if ((*(long *)(lVar6 + 0x28) != 0) &&
       (plVar10 = *(long **)(*(long *)(lVar6 + 0x28) + 0x20), plVar10 != (long *)0x0)) {
      local_a8 = *(undefined8 *)(lVar6 + 8);
      local_a0 = *(undefined8 *)(lVar6 + 0x10);
      local_98 = 0x13230;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_a8);
    }
    uVar2 = uVar5 - 0x18;
    if (uVar5 < 0x18) {
      uVar2 = uVar5;
    }
    lVar7 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
    lVar1 = lVar7 + 0x10d6c;
    if (uVar5 < 0x18) {
      lVar1 = lVar7 + 0x1094c;
    }
    puVar8 = (undefined8 *)(lVar1 + (ulong)uVar2 * 0x2c);
    uVar11 = 0x20;
    if (uVar5 < 0x18) {
      uVar11 = 0x18;
    }
    if (uVar11 <= uVar2) {
      puVar8 = (undefined8 *)0x0;
    }
    local_8c = *puVar8;
    if (*(int *)(puVar8 + 1) == 0) {
      uVar3 = 0;
      local_84 = 0;
      local_7c = 0;
      local_74 = 0;
    }
    else {
      local_84 = puVar8[1];
      local_7c = puVar8[2];
      local_74 = puVar8[3];
      uVar3 = *(undefined4 *)(puVar8 + 4);
    }
    local_6c = CONCAT44(*(undefined4 *)((long)puVar8 + 0x24),uVar3);
    local_64 = CONCAT22(local_64._2_2_,*(undefined2 *)(puVar8 + 5));
    local_64 = CONCAT13(*(undefined1 *)((long)puVar8 + 0x2b),(undefined3)local_64);
    if ((*(long *)(lVar6 + 0x28) != 0) &&
       (plVar10 = *(long **)(*(long *)(lVar6 + 0x28) + 0x20), plVar10 != (long *)0x0)) {
      local_a8 = *(undefined8 *)(lVar6 + 8);
      local_a0 = *(undefined8 *)(lVar6 + 0x10);
      local_98 = 0x13230;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_a8);
    }
    FUN_026b3b80(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8),uVar5,1);
  }
  puVar4 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_8c);
  if (*(long *)puVar4 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) goto LAB_00b881c8;
  }
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  FUN_027d2090(&local_8c,param_3,&local_a8,7,0,0);
LAB_00b881c8:
  if ((*(long *)(lVar6 + 0x28) != 0) &&
     (plVar10 = *(long **)(*(long *)(lVar6 + 0x28) + 0x20), plVar10 != (long *)0x0)) {
    local_a8 = *(undefined8 *)(lVar6 + 8);
    local_a0 = *(undefined8 *)(lVar6 + 0x10);
    local_98 = 0x13230;
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_a8);
  }
  FUN_026b7690(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8),&local_8c,&local_60,param_4,1);
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

