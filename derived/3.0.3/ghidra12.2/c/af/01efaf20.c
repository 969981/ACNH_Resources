
void FUN_01efaf20(long param_1)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  char *__dest;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 local_48;
  undefined8 *puStack_40;
  undefined4 local_34;
  
  piVar1 = (int *)(param_1 + 0x128a0);
  iVar4 = *(int *)(param_1 + 0xaf34);
  if (iVar4 != 2) {
    if (iVar4 == 1) {
      lVar7 = *(long *)(param_1 + 0x10);
      if (*(int *)(lVar7 + 0x360) != 4 || *(int *)(lVar7 + 0x4b8) == 0) {
        return;
      }
      if (*(int *)(lVar7 + 0x378) != 0x23) {
        return;
      }
    }
    else {
      if (iVar4 != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x77b4) < 0xf) {
        return;
      }
      FUN_0212eca8(param_1 + 0xaa50,1,0);
      FUN_02085e20(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3c0),0,*piVar1,PTR_DAT_04bb6928,0);
      if (1 < *(int *)(*(long *)(param_1 + 8) + 0x750) - 1U) {
        *(undefined4 *)(param_1 + 0xaf34) = 1;
        FUN_016e48b0(&local_34,*(long *)(param_1 + 8),piVar1);
        local_48 = PTR_DAT_04bb2020 + 0x10;
        puStack_40 = &DAT_0407ebb1;
        FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),&local_34,PTR_DAT_04bb65b0,&local_48,6);
        return;
      }
    }
    *(undefined4 *)(param_1 + 0xaf34) = 2;
    return;
  }
  *(undefined4 *)(param_1 + 0xaf34) = 3;
  puVar3 = PTR_DAT_04bb27c0;
  if ((*piVar1 != 0) || (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 == 0)) goto LAB_01efb010;
  uVar9 = *(uint *)(param_1 + 0x7800);
  if ((uVar9 == 0) ||
     (((plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0 ||
       ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)))) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_01efb184;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01efb184:
    uVar9 = 0;
  }
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar2 = 0;
    if ((int)lVar7 == 1) {
      uVar2 = uVar9;
    }
    if (((uVar6 & 1) != 0) && (uVar2 != 0)) {
      puVar10 = (undefined8 *)plVar8[0x77];
      if (((*PTR_DAT_04bb6860 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6860), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb6858 = PTR_DAT_04bb4100 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6860);
      }
      if ((puVar10 == (undefined8 *)0x0) ||
         (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb6858), (uVar6 & 1) == 0)) {
        puVar10 = (undefined8 *)plVar8[0x77];
        if (((*PTR_DAT_04bb69b8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb69b8), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb69b0 = PTR_DAT_04bb6990 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb69b8);
        }
        if ((puVar10 == (undefined8 *)0x0) ||
           (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb69b0), (uVar6 & 1) == 0)) {
          puVar10 = (undefined8 *)plVar8[0x77];
          if (((*PTR_DAT_04bb6b78 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6b78), iVar4 != 0)) {
            *(undefined **)PTR_DAT_04bb6b70 = PTR_DAT_04bb4100 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb6b78);
          }
          if ((puVar10 != (undefined8 *)0x0) &&
             (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb6b70), (uVar6 & 1) != 0)) {
            *(undefined4 *)(puVar10 + 0x1623) = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
          }
          goto LAB_01efb010;
        }
        lVar7 = *(long *)(param_1 + 8);
        uVar9 = 0x28a0;
      }
      else {
        lVar7 = *(long *)(param_1 + 8);
        uVar9 = 0x274c;
      }
      *(undefined4 *)((long)puVar10 + (ulong)(uVar9 | 0x10000)) = *(undefined4 *)(lVar7 + 0x230);
    }
  }
LAB_01efb010:
  local_48 = (undefined *)((ulong)local_48._4_4_ << 0x20);
  lVar7 = *(long *)(param_1 + 0x10);
  local_34 = 0;
  FUN_01e5a930(0x40000000,lVar7,0xd,PTR_DAT_04bb2150,&local_48,&local_34,PTR_DAT_04bc1600,6);
  __dest = *(char **)(lVar7 + 0x3b8);
  if (__dest != "NpcGreeting") {
    iVar4 = 0xb;
    if (*(int *)(lVar7 + 0x3c0) < 0xc) {
      iVar4 = *(int *)(lVar7 + 0x3c0) + -1;
    }
    memcpy(__dest,"NpcGreeting",(long)iVar4);
    __dest[iVar4] = '\0';
  }
  *(undefined4 *)(lVar7 + 0x3a0) = 0;
  *(undefined1 *)(lVar7 + 0x410) = 0;
  return;
}

