
void FUN_02ed8b64(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined *local_50;
  undefined4 local_48;
  
  puVar3 = PTR_DAT_04bc4e60;
  puVar7 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x218) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar2 = PTR_DAT_04bc4e58;
  uVar6 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e58);
  puVar4 = PTR_DAT_04bc4e68;
  if ((uVar6 & 1) == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  lVar1 = 0x38;
  if (*(uint *)(puVar7 + 0x44) < 8) {
    lVar1 = 0;
  }
  plVar8 = *(long **)(puVar7[0x45] + lVar1);
  if (plVar8 != (long *)0x0) {
    local_50 = PTR_DAT_04bc4e68 + 0x10;
    local_48 = 6;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
    (**(code **)(plVar8[3] + 0x1b8))(plVar8[1]);
    *(ushort *)(param_1 + 0x228) = *(ushort *)(param_1 + 0x228) & 0xfffe;
  }
  puVar7 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x218) + 0x3f8);
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
    *(undefined **)puVar2 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar6 = (**(code **)*puVar7)(puVar7,puVar2);
  if ((uVar6 & 1) == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  lVar1 = 0x68;
  if (*(uint *)(puVar7 + 0x44) < 0xe) {
    lVar1 = 0;
  }
  plVar8 = *(long **)(puVar7[0x45] + lVar1);
  if (plVar8 != (long *)0x0) {
    local_50 = puVar4 + 0x10;
    local_48 = 6;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
    (**(code **)(plVar8[3] + 0x1b8))(plVar8[1]);
    *(ushort *)(param_1 + 0x228) = *(ushort *)(param_1 + 0x228) & 0xfffd;
  }
  puVar7 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x218) + 0x3f8);
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
    *(undefined **)puVar2 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar6 = (**(code **)*puVar7)(puVar7,puVar2);
  if ((uVar6 & 1) == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  plVar8 = *(long **)(puVar7[0x45] + (ulong)(0x10 < *(uint *)(puVar7 + 0x44)) * 0x80);
  if (plVar8 != (long *)0x0) {
    local_50 = puVar4 + 0x10;
    local_48 = 6;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
    (**(code **)(plVar8[3] + 0x1b8))(plVar8[1]);
    *(ushort *)(param_1 + 0x228) = *(ushort *)(param_1 + 0x228) & 0xffbf;
    puVar7 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x218) + 0x3f8);
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
      *(undefined **)puVar2 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar6 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e58);
    if ((uVar6 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    lVar1 = 0xd8;
    if (*(uint *)(puVar7 + 0x44) < 0x1c) {
      lVar1 = 0;
    }
    plVar8 = *(long **)(puVar7[0x45] + lVar1);
    if (plVar8 != (long *)0x0) {
      local_50 = PTR_DAT_04bc4f00 + 0x10;
      local_48 = 0x14;
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
      (**(code **)(plVar8[3] + 0x158))(0x3f800000,plVar8[1]);
      local_50 = puVar4 + 0x10;
      local_48 = 9;
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
      (**(code **)(plVar8[3] + 0x1d0))(plVar8[1]);
      FUN_02ed9ca0(param_1);
    }
  }
  return;
}

