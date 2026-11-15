
void FUN_02254d90(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  undefined *local_80;
  char *pcStack_78;
  undefined **local_70;
  undefined1 *puStack_68;
  undefined4 *local_60;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar10 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar10 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar10)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
      goto joined_r0x02254e68;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02254e68;
    }
  }
  uVar10 = 0;
joined_r0x02254e68:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3278);
    puVar2 = PTR_DAT_04bb3238;
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      if (**(char **)(param_3 + 8) == '\0') {
        local_60 = &local_34;
        plVar5 = (long *)plVar8[0x51];
        local_70 = &PTR_FUN_04926aa0;
        uVar4 = *(undefined4 *)PTR_DAT_04bb3238;
        local_80 = PTR_DAT_04bb2020 + 0x10;
        pcStack_78 = "KKFesBeach";
        puStack_68 = (undefined1 *)&local_80;
        local_34 = uVar4;
        if (plVar5 != plVar8 + 0x50) {
          plVar9 = plVar5 + -1;
          puStack_68 = (undefined1 *)&local_80;
          do {
            uVar6 = (*(code *)*local_70)(&local_70,plVar9);
            if ((uVar6 & 1) != 0) goto LAB_02254f7c;
            plVar5 = (long *)plVar5[1];
            plVar9 = plVar5 + -1;
          } while (plVar9 != plVar8 + 0x4f);
          plVar9 = (long *)puVar2;
LAB_02254f7c:
          uVar4 = (undefined4)*plVar9;
        }
      }
      else {
        uVar4 = FUN_008fa0e0(plVar8,param_3,0,*(undefined4 *)PTR_DAT_04bb3238,
                             *(undefined4 *)PTR_DAT_04bb3238);
      }
      local_70 = (undefined **)CONCAT44(local_70._4_4_,uVar4);
      FUN_008f993c(plVar8,param_1,param_2,&local_70,0,0,0);
    }
  }
  return;
}

