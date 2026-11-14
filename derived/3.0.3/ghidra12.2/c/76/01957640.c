
uint FUN_01957640(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 local_3c;
  undefined4 local_34;
  
  lVar9 = DAT_052cc470;
  if ((DAT_052cc470 != 0) &&
     (((*(int *)(DAT_052cc470 + 0x160) == 0 || *(char **)(DAT_052cc470 + 0x168) == (char *)0x0 ||
       (**(char **)(DAT_052cc470 + 0x168) == '\0')) &&
      (plVar12 = *(long **)PTR_DAT_04bb27d0, *(byte *)(*plVar12 + 0x476) < 2)))) {
    if ((plVar12[5] != 0) && ((int)plVar12[0x10] == 1)) {
      local_3c = 0x283;
      lVar1 = DAT_052cc470 + 0x680;
      FUN_0277d4ac(&local_3c);
      lVar9 = (**(code **)(*(long *)(lVar9 + 0x680) + 0x20))(lVar1);
      uVar6 = FUN_0277d6c4(&local_3c);
      if ((0x752 < (uVar6 >> 3 & 0x1fff)) ||
         ((*(uint *)(lVar9 + (ulong)((uVar6 & 0xffff) >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) == 0)
         ) goto LAB_0195769c;
    }
    puVar5 = PTR_DAT_04bb27c0;
    sVar4 = *(short *)PTR_DAT_04bb6298;
    if (sVar4 != -1) {
      local_34 = 0x20;
      puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
      if (0xff < (uint)(int)sVar4) {
        puVar3 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar3 + 4) & 1) != 0) goto LAB_0195769c;
    }
    lVar9 = *(long *)PTR_DAT_04bb27c0;
    if (lVar9 != 0) {
      uVar6 = *(uint *)PTR_DAT_04bb4b88;
      if (((uVar6 == 0) ||
          (plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                               ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
         (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar6)))) {
        plVar12 = (long *)0x0;
      }
      if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
        plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar9 = *(long *)puVar5;
        iVar7 = (**(code **)(*plVar10 + 0x60))();
        if (iVar7 < 0x11) {
          uVar6 = 1;
        }
        else {
          if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_0195781c;
          uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0195781c:
        uVar6 = 0;
      }
      if (plVar12 != (long *)0x0) {
        lVar9 = plVar12[0x2a];
        if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar7 != 0)) {
          *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb4b78);
        }
        uVar11 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb4b70);
        uVar8 = 0;
        uVar2 = 0;
        if ((int)lVar9 == 1) {
          uVar2 = uVar6;
        }
        if (((uVar11 & 1) != 0) && (uVar2 != 0)) {
          uVar8 = 0;
          if (plVar12[0x54] != 0) {
            uVar8 = FUN_018a0140(plVar12[0x54],param_1);
          }
        }
        goto LAB_019576a0;
      }
    }
  }
LAB_0195769c:
  uVar8 = 0;
LAB_019576a0:
  return uVar8 & 1;
}

