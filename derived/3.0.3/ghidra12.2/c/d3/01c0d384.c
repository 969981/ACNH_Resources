
void FUN_01c0d384(long *param_1,undefined4 param_2,byte *param_3)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  short *psVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 local_90 [2];
  long local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  byte local_34 [4];
  
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = 0x10;
  param_1[3] = 0xffffffff;
  param_1[4] = -0x100000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0x40;
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  param_1[6] = (long)puVar1;
  param_1[7] = (long)param_1 + 0x44;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  param_1[0x11] = (long)puVar1;
  param_1[0x12] = (long)param_1 + 0x9c;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = (long)&DAT_04a3a308;
  param_1[1] = (long)(param_1 + 0x1c);
  plVar2 = param_1 + 0x20;
  if (param_1 + 0x20 <= (long *)((long)param_1 + 0xe2)) {
    plVar2 = (long *)((long)param_1 + 0xe2);
  }
  memset(param_1 + 0x1c,0,((long)plVar2 + (-0xe1 - (long)param_1) & 0xfffffffffffffffeU) + 2);
  local_34[0] = *param_3;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar5 = FUN_025830c0(DAT_055021a0,local_34,1);
  if (lVar5 == 0) {
    return;
  }
  if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar6 == (undefined8 *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)*puVar6)();
    uVar7 = uVar7 & 0xffffffff;
  }
  lVar8 = FUN_0265c8a0(param_2,*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0xc154);
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  if (lVar8 == 0) {
    if ((*(long **)(lVar5 + 0x17f68) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x17f68), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    local_88 = *(long *)(lVar5 + 0x17f50) + *(long *)(lVar5 + 0x17f48) + 4;
    local_90[0] = 10;
    (**(code **)(*param_1 + 0x38))(param_1);
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    local_58 = 1;
    local_54 = 0;
    local_80 = PTR_DAT_04bc0cd8 + 0x10;
    local_78 = 0;
    FUN_02906b00(&local_80,param_1,local_90);
  }
  else {
    if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    local_90[0] = 10;
    local_88 = *(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x138;
    (**(code **)(*param_1 + 0x38))(param_1);
    puVar1 = PTR_DAT_04bc0cd8;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    local_58 = 1;
    local_54 = 0;
    local_80 = PTR_DAT_04bc0cd8 + 0x10;
    local_78 = 0;
    FUN_02906b00(&local_80,param_1,local_90);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    psVar9 = (short *)(**(code **)(*param_1 + 0x18))(param_1);
    iVar4 = (**(code **)(*param_1 + 0x20))(param_1);
    if (((psVar9 != (short *)0x0) && (iVar4 != 0)) && (*psVar9 != 0)) goto LAB_01c0d6e4;
    if ((*(long **)(lVar5 + 0x17f68) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x17f68), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    local_90[0] = 10;
    local_88 = *(long *)(lVar5 + 0x17f50) + *(long *)(lVar5 + 0x17f48) + 4;
    (**(code **)(*param_1 + 0x38))(param_1);
    local_80 = puVar1 + 0x10;
    local_58 = 1;
    local_54 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_02906b00(&local_80,param_1,local_90);
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x17f68) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17f68) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
LAB_01c0d6e4:
  if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar6 == (undefined8 *)0x0)) {
    iVar4 = *(int *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0xc16c);
  }
  else {
    uVar7 = (**(code **)*puVar6)();
    iVar4 = *(int *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0xc16c);
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  puVar10 = (undefined4 *)(**(code **)(*param_1 + 0x40))(param_1);
  uVar11 = 1;
  if (iVar4 == 1) {
    uVar11 = 2;
  }
  *puVar10 = uVar11;
  return;
}

