
void FUN_0226f350(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  undefined1 *__src;
  int iVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  undefined1 *__dest;
  undefined *local_98;
  undefined1 *local_90;
  int local_88;
  undefined1 local_84 [31];
  undefined1 local_65;
  
  if (*(int *)(param_1 + 0x448) != 1) {
    return;
  }
  plVar9 = *(long **)(param_1 + 0x68);
  *(int *)(param_1 + 0x44c) = *(int *)(param_1 + 0x44c) + -1;
  if (plVar9 != (long *)0x0) {
    if (((*PTR_DAT_04bb2f68 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb2f68), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb2f60 = PTR_DAT_04bb2e20 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2f68);
    }
    uVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,PTR_DAT_04bb2f60);
    if ((uVar5 & 1) != 0) {
      iVar4 = *(int *)(param_1 + 0x440);
      if (iVar4 == 2) {
        iVar4 = *(int *)(param_1 + 0x478);
      }
      else if (iVar4 == 1) {
        if ((ulong)*(byte *)(param_1 + 0x474) < 8) {
          piVar1 = (int *)PTR_DAT_04bb3238;
          if (*(long *)PTR_DAT_04bb4718 != 0) {
            piVar1 = (int *)(*(long *)PTR_DAT_04bb4718 + (ulong)*(byte *)(param_1 + 0x474) * 4 +
                            0xde8);
          }
          iVar4 = *piVar1;
        }
        else {
          iVar4 = FUN_0252cb54();
        }
      }
      else if (iVar4 == 0) {
        local_98 = PTR_DAT_04bb2020 + 0x10;
        local_90 = &DAT_0407154e;
        iVar4 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_98,PTR_DAT_04bb3238,1);
      }
      else {
        iVar4 = 0;
      }
      lVar8 = 0;
      local_88 = 0x20;
      local_65 = 0;
      puVar2 = PTR_DAT_04bb2f90 + 0x43;
      if (*(int *)(param_1 + 0x444) != 0) {
        puVar2 = PTR_DAT_04bb2f90 + 0x31;
      }
      do {
        if (puVar2[lVar8] == '\0') {
LAB_0226f4e4:
          iVar6 = (int)lVar8;
joined_r0x0226f4e8:
          if (0x1f < iVar6) {
            iVar6 = 0x1f;
          }
          goto LAB_0226f4f0;
        }
        if (puVar2[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_0226f4e4;
        }
        if (puVar2[lVar8 + 2] == '\0') {
          iVar6 = (int)lVar8 + 2;
          goto joined_r0x0226f4e8;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      iVar6 = 0;
LAB_0226f4f0:
      local_90 = local_84;
      memcpy(local_84,puVar2,(long)iVar6);
      __src = local_90;
      puVar2 = PTR_DAT_04bb2028;
      local_84[iVar6] = 0;
      *(int *)((long)plVar9 + 0x2e4) = iVar4;
      local_98 = puVar2 + 0x10;
      if (iVar4 != 0) {
        *(undefined4 *)(plVar9 + 0x68) = 0xffffffff;
      }
      *(undefined1 *)(plVar9 + 0x76) = 1;
      uVar3 = *(uint *)(param_1 + 0x44c);
      __dest = (undefined1 *)plVar9[0x5e];
      local_90[(long)local_88 + -1] = 0;
      if (__dest != local_90) {
        (**(code **)(puVar2 + 0x28))(&local_98);
        lVar8 = 0;
        do {
          if (local_90[lVar8] == '\0') goto LAB_0226f5bc;
          if (local_90[lVar8 + 1] == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_0226f5bc;
          }
          if (local_90[lVar8 + 2] == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_0226f5bc;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_0226f5bc:
        iVar4 = (int)lVar8;
        if ((int)plVar9[0x5f] <= (int)lVar8) {
          iVar4 = (int)plVar9[0x5f] + -1;
        }
        memcpy(__dest,__src,(long)iVar4);
        __dest[iVar4] = 0;
      }
      *(undefined4 *)(plVar9 + 0x68) = 0xffffffff;
      if (uVar3 == 0) {
        uVar7 = *(undefined4 *)((long)plVar9 + 0x424);
      }
      else {
        *(byte *)((long)plVar9 + 0x42c) = (byte)(uVar3 >> 0x1f);
        uVar7 = 0;
        *(uint *)(plVar9 + 0x85) = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
        *(uint *)((long)plVar9 + 0x424) = uVar3 & (int)uVar3 >> 0x1f;
        *(undefined8 *)((long)plVar9 + 0x3ec) = *(undefined8 *)((long)plVar9 + 0x3bc);
        *(undefined8 *)((long)plVar9 + 0x3e4) = *(undefined8 *)((long)plVar9 + 0x3b4);
        *(undefined8 *)((long)plVar9 + 0x3fc) = *(undefined8 *)((long)plVar9 + 0x3cc);
        *(undefined8 *)((long)plVar9 + 0x3f4) = *(undefined8 *)((long)plVar9 + 0x3c4);
        *(undefined8 *)((long)plVar9 + 0x40c) = *(undefined8 *)((long)plVar9 + 0x3dc);
        *(undefined8 *)((long)plVar9 + 0x404) = *(undefined8 *)((long)plVar9 + 0x3d4);
      }
      *(undefined4 *)(plVar9 + 0x84) = uVar7;
      *(bool *)((long)plVar9 + 0x42d) = uVar3 != 0;
    }
  }
  FUN_0226d950(param_1);
  *(undefined4 *)(param_1 + 0x448) = 2;
  return;
}

