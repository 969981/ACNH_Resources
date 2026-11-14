
uint FUN_016f36e0(float *param_1)

{
  float *pfVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_6c;
  float fStack_68;
  float local_64;
  
  fVar8 = param_1[5];
  fVar10 = param_1[2] - fVar8;
  fVar7 = param_1[3];
  fVar9 = *param_1 - fVar7;
  if (SQRT(fVar10 * fVar10 + fVar9 * fVar9) <= 10.0) {
    fVar9 = param_1[4];
    goto LAB_016f390c;
  }
  cVar2 = *(char *)(param_1 + 10);
  uVar4 = FUN_006f0400(fVar7 - *param_1,fVar8 - param_1[2]);
  local_6c = (float)((uint)uVar4 + 0x20000000 >> 0x1e);
  fVar7 = (float)(uVar4 & 0xffffffff) * 8.381903e-08;
  fVar8 = (float)(uint)((int)local_6c << 0x1e) * 8.381903e-08;
  if (fVar8 <= 360.0) {
    if (fVar8 < 0.0) {
      fVar9 = fVar8 / 360.0 + -1.0;
      goto LAB_016f37b4;
    }
  }
  else {
    fVar9 = fVar8 / 360.0;
LAB_016f37b4:
    fVar8 = fVar8 - (float)(int)fVar9 * 360.0;
  }
  if (fVar7 <= 360.0) {
    if (fVar7 < 0.0) {
      fVar9 = fVar7 / 360.0 + -1.0;
      goto LAB_016f37f0;
    }
  }
  else {
    fVar9 = fVar7 / 360.0;
LAB_016f37f0:
    fVar7 = fVar7 - (float)(int)fVar9 * 360.0;
  }
  fVar9 = 0.0;
  if (fVar8 != fVar7) {
    fVar10 = fVar8 - fVar7;
    fVar9 = fVar10;
    if (fVar8 <= fVar7) {
      fVar9 = fVar7 - fVar8;
    }
    if (fVar9 <= 180.0) {
      fVar9 = fVar7 - fVar8;
      if (fVar7 < fVar8) goto LAB_016f3850;
    }
    else {
      fVar10 = 360.0 - fVar9;
      fVar9 = fVar10;
      if (fVar8 <= fVar7) {
LAB_016f3850:
        fVar9 = -fVar10;
      }
    }
  }
  fVar7 = -fVar9;
  if (0.0 <= fVar9) {
    fVar7 = fVar9;
  }
  fVar8 = 4.1421356;
  if (cVar2 != '\0') {
    fVar8 = 0.0;
  }
  fVar9 = (float)((uint)uVar4 & 0xffffff) * 5.9604645e-08;
  fVar8 = (fVar7 / 45.0) * fVar8 + 10.0;
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar4 >> 0x18 & 0xff) * 0x10);
  fVar11 = *pfVar1 + fVar9 * pfVar1[1];
  fVar10 = pfVar1[2] + fVar9 * pfVar1[3];
  fVar9 = fVar11 * 0.0;
  fVar7 = *param_1 + fVar9 * 0.0 + fVar10 * 0.0 + fVar8 * (fVar11 + 0.0);
  fVar9 = param_1[1] + (fVar9 * 0.0 + 1.0) * 0.0 + fVar10 * 0.0 * 0.0 + fVar8 * fVar9;
  fVar8 = param_1[2] + (fVar10 * 0.0 * 0.0 - fVar11 * 0.0) + fVar8 * fVar10;
  param_1[3] = fVar7;
  param_1[4] = fVar9;
  param_1[5] = fVar8;
