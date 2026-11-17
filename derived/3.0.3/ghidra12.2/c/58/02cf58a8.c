
void FUN_02cf58a8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  byte bVar6;
  undefined8 *puVar7;
  long *plVar8;
  float fVar9;
  undefined *local_70;
  uint local_68;
  undefined1 uStack_64;
  undefined *local_60;
  
  uStack_64 = 0;
  local_60 = PTR_DAT_04bc5d90 + 0x10;
  bVar6 = *(byte *)(param_1 + 0x1f8);
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  local_68 = (uint)bVar6;
  local_70 = (undefined *)(param_1 + 0x328);
  FUN_02cdcbf0(&local_70);
  FUN_03136870(param_1 + 0x210,(undefined *)(param_1 + 0x328));
  puVar7 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x1c490) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e58);
  if ((uVar5 & 1) == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  lVar2 = 0x18;
  if (*(uint *)(puVar7 + 0x44) < 4) {
    lVar2 = 0;
  }
  plVar8 = *(long **)(puVar7[0x45] + lVar2);
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    iVar3 = *(int *)(param_1 + 0x238);
    iVar4 = iVar3 + -1;
    puVar1 = PTR_DAT_04bc4f00 + 0x10;
    local_68 = 9;
    local_70 = puVar1;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_70);
    fVar9 = (float)(**(code **)(plVar8[3] + 0xb0))(plVar8[1]);
    if ((int)fVar9 <= iVar4) {
      iVar4 = (int)fVar9;
    }
    if (iVar3 < 1) {
      iVar4 = 0;
    }
    local_68 = 0x14;
    local_70 = puVar1;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_70);
    (**(code **)(plVar8[3] + 0x158))((float)iVar4,plVar8[1]);
  }
  return;
}

