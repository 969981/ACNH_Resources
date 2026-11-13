
undefined8 FUN_014d482c(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  uVar7 = *param_2;
  if ((((uVar7 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar7)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    (**(code **)(*plVar4 + 0x60))();
  }
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    if (*(char *)(*(long *)(param_1 + 8) + 0x15) != '\0') {
      if ((long *)plVar8[0xc] == (long *)0x0) {
        return 0;
      }
      uVar5 = (**(code **)(*(long *)plVar8[0xc] + 0x100))();
      if ((uVar5 & 1) == 0) {
        return 0;
      }
    }
    puVar9 = (undefined8 *)plVar8[0x77];
    fVar10 = *(float *)(plVar8[0xd] + 0x278);
    fVar11 = *(float *)(plVar8[0xd] + 0x280);
    if (((*PTR_DAT_04bb6728 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6728), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb6720 = PTR_DAT_04bb4100 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6728);
    }
    if (((puVar9 != (undefined8 *)0x0) &&
        (uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bb6720), (uVar5 & 1) != 0)) &&
       ((*(char *)(*(long *)(param_1 + 8) + 0x15) == '\0' ||
        ((*(ushort *)((long)puVar9 + 0xaf64) >> 5 & 1) == 0)))) {
      lVar6 = *(long *)(param_1 + 0x10);
      fVar10 = fVar10 + -2.5;
      fVar11 = fVar11 + -2.5;
      iVar3 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
      iVar2 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
      *(int *)(lVar6 + 0x10) = iVar3;
      *(int *)(lVar6 + 0x14) = iVar2;
      *(int *)(lVar6 + 0x20) = iVar3 + 1;
      *(int *)(lVar6 + 0x24) = iVar2 + 1;
      lVar6 = *(long *)(param_1 + 0x10);
      *(int *)(lVar6 + 0x30) = iVar3;
      *(int *)(lVar6 + 0x34) = iVar2;
      lVar6 = *(long *)(param_1 + 8);
      lVar1 = *(long *)(param_1 + 0x10);
      iVar3 = *(int *)(lVar6 + 8);
      if ((((*(int *)(lVar1 + 0x10) <= iVar3) && (iVar3 <= *(int *)(lVar1 + 0x20))) &&
          (iVar2 = *(int *)(lVar6 + 0xc), *(int *)(lVar1 + 0x14) <= iVar2)) &&
         (iVar2 <= *(int *)(lVar1 + 0x24))) {
        if (*(int *)(puVar9[1] + 0x750) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (uint)(*(int *)(puVar9[1] + 0x750) != 2);
        }
        if (uVar7 == *(uint *)(lVar6 + 0x10)) {
          if (*(char *)(lVar6 + 0x14) == '\0') {
            if (*(int *)(lVar1 + 0x30) != iVar3) {
              return 0;
            }
            if (*(int *)(lVar1 + 0x34) != iVar2) {
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

