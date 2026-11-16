
int FUN_0264a7a0(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined4 local_16a4;
  undefined **local_16a0;
  undefined8 uStack_1698;
  undefined8 local_1690;
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
  undefined8 local_7c0;
  undefined4 *local_7b8;
  
  lVar14 = param_1 + 0x194b0;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar14 = *(long *)(DAT_05574040 + 0x20);
  }
  if ((*(long *)(lVar14 + 0x1090) == 0) ||
     (puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x1090) + 0x10), puVar7 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar7)();
    uVar4 = uVar4 ^ 1;
  }
  local_f30 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_f28,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_7d4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
  local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
  local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
  pvVar8 = (void *)FUN_01a451fc(&local_f30);
  memset(pvVar8,0,0x754);
  if ((*(long *)(lVar14 + 0x1090) != 0) &&
     (plVar9 = *(long **)(*(long *)(lVar14 + 0x1090) + 0x20), plVar9 != (long *)0x0)) {
    local_16a0 = *(undefined ***)(lVar14 + 0x1070);
    uStack_1698 = *(undefined8 *)(lVar14 + 0x1078);
    local_1690 = 0x754;
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_16a0);
  }
  memcpy(auStack_f28,(void *)(*(long *)(lVar14 + 0x1078) + *(long *)(lVar14 + 0x1070)),0x754);
  puVar3 = PTR_DAT_04bb43c0;
  local_16a0 = &PTR_FUN_049ff5b0;
  uVar5 = 0;
  do {
    (**(code **)(local_f30 + 0x10))(&local_7c0,&local_f30,uVar5);
    lVar10 = (**(code **)(local_f30 + 0x20))(&local_f30);
    uVar2 = 1 << (ulong)(uVar5 & 0x1f);
    if ((*(uint *)(lVar10 + (ulong)(uVar5 >> 5) * 4) & uVar2) != 0) {
      lVar10 = *(long *)puVar3;
      uVar6 = FUN_0277d6c4(&local_7c0);
      if (*(long *)puVar3 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if (((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
           (uVar11 = (*(code *)*local_16a0)(&local_16a0,&local_7c0), (uVar11 & 1) != 0))
        goto LAB_0264a950;
      }
      lVar10 = (**(code **)(local_f30 + 0x18))(&local_f30);
      lVar12 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar10 + lVar12) = *(uint *)(lVar10 + lVar12) & (uVar2 ^ 0xffffffff);
    }
LAB_0264a950:
    uVar5 = uVar5 + 1;
    if (uVar5 == 15000) {
      local_16a0 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
      memset(&uStack_1698,0,0x754);
      uVar5 = nn::os::GetSystemTick();
      local_f44 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
      local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 2;
      local_f3c = (local_f40 ^ local_f40 >> 0x1e) * 0x6c078965 + 3;
      local_f38 = (local_f3c ^ local_f3c >> 0x1e) * 0x6c078965 + 4;
      pvVar8 = (void *)FUN_01a451fc(&local_16a0);
      memset(pvVar8,0,0x754);
      local_16a4 = 0;
      local_7c0 = &PTR_FUN_049ff588;
      local_7b8 = &local_16a4;
      FUN_008a1ba0(&local_16a0,&local_7c0);
      local_7c0 = &PTR_FUN_049ff588;
      local_16a4 = 1;
      local_7b8 = &local_16a4;
      FUN_008a1ba0(&local_16a0,&local_7c0);
      pvVar8 = (void *)(**(code **)(local_f30 + 0x18))(&local_f30);
      lVar12 = (*(code *)local_16a0[4])(&local_16a0);
      for (lVar10 = 0;
          *(uint *)((long)&local_7c0 + lVar10) =
               *(uint *)(lVar12 + lVar10) & *(uint *)((long)pvVar8 + lVar10), lVar10 != 0x750;
          lVar10 = lVar10 + 8) {
        *(uint *)((long)&local_7c0 + lVar10 + 4) =
             *(uint *)(lVar12 + lVar10 + 4) & *(uint *)((long)pvVar8 + lVar10 + 4);
      }
      memcpy(pvVar8,&local_7c0,0x754);
      *(uint *)((long)pvVar8 + 0x750) = *(uint *)((long)pvVar8 + 0x750) & 0xffffff;
      lVar12 = (**(code **)(local_f30 + 0x20))(&local_f30);
      lVar10 = 0;
      iVar13 = 0;
      do {
        puVar1 = (uint *)(lVar12 + lVar10);
        lVar10 = lVar10 + 4;
        uVar5 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
        uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
        uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
        uVar5 = uVar5 + (uVar5 >> 8);
        iVar13 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + iVar13;
      } while (lVar10 != 0x754);
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar14 + 0x1090) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x1090) + 0x18), puVar7 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar7)();
      }
      return iVar13;
    }
  } while( true );
}

