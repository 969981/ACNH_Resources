
undefined8 FUN_03c28030(long *param_1,long *param_2,int param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined1 local_184 [31];
  undefined1 local_165;
  long local_160;
  char *local_158;
  uint local_150;
  byte local_14c;
  undefined8 local_148;
  byte *local_140;
  undefined4 local_138;
  byte local_134 [255];
  undefined1 local_35;
  
  if ((*(byte *)(param_1 + 4) >> 5 & 1) != 0) {
    return 0;
  }
  if (*param_2 == 0) {
    return 0;
  }
  local_160 = 0;
  local_158 = (char *)0x0;
  uVar2 = (**(code **)(*param_1 + 0x120))(param_1);
  if ((uVar2 & 1) == 0) {
    if (-1 < param_3) goto LAB_03c28128;
    local_165 = 0;
    local_184[0] = 0;
    local_188 = 0x20;
    local_190 = local_184;
    local_138 = 0x100;
    local_140 = local_134;
    local_35 = 0;
    local_198 = PTR_DAT_04bb3000 + 0x10;
    local_134[0] = 0;
    local_148 = &PTR_LAB_048fda60;
    (**(code **)(*param_1 + 0x58))(param_1,&local_148);
    (*(code *)local_148[3])(&local_148);
    bVar1 = *local_140;
    if (bVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0xffffffff;
      pbVar5 = local_140;
      do {
        pbVar5 = pbVar5 + 1;
        uVar4 = crc32b(uVar4,(uint)bVar1,0x4c11db7);
        bVar1 = *pbVar5;
      } while (bVar1 != 0);
      uVar4 = ~uVar4;
    }
    FUN_038d1270(&local_198,&DAT_04074ae0,uVar4);
    (**(code **)(local_198 + 0x18))(&local_198);
    local_148 = (undefined **)((ulong)local_148 & 0xffffff0000000000);
    uVar2 = FUN_03ea9450(param_2,&local_148,local_190);
    if ((uVar2 & 1) != 0) {
      if (local_148._4_1_ - 0xc0 < 2) {
        local_160 = *param_2;
        local_158 = (char *)(local_160 + ((ulong)local_148 & 0xffffffff));
        goto joined_r0x03c2813c;
      }
      if (local_148._4_1_ != 0xff) goto LAB_03c283f8;
LAB_03c283e8:
      local_160 = *param_2;
      local_158 = (char *)0x0;
      goto joined_r0x03c2813c;
    }
LAB_03c283f8:
    uVar3 = 0;
  }
  else {
    if (param_3 < 0) {
      local_165 = 0;
      local_184[0] = 0;
      local_188 = 0x20;
      local_190 = local_184;
      local_138 = 0x100;
      local_140 = local_134;
      local_35 = 0;
      local_198 = PTR_DAT_04bb3000 + 0x10;
      local_134[0] = 0;
      local_148 = &PTR_LAB_048fda60;
      (**(code **)(*param_1 + 0x58))(param_1,&local_148);
      (*(code *)local_148[3])(&local_148);
      bVar1 = *local_140;
      if (bVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0xffffffff;
        pbVar5 = local_140;
        do {
          pbVar5 = pbVar5 + 1;
          uVar4 = crc32b(uVar4,(uint)bVar1,0x4c11db7);
          bVar1 = *pbVar5;
        } while (bVar1 != 0);
        uVar4 = ~uVar4;
      }
      FUN_038d1270(&local_198,&DAT_04074ae0,uVar4);
      (**(code **)(local_198 + 0x18))(&local_198);
      local_148 = (undefined **)((ulong)local_148 & 0xffffff0000000000);
      uVar2 = FUN_03ea9450(param_2,&local_148,local_190);
      if ((uVar2 & 1) == 0) {
LAB_03c282fc:
        local_160 = 0;
        local_158 = (char *)0x0;
LAB_03c28300:
        local_35 = 0;
        local_138 = 0x100;
        local_140 = local_134;
        local_134[0] = 0;
        local_148 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
        FUN_038d1270(&local_148,&DAT_0409e973,param_1[1]);
        (**(code **)((long)local_148 + 0x18))(&local_148);
        bVar1 = *local_140;
        if (bVar1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0xffffffff;
          pbVar5 = local_140;
          do {
            pbVar5 = pbVar5 + 1;
            uVar4 = crc32b(uVar4,(uint)bVar1,0x4c11db7);
            bVar1 = *pbVar5;
          } while (bVar1 != 0);
          uVar4 = ~uVar4;
        }
        FUN_006d8678(&local_198,&DAT_04074ae0,uVar4);
        (**(code **)(local_198 + 0x18))(&local_198);
        local_150 = 0;
        local_14c = 0;
        uVar2 = FUN_03ea9450(param_2,&local_150,local_190);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        if (1 < local_14c - 0xc0) {
          if (local_14c != 0xff) {
            return 0;
          }
          goto LAB_03c283e8;
        }
        local_160 = *param_2;
        local_158 = (char *)(local_160 + (ulong)local_150);
        goto joined_r0x03c2813c;
      }
      if (1 < local_148._4_1_ - 0xc0) {
        if (local_148._4_1_ != 0xff) goto LAB_03c282fc;
        local_160 = *param_2;
        local_158 = (char *)0x0;
        goto LAB_03c28300;
      }
      local_160 = *param_2;
      local_158 = (char *)(local_160 + ((ulong)local_148 & 0xffffffff));
      if ((local_160 == 0) || (*local_158 != -0x40)) goto LAB_03c28300;
    }
    else {
LAB_03c28128:
      FUN_03ea9348(&local_160,param_2,param_3);
joined_r0x03c2813c:
      if (local_160 == 0) goto LAB_03c283f8;
    }
    (**(code **)(*param_1 + 0x128))(param_1,&local_160);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
    (**(code **)(*param_1 + 0xa8))(param_1);
    uVar3 = 1;
  }
  return uVar3;
}

