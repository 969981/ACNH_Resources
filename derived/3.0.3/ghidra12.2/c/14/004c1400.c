
void FUN_004c1400(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_2f0 [144];
  undefined1 auStack_260 [96];
  uint local_200;
  ulong local_1f0;
  undefined8 *local_1d8;
  long local_1c8;
  undefined8 local_190;
  undefined8 local_170;
  ulong local_140;
  undefined8 local_108;
  
  FUN_00451ea0(auStack_260);
  if (*(int *)(param_1 + 0xe) != 0) {
    FUN_004225d0(auStack_2f0,param_1[3] & 0xfffffffffffffffe);
    iVar1 = FUN_004229e0(auStack_2f0,0x3c,0,0x7fffffff);
    if (-1 < iVar1) {
      FUN_00422950(auStack_2f0,iVar1);
      FUN_0043bfc0(param_1 + 3,auStack_2f0);
    }
    FUN_00422550(auStack_2f0);
  }
  FUN_00452270(auStack_260,param_1[3] & 0xfffffffffffffffe,0);
  local_1f0 = local_1f0 | 0x14;
  local_1c8 = (long)*(int *)(param_1 + 4);
  local_1d8 = &DAT_04c70240;
  FUN_00452230(auStack_260,*param_1);
  uVar3 = (ulong)local_200;
  local_190 = 0;
  local_140 = uVar3 | 0x1000;
  local_200 = (uint)local_140;
  if (*(char *)((long)param_1 + 0x49) == '\0') {
    if (*(char *)((long)param_1 + 0x4a) == '\0') goto LAB_004c150c;
    local_140 = 0x1020;
  }
  else {
    local_140 = 0x1820;
  }
  local_140 = uVar3 | local_140;
  local_200 = (uint)local_140;
LAB_004c150c:
  uVar3 = local_1f0 | 0x200800;
  if (*(char *)((long)param_1 + 0x4b) != '\0') {
    local_108 = 0;
    uVar3 = local_1f0 | 0x10200800;
  }
  local_1f0 = uVar3;
  if (*(int *)(param_1 + 0xe) != 0) {
    local_1f0 = local_1f0 | 0x8000;
    local_170 = 0;
  }
  uVar2 = (*(code *)**(undefined8 **)*param_1)();
  uVar2 = FUN_004535c0(auStack_260,uVar2);
  param_1[10] = uVar2;
  FUN_00451fa0(auStack_260);
  return;
}

