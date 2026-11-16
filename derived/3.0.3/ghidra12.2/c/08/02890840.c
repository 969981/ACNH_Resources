
void FUN_02890840(uint *param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *local_f38;
  undefined1 auStack_f30 [1876];
  uint local_7dc;
  uint local_7d8;
  uint local_7d4;
  int local_7d0;
  undefined4 local_7c8 [2];
  undefined8 local_7c0;
  undefined4 *puStack_7b8;
  
  local_f38 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_f30,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  local_7dc = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
  local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)FUN_01a451fc(&local_f38);
  memset(pvVar5,0,0x754);
  local_7c8[0] = 0x53;
  local_7c0 = &PTR_FUN_049ff4e8;
  puStack_7b8 = local_7c8;
  FUN_008a1ba0(&local_f38,&local_7c0);
  puVar2 = PTR_DAT_04bb43c0;
  uVar3 = *param_1;
  if (2 < uVar3) {
    uVar3 = 0;
  }
  if (1 < (int)uVar3) {
    local_7c8[0] = 0x54;
    local_7c0 = &PTR_FUN_049ff4e8;
    puStack_7b8 = local_7c8;
    FUN_008a1ba0(&local_f38,&local_7c0);
    uVar3 = 0;
    local_7c0 = &PTR_FUN_049ff808;
    do {
      (**(code **)(local_f38 + 0x10))(local_7c8,&local_f38,uVar3);
      lVar6 = (**(code **)(local_f38 + 0x20))(&local_f38);
      uVar1 = 1 << (ulong)(uVar3 & 0x1f);
      if ((*(uint *)(lVar6 + (ulong)(uVar3 >> 5) * 4) & uVar1) != 0) {
        lVar6 = *(long *)puVar2;
        uVar4 = FUN_0277d6c4(local_7c8);
        if (*(long *)puVar2 != 0) {
          lVar6 = *(long *)(lVar6 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if (((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
             (uVar7 = (*(code *)*local_7c0)(&local_7c0,local_7c8), (uVar7 & 1) == 0))
          goto LAB_028909a0;
        }
        lVar6 = (**(code **)(local_f38 + 0x18))(&local_f38);
        lVar8 = (ulong)(uVar3 >> 5) * 4;
        *(uint *)(lVar6 + lVar8) = *(uint *)(lVar6 + lVar8) & (uVar1 ^ 0xffffffff);
      }
LAB_028909a0:
      uVar3 = uVar3 + 1;
    } while (uVar3 != 15000);
  }
  lVar6 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(param_1 + 0x4b5);
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar6 = (**(code **)(local_f38 + 0x18))(&local_f38);
      uVar3 = FUN_0277d6c4(param_1 + 0x4b5);
      if ((uVar3 >> 3 & 0x1fff) < 0x753) {
        lVar8 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
        *(uint *)(lVar6 + lVar8) =
             *(uint *)(lVar6 + lVar8) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar6 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(param_1 + 0x4b7);
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar6 = (**(code **)(local_f38 + 0x18))(&local_f38);
      uVar3 = FUN_0277d6c4(param_1 + 0x4b7);
      if ((uVar3 >> 3 & 0x1fff) < 0x753) {
        lVar8 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
        *(uint *)(lVar6 + lVar8) =
             *(uint *)(lVar6 + lVar8) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar6 = *(long *)puVar2;
  uVar3 = FUN_0277d6c4(param_1 + 0x4b9);
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar6 = (**(code **)(local_f38 + 0x18))(&local_f38);
      uVar3 = FUN_0277d6c4(param_1 + 0x4b9);
      if ((uVar3 >> 3 & 0x1fff) < 0x753) {
        lVar8 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
        *(uint *)(lVar6 + lVar8) =
             *(uint *)(lVar6 + lVar8) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  pvVar5 = (void *)(**(code **)(local_f38 + 0x18))(&local_f38);
  lVar8 = (**(code **)(*param_2 + 0x20))(param_2);
  for (lVar6 = 0;
      *(uint *)((long)local_7c8 + lVar6 + 8) =
           *(uint *)(lVar8 + lVar6) & *(uint *)((long)pvVar5 + lVar6), lVar6 != 0x750;
      lVar6 = lVar6 + 8) {
    *(uint *)((long)local_7c8 + lVar6 + 0xc) =
         *(uint *)(lVar8 + lVar6 + 4) & *(uint *)((long)pvVar5 + lVar6 + 4);
  }
  memcpy(pvVar5,&local_7c0,0x754);
  *(uint *)((long)pvVar5 + 0x750) = *(uint *)((long)pvVar5 + 0x750) & 0xffffff;
  FUN_0288eb60(param_1,&local_f38,1);
  return;
}

