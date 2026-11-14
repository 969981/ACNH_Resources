
void FUN_01c0d780(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  short *psVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 local_80 [2];
  long local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  
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
  lVar7 = FUN_0265c0c0(param_2);
  if (lVar7 == 0) {
LAB_01c0d8e8:
    local_78 = param_3 + 0x20;
    local_80[0] = 10;
    (**(code **)(*param_1 + 0x38))(param_1);
    puVar1 = PTR_DAT_04bc0cd8;
  }
  else {
    if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar8 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar8)();
      uVar4 = uVar4 ^ 1;
    }
    uVar5 = FUN_026b318c(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8),param_3 + 0x1c);
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
    if ((int)uVar5 < 0) goto LAB_01c0d8e8;
    lVar3 = lVar7 + 0x70 + (ulong)uVar5 * 0x700;
    if (7 < uVar5) {
      lVar3 = lVar7 + 0x70;
    }
    if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar8 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar8)();
      uVar4 = uVar4 ^ 1;
    }
    local_80[0] = 10;
    local_78 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x138;
    (**(code **)(*param_1 + 0x38))(param_1);
    puVar1 = PTR_DAT_04bc0cd8;
    local_58 = 0;
    uStack_50 = 0;
    local_60 = 0;
    local_48 = 1;
    local_44 = 0;
    local_70 = PTR_DAT_04bc0cd8 + 0x10;
    uStack_68 = 0;
    FUN_02906b00(&local_70,param_1,local_80);
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
    psVar9 = (short *)(**(code **)(*param_1 + 0x18))(param_1);
    iVar6 = (**(code **)(*param_1 + 0x20))(param_1);
    if (((psVar9 != (short *)0x0) && (iVar6 != 0)) && (*psVar9 != 0)) goto LAB_01c0da24;
    local_78 = param_3 + 0x20;
    local_80[0] = 10;
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  local_44 = 0;
  local_48 = 1;
  uStack_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_70 = puVar1 + 0x10;
  uStack_68 = 0;
  FUN_02906b00(&local_70,param_1,local_80);
LAB_01c0da24:
  iVar6 = *(int *)(param_3 + 0x34);
  puVar10 = (undefined4 *)(**(code **)(*param_1 + 0x40))(param_1);
  uVar11 = 1;
  if (iVar6 == 1) {
    uVar11 = 2;
  }
  *puVar10 = uVar11;
  return;
}

