
undefined8 FUN_01ee50c4(long *param_1,long param_2)

{
  long lVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined *puVar11;
  char *pcVar12;
  uint uVar13;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined *local_178;
  char *pcStack_170;
  int local_160 [27];
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined1 local_e7;
  undefined8 local_e4;
  undefined1 local_c4;
  undefined4 local_34;
  
  if ((((4 < (int)param_1[0xef6] - 3U) &&
       (uVar6 = (**(code **)(*(long *)param_1[1] + 0x180))(), (uVar6 & 1) != 0)) &&
      (local_160[0] = 2, (*(ushort *)(param_1 + 0x15a5) >> 2 & 1) == 0)) &&
     ((*(ushort *)((long)param_1 + 0xad2a) >> 2 & 1) == 0)) {
    if ((param_1[1] != 0) && (uVar8 = *(uint *)(param_1[1] + 0x508), uVar8 != 0xffffffff)) {
      puVar11 = &DAT_053fe348 + (ulong)uVar8 * 0xba0;
      if (9 < uVar8) {
        puVar11 = &DAT_053fe348;
      }
      local_160[0] = *(int *)(puVar11 + 0x4e8);
      if (local_160[0] != 0) {
        return 0;
      }
    }
    if (DAT_04c487d4 != -1) {
      local_160[0] = 0x19;
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x19 & 1) != 0) {
        return 0;
      }
    }
    uVar6 = (ulong)*(byte *)(param_2 + 8);
    if ((uVar6 < 8) && (DAT_054f5738 != 0)) {
      puVar9 = (undefined4 *)(DAT_054f5738 + uVar6 * 4 + 0xde8);
    }
    else {
      puVar9 = &DAT_04c9a0c8;
    }
    local_34 = *puVar9;
    uVar6 = FUN_02087ce0(param_1[3],&local_34,0);
    if ((uVar6 & 1) != 0) {
      FUN_01e7b7bc(local_160);
      puVar4 = PTR_DAT_04bb2020;
      local_e4 = 0x5a00000096;
      puVar11 = PTR_DAT_04bb2020 + 0x10;
      pcStack_170 = "owl";
      local_178 = puVar11;
      uVar6 = FUN_00710cb0(param_1[1] + 0x3e0,&local_178);
      if ((uVar6 & 1) == 0) {
        pcStack_170 = "hgc";
        local_178 = puVar11;
        uVar6 = FUN_00710cb0(param_1[1] + 0x3e0,&local_178);
        if ((uVar6 & 1) == 0) {
          pcStack_170 = "gstA";
          local_178 = puVar4 + 0x10;
          uVar6 = FUN_00710cb0(param_1[1] + 0x3e0,&local_178);
          if ((uVar6 & 1) != 0) {
            return 0;
          }
          pcStack_170 = "gstB";
          local_178 = puVar4 + 0x10;
          uVar6 = FUN_00710cb0(param_1[1] + 0x3e0,&local_178);
          uVar8 = 0x25;
          if ((uVar6 & 1) == 0) {
            pcVar12 = *(char **)(param_1[1] + 1000);
            if (((*pcVar12 != 'k') || (pcVar12[1] != 'p')) || (pcVar12[2] != 'p')) {
              local_178 = puVar4 + 0x10;
              pcStack_170 = "pge";
              uVar6 = FUN_00710cb0(param_1[1] + 0x3e0,&local_178);
              uVar8 = 0x25;
              if ((uVar6 & 1) == 0) {
                uVar8 = 0x1d;
              }
            }
          }
        }
        else {
          local_178 = puVar4 + 0x10;
          pcStack_170 = "KotonoQuestCount";
          iVar5 = FUN_0274bce0((byte *)(param_2 + 8),&local_178);
          uVar8 = 0;
          if (0x13 < iVar5) {
            uVar8 = 0x25;
          }
        }
      }
      else {
        uVar6 = FUN_0277d9a8(param_2 + 0x1c);
        uVar8 = 0x1d;
        if ((uVar6 & 1) != 0) {
          FUN_01ad5d04(&local_178,param_2 + 0x1c);
          iVar5 = FUN_01ad9fd0(&local_178);
          uVar8 = 0xd;
          if (iVar5 != 0x69) {
            uVar8 = 0x1d;
          }
        }
      }
      FUN_01ad5d04(&local_178,param_2 + 0x1c);
      uVar6 = FUN_01ad6698(&local_178);
      if ((((uVar6 & 1) != 0) || (uVar6 = FUN_01ad65f4(&local_178), (uVar6 & 1) != 0)) &&
         (uVar6 = FUN_021d5f30(param_1[1] + 0x3e0), (uVar6 & 1) != 0)) {
        iVar5 = FUN_021d68a0(param_1[1] + 0x3e0);
        lVar10 = param_1[1];
        lVar1 = 2;
        if (iVar5 != 1) {
          lVar1 = 3;
        }
        uVar13 = *(uint *)(lVar10 + 0x294);
        uVar8 = *(uint *)(lVar10 + 0x288) ^ *(uint *)(lVar10 + 0x288) << 0xb;
        uVar8 = uVar8 >> 8 ^ uVar13 >> 0x13 ^ uVar8 ^ uVar13;
        *(uint *)(lVar10 + 0x294) = uVar8;
        *(undefined4 *)(lVar10 + 0x288) = *(undefined4 *)(lVar10 + 0x28c);
        uVar3 = *(undefined4 *)(lVar10 + 0x290);
        *(uint *)(lVar10 + 0x290) = uVar13;
        iVar5 = (int)(lVar1 * (ulong)uVar8 >> 0x20);
        *(undefined4 *)(lVar10 + 0x28c) = uVar3;
        uVar13 = 0x46;
        if (iVar5 != 1) {
          uVar13 = 0x1d;
        }
        uVar8 = 0x43;
        if (iVar5 != 0) {
          uVar8 = uVar13;
        }
      }
      if (((uint)param_1[0x15ab] >> 0x1c & 1) == 0) {
        param_1[0x15ab] = param_1[0x15ab] | 0x10000000;
        FUN_02087b00(param_1[3],4);
      }
      FUN_02085e20(param_1[3],0,local_34,PTR_DAT_04bb6928,0);
      local_188 = puVar4 + 0x10;
      uStack_180 = *(undefined8 *)(PTR_s_EmotEnd_04bb4608 + (ulong)uVar8 * 8 + 0x528);
      FUN_01ed8df0(local_160,0,&local_188);
      local_c4 = 1;
      local_e7 = 1;
      plVar7 = (long *)FUN_016debb0(param_1[1]);
      (**(code **)(*plVar7 + 0x370))(&local_188);
      local_f4 = (undefined4)local_188;
      uStack_f0 = local_188._4_4_;
      (**(code **)(*param_1 + 0x38))(param_1,1,local_160,0);
      return 1;
    }
  }
  return 0;
}

