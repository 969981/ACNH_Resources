
void FUN_015ddd00(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  undefined8 uVar9;
  void *__src;
  undefined *local_290;
  char *pcStack_288;
  undefined *local_280;
  uint *local_278;
  int local_270;
  uint local_26c;
  undefined1 local_268;
  undefined1 local_267;
  undefined1 local_16d;
  undefined *local_168;
  undefined1 *puStack_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  if (*(int *)(param_1 + 0x168) == 1) {
    local_16d = 0;
    local_278 = &local_26c;
    local_26c = local_26c & 0xffffff00;
    local_270 = 0x100;
    local_280 = PTR_DAT_04bb21f8 + 0x10;
    if (((param_3 & 1) == 0) || (*(char *)(*(long *)PTR_DAT_04bb4508 + 8) == '\0')) {
      local_158 = 0x100;
      local_290 = PTR_DAT_04bb2020 + 0x10;
      pcStack_288 = "Movie/";
      local_55 = 0;
      local_154[0] = 0;
      puStack_160 = local_154;
      local_168 = local_280;
      plVar5 = (long *)FUN_038b56b0(*(undefined8 *)PTR_DAT_04bb2130,&local_290,&local_168);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x40))(plVar5,&local_280,&local_168);
      }
      puVar3 = local_278;
      (**(code **)(local_280 + 0x18))(&local_280);
      lVar8 = 0;
      do {
        if (*(char *)((long)local_278 + lVar8) == '\0') goto LAB_015dde70;
        if (*(char *)((long)local_278 + lVar8 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_015dde70;
        }
        if (*(char *)((long)local_278 + lVar8 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_015dde70;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_015dde70:
      uVar1 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar8 = 0;
      do {
        if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_015ddecc;
        lVar6 = param_2[1] + lVar8;
        if (*(char *)(lVar6 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_015ddecc;
        }
        if (*(char *)(lVar6 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_015ddecc;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_015ddecc:
      uVar2 = (uint)lVar8;
      if ((int)(local_270 - uVar1) <= (int)(uint)lVar8) {
        uVar2 = local_270 + ~uVar1;
      }
      if (0 < (int)uVar2) {
        (**(code **)(*param_2 + 0x18))(param_2);
        memcpy((void *)((long)puVar3 + (ulong)uVar1),(void *)param_2[1],(ulong)uVar2);
        *(undefined1 *)((long)puVar3 + (long)(int)(uVar2 + uVar1)) = 0;
      }
    }
    else {
      local_267 = 0;
      local_26c = DAT_040a0459;
      local_268 = DAT_040a045d;
      (**(code **)(*param_2 + 0x18))(param_2);
      FUN_038d13f0(&local_280,"://Movie/%s",param_2[1]);
    }
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      pvVar7 = malloc(0x970);
    }
    else {
      plVar5 = *(long **)(param_1 + 0x40);
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar5 = (long *)(lVar8 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
      }
      pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x970,8);
    }
    FUN_015db390();
    *(void **)(param_1 + 0x48) = pvVar7;
    movie::SetThreadPriority(0x14);
    local_168 = (undefined *)CONCAT44(local_168._4_4_,1);
    nn::os::GetThreadAvailableCoreMask();
    movie::SetCoreMask(2);
    iVar4 = FUN_015db5d4(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38));
    if (iVar4 == 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x48);
      (**(code **)(local_280 + 0x18))(&local_280);
      iVar4 = FUN_015dc640(uVar9,local_278,*(undefined8 *)(param_1 + 0x40));
      if (iVar4 == 0) {
        FUN_015dc9e0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40));
        FUN_015dcd00(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40));
        FUN_015dcfdc(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40));
        FUN_015dd0e4(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40));
        pvVar7 = *(void **)(param_1 + 0x58);
        (**(code **)(*param_2 + 0x18))(param_2);
        __src = (void *)param_2[1];
        if (pvVar7 != __src) {
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar8 = 0;
          do {
            if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_015de07c;
            lVar6 = param_2[1] + lVar8;
            if (*(char *)(lVar6 + 1) == '\0') {
              lVar8 = lVar8 + 1;
              goto LAB_015de07c;
            }
            if (*(char *)(lVar6 + 2) == '\0') {
              lVar8 = lVar8 + 2;
              goto LAB_015de07c;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_015de07c:
          iVar4 = (int)lVar8;
          if (*(int *)(param_1 + 0x60) <= (int)lVar8) {
            iVar4 = *(int *)(param_1 + 0x60) + -1;
          }
          memcpy(pvVar7,__src,(long)iVar4);
          *(undefined1 *)((long)pvVar7 + (long)iVar4) = 0;
        }
        *(undefined4 *)(param_1 + 0x168) = 2;
        *(undefined1 *)(param_1 + 0x178) = 0xff;
      }
    }
  }
  return;
}

