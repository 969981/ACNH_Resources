
void FUN_03147c94(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined *local_50;
  undefined4 local_48;
  
  if (*(int *)(param_1 + 0x288) == 6) {
    lVar7 = *(long *)(param_1 + 0x210);
    if ((((lVar7 != 0) && (lVar8 = *(long *)(lVar7 + 0x210), lVar8 != 0)) &&
        (*(char *)(lVar8 + 0x54) == '\0')) &&
       (((*(uint *)(lVar8 + 0x58) & *(uint *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0x10))
         == 0 && ((plVar5 = *(long **)(**(long **)(lVar7 + 0x3f8) + 0x1b0), plVar5 == (long *)0x0 ||
                  (uVar6 = (**(code **)(*plVar5 + 0x48))(), (uVar6 & 1) != 0)))))) {
      if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
        *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 5;
      }
    }
  }
  else {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,2);
    puVar2 = local_50;
    local_50._0_4_ = 2;
    if (*(uint *)(*(long *)PTR_DAT_04bb46c0 + 8) < 3) {
      local_50._0_4_ = 0;
    }
    iVar4 = *(int *)(*(long *)(*(long *)PTR_DAT_04bb46c0 + 0x10) + (long)(int)local_50 * 4);
    local_50 = puVar2;
    if (*(int *)(param_1 + 0x288) == 2) {
      FUN_02203540();
      FUN_0169d600(*(undefined8 *)PTR_DAT_04bb9530);
    }
    if (iVar4 < 1) {
      if (*(int *)(param_1 + 0x240) < 1) {
        *(undefined1 *)(param_1 + 0x244) = 1;
        puVar2 = PTR_DAT_04bc4e60;
        puVar9 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
        if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e60);
        }
        puVar1 = PTR_DAT_04bc4e58;
        uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
        puVar3 = PTR_DAT_04bc4e68;
        if ((uVar6 & 1) == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        lVar7 = 0x18;
        if (*(uint *)(puVar9 + 0x44) < 4) {
          lVar7 = 0;
        }
        plVar5 = *(long **)(puVar9[0x45] + lVar7);
        if (plVar5 != (long *)0x0) {
          local_50 = PTR_DAT_04bc4e68 + 0x10;
          local_48 = 1;
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
          (**(code **)(plVar5[3] + 400))(0x3f800000,plVar5[1]);
        }
        puVar9 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
          *(undefined **)puVar1 = PTR_DAT_04bc4d38 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e60);
        }
        uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
        if ((uVar6 & 1) == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        plVar5 = *(long **)(puVar9[0x45] + (ulong)(4 < *(uint *)(puVar9 + 0x44)) * 0x20);
        if (plVar5 != (long *)0x0) {
          local_50 = puVar3 + 0x10;
          local_48 = 1;
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
          (**(code **)(plVar5[3] + 400))(0x3f800000,plVar5[1]);
          local_50 = PTR_DAT_04bc4f00 + 0x10;
          local_48 = 9;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_50);
          fVar10 = (float)(**(code **)(plVar5[3] + 0xb0))(plVar5[1]);
          *(int *)(param_1 + 0x240) = (int)fVar10;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x244) = 0;
        puVar2 = PTR_DAT_04bc4e60;
        puVar9 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
        if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e60);
        }
        puVar1 = PTR_DAT_04bc4e58;
        uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
        if ((uVar6 & 1) == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        lVar7 = 0x18;
        if (*(uint *)(puVar9 + 0x44) < 4) {
          lVar7 = 0;
        }
        plVar5 = *(long **)(puVar9[0x45] + lVar7);
        if (plVar5 != (long *)0x0) {
          local_50 = PTR_DAT_04bc4e68 + 0x10;
          local_48 = 7;
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
          (**(code **)(plVar5[3] + 0x1c0))(plVar5[1]);
        }
        puVar9 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
          *(undefined **)puVar1 = PTR_DAT_04bc4d38 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e60);
        }
        uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
        if ((uVar6 & 1) == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        plVar5 = *(long **)(puVar9[0x45] + (ulong)(4 < *(uint *)(puVar9 + 0x44)) * 0x20);
        if (plVar5 != (long *)0x0) {
          local_50 = PTR_DAT_04bc4e68 + 0x10;
          local_48 = 7;
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
          (**(code **)(plVar5[3] + 0x1c0))(plVar5[1]);
        }
      }
    }
  }
  return;
}