LAB_016f390c:
  param_1[0xb] = fVar7;
  param_1[0xc] = fVar9;
  param_1[0xd] = fVar8;
  fVar9 = 0.0;
  fStack_68 = (float)FUN_016e026c(0,param_1,0,0);
  fVar8 = param_1[0xf];
  param_1[1] = fStack_68;
  fVar7 = -fVar8;
  if (0.0 <= fVar8) {
    fVar7 = fVar8;
  }
  fVar10 = param_1[3] - *param_1;
  fVar8 = param_1[5] - param_1[2];
  fVar11 = SQRT(fVar10 * fVar10 + 0.0 + fVar8 * fVar8);
  if (0.0 < fVar11) {
    fVar11 = 1.0 / fVar11;
    fVar10 = fVar10 * fVar11;
    fVar8 = fVar8 * fVar11;
    fVar9 = fVar11 * 0.0 * 5.0;
  }
  fVar10 = fVar10 * 5.0;
  fVar8 = fVar8 * 5.0;
  fStack_68 = fStack_68 + fVar9 * 1.1;
  local_6c = *param_1 + fVar10 * 1.1;
  local_64 = param_1[2] + fVar8 * 1.1;
  uVar3 = FUN_016f3ed0(&local_6c,param_1);
  if ((uVar3 == 0xe) || ((uVar3 | 4) != 5)) {
    local_6c = fVar10 * 1.15 + *param_1;
    fStack_68 = fVar9 * 1.15 + param_1[1];
    local_64 = fVar8 * 1.15 + param_1[2];
    uVar3 = FUN_016f3ed0(&local_6c,param_1);
    if ((uVar3 == 0xe) || ((uVar3 | 4) != 5)) {
      local_6c = fVar10 * 1.25 + *param_1;
      fStack_68 = fVar9 * 1.25 + param_1[1];
      local_64 = fVar8 * 1.25 + param_1[2];
      uVar3 = FUN_016f3ed0(&local_6c,param_1);
      if ((uVar3 == 0xe) || ((uVar3 | 4) != 5)) {
        if (fVar7 <= 1.1920929e-07) {
          fStack_68 = param_1[4] + 0.0;
          local_6c = param_1[3] + 0.0;
          local_64 = param_1[5] + 0.0;
          uVar3 = FUN_016f3ed0(&local_6c,param_1);
          if (uVar3 == 0xe) {
            iVar5 = 1;
          }
          else {
            if (uVar3 != 0) {
              return uVar3;
            }
            iVar5 = 0;
          }
          fStack_68 = param_1[4] + 0.0;
          local_6c = param_1[3] + 0.2;
          local_64 = param_1[5] + 0.0;
          uVar3 = FUN_016f3ed0(&local_6c,param_1);
          if (uVar3 == 0xe) {
            iVar5 = iVar5 + 1;
          }
          else if (uVar3 != 0) {
            return uVar3;
          }
          fStack_68 = param_1[4] + 0.0;
          local_6c = param_1[3] + 0.0;
          local_64 = param_1[5] + 0.2;
          uVar3 = FUN_016f3ed0(&local_6c,param_1);
          if (uVar3 == 0xe) {
            iVar5 = iVar5 + 1;
          }
          else if (uVar3 != 0) {
            return uVar3;
          }
          fStack_68 = param_1[4] + 0.0;
          local_6c = param_1[3] + -0.2;
          local_64 = param_1[5] + 0.0;
          uVar3 = FUN_016f3ed0(&local_6c,param_1);
          if (uVar3 == 0xe) {
            iVar5 = iVar5 + 1;
          }
          else if (uVar3 != 0) {
            return uVar3;
          }
          fStack_68 = param_1[4] + 0.0;
          local_6c = param_1[3] + 0.0;
          local_64 = param_1[5] + -0.2;
          uVar3 = FUN_016f3ed0(&local_6c,param_1);
          if (uVar3 == 0xe) {
            iVar5 = iVar5 + 1;
          }
          else if (uVar3 != 0) {
            return uVar3;
          }
          fStack_68 = param_1[4] + 0.0;
          local_6c = param_1[3] + 0.14140001;
          local_64 = param_1[5] + 0.14140001;
          uVar3 = FUN_016f3ed0(&local_6c,param_1);
          if (uVar3 == 0xe) {
            iVar5 = iVar5 + 1;
          }
          else if (uVar3 != 0) {
            return uVar3;
          }
          fStack_68 = param_1[4] + 0.0;
          local_6c = param_1[3] + -0.14140001;
          local_64 = param_1[5] + 0.14140001;
          uVar3 = FUN_016f3ed0(&local_6c,param_1);
          if (uVar3 == 0xe) {
            iVar5 = iVar5 + 1;
          }
          else if (uVar3 != 0) {
            return uVar3;
          }
          fStack_68 = param_1[4] + 0.0;
          local_6c = param_1[3] + -0.14140001;
          local_64 = param_1[5] + -0.14140001;
          uVar3 = FUN_016f3ed0(&local_6c,param_1);
          if (uVar3 == 0xe) {
            iVar5 = iVar5 + 1;
          }
          else if (uVar3 != 0) {
            return uVar3;
          }
          fStack_68 = param_1[4] + 0.0;
          local_6c = param_1[3] + 0.14140001;
          local_64 = param_1[5] + -0.14140001;
          uVar3 = FUN_016f3ed0(&local_6c,param_1);
          if (uVar3 == 0xe) {
            iVar5 = iVar5 + 1;
          }
          else if (uVar3 != 0) {
            return uVar3;
          }
        }
        else {
          lVar6 = 0;
          iVar5 = 0;
          do {
            fVar8 = *(float *)((long)&DAT_04176bac + lVar6);
            fVar7 = *(float *)((long)&DAT_04176bb4 + lVar6);
            fVar9 = SQRT(fVar8 * fVar8 + 0.0 + fVar7 * fVar7);
            if (fVar9 <= 0.0) {
              fVar10 = 0.0;
            }
            else {
              fVar9 = 1.0 / fVar9;
              fVar8 = fVar8 * fVar9;
              fVar10 = fVar9 * 0.0;
              fVar7 = fVar7 * fVar9;
            }
            fVar9 = param_1[0xf];
            local_6c = fVar8 * fVar9 + param_1[3];
            fStack_68 = fVar10 * fVar9 + param_1[4];
            local_64 = fVar7 * fVar9 + param_1[5];
            uVar3 = FUN_016f3ed0(&local_6c,param_1);
            if (uVar3 == 0xe) {
              iVar5 = iVar5 + 1;
            }
            else if (uVar3 != 0) {
              return uVar3;
            }
            lVar6 = lVar6 + 0xc;
          } while (lVar6 != 0x6c);
        }
        if (iVar5 != 9) {
          fVar7 = (float)FUN_016e026c(0,param_1 + 3,0,0);
          fVar8 = (float)FUN_016e026c(0,param_1,0,0);
          if (-10.0 <= fVar7 - fVar8) {
            param_1[0xe] = 0.0;
            return 0;
          }
        }
        uVar3 = 0xe;
        param_1[0xe] = 1.96182e-44;
      }
    }
  }
  return uVar3;
}

