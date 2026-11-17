
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03153110(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  short *psVar9;
  ulong uVar10;
  long *plVar11;
  
  uVar3 = FUN_03152eac();
  puVar1 = PTR_DAT_04bb27c0;
  if (uVar3 < 2) {
    if (uVar3 == 1) {
      uVar6 = FUN_0252f298(param_1 + 0x1f8);
      puVar1 = PTR_DAT_04bb27c0;
      if ((uVar6 & 1) != 0) {
        lVar8 = *(long *)PTR_DAT_04bb27c0;
        if (lVar8 != 0) {
          uVar3 = *(uint *)PTR_DAT_04bb32f8;
          if (((uVar3 == 0) ||
              (plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                                   ((ulong)(uVar3 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
             (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar3))))
          {
            plVar11 = (long *)0x0;
          }
          if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
            plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            (**(code **)(*plVar7 + 0x60))();
          }
          if (plVar11 != (long *)0x0) {
            if (((*PTR_DAT_04bb3280 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar5 != 0)) {
              *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb3280);
            }
            (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3278);
          }
          if ((((*(long *)puVar1 != 0) && (uVar3 = *(uint *)((long)plVar11 + 0x274), uVar3 != 0)) &&
              (plVar11 = *(long **)(*(long *)(*(long *)(*(long *)puVar1 + 0x1c0) + 8) +
                                   ((ulong)(uVar3 >> 0x11) & 0x7ff8)), plVar11 != (long *)0x0)) &&
             (((*(uint *)(plVar11 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar11 + 0x46) == uVar3))))
          {
            if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar5 != 0)) {
              *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb32c0);
            }
            uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb32b8);
            if ((uVar6 & 1) != 0) {
              *(undefined1 *)((long)plVar11 + 0x31764) = 0;
            }
          }
        }
        *(undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0x200) * 4 + 0x1f0) = 7;
      }
    }
    else {
      lVar8 = *(long *)PTR_DAT_04bb27c0;
      if (lVar8 == 0) {
        plVar11 = (long *)0x0;
      }
      else {
        uVar3 = *(uint *)PTR_DAT_04bb32f8;
        if ((((uVar3 == 0) ||
             (plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                                  ((ulong)(uVar3 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
            ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar3)) {
          plVar11 = (long *)0x0;
        }
        if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
          plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          (**(code **)(*plVar7 + 0x60))();
        }
        if (plVar11 != (long *)0x0) {
          if (((*PTR_DAT_04bb3280 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar5 != 0)) {
            *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb3280);
          }
          (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3278);
        }
      }
      uVar6 = FUN_00901910(plVar11);
      if ((uVar6 & 1) == 0) {
        lVar8 = *(long *)PTR_DAT_04bb4718;
        if ((lVar8 == 0) || (uVar10 = (ulong)*(byte *)(param_1 + 0x1f8), 7 < uVar10)) {
          if ((DAT_054f0c70 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
            psVar9 = &DAT_054f0c08;
            if (iVar5 != 0) {
              DAT_054f0c6c = 0;
              _DAT_054f0c44 = 0;
              DAT_054f0c1c._0_4_ = 0;
              DAT_054f0c1c._4_4_ = 0;
              DAT_054f0c24._0_4_ = 0;
              DAT_054f0c24._4_4_ = 0;
              DAT_054f0c2c._0_4_ = 0;
              DAT_054f0c2c._4_4_ = 0;
              DAT_054f0c34._0_4_ = 0;
              DAT_054f0c34._4_4_ = 0;
              DAT_054f0c3c._0_4_ = 0;
              DAT_054f0c3c._4_4_ = 0;
              _DAT_054f0c08 = 0;
              _DAT_054f0c10 = 1;
              DAT_054f0c14._0_4_ = 0;
              DAT_054f0c14._4_4_ = 0;
              DAT_054f0c68 = 1;
              DAT_054f0c48 = 0;
              DAT_054f0c50 = 0;
              DAT_054f0c58 = 0;
              DAT_054f0c60 = 0;
              __cxa_guard_release(&DAT_054f0c70);
              psVar9 = &DAT_054f0c08;
            }
          }
          else {
            psVar9 = &DAT_054f0c08;
          }
        }
        else {
          psVar9 = (short *)(lVar8 + uVar10 * 0xd0 +
                             (ulong)(*(uint *)(lVar8 + uVar10 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
        }
        if (((char)psVar9[0x32] == '\0') || (*psVar9 != *(short *)PTR_DAT_04bb6298)) {
          uVar3 = 1;
        }
        else {
          uVar3 = *(uint *)(psVar9 + 0x30);
        }
        uVar3 = (uint)(uVar3 < 9) & 0x19cU >> (ulong)(uVar3 & 0x1f);
      }
      else {
        uVar3 = 0;
      }
      plVar7 = *(long **)(**(long **)(*(long *)(param_1 + 0x210) + 0x3f8) + 0x1b0);
      if (plVar7 == (long *)0x0) {
        if (uVar3 != 0) {
          return;
        }
      }
      else {
        uVar4 = (**(code **)(*plVar7 + 0x48))();
        if (uVar3 != 0 || ((uVar4 ^ 1) & 1) != 0) {
          return;
        }
      }
      puVar2 = PTR_DAT_04bb6270;
      if ((uVar6 & 1) == 0) {
        if (*(long *)PTR_DAT_04bb6270 == 0) {
          return;
        }
        lVar8 = param_1 + 0x1f8;
        uVar6 = FUN_00a738a0(lVar8,0);
        if ((uVar6 & 1) != 0) {
          return;
        }
        uVar6 = FUN_02553884(10,lVar8,0,1);
        if ((uVar6 & 1) == 0) {
          return;
        }
        uVar6 = FUN_0255403c(10,lVar8,0);
        if ((uVar6 & 1) == 0) {
          return;
        }
        uVar6 = FUN_00a71bb8(*(undefined8 *)puVar2,lVar8,0xffffffffffffffff,4);
        if ((uVar6 & 1) == 0) {
          return;
        }
      }
      if ((((*(long *)puVar1 != 0) && (uVar3 = *(uint *)((long)plVar11 + 0x274), uVar3 != 0)) &&
          (plVar11 = *(long **)(*(long *)(*(long *)(*(long *)puVar1 + 0x1c0) + 8) +
                               ((ulong)(uVar3 >> 0x11) & 0x7ff8)), plVar11 != (long *)0x0)) &&
         (((*(uint *)(plVar11 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar11 + 0x46) == uVar3)))) {
        if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb32c0);
        }
        uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb32b8);
        if ((uVar6 & 1) != 0) {
          *(undefined1 *)((long)plVar11 + 0x31764) = 0;
        }
      }
      if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
        *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 8;
      }
    }
  }
  return;
}

