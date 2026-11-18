
void FUN_0350de50(long param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *local_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_5a;
  undefined4 local_50;
  undefined8 local_4c;
  byte local_44;
  
  puVar1 = (uint *)(param_1 + 0x1c1f0);
  lVar8 = *(long *)(*(long *)(param_1 + 0x220) + (ulong)(*(int *)(param_1 + 0x1c290) != 0) * 8 +
                   0x570);
  switch(*(int *)(param_1 + 0x1c290)) {
  case 0:
    uVar4 = *(uint *)(param_1 + 0x1c530);
    break;
  case 1:
    uVar4 = FUN_00da1ae4(param_1 + 0x1c448);
    break;
  case 2:
    uVar4 = FUN_00da1ae4(param_1 + 0x1c400);
    break;
  case 3:
    uVar4 = FUN_00da1ae4(param_1 + 0x1c490);
    break;
  case 4:
    piVar6 = (int *)(**(code **)(*(long *)(param_1 + 0x1cca8) + 0x18))();
    uVar4 = *piVar6 + 1U & ((int)(*piVar6 + 1U) >> 0x1f ^ 0xffffffffU);
    break;
  default:
    goto switchD_0350dea8_default;
  }
  *puVar1 = uVar4;
switchD_0350dea8_default:
  if (lVar8 != 0) {
    local_50 = 0;
    local_5a = 0x101000001;
    local_44 = *(byte *)(param_1 + 0x1f8);
    local_4c = 0x60000000c;
    local_5c = 0;
    local_70 = PTR_DAT_04bc9c78 + 0x10;
    if (7 < local_44) {
      local_44 = 0xff;
    }
    local_68 = *puVar1;
    uStack_64 = *(undefined4 *)(param_1 + 0x1c254);
    local_60 = *(undefined4 *)(param_1 + 0x1c258);
    FUN_03864290(lVar8,&local_70);
  }
  puVar3 = PTR_DAT_04bc4e60;
  puVar9 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x220) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar2 = PTR_DAT_04bc4e58;
  uVar7 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
  if ((uVar7 & 1) == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  plVar10 = *(long **)(puVar9[0x45] + (ulong)(2 < *(uint *)(puVar9 + 0x44)) * 0x10);
  if (plVar10 != (long *)0x0) {
    if ((*(int *)(param_1 + 0x1c290) == 2) && (*puVar1 < 2)) {
      local_70 = PTR_DAT_04bc4f00 + 0x10;
      local_68 = 0x14;
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_70);
      uVar11 = 0x3f800000;
    }
    else {
      local_70 = PTR_DAT_04bc4f00 + 0x10;
      local_68 = 0x14;
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_70);
      uVar11 = 0;
    }
    (**(code **)(plVar10[3] + 0x158))(uVar11,plVar10[1]);
  }
  puVar9 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x220) + 0x3f8);
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0)) {
    *(undefined **)puVar2 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar7 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
  if ((uVar7 & 1) == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  lVar8 = 0x18;
  if (*(uint *)(puVar9 + 0x44) < 4) {
    lVar8 = 0;
  }
  plVar10 = *(long **)(puVar9[0x45] + lVar8);
  if (plVar10 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1c290) == 0) {
      local_70 = PTR_DAT_04bc4f00 + 0x10;
      local_68 = 0x14;
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_70);
      uVar11 = 0x3f800000;
    }
    else {
      local_70 = PTR_DAT_04bc4f00 + 0x10;
      local_68 = 0x14;
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_70);
      uVar11 = 0;
    }
    (**(code **)(plVar10[3] + 0x158))(uVar11,plVar10[1]);
  }
  return;
}

