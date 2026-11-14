
bool FUN_016ea82c(float param_1,float *param_2)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  float local_50;
  float fStack_4c;
  float local_48;
  int local_44;
  
  puVar2 = PTR_DAT_04bb27c8;
  local_44 = 0;
  FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,param_2,&local_44);
  if (local_44 != 0x1c) {
    fVar5 = -param_1;
    if (0.0 <= param_1) {
      fVar5 = param_1;
    }
    if (fVar5 <= 1.1920929e-07) {
      return false;
    }
    fVar5 = param_1 * 0.0;
    local_48 = param_2[2] + param_1;
    local_50 = fVar5 + *param_2;
    fStack_4c = fVar5 + param_2[1];
    FUN_0093a950(*(long *)puVar2 + 0x28,&local_50,&local_44);
    puVar3 = PTR_DAT_04bb2d00;
    if (local_44 != 0x1c) {
      pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(DAT_05240230 >> 0x14) & 0xff0));
      fVar4 = (float)(DAT_05240230 & 0xffffff) * 5.9604645e-08;
      fStack_4c = fVar5 + param_2[1];
      local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
      local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
      FUN_0093a950(*(long *)puVar2 + 0x28,&local_50,&local_44);
      if (local_44 != 0x1c) {
        pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 >> 0x17 & 0xff) * 0x10);
        fVar4 = (float)((DAT_05240230 & 0x7fffff) << 1) * 5.9604645e-08;
        fStack_4c = fVar5 + param_2[1];
        local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
        local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
        FUN_0093a950(*(long *)puVar2 + 0x28,&local_50,&local_44);
        if (local_44 != 0x1c) {
          pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 * 3 >> 0x18) * 0x10);
          fVar4 = (float)(DAT_05240230 * 3 & 0xffffff) * 5.9604645e-08;
          fStack_4c = fVar5 + param_2[1];
          local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
          local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
          FUN_0093a950(*(long *)puVar2 + 0x28,&local_50,&local_44);
          if (local_44 != 0x1c) {
            pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 >> 0x16 & 0xff) * 0x10);
            fVar4 = (float)((DAT_05240230 & 0x3fffff) << 2) * 5.9604645e-08;
            fStack_4c = fVar5 + param_2[1];
            local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
            local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
            FUN_0093a950(*(long *)puVar2 + 0x28,&local_50,&local_44);
            if (local_44 != 0x1c) {
              pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 * 5 >> 0x18) * 0x10);
              fVar4 = (float)(DAT_05240230 * 5 & 0xffffff) * 5.9604645e-08;
              fStack_4c = fVar5 + param_2[1];
              local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
              local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
              FUN_0093a950(*(long *)puVar2 + 0x28,&local_50,&local_44);
              if (local_44 != 0x1c) {
                pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 * 3 >> 0x17 & 0xff) * 0x10);
                fVar4 = (float)(DAT_05240230 * 6 & 0xfffffe) * 5.9604645e-08;
                fStack_4c = fVar5 + param_2[1];
                local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
                local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
                FUN_0093a950(*(long *)puVar2 + 0x28,&local_50,&local_44);
                if (local_44 != 0x1c) {
                  pfVar1 = (float *)(puVar3 + (ulong)(DAT_05240230 * 7 >> 0x18) * 0x10);
                  fVar4 = (float)(DAT_05240230 * 7 & 0xffffff) * 5.9604645e-08;
                  fStack_4c = fVar5 + param_2[1];
                  local_50 = (*pfVar1 + fVar4 * pfVar1[1]) * param_1 + *param_2;
                  local_48 = (pfVar1[2] + fVar4 * pfVar1[3]) * param_1 + param_2[2];
                  FUN_0093a950(*(long *)puVar2 + 0x28,&local_50,&local_44);
                  return local_44 == 0x1c;
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}

