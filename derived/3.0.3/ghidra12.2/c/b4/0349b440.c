
void FUN_0349b440(long param_1,int param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined *local_50;
  undefined4 local_48;
  
  puVar3 = PTR_DAT_04bc4e60;
  puVar7 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x228) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar2 = PTR_DAT_04bc4e58;
  uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e58);
  if ((uVar5 & 1) == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  lVar10 = 0x18;
  if (*(uint *)(puVar7 + 0x44) < 4) {
    lVar10 = 0;
  }
  plVar9 = *(long **)(puVar7[0x45] + lVar10);
  puVar7 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x228) + 0x3f8);
  if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
    *(undefined **)puVar2 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e58);
  if ((uVar5 & 1) == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  plVar8 = *(long **)(puVar7[0x45] + (ulong)(4 < *(uint *)(puVar7 + 0x44)) * 0x20);
  if (plVar9 == (long *)0x0 || plVar8 == (long *)0x0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x1ce08);
  local_50 = PTR_DAT_04bc4e68 + 0x10;
  if (param_2 == 0) {
    local_48 = 7;
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_50);
    (**(code **)(plVar9[3] + 0x1c0))(plVar9[1]);
    if (*plVar1 == 0) {
      lVar10 = *(long *)(*(long *)(param_1 + 0x228) + 0x570);
      if (lVar10 == 0) {
        return;
      }
      goto LAB_0349b6e4;
    }
    FUN_0313bbd8(*plVar1,0,0);
    lVar10 = *plVar1;
    if (*(long *)(lVar10 + 0x210) != 0) {
      lVar11 = 0x300;
      do {
        plVar9 = *(long **)(*(long *)(lVar10 + 0x210) + lVar11);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x140))(plVar9,1,0);
        }
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0x488);
      lVar10 = *plVar1;
      if (*(long *)(lVar10 + 0x210) != 0 && *(long *)PTR_DAT_04bc4eb8 != 0) {
        lVar11 = 0x300;
        do {
          lVar6 = *(long *)(*(long *)(lVar10 + 0x210) + lVar11);
          if (lVar6 != 0) {
            FUN_03d5d0e0(lVar6,0,1);
          }
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0x488);
      }
    }
    FUN_0349b820(param_1);
  }
  else {
    local_48 = 6;
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_50);
    (**(code **)(plVar9[3] + 0x1b8))(plVar9[1]);
    lVar10 = *plVar1;
    if (lVar10 != 0) {
      if (-1 < *(int *)(lVar10 + 0x248)) {
        FUN_0313bfdc(lVar10,*(int *)(lVar10 + 0x248),1,0);
        lVar10 = *plVar1;
      }
      if ((*(long *)(lVar10 + 0x210) != 0) && (*(long *)PTR_DAT_04bc4eb8 != 0)) {
        lVar11 = 0x300;
        do {
          lVar6 = *(long *)(*(long *)(lVar10 + 0x210) + lVar11);
          if (lVar6 != 0) {
            FUN_03d5d0e0(lVar6,0,0);
          }
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0x488);
      }
    }
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x228) + 0x570);
  if (lVar10 == 0) {
    return;
  }
  if (param_2 == 1) {
    local_50 = PTR_DAT_04bc4e68 + 0x10;
    local_48 = 7;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
    (**(code **)(plVar8[3] + 0x1c0))(plVar8[1]);
    FUN_0345b4a0(lVar10,0);
    return;
  }
LAB_0349b6e4:
  local_50 = PTR_DAT_04bc4e68 + 0x10;
  local_48 = 6;
  (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
  (**(code **)(plVar8[3] + 0x1b8))(plVar8[1]);
  local_50 = (undefined *)CONCAT44(local_50._4_4_,2);
  if (1 < *(uint *)(lVar10 + 0x298)) {
    if (*(uint *)(lVar10 + 0x298) == 3) {
      if (*(int *)(lVar10 + 0x2e4) != 2) {
        FUN_03864b90(lVar10);
      }
    }
    else {
      *(undefined4 *)(lVar10 + 0x2e4) = 2;
      FUN_03ebb160(lVar10 + 0x290,3);
    }
  }
  return;
}

