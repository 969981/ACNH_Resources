
void FUN_018ab1c4(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar9 = *param_2;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
      goto joined_r0x018ab27c;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x018ab27c;
    }
  }
  uVar9 = 0;
joined_r0x018ab27c:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3ff0);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3fe8);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      uVar9 = *(uint *)((long)plVar8 + 700);
      fVar11 = *(float *)(plVar8[0xd] + 0x278);
      fVar10 = *(float *)(plVar8[0xd] + 0x280);
      if (*(uint *)(*(long *)PTR_DAT_04bb47e0 + 0x5f0) <= uVar9) {
        uVar9 = 0;
      }
      if (DAT_052ae7e8 != 0) {
        iVar4 = (int)((float)(int)fVar11 / 10.0) - (uint)(fVar11 < 0.0);
        iVar2 = (int)((float)(int)fVar10 / 10.0) - (uint)(fVar10 < 0.0);
        if (((DAT_052ae7c8 <= iVar4 && iVar4 <= DAT_052ae7d8) && DAT_052ae7cc <= iVar2) &&
            iVar2 <= DAT_052ae7dc) {
          lVar7 = (long)(int)((iVar4 - DAT_052ae7c8) + DAT_052ae7e0 * (iVar2 - DAT_052ae7cc));
          if (DAT_052ae7e4 <= (uint)(iVar2 - DAT_052ae7cc) ||
              DAT_052ae7e0 <= (uint)(iVar4 - DAT_052ae7c8)) {
            lVar7 = 0;
          }
          *(byte *)(DAT_052ae7e8 + lVar7) =
               *(byte *)(DAT_052ae7e8 + lVar7) |
               (byte)(1 << (ulong)(*(uint *)(*(long *)(*(long *)PTR_DAT_04bb47e0 + 0x5f8) +
                                             (long)(int)uVar9 * 8 + 4) & 0x1f));
        }
      }
    }
  }
  return;
}

