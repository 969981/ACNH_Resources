
uint FUN_016ec400(float param_1,float *param_2,undefined4 param_3)

{
  float *pfVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float local_4c;
  float fStack_48;
  float local_44;
  
  uVar4 = FUN_016ebe64();
  if ((uVar4 & 1) == 0) {
    fVar6 = param_1 * 0.0;
    local_4c = fVar6 + *param_2;
    fStack_48 = fVar6 + param_2[1];
    local_44 = param_2[2] + param_1;
    uVar4 = FUN_016ebe64(&local_4c,param_3);
    puVar2 = PTR_DAT_04bb2d00;
    if ((uVar4 & 1) == 0) {
      pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(DAT_05240230 >> 0x14) & 0xff0));
      fVar5 = (float)(DAT_05240230 & 0xffffff) * 5.9604645e-08;
      fStack_48 = fVar6 + param_2[1];
      local_4c = (*pfVar1 + fVar5 * pfVar1[1]) * param_1 + *param_2;
      local_44 = (pfVar1[2] + fVar5 * pfVar1[3]) * param_1 + param_2[2];
      uVar4 = FUN_016ebe64(&local_4c,param_3);
      if ((uVar4 & 1) == 0) {
        pfVar1 = (float *)(puVar2 + (ulong)(DAT_05240230 >> 0x17 & 0xff) * 0x10);
        fVar5 = (float)((DAT_05240230 & 0x7fffff) << 1) * 5.9604645e-08;
        fStack_48 = fVar6 + param_2[1];
        local_4c = (*pfVar1 + fVar5 * pfVar1[1]) * param_1 + *param_2;
        local_44 = (pfVar1[2] + fVar5 * pfVar1[3]) * param_1 + param_2[2];
        uVar4 = FUN_016ebe64(&local_4c,param_3);
        if ((uVar4 & 1) == 0) {
          pfVar1 = (float *)(puVar2 + (ulong)(DAT_05240230 * 3 >> 0x18) * 0x10);
          fVar5 = (float)(DAT_05240230 * 3 & 0xffffff) * 5.9604645e-08;
          fStack_48 = fVar6 + param_2[1];
          local_4c = (*pfVar1 + fVar5 * pfVar1[1]) * param_1 + *param_2;
          local_44 = (pfVar1[2] + fVar5 * pfVar1[3]) * param_1 + param_2[2];
          uVar4 = FUN_016ebe64(&local_4c,param_3);
          if ((uVar4 & 1) == 0) {
            pfVar1 = (float *)(puVar2 + (ulong)(DAT_05240230 >> 0x16 & 0xff) * 0x10);
            fVar5 = (float)((DAT_05240230 & 0x3fffff) << 2) * 5.9604645e-08;
            fStack_48 = fVar6 + param_2[1];
            local_4c = (*pfVar1 + fVar5 * pfVar1[1]) * param_1 + *param_2;
            local_44 = (pfVar1[2] + fVar5 * pfVar1[3]) * param_1 + param_2[2];
            uVar4 = FUN_016ebe64(&local_4c,param_3);
            if ((uVar4 & 1) == 0) {
              pfVar1 = (float *)(puVar2 + (ulong)(DAT_05240230 * 5 >> 0x18) * 0x10);
              fVar5 = (float)(DAT_05240230 * 5 & 0xffffff) * 5.9604645e-08;
              fStack_48 = fVar6 + param_2[1];
              local_4c = (*pfVar1 + fVar5 * pfVar1[1]) * param_1 + *param_2;
              local_44 = (pfVar1[2] + fVar5 * pfVar1[3]) * param_1 + param_2[2];
              uVar4 = FUN_016ebe64(&local_4c,param_3);
              if ((uVar4 & 1) == 0) {
                pfVar1 = (float *)(puVar2 + (ulong)(DAT_05240230 * 3 >> 0x17 & 0xff) * 0x10);
                fVar5 = (float)(DAT_05240230 * 6 & 0xfffffe) * 5.9604645e-08;
                fStack_48 = fVar6 + param_2[1];
                local_4c = (*pfVar1 + fVar5 * pfVar1[1]) * param_1 + *param_2;
                local_44 = (pfVar1[2] + fVar5 * pfVar1[3]) * param_1 + param_2[2];
                uVar4 = FUN_016ebe64(&local_4c,param_3);
                if ((uVar4 & 1) == 0) {
                  pfVar1 = (float *)(puVar2 + (ulong)(DAT_05240230 * 7 >> 0x18) * 0x10);
                  fVar5 = (float)(DAT_05240230 * 7 & 0xffffff) * 5.9604645e-08;
                  fStack_48 = fVar6 + param_2[1];
                  local_4c = (*pfVar1 + fVar5 * pfVar1[1]) * param_1 + *param_2;
                  local_44 = (pfVar1[2] + fVar5 * pfVar1[3]) * param_1 + param_2[2];
                  uVar3 = FUN_016ebe64(&local_4c,param_3);
                  goto LAB_016ec6dc;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = 1;
LAB_016ec6dc:
  return uVar3 & 1;
}

