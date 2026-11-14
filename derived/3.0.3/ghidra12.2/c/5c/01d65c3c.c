
void FUN_01d65c3c(undefined8 *param_1)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  uint uVar7;
  undefined1 local_a0;
  undefined1 local_9f;
  byte local_9e;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 < 0x29) {
    if (iVar1 == 2) {
      local_9e = *(byte *)((long)param_1 + 0x24);
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 4) = 3;
      uVar7 = 0xffffffff;
      if (local_9e < 8) {
        uVar7 = ~(1 << (ulong)(local_9e & 0x1f));
      }
      *(undefined1 *)((long)param_1 + 0x2c) = 1;
      *(uint *)(param_1 + 5) = uVar7;
      plVar6 = *(long **)PTR_DAT_04bb27d0;
      bVar2 = *(byte *)(*plVar6 + 0x473);
      if (bVar2 < 8) {
        *(uint *)(param_1 + 5) = uVar7 & (1 << (ulong)(bVar2 & 0x1f) ^ 0xffffffffU);
      }
      local_a0 = 3;
      local_9f = 0;
      local_14 = CONCAT11(local_9e,5);
      if (DAT_0536e668 < 0) {
        return;
      }
      lVar4 = *plVar6;
      uVar3 = 3;
      goto LAB_01d65df8;
    }
    if (iVar1 != 0x1a) {
      return;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    uVar5 = 0x1b;
  }
  else if (iVar1 == 0x29) {
    uVar5 = 0x2c;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    if (iVar1 != 0x41) {
      return;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    uVar5 = 0x42;
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  *(undefined1 *)((long)param_1 + 0x24) = 0xff;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  plVar6 = DAT_0537d558;
  if (*(byte *)(*DAT_0537d558 + 0x473) < 8) {
    *(int *)(param_1 + 5) = ~(1 << (ulong)(*(byte *)(*DAT_0537d558 + 0x473) & 0x1f));
  }
  local_9f = 0xff;
  local_a0 = (undefined1)uVar5;
  local_14 = 0xff00;
  if (DAT_0536e668 < 0) {
    return;
  }
  lVar4 = *plVar6;
  uVar3 = 2;
LAB_01d65df8:
  local_12 = 0;
  local_18 = 0;
  uStack_20 = 0;
  local_28 = 0;
  uStack_30 = 0;
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_90 = 0;
  local_98 = 0;
  FUN_01db1df0(lVar4 + 0x480,DAT_0536e668,&local_18,&local_a0,uVar3,0);
  return;
}

