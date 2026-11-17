
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_03147594(long param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  short *psVar8;
  long lVar9;
  
  if (*(long *)(param_1 + 0x210) != 0) {
    plVar5 = *(long **)(**(long **)(*(long *)(param_1 + 0x210) + 0x3f8) + 0x1b0);
    if (plVar5 == (long *)0x0) {
      return false;
    }
    uVar6 = (**(code **)(*plVar5 + 0x60))();
    if ((uVar6 & 1) == 0) {
      return false;
    }
    if (*(long *)(param_1 + 0x210) != 0) {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x210) + 0x578);
      if (((*PTR_DAT_04bc84e8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc84e8), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bc84e0 = PTR_DAT_04bb7c30 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc84e8);
      }
      if ((((puVar7 != (undefined8 *)0x0) &&
           (uVar6 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc84e0), (uVar6 & 1) != 0)) &&
          (*(long *)(puVar7[0x72] + 0xa0) != 0)) &&
         (*(char *)(*(long *)(puVar7[0x72] + 0xa0) + 0xbc) != '\0')) {
        lVar9 = *(long *)PTR_DAT_04bb4e28;
        if (lVar9 == 0) {
          lVar9 = *(long *)PTR_DAT_04bb4718;
          if ((lVar9 == 0) || (uVar6 = (ulong)*(byte *)(param_1 + 0x1f8), 7 < uVar6)) {
            if ((DAT_054f0c70 & 1) == 0) {
              iVar4 = __cxa_guard_acquire(&DAT_054f0c70);
              psVar8 = &DAT_054f0c08;
              cVar1 = DAT_054f0c6c;
              if (iVar4 != 0) {
                DAT_054f0c1c._0_4_ = 0;
                DAT_054f0c1c._4_4_ = 0;
                DAT_054f0c68 = 1;
                DAT_054f0c6c = '\0';
                DAT_054f0c24._0_4_ = 0;
                DAT_054f0c24._4_4_ = 0;
                DAT_054f0c2c._0_4_ = 0;
                DAT_054f0c2c._4_4_ = 0;
                _DAT_054f0c44 = 0;
                DAT_054f0c34._0_4_ = 0;
                DAT_054f0c34._4_4_ = 0;
                DAT_054f0c3c._0_4_ = 0;
                DAT_054f0c3c._4_4_ = 0;
                _DAT_054f0c08 = 0;
                _DAT_054f0c10 = 1;
                DAT_054f0c14._0_4_ = 0;
                DAT_054f0c14._4_4_ = 0;
                DAT_054f0c48 = 0;
                DAT_054f0c50 = 0;
                DAT_054f0c58 = 0;
                DAT_054f0c60 = 0;
                __cxa_guard_release(&DAT_054f0c70);
                cVar1 = DAT_054f0c6c;
              }
            }
            else {
              psVar8 = &DAT_054f0c08;
              cVar1 = DAT_054f0c6c;
            }
          }
          else {
            lVar9 = lVar9 + uVar6 * 0xd0 + (ulong)(*(uint *)(lVar9 + uVar6 * 4 + 0xd68) & 1) * 0x68;
            psVar8 = (short *)(lVar9 + 0x6e8);
            cVar1 = *(char *)(lVar9 + 0x74c);
          }
          if (((cVar1 == '\0') || (*psVar8 != *(short *)PTR_DAT_04bb6298)) ||
             ((0x148 < *(uint *)(psVar8 + 2) || (*(uint *)(psVar8 + 2) != 0xf3))))
          goto LAB_03147898;
          uVar2 = 1;
        }
        else {
          uVar6 = FUN_0372f8b0(lVar9,0);
          if (((uVar6 & 1) == 0) || (uVar6 = FUN_0372dfb0(lVar9,0), (uVar6 & 1) != 0)) {
            uVar2 = 1;
          }
          else {
            uVar2 = FUN_0372e2d0(lVar9,0);
          }
          uVar6 = FUN_0372f8b0(lVar9,1);
          if (((uVar6 & 1) != 0) && (uVar6 = FUN_0372dfb0(lVar9,1), (uVar6 & 1) == 0)) {
            uVar3 = FUN_0372e2d0(lVar9,1);
            uVar2 = uVar2 & uVar3;
          }
          lVar9 = *(long *)PTR_DAT_04bb4718;
          if ((lVar9 == 0) || (uVar6 = (ulong)*(byte *)(param_1 + 0x1f8), 7 < uVar6)) {
            if (((DAT_054f0c70 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_054f0c70), iVar4 != 0)) {
              DAT_054f0c1c._0_4_ = 0;
              DAT_054f0c1c._4_4_ = 0;
              DAT_054f0c68 = 1;
              DAT_054f0c6c = '\0';
              DAT_054f0c24._0_4_ = 0;
              DAT_054f0c24._4_4_ = 0;
              DAT_054f0c2c._0_4_ = 0;
              DAT_054f0c2c._4_4_ = 0;
              _DAT_054f0c44 = 0;
              DAT_054f0c34._0_4_ = 0;
              DAT_054f0c34._4_4_ = 0;
              DAT_054f0c3c._0_4_ = 0;
              DAT_054f0c3c._4_4_ = 0;
              _DAT_054f0c08 = 0;
              _DAT_054f0c10 = 1;
              DAT_054f0c14._0_4_ = 0;
              DAT_054f0c14._4_4_ = 0;
              DAT_054f0c48 = 0;
              DAT_054f0c50 = 0;
              DAT_054f0c58 = 0;
              DAT_054f0c60 = 0;
              __cxa_guard_release(&DAT_054f0c70);
            }
            psVar8 = &DAT_054f0c08;
            cVar1 = DAT_054f0c6c;
          }
          else {
            lVar9 = lVar9 + uVar6 * 0xd0 + (ulong)(*(uint *)(lVar9 + uVar6 * 4 + 0xd68) & 1) * 0x68;
            psVar8 = (short *)(lVar9 + 0x6e8);
            cVar1 = *(char *)(lVar9 + 0x74c);
          }
          if ((((cVar1 == '\0') || (*psVar8 != *(short *)PTR_DAT_04bb6298)) ||
              (0x148 < *(uint *)(psVar8 + 2))) || (*(uint *)(psVar8 + 2) != 0xf3)) {
            if ((uVar2 & 1) == 0) {
              return false;
            }
            goto LAB_03147898;
          }
        }
        uVar6 = FUN_025461a0(param_1 + 0x1f8);
        if ((uVar2 & 1) == 0) {
          return false;
        }
        if ((uVar6 & 1) == 0) {
          return false;
        }
      }
    }
  }
LAB_03147898:
  if (*(int *)(param_1 + 0x288) == 7) {
    return false;
  }
  return *(int *)(param_1 + 0x1b0) == 3;
}

