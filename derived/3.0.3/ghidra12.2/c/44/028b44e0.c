
void FUN_028b44e0(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_f44;
  undefined *local_f40;
  undefined1 auStack_f38 [1876];
  uint local_7e4;
  uint local_7e0;
  uint local_7dc;
  int local_7d8;
  uint local_7cc;
  undefined4 local_7c8 [2];
  undefined8 local_7c0;
  undefined4 *puStack_7b8;
  
  local_f40 = PTR_DAT_04bbfe60 + 0x10;
  local_7cc = param_2;
  memset(auStack_f38,0,0x754);
  uVar2 = nn::os::GetSystemTick();
  local_7e4 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 2;
  local_7dc = (local_7e0 ^ local_7e0 >> 0x1e) * 0x6c078965 + 3;
  local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 4;
  pvVar4 = (void *)FUN_01a451fc(&local_f40);
  memset(pvVar4,0,0x754);
  if (local_7cc < 2) {
    local_7c8[0] = 1;
  }
  else if (local_7cc == 2) {
    puStack_7b8 = local_7c8;
    local_7c8[0] = 1;
    local_7c0 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_f40,&local_7c0);
    local_7c8[0] = 5;
  }
  else {
    if (local_7cc != 3) goto LAB_028b4648;
    local_7c8[0] = 1;
    local_7c0 = &PTR_FUN_049ff4e8;
    puStack_7b8 = local_7c8;
    FUN_008a1ba0(&local_f40,&local_7c0);
    local_7c8[0] = 5;
    local_7c0 = &PTR_FUN_049ff4e8;
    puStack_7b8 = local_7c8;
    FUN_008a1ba0(&local_f40,&local_7c0);
    local_7c8[0] = 7;
  }
  puStack_7b8 = local_7c8;
  local_7c0 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_f40,&local_7c0);
LAB_028b4648:
  local_f44 = 0;
  puStack_7b8 = &local_f44;
  local_7c0 = &PTR_FUN_049ff448;
  uVar2 = 0;
  do {
    (**(code **)(local_f40 + 0x10))(local_7c8,&local_f40,uVar2);
    lVar5 = (**(code **)(local_f40 + 0x20))(&local_f40);
    lVar7 = DAT_053274a0;
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((*(uint *)(lVar5 + (ulong)(uVar2 >> 5) * 4) & uVar1) != 0) {
      uVar3 = FUN_0277d6c4(local_7c8);
      if (DAT_053274a0 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if (((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
           (uVar6 = (*(code *)*local_7c0)(&local_7c0,local_7c8), (uVar6 & 1) != 0))
        goto LAB_028b46a0;
      }
      lVar7 = (**(code **)(local_f40 + 0x18))(&local_f40);
      lVar5 = (ulong)(uVar2 >> 5) * 4;
      *(uint *)(lVar7 + lVar5) = *(uint *)(lVar7 + lVar5) & (uVar1 ^ 0xffffffff);
    }
LAB_028b46a0:
    uVar2 = uVar2 + 1;
    if (uVar2 == 15000) {
      pvVar4 = (void *)(**(code **)(*param_1 + 0x18))(param_1);
      lVar5 = (**(code **)(local_f40 + 0x20))(&local_f40);
      for (lVar7 = 0;
          *(uint *)((long)local_7c8 + lVar7 + 8) =
               *(uint *)(lVar5 + lVar7) | *(uint *)((long)pvVar4 + lVar7), lVar7 != 0x750;
          lVar7 = lVar7 + 8) {
        *(uint *)((long)local_7c8 + lVar7 + 0xc) =
             *(uint *)(lVar5 + lVar7 + 4) | *(uint *)((long)pvVar4 + lVar7 + 4);
      }
      memcpy(pvVar4,&local_7c0,0x754);
      *(uint *)((long)pvVar4 + 0x750) = *(uint *)((long)pvVar4 + 0x750) & 0xffffff;
      return;
    }
  } while( true );
}

