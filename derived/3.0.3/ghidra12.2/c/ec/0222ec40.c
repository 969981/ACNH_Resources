
/* WARNING: Removing unreachable block (ram,0x0222ed98) */

void FUN_0222ec40(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  uint local_8c;
  long local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  
  puVar7 = PTR_DAT_04bb27c0;
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 == 0) {
    return;
  }
  uVar15 = *(uint *)PTR_DAT_04bb5858;
  if ((((uVar15 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                            ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
      ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar15)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
    plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)puVar7;
    iVar9 = (**(code **)(*plVar12 + 0x60))();
    if (iVar9 < 0x11) {
      uVar15 = 1;
      goto joined_r0x0222ed18;
    }
    if (*(uint *)(lVar13 + 0x5e8) < 5) {
      uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0222ed18;
    }
  }
  uVar15 = 0;
joined_r0x0222ed18:
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0x2a];
    uVar3 = *(uint *)(plVar14 + 0x49);
    if (((*PTR_DAT_04bb5848 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5848), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb5840 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5848);
    }
    uVar10 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb5840);
    puVar8 = PTR_DAT_04bb3350;
    if ((((int)lVar13 == 1) && ((uVar10 & uVar15) != 0)) && ((uVar3 >> 4 & 1) != 0)) {
      if ((*(byte *)(param_2 + 8) >> 1 & 1) == 0) {
        param_2 = param_2 + 0x18;
      }
      else {
        param_2 = param_2 + 0x350;
      }
      uVar16 = 0;
      iVar9 = *(int *)(param_2 + 0x24) + 2;
      iVar4 = *(int *)(param_2 + 0x10) + -2;
      local_8c = *(uint *)((long)plVar14 + 0x2cc);
      iVar1 = *(int *)(param_2 + 0x20) + 2;
      iVar5 = *(int *)(param_2 + 0x14) + -2;
      local_88 = plVar14[0x5a];
      local_80 = (int)plVar14[0x5b];
      local_7c = *(undefined8 *)((long)plVar14 + 0x2dc);
      local_74 = *(undefined4 *)((long)plVar14 + 0x2e4);
      puVar2 = PTR_DAT_04bb2e50 + 0x10;
      do {
        uVar15 = *(uint *)((long)&local_8c + (-(uVar16 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2))
        ;
        if ((uVar15 != 0) && (lVar13 = *(long *)puVar7, lVar13 != 0)) {
          plVar14 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                              ((ulong)(uVar15 >> 0x11) & 0x7ff8));
          if ((plVar14 == (long *)0x0) ||
             (((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar14 + 0x46) != uVar15))))
          {
            plVar14 = (long *)0x0;
          }
          if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
            plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
            lVar13 = *(long *)puVar7;
            iVar11 = (**(code **)(*plVar12 + 0x60))();
            if (iVar11 < 0x11) {
              uVar15 = 1;
            }
            else {
              if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_0222eeb8;
              uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_0222eeb8:
            uVar15 = 0;
          }
          if (plVar14 != (long *)0x0) {
            lVar13 = plVar14[0x2a];
            uVar3 = *(uint *)(plVar14 + 0x49);
            if (((*PTR_DAT_04bc2cb0 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc2cb0), iVar11 != 0)) {
              *(undefined **)PTR_DAT_04bc2ca8 = puVar2;
              __cxa_guard_release(PTR_DAT_04bc2cb0);
            }
            uVar10 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bc2ca8);
            if ((((int)lVar13 == 1) && ((uVar10 & uVar15) != 0)) && ((uVar3 >> 4 & 1) != 0)) {
              fVar17 = *(float *)(plVar14[0xd] + 0x278);
              fVar18 = *(float *)(plVar14[0xd] + 0x280);
              iVar11 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
              iVar6 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
              if (((iVar4 <= iVar11 && iVar11 <= iVar1) && iVar5 <= iVar6) && iVar6 == iVar9 ||
                  (((iVar4 <= iVar11 && iVar11 <= iVar1) && iVar5 <= iVar6) && iVar6 - iVar9 < 0) !=
                  (((iVar4 <= iVar11 && iVar11 <= iVar1) && iVar5 <= iVar6) && SBORROW4(iVar6,iVar9)
                  )) {
                FUN_006fb3d0(plVar14);
              }
            }
          }
        }
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulong)uVar15;
      } while (uVar15 != 7);
    }
  }
  return;
}

