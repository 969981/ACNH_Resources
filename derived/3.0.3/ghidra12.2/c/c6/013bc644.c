
uint FUN_013bc644(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_44;
  
  *(int *)(param_4 + 0x284) = *(int *)(param_4 + 0x27c);
  puVar2 = PTR_DAT_04bb27c0;
  if ((*(int *)(param_4 + 0x27c) != -1) && (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 != 0)) {
    uVar9 = *(uint *)PTR_DAT_04bbc940;
    if ((uVar9 == 0) ||
       (((plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                             ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0 ||
         ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)))) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar6 + 0x60))();
      if (iVar3 < 0x11) {
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_013bc71c;
        uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_013bc71c:
      uVar9 = 0;
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0x2a];
      uVar1 = *(uint *)(plVar8 + 0x49);
      if (((*PTR_DAT_04bbc928 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbc928), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bbc920 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbc928);
      }
      uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbc920);
      uVar5 = 0;
      if ((((int)lVar7 == 1) && ((uVar4 & uVar9) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
        local_44 = 0xffffffff;
        uVar5 = FUN_013dd580(plVar8 + 699,&local_44,*(undefined4 *)(param_4 + 0x278));
        if ((uVar5 & 1) != 0) {
          uVar9 = *(uint *)(param_4 + 0x278);
          uVar11 = 0;
          if (((((int)plVar8[0x2d0] == 0) || ((int)uVar9 < 0)) || ((int)plVar8[0x2d0] <= (int)uVar9)
              ) || ((*(uint *)(plVar8 + 0x2cc) <= uVar9 ||
                    (lVar7 = *(long *)(plVar8[0x2cd] + (ulong)uVar9 * 8),
                    *(int *)(lVar7 + 0x1f8) == 0)))) {
            uVar10 = 0;
            param_2 = 0;
            param_3 = 0;
          }
          else {
            uVar10 = FUN_013dd230(lVar7,local_44);
            uVar9 = *(uint *)(param_4 + 0x278);
          }
          *(undefined4 *)(param_4 + 0x288) = uVar10;
          *(undefined4 *)(param_4 + 0x28c) = param_2;
          *(undefined4 *)(param_4 + 0x290) = param_3;
          if ((((int)plVar8[0x2d0] == 0) || ((int)uVar9 < 0)) ||
             (((int)plVar8[0x2d0] <= (int)uVar9 || (*(uint *)(plVar8 + 0x2cc) <= uVar9)))) {
            uVar10 = 0;
            uVar12 = 0;
          }
          else {
            uVar10 = 0;
            uVar12 = 0;
            lVar7 = *(long *)(plVar8[0x2cd] + (ulong)uVar9 * 8);
            if (*(int *)(lVar7 + 0x1f8) != 0) {
              uVar10 = 0;
              uVar12 = 0;
              uVar11 = FUN_013dd230(lVar7,local_44);
            }
          }
          *(undefined4 *)(param_4 + 0x294) = uVar11;
          *(undefined4 *)(param_4 + 0x298) = uVar10;
          *(undefined4 *)(param_4 + 0x29c) = uVar12;
        }
      }
      goto LAB_013bc7e8;
    }
  }
  uVar5 = 0;
LAB_013bc7e8:
  return uVar5 & 1;
}

