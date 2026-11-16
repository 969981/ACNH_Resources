
undefined8 FUN_02527bc8(byte *param_1,uint *param_2,undefined4 param_3)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long *local_58;
  char local_50;
  char local_4f;
  char local_4e;
  undefined4 local_44;
  
  puVar1 = PTR_DAT_04bb3238;
  puVar6 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar6 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_44 = *puVar6;
  FUN_0071c8d0(&local_58,&local_44,PTR_DAT_04bb3238,0);
  plVar2 = local_58;
  if (local_58 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3770);
    if ((uVar5 & 1) == 0) {
      local_4f = '\0';
    }
  }
  if (local_58 == (long *)0x0) {
    return 0;
  }
  if (local_50 == '\0') {
    return 0;
  }
  if (local_4f == '\0') {
    return 0;
  }
  if (local_4e == '\0') {
    return 0;
  }
  if ((*(uint *)(local_58 + 0x302) & 0xfffffff7) != 1) {
    return 0;
  }
  if (*(char *)((long)param_2 + 5) != '\0') {
    FUN_0253395c(&local_60,param_1,*(undefined4 *)puVar1);
    puVar1 = PTR_DAT_04bb43c0;
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_60);
    lVar7 = *(long *)puVar1;
    if (lVar7 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        local_68 = 0;
        local_78 = PTR_DAT_04bc0510 + 0x10;
        local_70 = local_60;
        uStack_6c = uStack_5c;
        uVar3 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar1 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(&local_60);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if (uVar3 < *(uint *)(lVar7 + 0x1d8)) {
              lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8);
              if (lVar7 != 0) {
                local_68 = lVar7;
              }
            }
          }
        }
        iVar4 = FUN_01ad78cc(&local_78);
        if (iVar4 == 0x15) {
          return 0;
        }
      }
    }
  }
  puVar8 = (undefined8 *)local_58[0xc];
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar8 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  if (((char)param_2[1] == '\0') && (uVar5 = FUN_0170e880(puVar8), (uVar5 & 1) != 0)) {
    if ((*param_2 >> 3 & 1) == 0) {
      if ((*param_2 >> 2 & 1) == 0) goto LAB_02527e04;
      uVar5 = FUN_02547820(param_1,param_3);
    }
    else {
      uVar5 = FUN_025472e0(param_1,param_3);
    }
    if ((uVar5 & 1) != 0) {
      FUN_02476cb0(local_58,param_2[2],0,0,0);
      return 1;
    }
  }
  else {
LAB_02527e04:
    uVar5 = FUN_0170e880(puVar8);
    if ((((uVar5 & 1) != 0) && (((char)param_2[1] != '\0' || (((byte)*param_2 >> 1 & 1) != 0)))) ||
       ((*(int *)(puVar8 + 0x2d8) != 0 && (((char)param_2[1] != '\0' || ((*param_2 & 1) != 0)))))) {
      uVar3 = param_2[2];
      local_58[0x330] = 0;
      local_58[0x331] = 0;
      local_58[0x332] = 0;
      local_58[0x333] = 0;
      local_58[0x334] = 0;
      local_58[0x335] = 0;
      local_58[0x336] = 0;
      local_58[0x337] = 0;
      local_58[0x338] = 0;
      local_58[0x339] = 0;
      local_58[0x33a] = 0;
      *(undefined2 *)(local_58 + 0x33b) = 0;
      local_58[0x32c] = local_58[0x31c];
      local_58[0x32d] = local_58[0x31d];
      local_58[0x32e] = local_58[0x31e];
      local_58[0x32f] = local_58[799];
      *(undefined2 *)((long)local_58 + 0x198b) = 0;
      *(char *)((long)local_58 + 0x198a) = (char)uVar3;
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x2a);
      local_58[0x318] = local_58[0x338];
      local_58[0x319] = local_58[0x339];
      local_58[0x31a] = local_58[0x33a];
      *(short *)(local_58 + 0x31b) = (short)local_58[0x33b];
      local_58[0x314] = local_58[0x334];
      local_58[0x315] = local_58[0x335];
      local_58[0x316] = local_58[0x336];
      local_58[0x317] = local_58[0x337];
      local_58[0x310] = local_58[0x330];
      local_58[0x311] = local_58[0x331];
      local_58[0x312] = local_58[0x332];
      local_58[0x313] = local_58[0x333];
      local_58[0x30c] = local_58[0x32c];
      local_58[0x30d] = local_58[0x32d];
      local_58[0x30e] = local_58[0x32e];
      local_58[0x30f] = local_58[0x32f];
      lVar7 = 0;
      if (local_58[0xe] != 0) {
        lVar7 = local_58[0xe] + 0x278;
      }
      FUN_03ebb160(lVar7,0x2a);
      return 1;
    }
  }
  return 0;
}

