
void FUN_0227f050(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = *(float *)(param_1 + 0x2cc);
  fVar7 = *(float *)(param_1 + 0x2c8) * 5.0;
  *(float *)(param_1 + 0x2cc) = fVar7;
  *(float *)(param_1 + 0x2d4) = fVar7 + fVar7;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x178))();
  plVar6 = *(long **)(param_1 + 0x90);
  *(float *)(param_1 + 0x2e0) = *(float *)(param_1 + 0x2e0) + (*(float *)(param_1 + 0x2cc) - fVar11)
  ;
  if (plVar6 != (long *)0x0) {
    if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb5b50 = PTR_DAT_04bb5b60 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5b58);
    }
    uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bb5b50);
    if ((uVar4 & 1) != 0) {
      if ((*(byte *)(param_1 + 0x29c) >> 3 & 1) == 0) {
        fVar11 = *(float *)(param_1 + 0x2d0);
        fVar7 = *(float *)(param_1 + 0x2cc);
        if (fVar11 < fVar7) {
          fVar10 = fVar11 + 0.2;
          bVar1 = false;
          bVar2 = false;
          if (fVar11 <= fVar10) {
            bVar1 = false;
            bVar2 = true;
            if (!NAN(fVar10) && !NAN(fVar7)) {
              bVar1 = fVar10 < fVar7;
              bVar2 = false;
            }
          }
          fVar11 = fVar7;
          if (bVar1 != bVar2) {
            fVar11 = fVar10;
          }
        }
        if (fVar11 < fVar7) {
          fVar7 = fVar11;
        }
        lVar5 = *(long *)(param_1 + 0x2dc);
        uVar9 = *(undefined4 *)(param_1 + 0x2e4);
        *(uint *)(plVar6[0x4f] + 0x68) = *(uint *)(plVar6[0x4f] + 0x68) | 0x800;
        uVar8 = *(undefined4 *)(param_1 + 0x2d4);
        *(undefined4 *)(plVar6 + 0x73) = uVar9;
        plVar6[0x72] = lVar5;
        *(float *)((long)plVar6 + 0x39c) = fVar7;
        *(undefined4 *)(plVar6 + 0x74) = uVar8;
        *(undefined4 *)(plVar6[0x4f] + 0x40) = 0x200;
      }
      else {
        fVar7 = *(float *)(param_1 + 0x2cc) * 0.8;
        uVar9 = *(undefined4 *)(param_1 + 0x2d4);
        lVar5 = *(long *)(param_1 + 0x2dc);
        *(undefined4 *)(plVar6 + 0x73) = *(undefined4 *)(param_1 + 0x2e4);
        plVar6[0x72] = lVar5;
        *(undefined4 *)(plVar6 + 0x74) = uVar9;
        *(float *)((long)plVar6 + 0x39c) = fVar7;
      }
      *(float *)(param_1 + 0x2d0) = fVar7;
    }
  }
  return;
}

