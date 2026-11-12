
uint FUN_00b31e20(long param_1,long *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *__dest;
  undefined8 uVar7;
  undefined *local_190;
  undefined1 *local_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined *local_160;
  undefined1 *puStack_158;
  undefined4 local_150;
  undefined1 local_14c [63];
  undefined1 local_10d;
  undefined *local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  undefined1 local_f4 [63];
  undefined1 local_b5;
  undefined1 local_b0 [8];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined1 local_5c [7];
  undefined1 local_55;
  
  lVar6 = *(long *)PTR_DAT_04bb3240;
  uVar3 = *(uint *)(lVar6 + 0xdeb0);
  if (-1 < (int)uVar3) {
    local_55 = 0;
    local_60 = 8;
    local_68 = local_5c;
    local_5c[0] = 0;
    local_70 = PTR_DAT_04bb3768 + 0x10;
    uVar5 = FUN_021d7c00(&local_70,*(undefined4 *)(lVar6 + 57000));
    if ((uVar5 & 1) != 0) {
      uVar7 = *(undefined8 *)(**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 0x20) + 8);
      (**(code **)(local_70 + 0x18))(&local_70);
      puVar4 = local_68;
      local_17c = 0;
      local_180 = 0x20;
      local_178 = 0xffffffff;
      uStack_170 = 0xffffffff00000000;
      puStack_158 = local_14c;
      local_188 = local_b0;
      local_168 = 0xffffffff;
      local_150 = 0x40;
      local_10d = 0;
      local_14c[0] = 0;
      local_160 = PTR_DAT_04bb2bc0 + 0x10;
      local_f8 = 0x40;
      local_b5 = 0;
      local_f4[0] = 0;
      puStack_100 = local_f4;
      local_190 = PTR_DAT_04bb4e10 + 0x10;
      local_b0 = (undefined1  [8])0x0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      ppuVar2 = &local_70;
      if (&local_70 <= local_b0 + 2) {
        ppuVar2 = (undefined **)(local_b0 + 2);
      }
      local_108 = local_160;
      memset(local_188,0,(size_t)((long)ppuVar2 + (-0xe0 - (long)&local_190)));
      FUN_01c0e6b4(&local_190,puVar4,PTR_DAT_04bb2df0);
      FUN_01bae5d0(uVar7,&local_190,0);
      FUN_01bb0360(uVar7,*(undefined4 *)(lVar6 + 0xdeac),0);
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    FUN_0074fda4(&local_190,"%s:%03d",param_2[1],*(undefined4 *)(lVar6 + 0xdeb0));
    __dest = *(undefined1 **)(param_1 + 0xc0);
    (**(code **)(local_190 + 0x18))(&local_190);
    puVar4 = local_188;
    if (__dest != local_188) {
      (**(code **)(local_190 + 0x18))(&local_190);
      lVar6 = 0;
      do {
        if (local_188[lVar6] == '\0') goto LAB_00b3203c;
        if (local_188[lVar6 + 1] == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_00b3203c;
        }
        if (local_188[lVar6 + 2] == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_00b3203c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_00b3203c:
      iVar1 = (int)lVar6;
      if (*(int *)(param_1 + 200) <= (int)lVar6) {
        iVar1 = *(int *)(param_1 + 200) + -1;
      }
      memcpy(__dest,puVar4,(long)iVar1);
      __dest[iVar1] = 0;
    }
  }
  return ~uVar3 >> 0x1f;
}

