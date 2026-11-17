
void FUN_03148988(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  undefined *local_40;
  undefined4 local_38;
  
  uVar7 = 1 << (ulong)(param_2 & 0x1f) & 0xff;
  if ((param_3 & 1) == 0) {
    uVar7 = *(byte *)(param_1 + 0x2c4) | uVar7;
  }
  else {
    uVar7 = (uint)*(byte *)(param_1 + 0x2c4) & (uVar7 ^ 0xff);
  }
  *(char *)(param_1 + 0x2c4) = (char)uVar7;
  uVar2 = uVar7 - (uVar7 >> 1 & 0x55555555);
  uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
  puVar5 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  uVar2 = uVar2 + (uVar2 >> 8);
  uVar2 = uVar2 + (uVar2 >> 0x10) & 0x3f;
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar4 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58);
  if ((uVar4 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  lVar1 = 0x50;
  if (*(uint *)(puVar5 + 0x44) < 0xb) {
    lVar1 = 0;
  }
  plVar6 = *(long **)(puVar5[0x45] + lVar1);
  local_40 = PTR_DAT_04bc4e68 + 0x10;
  if (uVar2 == 0) {
    local_38 = 6;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
    puVar5 = (undefined8 *)(plVar6[3] + 0x1b8);
  }
  else {
    local_38 = 7;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
    puVar5 = (undefined8 *)(plVar6[3] + 0x1c0);
  }
  (*(code *)*puVar5)(plVar6[1]);
  FUN_03152bc0(*(undefined8 *)(param_1 + 0x220),(*(byte *)(param_1 + 0x2c4) & 0xfb) == 0);
  FUN_03170480(uVar2 == 0);
  FUN_03149a50((uVar7 & 1) == 0);
  return;
}

