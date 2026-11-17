
/* WARNING: Removing unreachable block (ram,0x02bb1350) */
/* WARNING: Removing unreachable block (ram,0x02bb1468) */

void FUN_02bb1110(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined *local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  undefined1 local_f4 [127];
  undefined1 local_75;
  undefined4 local_6c;
  
  iVar1 = *(int *)(param_1 + 0x2f8);
  if (0 < iVar1) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 == 0) {
      pvVar6 = malloc((long)iVar1 << 3);
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar10 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_02bb11ac;
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(long)iVar1 << 3,8);
    }
    if (pvVar6 != (void *)0x0) {
      *(void **)(param_1 + 0x210) = pvVar6;
      *(undefined4 *)(param_1 + 0x208) = 0;
      *(int *)(param_1 + 0x20c) = iVar1;
    }
  }
LAB_02bb11ac:
  local_75 = 0;
  local_f8 = 0x80;
  plVar5 = (long *)(param_1 + 0x18);
  puStack_100 = local_f4;
  iVar1 = *(int *)(param_1 + 0x2e8);
  local_f4[0] = 0;
  local_108 = PTR_DAT_04bb2d88 + 0x10;
  (**(code **)(*plVar5 + 0x18))(plVar5);
  lVar10 = param_1 + 0x218;
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(*(long *)(param_1 + 0x218) + 0x18))(lVar10);
  FUN_038d1270(&local_108,"%s/%s_%02d",uVar11,*(undefined8 *)(param_1 + 0x220),iVar1);
  lVar4 = param_1 + 0x38;
  lVar7 = FUN_02bb2688(lVar4,&local_108);
  puVar2 = PTR_DAT_04bc4dd8;
  if ((lVar7 != 0) && (0 < *(int *)(param_1 + 0x2f8))) {
    if (param_2 == (undefined8 *)0x0) {
      iVar12 = 0;
      do {
        (**(code **)(*(long *)(param_1 + 0x18) + 0x18))(plVar5);
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        (**(code **)(*(long *)(param_1 + 0x218) + 0x18))(lVar10);
        FUN_038d1270(&local_108,"%s/%s_%02d",uVar11,*(undefined8 *)(param_1 + 0x220),iVar12);
        if (iVar1 < iVar12) {
          if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar2), iVar3 != 0)) {
            *(undefined ***)PTR_DAT_04bc4dd0 = &PTR_LAB_04aa72b0;
            __cxa_guard_release(puVar2);
          }
          lVar7 = 0;
        }
        else {
          lVar7 = FUN_02bb2688(lVar4,&local_108);
        }
        if (*(int *)(param_1 + 0x208) < *(int *)(param_1 + 0x20c)) {
          *(long *)(*(long *)(param_1 + 0x210) + (long)*(int *)(param_1 + 0x208) * 8) = lVar7;
          *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
        }
        if (lVar7 != 0) {
          local_6c = 0;
          *(long *)(lVar7 + 0x260) = param_1 + 0x310;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(param_1 + 0x2f8));
    }
    else {
      iVar12 = 0;
      do {
        (**(code **)(*(long *)(param_1 + 0x18) + 0x18))(plVar5);
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        (**(code **)(*(long *)(param_1 + 0x218) + 0x18))(lVar10);
        FUN_038d1270(&local_108,"%s/%s_%02d",uVar11,*(undefined8 *)(param_1 + 0x220),iVar12);
        if (iVar1 < iVar12) {
          if (((*PTR_DAT_04bc4dd8 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4dd8), iVar3 != 0)) {
            *(undefined ***)PTR_DAT_04bc4dd0 = &PTR_LAB_04aa72b0;
            __cxa_guard_release(PTR_DAT_04bc4dd8);
          }
          uVar8 = (**(code **)*param_2)(param_2,PTR_DAT_04bc4dd0);
          if ((uVar8 & 1) == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = FUN_02bb289c(param_2,param_1,lVar7,&local_108);
          }
        }
        else {
          lVar9 = FUN_02bb2688(lVar4,&local_108);
        }
        if (*(int *)(param_1 + 0x208) < *(int *)(param_1 + 0x20c)) {
          *(long *)(*(long *)(param_1 + 0x210) + (long)*(int *)(param_1 + 0x208) * 8) = lVar9;
          *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
        }
        if (lVar9 != 0) {
          local_6c = 0;
          *(long *)(lVar9 + 0x260) = param_1 + 0x310;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(param_1 + 0x2f8));
    }
  }
  return;
}

