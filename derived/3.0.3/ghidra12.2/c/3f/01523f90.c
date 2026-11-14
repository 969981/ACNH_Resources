
void FUN_01523f90(undefined8 *param_1,long param_2,undefined4 param_3,ulong param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 local_94;
  short local_90 [4];
  long local_88;
  long local_80;
  undefined *local_78;
  int local_70;
  int local_6c;
  undefined4 local_64;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  local_64 = param_3;
  if (lVar8 == 0) {
    uVar10 = 0;
    plVar9 = (long *)0x0;
    bVar4 = false;
    uVar12 = 0;
    goto LAB_015240e8;
  }
  uVar10 = *(uint *)(DAT_0520f098 + 0x10);
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar12 = 1;
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_01524088;
      uVar12 = 0x101000100 >> (((ulong)*(uint *)(lVar8 + 0x5e8) & 7) << 3);
      uVar11 = (uint)uVar12;
    }
  }
  else {
LAB_01524088:
    uVar12 = 0;
    uVar11 = 0;
  }
  if (plVar9 == (long *)0x0) {
    uVar10 = 0;
    bVar4 = false;
  }
  else {
    bVar4 = (int)plVar9[0x2a] == 1;
    uVar10 = *(uint *)(plVar9 + 0x49) >> 4 & 1;
    if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7d58);
    }
    uVar12 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb7d50);
    if ((uVar12 & 1) == 0) {
      uVar11 = 0;
    }
    uVar12 = (ulong)uVar11;
  }
LAB_015240e8:
  uVar3 = local_64;
  iVar1 = *(int *)(param_2 + 0x10);
  local_6c = *(int *)(param_2 + 0x14);
  local_88 = param_2 + 8;
  local_80 = param_2 + 0x18;
  local_78 = PTR_DAT_04bb2010 + 0x10;
  iVar5 = *(int *)(param_2 + 0x24) + 1;
  if (iVar5 != local_6c) {
    local_70 = iVar1;
    do {
      FUN_01a5033c(local_90,*param_1,uVar3,&local_78,0);
      if (local_90[0] != -2) {
        FUN_0277e56c(local_90,1);
        if (((param_4 & 1) != 0) &&
           (uVar7 = (*(code *)**(undefined8 **)param_1[3])((undefined8 *)param_1[3],local_90),
           (uVar7 & 1) != 0)) {
          FUN_0267d480(param_1[1],0,local_90,0);
        }
        if ((*(char *)param_1[2] != '\0' &&
             ((uVar12 & 0xff) != 0 && (plVar9 != (long *)0x0 && bVar4))) && (uVar10 != 0)) {
          local_94 = 0;
          FUN_01492fac(plVar9,&local_64,&local_78,&local_94);
        }
        FUN_01a50cb0(*param_1,uVar3,&local_78);
      }
      if (local_70 < *(int *)(local_80 + 8)) {
        local_70 = local_70 + 1;
      }
      else {
        local_6c = local_6c + 1;
        local_70 = *(int *)(local_88 + 8);
      }
    } while (iVar1 != local_70 || iVar5 != local_6c);
  }
  return;
}

