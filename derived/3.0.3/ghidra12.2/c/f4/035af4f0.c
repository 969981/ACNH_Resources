
void FUN_035af4f0(undefined8 param_1,float *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 local_6c [4];
  byte local_68 [4];
  undefined4 local_64;
  undefined2 local_60;
  byte local_5c [4];
  undefined4 local_58;
  undefined2 local_54;
  
  uVar7 = (int)((float)(int)(*param_2 + -2.5) / 5.0) - (uint)(*param_2 + -2.5 < 0.0) & 0xffff;
  uVar1 = (int)((float)(int)(param_2[2] + -2.5) / 5.0) - (uint)(param_2[2] + -2.5 < 0.0) & 0xffff;
  if (param_3 == 0) {
    FUN_035a4bec(&DAT_05779f28,uVar7,uVar1);
  }
  else {
    FUN_035a4dd4(&DAT_05779f28,uVar7,uVar1,param_3);
  }
  if (-1 < *(int *)(DAT_05779f68 + 0x18)) {
    FUN_035a9090(&DAT_05779f28,uVar7,uVar1,param_3);
  }
  FUN_02507c6c(local_5c,1,1,1,0);
  puVar3 = PTR_DAT_04bb5038;
  uVar7 = (uint)local_5c[0];
  local_64 = local_58;
  local_68[0] = 0xff;
  if (local_5c[0] < 8) {
    local_68[0] = local_5c[0];
  }
  local_60 = local_54;
  if (param_3 == 0) {
    if (local_5c[0] < 8) {
      do {
        local_6c[0] = (undefined1)uVar7;
        pfVar4 = (float *)FUN_0251b3b0(local_6c,0);
        if (pfVar4 != (float *)0x0) {
          uVar1 = (int)((float)(int)(*pfVar4 + -2.5) / 5.0) - (uint)(*pfVar4 + -2.5 < 0.0) & 0xffff;
          uVar2 = (int)((float)(int)(pfVar4[2] + -2.5) / 5.0) - (uint)(pfVar4[2] + -2.5 < 0.0) &
                  0xffff;
          FUN_035a4bec(&DAT_05779f28,uVar1,uVar2);
          if (-1 < *(int *)(DAT_05779f68 + 0x18)) {
            FUN_035a9090(&DAT_05779f28,uVar1,uVar2,0);
          }
        }
        uVar6 = (ulong)uVar7;
        do {
          if (uVar6 == 7) {
            return;
          }
          uVar6 = uVar6 + 1;
          uVar5 = FUN_02507924(local_68,puVar3 + uVar6);
        } while ((uVar5 & 1) == 0);
        local_68[0] = puVar3[uVar6];
        uVar7 = (uint)local_68[0];
      } while (uVar7 < 8);
    }
  }
  else if (local_5c[0] < 8) {
    do {
      local_6c[0] = (undefined1)uVar7;
      pfVar4 = (float *)FUN_0251b3b0(local_6c,0);
      if (pfVar4 != (float *)0x0) {
        uVar1 = (int)((float)(int)(*pfVar4 + -2.5) / 5.0) - (uint)(*pfVar4 + -2.5 < 0.0) & 0xffff;
        uVar2 = (int)((float)(int)(pfVar4[2] + -2.5) / 5.0) - (uint)(pfVar4[2] + -2.5 < 0.0) &
                0xffff;
        FUN_035a4dd4(&DAT_05779f28,uVar1,uVar2,param_3);
        if (-1 < *(int *)(DAT_05779f68 + 0x18)) {
          FUN_035a9090(&DAT_05779f28,uVar1,uVar2,param_3);
        }
      }
      uVar6 = (ulong)uVar7;
      do {
        if (uVar6 == 7) {
          return;
        }
        uVar6 = uVar6 + 1;
        uVar5 = FUN_02507924(local_68,puVar3 + uVar6);
      } while ((uVar5 & 1) == 0);
      local_68[0] = puVar3[uVar6];
      uVar7 = (uint)local_68[0];
    } while (uVar7 < 8);
  }
  return;
}

