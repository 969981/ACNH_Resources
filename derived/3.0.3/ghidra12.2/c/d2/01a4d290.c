
void FUN_01a4d290(uint *param_1,uint *param_2,long *param_3,void *param_4,uint param_5,
                 undefined1 *param_6,code *param_7,ulong param_8)

{
  uint *puVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  void *pvVar8;
  int iVar9;
  long lVar10;
  undefined *local_16a0;
  undefined1 auStack_1698 [1876];
  uint local_f44;
  uint local_f40;
  uint local_f3c;
  int local_f38;
  undefined *local_f30;
  undefined1 auStack_f28 [1876];
  uint local_7d4;
  uint local_7d0;
  uint local_7cc;
  int local_7c8;
  uint local_7bc [471];
  
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  lVar7 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar10 = 0;
  iVar9 = 0;
  do {
    puVar1 = (uint *)(lVar7 + lVar10);
    lVar10 = lVar10 + 4;
    uVar6 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
    uVar6 = uVar6 + (uVar6 >> 8);
    iVar9 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar9;
  } while (lVar10 != 0x754);
  if (iVar9 == 0) {
    uVar6 = *(uint *)(PTR_DAT_04bb37e0 + 4);
    *param_1 = *(uint *)PTR_DAT_04bb37e0;
    param_1[1] = uVar6;
  }
  else {
    if (param_5 != 0) {
      uVar6 = (param_5 ^ param_5 >> 0x1e) * 0x6c078965 + 1;
      uVar5 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
      *param_2 = uVar6;
      param_2[1] = uVar5;
      uVar6 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
      param_2[2] = uVar6;
      param_2[3] = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4;
    }
    puVar2 = PTR_DAT_04bbfe60 + 0x10;
    uVar6 = *(uint *)(PTR_DAT_04bb37e0 + 4);
    *param_1 = *(uint *)PTR_DAT_04bb37e0;
    param_1[1] = uVar6;
    local_f30 = puVar2;
    uVar6 = nn::os::GetSystemTick();
    local_7d4 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
    local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
    local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
    local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
    memcpy(auStack_f28,param_3 + 1,0x754);
    local_16a0 = puVar2;
    uVar6 = nn::os::GetSystemTick();
    local_f44 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
    local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 2;
    local_f3c = (local_f40 ^ local_f40 >> 0x1e) * 0x6c078965 + 3;
    local_f38 = (local_f3c ^ local_f3c >> 0x1e) * 0x6c078965 + 4;
    memcpy(auStack_1698,param_4,0x754);
    pvVar8 = (void *)FUN_01a451fc(&local_16a0);
    for (lVar10 = 0; *(uint *)((long)local_7bc + lVar10) = ~*(uint *)((long)pvVar8 + lVar10),
        lVar10 != 0x750; lVar10 = lVar10 + 8) {
      *(uint *)((long)local_7bc + lVar10 + 4) = ~*(uint *)((long)pvVar8 + lVar10 + 4);
    }
    memcpy(pvVar8,local_7bc,0x754);
    *(uint *)((long)pvVar8 + 0x750) = *(uint *)((long)pvVar8 + 0x750) & 0xffffff;
    pvVar8 = (void *)(**(code **)(local_f30 + 0x18))(&local_f30);
    lVar7 = (**(code **)(local_16a0 + 0x20))(&local_16a0);
    for (lVar10 = 0;
        *(uint *)((long)local_7bc + lVar10) =
             *(uint *)(lVar7 + lVar10) & *(uint *)((long)pvVar8 + lVar10), lVar10 != 0x750;
        lVar10 = lVar10 + 8) {
      *(uint *)((long)local_7bc + lVar10 + 4) =
           *(uint *)(lVar7 + lVar10 + 4) & *(uint *)((long)pvVar8 + lVar10 + 4);
    }
    memcpy(pvVar8,local_7bc,0x754);
    *(uint *)((long)pvVar8 + 0x750) = *(uint *)((long)pvVar8 + 0x750) & 0xffffff;
    lVar7 = (**(code **)(local_f30 + 0x20))(&local_f30);
    lVar10 = 0;
    iVar9 = 0;
    do {
      puVar1 = (uint *)(lVar7 + lVar10);
      lVar10 = lVar10 + 4;
      uVar6 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
      uVar6 = uVar6 + (uVar6 >> 8);
      iVar9 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar9;
    } while (lVar10 != 0x754);
    if ((iVar9 == 0) && (memcpy(auStack_f28,param_3 + 1,0x754), param_6 != (undefined1 *)0x0)) {
      *param_6 = 1;
    }
    lVar7 = (**(code **)(local_f30 + 0x20))(&local_f30);
    lVar10 = 0;
    uVar6 = 0;
    do {
      puVar1 = (uint *)(lVar7 + lVar10);
      lVar10 = lVar10 + 4;
      uVar5 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
      uVar5 = uVar5 + (uVar5 >> 8);
      uVar6 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar6;
    } while (lVar10 != 0x754);
    uVar4 = param_2[3];
    uVar5 = *param_2 ^ *param_2 << 0xb;
    *param_2 = param_2[1];
    param_2[1] = param_2[2];
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    FUN_00889f80(local_7bc,&local_f30,(int)((ulong)uVar5 * (ulong)uVar6 >> 0x20) + 1);
    *param_1 = local_7bc[0];
    param_1[1] = local_7bc[1];
    if ((param_7 != (code *)0x0) || (param_8 != 0 && (param_8 & 1) != 0)) {
      plVar3 = (long *)((long)param_2 + ((long)param_8 >> 1));
      if ((param_8 & 1) != 0) {
        param_7 = *(code **)(param_7 + *plVar3);
      }
      (*param_7)(plVar3,param_1);
    }
  }
  return;
}

