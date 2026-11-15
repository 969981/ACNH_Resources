
void FUN_01fb63c4(long *param_1,undefined2 *param_2,long param_3,int param_4)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint *puVar9;
  char *__src;
  undefined4 uVar10;
  char *__dest;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  undefined4 local_254;
  undefined8 local_250;
  int local_248;
  int iStack_244;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  long local_230;
  undefined4 local_228 [2];
  long *local_220;
  undefined8 local_200;
  undefined4 local_1f8;
  float local_1f0;
  undefined4 local_1ec;
  float local_1e8;
  undefined4 local_1e4;
  undefined1 local_1e0;
  float local_1dc;
  undefined4 local_1d8;
  float local_1d4;
  undefined1 local_1d0;
  undefined8 local_1c8;
  int local_1a0;
  int iStack_19c;
  int local_190;
  int iStack_18c;
  float local_188;
  undefined4 local_184;
  float local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_138;
  char *local_110;
  int local_108;
  int local_7c;
  
  lVar6 = DAT_05150358;
  if (DAT_05150358 == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0xb0) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0x488) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0x2b0) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0) {
    return;
  }
  local_7c = param_4;
  uVar5 = FUN_0277d6c4(param_2);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
  if (*(uint *)(lVar6 + 0x1d8) <= uVar5) {
    return;
  }
  if (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return;
  }
  plVar1 = param_1 + 0x15f1;
  if ((((int)*plVar1 == 0) && (*(int *)(param_1[1] + 0x750) == 0)) && (local_7c != 4)) {
    *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) | 2;
    *(undefined4 *)(param_1 + 0x240b) = 1;
    iVar12 = *(int *)(param_3 + 0x24);
    iVar11 = *(int *)(param_3 + 0x14);
    *(float *)((long)param_1 + 0x1205c) =
         ((float)*(int *)(param_3 + 0x10) * 5.0 + (float)*(int *)(param_3 + 0x20) * 5.0 + 5.0) * 0.5
    ;
    *(float *)((long)param_1 + 0x12064) = ((float)iVar11 * 5.0 + (float)iVar12 * 5.0 + 5.0) * 0.5;
  }
  FUN_01e63f1c(local_228);
  FUN_0124c030(auStack_240,param_2);
  if (local_230 == 0) {
LAB_01fb66e4:
    iVar11 = FUN_0123db50(auStack_238,local_230);
    if (iVar11 - 0x23U < 9) {
      if ((int)*plVar1 == 1) {
        local_228[0] = 0x53;
        *(undefined4 *)((long)param_1 + 0x12084) = 0;
        piVar8 = (int *)(**(code **)(*(long *)(DAT_053e0208 + 0x17c08) + 0xf0))();
        puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar2 = puVar9[3];
        uVar5 = *puVar9 ^ *puVar9 << 0xb;
        *puVar9 = puVar9[1];
        puVar9[1] = puVar9[2];
        uVar5 = uVar5 >> 8 ^ uVar2 >> 0x13 ^ uVar5 ^ uVar2;
        puVar9[2] = uVar2;
        puVar9[3] = uVar5;
        *(int *)(param_1 + 0x1613) =
             (int)((float)*piVar8 +
                  ((float)(uVar5 >> 9 | 0x3f800000) + -1.0) * (float)(piVar8[1] - *piVar8)) * 0x1e;
        local_250 = (undefined *)0x94b;
        FUN_0277d4ac(&local_250);
        local_14c = (uint)local_250;
        local_148 = local_250._4_4_;
        if (local_110 != "NpcWatering") {
          iVar11 = 0xb;
          if (local_108 < 0xc) {
            iVar11 = local_108 + -1;
          }
          memcpy(local_110,"NpcWatering",(long)iVar11);
          local_110[iVar11] = '\0';
        }
        local_1a0 = *(int *)(param_3 + 0x10);
        iStack_19c = *(int *)(param_3 + 0x14);
        local_138 = 0;
        local_188 = (float)local_1a0 * 5.0 + 5.0;
        local_180 = (float)iStack_19c * 5.0 + 5.0;
        lVar6 = *(long *)PTR_DAT_04bb27c8;
        local_190 = local_1a0;
        iStack_18c = iStack_19c;
        if (((lVar6 == 0) || (*(long *)(lVar6 + 0xa8) == 0)) || (*(char *)(lVar6 + 0x11c8) != '\0'))
        {
          local_184 = 0xc3fa0000;
        }
        else {
          local_184 = FUN_0093a950(lVar6 + 0x28,&local_188,0);
        }
        local_154 = DAT_053b45a4;
        local_15c = DAT_053b459c;
        param_1[0x2446] = 0;
        uStack_168 = DAT_053b4590;
        local_160 = DAT_053b4598;
        param_1[0x2444] = (long)param_1;
        param_1[0x2445] = (long)&LAB_01fc1ae0;
LAB_01fb6cc4:
        local_1c8 = CONCAT44(1,(undefined4)local_1c8);
        local_220 = param_1 + 0x2443;
        local_170 = 0x41200000;
        goto LAB_01fb6cc8;
      }
      if ((int)*plVar1 != 0) goto LAB_01fb6cd8;
      *(undefined4 *)((long)param_1 + 0x12084) = 0;
      local_228[0] = 0x45;
      local_250 = (undefined *)0x94b;
      FUN_0277d4ac(&local_250);
      local_178 = (uint)local_250;
      uStack_174 = local_250._4_4_;
      if (local_110 != "NpcWatering") {
        __src = "NpcWatering";
        bVar3 = SBORROW4(local_108,0xb);
        iVar11 = local_108 + -0xb;
        bVar4 = local_108 == 0xb;
        iVar12 = 0xb;
        __dest = local_110;
LAB_01fb6830:
        if (bVar4 || iVar11 < 0 != bVar3) {
          iVar12 = local_108 + -1;
        }
        memcpy(__dest,__src,(long)iVar12);
        __dest[iVar12] = '\0';
      }
    }
    else {
      iVar11 = FUN_0123db50(auStack_238,local_230);
      if (((iVar11 - 2U & 0xfffffff9) == 0) && (local_230 != 0)) {
        local_250 = (undefined *)CONCAT44(local_250._4_4_,5);
        lVar6 = FUN_01246470(local_230,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
        if (lVar6 != 0) {
          uVar5 = (uint)local_250 + 7;
          if (-1 < (int)(uint)local_250) {
            uVar5 = (uint)local_250;
          }
          if ((*(byte *)(lVar6 + (ulong)(uint)((int)uVar5 >> 3)) >> (ulong)((uint)local_250 & 7) & 1
              ) != 0) {
            uVar7 = FUN_01f9db88(param_1,param_1 + 0x23f9,param_1 + 0x23fa,0);
            if ((uVar7 & 1) != 0) goto LAB_01fb6cd8;
            goto LAB_01fb6940;
          }
        }
      }
      iVar11 = FUN_0123db50(auStack_238,local_230);
      if ((iVar11 != 0x1f) && (iVar11 = FUN_0123db50(auStack_238,local_230), 5 < iVar11 - 0x12U)) {
LAB_01fb6940:
        (**(code **)(*param_1 + 0x538))(param_1);
        return;
      }
      iVar11 = FUN_0123db50(auStack_238,local_230);
      uVar10 = 1;
      if (iVar11 != 0x1f) {
        uVar10 = 2;
      }
      *(undefined4 *)(param_1 + 0x2477) = uVar10;
      if ((int)*plVar1 == 1) {
        local_228[0] = 0x53;
        *(undefined4 *)((long)param_1 + 0x12084) = 0;
        piVar8 = (int *)(**(code **)(*(long *)(DAT_053e0208 + 0x17c08) + 0xf0))();
        puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar2 = puVar9[3];
        uVar5 = *puVar9 ^ *puVar9 << 0xb;
        *puVar9 = puVar9[1];
        puVar9[1] = puVar9[2];
        uVar5 = uVar5 >> 8 ^ uVar2 >> 0x13 ^ uVar5 ^ uVar2;
        puVar9[2] = uVar2;
        puVar9[3] = uVar5;
        *(int *)(param_1 + 0x1613) =
             (int)((float)*piVar8 +
                  ((float)(uVar5 >> 9 | 0x3f800000) + -1.0) * (float)(piVar8[1] - *piVar8)) * 0x1e;
        local_250 = (undefined *)0x38ae;
        FUN_0277d4ac(&local_250);
        local_14c = (uint)local_250;
        local_148 = local_250._4_4_;
        if (local_110 != "NpcTrowelGarden") {
          iVar11 = 0xf;
          if (local_108 < 0x10) {
            iVar11 = local_108 + -1;
          }
          memcpy(local_110,"NpcTrowelGarden",(long)iVar11);
          local_110[iVar11] = '\0';
        }
        iVar11 = FUN_0123db50(auStack_238,local_230);
        local_1a0 = *(int *)(param_3 + 0x10);
        iStack_19c = *(int *)(param_3 + 0x14);
        local_138 = 1;
        if (iVar11 != 0x1f) {
          local_138 = 2;
        }
        local_188 = (float)local_1a0 * 5.0 + 5.0;
        local_180 = (float)iStack_19c * 5.0 + 5.0;
        lVar6 = *(long *)PTR_DAT_04bb27c8;
        local_190 = local_1a0;
        iStack_18c = iStack_19c;
        if (((lVar6 == 0) || (*(long *)(lVar6 + 0xa8) == 0)) || (*(char *)(lVar6 + 0x11c8) != '\0'))
        {
          local_184 = 0xc3fa0000;
        }
        else {
          local_184 = FUN_0093a950(lVar6 + 0x28,&local_188,0);
        }
        local_154 = DAT_053b45a4;
        local_15c = DAT_053b459c;
        param_1[0x2446] = 0;
        uStack_168 = DAT_053b4590;
        local_160 = DAT_053b4598;
        param_1[0x2444] = (long)param_1;
        param_1[0x2445] = (long)&LAB_01fc1ae0;
        goto LAB_01fb6cc4;
      }
      if ((int)*plVar1 != 0) goto LAB_01fb6cd8;
      *(undefined4 *)((long)param_1 + 0x12084) = 0;
      local_228[0] = 0x45;
      local_250 = (undefined *)0x38ae;
      FUN_0277d4ac(&local_250);
      local_178 = (uint)local_250;
      uStack_174 = local_250._4_4_;
      if (local_110 != "NpcTrowelGarden") {
        __src = "NpcTrowelGarden";
        bVar3 = SBORROW4(local_108,0xf);
        iVar11 = local_108 + -0xf;
        bVar4 = local_108 == 0xf;
        iVar12 = 0xf;
        __dest = local_110;
        goto LAB_01fb6830;
      }
    }
    local_1e0 = 1;
    local_1d0 = 1;
    local_1d8 = 0;
    local_1c8 = 0x100000001;
    local_1ec = 0;
    local_1f0 = ((float)(int)param_1[0x23fc] * 5.0 + (float)(int)param_1[0x23fe] * 5.0 + 5.0) * 0.5;
    local_1e8 = ((float)*(int *)((long)param_1 + 0x11fe4) * 5.0 +
                (float)*(int *)((long)param_1 + 0x11ff4) * 5.0 + 5.0) * 0.5;
    local_1dc = local_1f0;
    local_1d4 = local_1e8;
  }
  else {
    local_250 = (undefined *)CONCAT44(local_250._4_4_,4);
    lVar6 = FUN_01246470(local_230,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
    if (lVar6 == 0) goto LAB_01fb66e4;
    uVar5 = (uint)local_250 + 7;
    if (-1 < (int)(uint)local_250) {
      uVar5 = (uint)local_250;
    }
    if ((*(byte *)(lVar6 + (ulong)(uint)((int)uVar5 >> 3)) >> (ulong)((uint)local_250 & 7) & 1) == 0
       ) goto LAB_01fb66e4;
    local_25c = 0;
    local_254 = 0;
    local_260 = 0;
    local_250 = PTR_DAT_04bb2018 + 0x10;
    fVar13 = ((float)*(int *)(param_3 + 0x14) * 5.0 + (float)*(int *)(param_3 + 0x24) * 5.0 + 5.0) *
             0.5;
    fVar14 = ((float)*(int *)(param_3 + 0x10) * 5.0 + (float)*(int *)(param_3 + 0x20) * 5.0 + 5.0) *
             0.5;
    local_248 = (int)((float)(int)fVar14 / 10.0) - (uint)(fVar14 < 0.0);
    iStack_244 = (int)((float)(int)fVar13 / 10.0) - (uint)(fVar13 < 0.0);
    if (((int)*plVar1 == 1) &&
       (uVar7 = FUN_021e7590(&local_250,*(long *)(param_1[1] + 0x68) + 0x278,&local_25c,&local_260,0
                            ), (uVar7 & 1) == 0)) {
      return;
    }
    *(undefined4 *)((long)param_1 + 0x12084) = 0;
    local_268 = 0xc8d;
    FUN_0277d4ac(&local_268);
    local_178 = (undefined4)local_268;
    uStack_174 = local_268._4_4_;
    if (local_110 != "NpcNatureInterest") {
      iVar11 = 0x11;
      if (local_108 < 0x12) {
        iVar11 = local_108 + -1;
      }
      memcpy(local_110,"NpcNatureInterest",(long)iVar11);
      local_110[iVar11] = '\0';
    }
    local_228[0] = 0x45;
    local_1d8 = 0;
    local_1d0 = 1;
    local_1e0 = 1;
    local_1f8 = local_254;
    local_200 = local_25c;
    local_1c8 = 0x100000002;
    local_1e4 = local_260;
    local_1dc = fVar14;
    local_1d4 = fVar13;
  }
LAB_01fb6cc8:
  FUN_01fb1020(param_1,local_228,0x1e);
LAB_01fb6cd8:
  *(undefined4 *)((long)param_1 + 0xaf8c) = 0xc;
  *(undefined4 *)(param_1 + 0x1613) = 0x708;
  *(undefined2 *)(param_1 + 0x23f9) = *param_2;
  *(undefined1 *)((long)param_1 + 0x11fca) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 0x11fcb) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)((long)param_1 + 0x11fcc) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x23fc) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x11fe4) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(param_1 + 0x23fe) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)((long)param_1 + 0x11ff4) = *(undefined4 *)(param_3 + 0x24);
  return;
}

