
uint FUN_016ec964(float param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float local_5c;
  float fStack_58;
  float local_54;
  
  uVar4 = FUN_016ec764();
  if ((uVar4 & 1) != 0) {
    fVar6 = -param_1;
    if (0.0 <= param_1) {
      fVar6 = param_1;
    }
    if (fVar6 < 1.1920929e-07) {
      uVar3 = 1;
      goto LAB_016ecce0;
    }
    fVar6 = param_1 * 0.0;
    local_5c = fVar6 + *param_2;
    fStack_58 = fVar6 + param_2[1];
    local_54 = param_2[2] + param_1;
    uVar4 = FUN_016ec764(&local_5c,param_3 & 1);
    puVar2 = PTR_DAT_04bb2d00;
    if ((uVar4 & 1) != 0) {
      pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(DAT_05240230 >> 0x14) & 0xff0));
      fVar5 = (float)(DAT_05240230 & 0xffffff) * 5.9604645e-08;
      fStack_58 = fVar6 + param_2[1];
      local_5c = (*pfVar1 + fVar5 * pfVar1[1]) * param_1 + *param_2;
      local_54 = (pfVar1[2] + fVar5 * pfVar1[3]) * param_1 + param_2[2];
      uVar4 = FUN_016ec764(&local_5c,param_3 & 1);
      if ((uVar4 & 1) != 0) {
        pfVar1 = (float *)(puVar2 + (ulong)(DAT_05240230 >> 0x17 & 0xff) * 0x10);
        fVar5 = (float)((DAT_05240230 & 0x7fffff) << 1) * 5.9604645e-08;
        fStack_58 = fVar6 + param_2[1];
        local_5c = (*pfVar1 + fVar5 * pfVar1[1]) * param_1 + *param_2;
        local_54 = (pfVar1[2] + fVar5 * pfVar1[3]) * param_1 + param_2[2];
        uVar4 = FUN_016ec764(&local_5c,param_3 & 1);
        if ((uVar4 & 1) != 0) {
          pfVar1 = (float *)(puVar2 + (ulong)(DAT_05240230 * 3 >> 0x18) * 0x10);
          fVar5 = (float)(DAT_05240230 * 3 & 0xffffff) * 5.9604645e-08;
          fStack_58 = fVar6 + param_2[1];
          local_5c = (*pfVar1 + fVar5 * pfVar1[1]) * param_1 + *param_2;
          local_54 = (pfVar1[2] + fVar5 * pfVar1[3]) * param_1 + param_2[2];
          uVar4 = FUN_016ec764(&local_5c,param_3 & 1);
          if ((uVar4 & 1) != 0) {
            pfVar1 = (float *)(puVar2 + (ulong)(DAT_05240230 >> 0x16 & 0xff) * 0x10);
            fVar5 = (float)((DAT_05240230 & 0x3fffff) << 2) * 5.9604645e-08;
            fStack_58 = fVar6 + param_2[1];
            local_5c = (*pfVar1 + fVar5 * pfVar1[1]) * param_1 + *param_2;
            local_54 = (pfVar1[2] + fVar5 * pfVar1[3]) * param_1 + param_2[2];
            uVar4 = FUN_016ec764(&local_5c,param_3 & 1);
            if ((uVar4 & 1) != 0) {
              pfVar1 = (float *)(puVar2 + (ulong)(DAT_05240230 * 5 >> 0x18) * 0x10);
              fVar5 = (float)(DAT_05240230 * 5 & 0xffffff) * 5.9604645e-08;
              fStack_58 = fVar6 + param_2[1];
              local_5c = (*pfVar1 + fVar5 * pfVar1[1]) * param_1 + *param_2;
              local_54 = (pfVar1[2] + fVar5 * pfVar1[3]) * param_1 + param_2[2];
              uVar4 = FUN_016ec764(&local_5c,param_3 & 1);
              if ((uVar4 & 1) != 0) {
                pfVar1 = (float *)(puVar2 + (ulong)(DAT_05240230 * 3 >> 0x17 & 0xff) * 0x10);
                fVar5 = (float)(DAT_05240230 * 6 & 0xfffffe) * 5.9604645e-08;
                fStack_58 = fVar6 + param_2[1];
                local_5c = (*pfVar1 + fVar5 * pfVar1[1]) * param_1 + *param_2;
                local_54 = (pfVar1[2] + fVar5 * pfVar1[3]) * param_1 + param_2[2];
                uVar4 = FUN_016ec764(&local_5c,param_3 & 1);
                if ((uVar4 & 1) != 0) {
                  pfVar1 = (float *)(puVar2 + (ulong)(DAT_05240230 * 7 >> 0x18) * 0x10);
                  fVar5 = (float)(DAT_05240230 * 7 & 0xffffff) * 5.9604645e-08;
                  fStack_58 = fVar6 + param_2[1];
                  local_5c = (*pfVar1 + fVar5 * pfVar1[1]) * param_1 + *param_2;
                  local_54 = (pfVar1[2] + fVar5 * pfVar1[3]) * param_1 + param_2[2];
                  uVar3 = FUN_016ec764(&local_5c,param_3 & 1);
                  goto LAB_016ecce0;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_016ecce0:
  return uVar3 & 1;
}

