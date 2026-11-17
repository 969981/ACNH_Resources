
void FUN_02f9c4c0(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined *local_30;
  undefined4 local_28;
  
  puVar6 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
  if ((uVar3 & 1) == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  lVar4 = 0x60;
  if (*(uint *)(puVar6 + 0x44) < 0xd) {
    lVar4 = 0;
  }
  plVar7 = *(long **)(puVar6[0x45] + lVar4);
  if (plVar7 != (long *)0x0) {
    uVar5 = *(uint *)(param_1 + 0x298);
    iVar2 = -1;
    if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x280))) {
      lVar4 = param_1 + 0x270;
      uVar1 = uVar5 + 1 & 3;
      if (2 < uVar5) {
        uVar5 = uVar5 + 1 & 0xfffffffc;
        do {
          uVar5 = uVar5 - 4;
          lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) + 8);
        } while (uVar5 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar4 = *(long *)(lVar4 + 8);
      }
      iVar2 = -1;
      if ((lVar4 != 0) && (lVar4 = lVar4 - *(int *)(param_1 + 0x284), lVar4 != 0)) {
        iVar2 = *(int *)(lVar4 + 0x270);
      }
    }
    if (iVar2 == 0x1a) {
      local_30 = PTR_DAT_04bc4f00 + 0x10;
      local_28 = 0x14;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_30);
      uVar8 = 0x3f800000;
    }
    else {
      local_30 = PTR_DAT_04bc4f00 + 0x10;
      local_28 = 0x14;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_30);
      uVar8 = 0;
    }
    (**(code **)(plVar7[3] + 0x158))(uVar8,plVar7[1]);
  }
  return;
}

