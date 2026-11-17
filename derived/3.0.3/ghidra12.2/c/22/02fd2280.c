
void FUN_02fd2280(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined *local_40;
  undefined4 local_38;
  
  lVar7 = *(long *)(param_1 + 0x590);
  if (lVar7 != 0) {
    puVar5 = (undefined8 *)**(long **)(param_1 + 0x3f8);
    if ((param_2 & 1) == 0) {
      if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58);
      if ((uVar3 & 1) == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      lVar1 = 0x18;
      if (*(uint *)(puVar5 + 0x44) < 4) {
        lVar1 = 0;
      }
      plVar6 = *(long **)(puVar5[0x45] + lVar1);
      local_40 = PTR_DAT_04bc4f00 + 0x10;
      local_38 = 0x14;
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
      (**(code **)(plVar6[3] + 0x158))(0,plVar6[1]);
      if (*(long *)(*(long *)(lVar7 + 0x218) + 0x18) != 0) {
        FUN_03d488f0(*(undefined8 *)(*(long *)(param_1 + 0x210) + 0x48));
      }
    }
    else {
      if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58);
      if ((uVar3 & 1) == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      lVar1 = 0x18;
      if (*(uint *)(puVar5 + 0x44) < 4) {
        lVar1 = 0;
      }
      plVar6 = *(long **)(puVar5[0x45] + lVar1);
      local_40 = PTR_DAT_04bc4f00 + 0x10;
      local_38 = 0x14;
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
      (**(code **)(plVar6[3] + 0x158))(0x3f800000,plVar6[1]);
      lVar7 = *(long *)(lVar7 + 0x218);
      if (*(long *)(lVar7 + 0x18) == 0) {
        plVar4 = *(long **)(*(long *)(param_1 + 0x210) + 0x48);
        *(long **)(lVar7 + 0x18) = plVar4;
        plVar6 = (long *)(*(int *)((long)plVar4 + 0x14) + lVar7);
        lVar7 = *plVar4;
        *plVar4 = (long)plVar6;
        *plVar6 = lVar7;
        plVar6[1] = (long)plVar4;
        if (lVar7 != 0) {
          *(long **)(lVar7 + 8) = plVar6;
        }
        *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
      }
    }
  }
  return;
}

