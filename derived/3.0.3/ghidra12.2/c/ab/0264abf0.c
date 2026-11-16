
int FUN_0264abf0(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *__s;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined4 local_804;
  undefined *local_800;
  undefined1 auStack_7f8 [1876];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  undefined **local_90;
  undefined4 *puStack_88;
  undefined8 local_80;
  undefined1 auStack_70 [16];
  
  lVar13 = param_1 + 0x194b0;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar13 = *(long *)(DAT_05574040 + 0x20);
    lVar11 = *(long *)(lVar13 + 0x1090);
  }
  else {
    lVar11 = *(long *)(param_1 + 0x1a540);
  }
  if ((lVar11 == 0) || (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    uVar4 = uVar4 ^ 1;
  }
  local_800 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7f8,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_a4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
  local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_800);
  memset(__s,0,0x754);
  if ((*(long *)(lVar13 + 0x1090) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar13 + 0x1090) + 0x20), plVar7 != (long *)0x0)) {
    local_90 = *(undefined ***)(lVar13 + 0x1070);
    puStack_88 = *(undefined4 **)(lVar13 + 0x1078);
    local_80 = 0x754;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_90);
  }
  memcpy(auStack_7f8,(void *)(*(long *)(lVar13 + 0x1078) + *(long *)(lVar13 + 0x1070)),0x754);
  puVar3 = PTR_DAT_04bb43c0;
  local_804 = 0x49;
  puStack_88 = &local_804;
  local_90 = &PTR_FUN_049ff448;
  uVar5 = 0;
  do {
    (**(code **)(local_800 + 0x10))(auStack_70,&local_800,uVar5);
    lVar11 = (**(code **)(local_800 + 0x20))(&local_800);
    uVar2 = 1 << (ulong)(uVar5 & 0x1f);
    if ((*(uint *)(lVar11 + (ulong)(uVar5 >> 5) * 4) & uVar2) != 0) {
      lVar11 = *(long *)puVar3;
      uVar6 = FUN_0277d6c4(auStack_70);
      if (*(long *)puVar3 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if (((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
           (uVar8 = (*(code *)*local_90)(&local_90,auStack_70), (uVar8 & 1) != 0))
        goto LAB_0264ada0;
      }
      lVar11 = (**(code **)(local_800 + 0x18))(&local_800);
      lVar9 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar11 + lVar9) = *(uint *)(lVar11 + lVar9) & (uVar2 ^ 0xffffffff);
    }
LAB_0264ada0:
    uVar5 = uVar5 + 1;
    if (uVar5 == 15000) {
      lVar9 = (**(code **)(local_800 + 0x20))(&local_800);
      lVar11 = 0;
      iVar12 = 0;
      do {
        puVar1 = (uint *)(lVar9 + lVar11);
        lVar11 = lVar11 + 4;
        uVar5 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
        uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
        uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
        uVar5 = uVar5 + (uVar5 >> 8);
        iVar12 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + iVar12;
      } while (lVar11 != 0x754);
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar13 + 0x1090) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x1090) + 0x18),
         puVar10 != (undefined8 *)0x0)) {
        (**(code **)*puVar10)();
      }
      return iVar12;
    }
  } while( true );
}

