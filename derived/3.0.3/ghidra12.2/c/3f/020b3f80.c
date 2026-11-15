
uint FUN_020b3f80(long param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  undefined **local_b8;
  uint *puStack_b0;
  undefined8 *local_a8;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  uint local_84;
  int local_80 [2];
  undefined8 *local_78 [2];
  char local_68;
  char local_5c;
  char local_54;
  
  puVar3 = PTR_DAT_04bb27c0;
  if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
     (uVar2 = **(ushort **)PTR_DAT_04bc3a48, (uVar2 & 1) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x10) != 1) goto LAB_020b4084;
  }
  else if (((uVar2 ^ 0xffff) & 3) != 0) {
LAB_020b4084:
    uVar5 = 1;
    goto LAB_020b41c4;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 != 0) {
    uVar5 = *(uint *)PTR_DAT_04bb32f8;
    if ((((uVar5 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                              ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar5)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar3;
      iVar4 = (**(code **)(*plVar6 + 0x60))();
      if (iVar4 < 0x11) {
        uVar11 = 1;
      }
      else {
        if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_020b408c;
        uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_020b408c:
      uVar11 = 0;
    }
    if (plVar10 != (long *)0x0) {
      lVar8 = plVar10[0x2a];
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3278);
      uVar5 = 0;
      uVar1 = 0;
      if ((int)lVar8 == 1) {
        uVar1 = uVar11;
      }
      if (((uVar7 & 1) == 0) || (uVar1 == 0)) goto LAB_020b41c4;
      FUN_008fbfa0(local_80,plVar10);
      if (local_80[0] == 3) {
        local_b8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        puStack_b0 = (uint *)0x40eeaa9;
        local_84 = FUN_020a4f40(param_1,&local_b8,PTR_DAT_04bb3238,1);
        if ((local_84 != 0) && (lVar8 = *(long *)puVar3, lVar8 != 0)) {
          plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                              (ulong)(local_84 >> 0x14) * 8);
          if ((plVar10 == (long *)0x0) ||
             (((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar10 + 0x46) != local_84))
             )) {
            plVar10 = (long *)0x0;
          }
          if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
            plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar8 = *(long *)puVar3;
            iVar4 = (**(code **)(*plVar6 + 0x60))();
            if (iVar4 < 0x11) {
              uVar11 = 1;
            }
            else {
              if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_020b4224;
              uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_020b4224:
            uVar11 = 0;
          }
          if (plVar10 != (long *)0x0) {
            lVar8 = plVar10[0x2a];
            if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
              *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb37d8);
            }
            uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
            uVar5 = 0;
            uVar1 = 0;
            if ((int)lVar8 == 1) {
              uVar1 = uVar11;
            }
            if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
              plVar6 = (long *)plVar10[0x77];
              if (((*PTR_DAT_04bb6710 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar4 != 0)) {
                *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
                __cxa_guard_release(PTR_DAT_04bb6710);
              }
              uVar5 = 0;
              if (plVar6 != (long *)0x0) {
                uVar7 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bb6708);
                if ((uVar7 & 1) == 0) goto LAB_020b433c;
                local_90 = 0;
                local_88 = 0;
                local_94 = 0;
                uVar5 = (**(code **)(*plVar6 + 0x580))(plVar6,&local_90,&local_94);
                if ((uVar5 & 1) != 0) {
                  FUN_037228d0(*(undefined8 *)PTR_DAT_04bb4e28,&local_90,&local_94,plVar10 + 0x7c);
                  puStack_b0 = &local_84;
                  local_b8 = &PTR_FUN_04a73080;
                  local_a8 = &local_90;
                  if (*(int *)(param_1 + 0xb88) != 0) {
                    lVar8 = (long)*(int *)(param_1 + 0xb88) << 3;
                    puVar9 = *(undefined8 **)(param_1 + 0xb90);
                    do {
                      (*(code *)*local_b8)(&local_b8,*puVar9);
                      lVar8 = lVar8 + -8;
                      puVar9 = puVar9 + 1;
                    } while (lVar8 != 0);
                  }
                }
              }
            }
            goto LAB_020b4340;
          }
        }
LAB_020b433c:
        uVar5 = 0;
      }
      else {
        local_b8 = &PTR_FUN_04a730a8;
        if (*(int *)(param_1 + 0xb88) != 0) {
          lVar8 = (long)*(int *)(param_1 + 0xb88) << 3;
          puVar9 = *(undefined8 **)(param_1 + 0xb90);
          do {
            (*(code *)*local_b8)(&local_b8,*puVar9);
            lVar8 = lVar8 + -8;
            puVar9 = puVar9 + 1;
          } while (lVar8 != 0);
        }
        uVar5 = 1;
      }
LAB_020b4340:
      if (local_54 != '\0') {
        local_54 = '\0';
      }
      if (local_5c != '\0') {
        local_5c = '\0';
      }
      if (local_68 != '\0') {
        (*(code *)*local_78[0])(local_78);
      }
      goto LAB_020b41c4;
    }
  }
  uVar5 = 0;
LAB_020b41c4:
  return uVar5 & 1;
}

