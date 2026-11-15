
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_0248ad90(long param_1,ulong param_2)

{
  undefined *puVar1;
  float *pfVar2;
  char *__dest;
  int iVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_1dc;
  float fStack_1d8;
  float local_1d4;
  float fStack_1d0;
  float local_1cc;
  float fStack_1c8;
  float local_1c4;
  undefined8 local_1c0;
  float local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  undefined8 local_1ac;
  char *local_160;
  int local_158;
  undefined *local_108;
  int local_100;
  undefined1 local_b8;
  undefined4 local_ac;
  undefined1 local_88;
  undefined4 local_84;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_54;
  
  pfVar2 = (float *)PTR_DAT_04bc3038;
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
    if (DAT_04c487d4 == -1) {
LAB_0248b078:
      if ((param_2 & 1) != 0) {
        return 0;
      }
      FUN_0257a010(&local_1c0);
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      puVar1 = PTR_DAT_04c4b988;
      if (local_108 != PTR_DAT_04c4b988) {
        (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
        lVar4 = 0;
        do {
          if (PTR_DAT_04c4b988[lVar4] == '\0') goto LAB_0248b428;
          if (PTR_DAT_04c4b988[lVar4 + 1] == '\0') {
            lVar4 = lVar4 + 1;
            goto LAB_0248b428;
          }
          if (PTR_DAT_04c4b988[lVar4 + 2] == '\0') {
            lVar4 = lVar4 + 2;
            goto LAB_0248b428;
          }
          lVar4 = lVar4 + 3;
        } while (lVar4 != 0x80001);
        lVar4 = 0;
LAB_0248b428:
        iVar3 = (int)lVar4;
        if (local_100 <= (int)lVar4) {
          iVar3 = local_100 + -1;
        }
        memcpy(local_108,puVar1,(long)iVar3);
        local_108[iVar3] = 0;
      }
      __dest = (char *)CONCAT44(iStack_1b4,local_1b8);
      if (__dest != "Player_FtrActionError") {
        iVar3 = 0x15;
        if (iStack_1b0 < 0x16) {
          iVar3 = iStack_1b0 + -1;
        }
        memcpy(__dest,"Player_FtrActionError",(long)iVar3);
        __dest[iVar3] = '\0';
      }
      if (local_160 != "FenceBuildError_PlayingNet") {
        iVar3 = 0x1a;
        if (local_158 < 0x1b) {
          iVar3 = local_158 + -1;
        }
        memcpy(local_160,"FenceBuildError_PlayingNet",(long)iVar3);
        local_160[iVar3] = '\0';
      }
      local_b8 = 0;
      local_ac = 9;
      local_88 = 1;
      local_84 = 1;
      local_78 = 0x3c;
      FUN_024480f0(param_1,&local_1c0);
      return 0;
    }
    local_1c0 = (undefined **)CONCAT44(local_1c0._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) == 0) goto LAB_0248b078;
  }
  if ((param_2 & 1) != 0) {
    return 0;
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x68) + 0x2b4);
  pfVar5 = (float *)PTR_DAT_04bc3038;
  if (*(char *)(param_1 + 0x12f8) != '\0') {
    pfVar5 = (float *)(param_1 + 0xeec);
  }
  fVar11 = SQRT(pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5);
  lVar4 = FUN_0251e98c(1);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x120) + 0xf0))(lVar4 + 0x120);
  if (*pfVar5 <= fVar11) {
    lVar4 = FUN_0251e98c(1);
    pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x120) + 0xf0))(lVar4 + 0x120);
    fVar10 = *pfVar5;
    lVar4 = FUN_0251e98c(1);
    pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x120) + 0xf0))(lVar4 + 0x120);
    fVar10 = (fVar11 - *pfVar5) / (1.0 - fVar10);
    fVar11 = 0.9999;
    if (fVar10 <= 0.9999) {
      fVar11 = fVar10;
    }
    if ((0.0 <= fVar10) && (0.0 < fVar11)) {
      local_1dc = 1.4013e-44;
      local_1c0 = (undefined **)CONCAT44(local_1c0._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) {
        local_1c0 = (undefined **)CONCAT44(local_1c0._4_4_,10);
        if (*(char *)(param_1 + 0x12f8) != '\0') {
          pfVar2 = (float *)(param_1 + 0xeec);
        }
        FUN_02569464(&local_1c0,pfVar2);
        iVar3 = (int)(float)local_1c0;
      }
    }
  }
  lVar4 = *(long *)(param_1 + 0x68);
  iVar3 = (int)(long)((float)(iVar3 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0);
  fVar11 = (float)(int)((int)((float)(int)*(float *)(lVar4 + 0x278) / 5.0) -
                        (uint)(*(float *)(lVar4 + 0x278) < 0.0) & 0xfffffffe) * 5.0 + 5.0;
  fVar10 = (float)(int)((int)((float)(int)*(float *)(lVar4 + 0x280) / 5.0) -
                        (uint)(*(float *)(lVar4 + 0x280) < 0.0) & 0xfffffffe) * 5.0 + 5.0;
  local_58 = iVar3;
  fStack_1c8 = (float)FUN_016e026c(0,lVar4 + 0x278,0,0);
  local_1c0 = (undefined **)CONCAT44(fStack_1c8,fVar11);
  local_1dc = (float)(iVar3 + 0x20000000U >> 0x1e);
  local_1b8 = fVar10;
  switch(local_1dc) {
  case 0.0:
    local_1b8 = 10.0;
    break;
  case 1.4013e-45:
    fVar12 = 10.0;
    goto LAB_0248b12c;
  case 2.8026e-45:
    local_1b8 = -10.0;
    break;
  case 4.2039e-45:
    fVar12 = -10.0;
LAB_0248b12c:
    local_1c0 = (undefined **)CONCAT44(fStack_1c8,fVar11 + fVar12);
  default:
    goto switchD_0248b068_default;
  }
  local_1b8 = fVar10 + local_1b8;
switchD_0248b068_default:
  fVar13 = (float)(int)((int)((float)(int)(float)local_1c0 / 5.0) - (uint)((float)local_1c0 < 0.0) &
                       0xfffffffe) * 5.0 + 5.0;
  fVar12 = (float)(int)((int)((float)(int)local_1b8 / 5.0) - (uint)(local_1b8 < 0.0) & 0xfffffffe) *
           5.0 + 5.0;
  local_1cc = fVar11;
  local_1c4 = fVar10;
  FUN_016e026c(0,&local_1c0,0,0);
  local_1dc = fVar13 + -5.0;
  fStack_1d8 = fVar12 + -5.0;
  local_1d4 = fVar13 + 5.0;
  fStack_1d0 = fVar12 + 5.0;
  lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  uVar6 = FUN_022bdf4c(lVar4 + 0xb0,&local_1cc,&local_58);
  if ((((uVar6 & 1) == 0) ||
      (uVar6 = FUN_01735e9c(0,&local_1dc,*(undefined4 *)(param_1 + 0x230)), (uVar6 & 1) != 0)) ||
     (uVar6 = FUN_01736cb8(&local_1dc,*(undefined4 *)(param_1 + 0x230)), (uVar6 & 1) != 0)) {
    local_70 = CONCAT44(local_70._4_4_,0xa7);
    lVar9 = *(long *)(param_1 + 0x70);
    uVar8 = 0;
    lVar4 = 0;
    if (lVar9 != 0) {
      uVar8 = 0;
      if (*(uint *)(lVar9 + 0x280) < 0x149) {
        uVar8 = *(uint *)(lVar9 + 0x280);
      }
      lVar4 = lVar9 + 0x278;
    }
    if (uVar8 == 0xa7) {
      return 1;
    }
    local_1c0 = (undefined **)CONCAT44(local_1c0._4_4_,0xa7);
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
    *(undefined8 *)(param_1 + 0x18c0) = 0;
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
    *(undefined8 *)(param_1 + 0x18c8) = 0;
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
    *(undefined8 *)(param_1 + 0x18d0) = 0;
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18a0) = 0;
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
    *(undefined8 *)(param_1 + 0x18a8) = 0;
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
    *(undefined8 *)(param_1 + 0x18b0) = 0;
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
    *(undefined8 *)(param_1 + 0x18b8) = 0;
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1880) = 0;
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1888) = 0;
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1890) = 0;
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1898) = 0;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
    FUN_03ebb160(lVar4,0xa7);
    return 1;
  }
  local_68 = 0;
  local_70 = 0;
  local_1c0 = &PTR_FUN_048f9730;
  local_1b8 = (float)((int)((float)(int)fVar13 / 10.0) - (uint)(fVar13 < 0.0));
  iStack_1b4 = (int)((float)(int)fVar12 / 10.0) - (uint)(fVar12 < 0.0);
  local_54 = 0x2d;
  local_54 = 0x2d;
  local_68 = 0;
  local_70 = 0x200000000000;
  uVar6 = FUN_00977f70(&local_1c0,&local_70);
  if ((uVar6 & 1) == 0) {
    local_1c0 = (undefined **)CONCAT44(fStack_1c8,local_1cc);
    local_1b8 = local_1c4;
    iStack_1b4 = 0x409ccccd;
    iStack_1b0 = 0x3f800000;
    local_1ac = 0x67;
    iVar3 = FUN_016ed290(&local_1c0,0,0,0);
    if (iVar3 == 0) {
      uVar7 = 0xa4;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      iVar3 = (int)(fStack_1c8 * 4.0);
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(int *)(param_1 + 0x1982) = (int)(local_1cc * 999.99994);
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(int *)(param_1 + 0x1988) = (int)(local_1c4 * 999.99994);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      if (0x7ffe < iVar3) {
        iVar3 = 0x7fff;
      }
      if (iVar3 < -0x7fff) {
        iVar3 = -0x8000;
      }
      *(short *)(param_1 + 0x1986) = (short)iVar3;
      lVar4 = param_1 + 0x1960;
      *(undefined2 *)(param_1 + 0x1980) = local_58._2_2_;
      goto LAB_0248b5bc;
    }
  }
  uVar7 = 0xa7;
  lVar4 = 0;
LAB_0248b5bc:
  FUN_02372864(param_1,uVar7,lVar4,1);
  return 1;
}

