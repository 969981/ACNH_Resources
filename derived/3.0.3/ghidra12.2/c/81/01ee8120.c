
void FUN_01ee8120(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  char cVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_178;
  undefined4 local_170;
  undefined2 local_168;
  undefined2 uStack_166;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined4 local_158;
  uint auStack_154 [15];
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined1 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_80;
  
  local_168 = 0;
  uStack_166 = 0;
  uStack_164 = 0;
  local_160._0_4_ = 0;
  lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  if (lVar13 != 0) {
    local_160._0_4_ = *(undefined4 *)(lVar13 + 0x280);
    uVar15 = *(undefined8 *)(lVar13 + 0x278);
    local_168 = (undefined2)uVar15;
    uStack_166 = (undefined2)((ulong)uVar15 >> 0x10);
    uStack_164 = (undefined4)((ulong)uVar15 >> 0x20);
  }
  puVar3 = (undefined4 *)(param_1 + 0x7840);
  FUN_016dae54(0,&local_178,(long)&local_80 + 4,&local_80,&local_168,0,0,0);
  FUN_016dafc8(0,*(undefined8 *)(param_1 + 8),&local_178,(long)&local_80 + 4,&local_80,&local_168,0,
               0,0);
  uStack_118._0_4_ = (uint)(uint3)uStack_118;
  local_160 = auStack_154;
  local_158 = 0x40;
  auStack_154[0] = auStack_154[0] & 0xffffff00;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_168 = SUB82(puVar1,0);
  uStack_166 = (undefined2)((ulong)puVar1 >> 0x10);
  uStack_164 = (undefined4)((ulong)puVar1 >> 0x20);
  puVar9 = (undefined8 *)FUN_01e57b44(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3b0));
  local_178 = *puVar9;
  FUN_01ee87f0(param_1,&local_178,&local_168);
  local_80 = 0;
  lVar13 = *(long *)(param_1 + 0x10);
  FUN_01e5a930(0x40000000,lVar13,0x1b,PTR_DAT_04bb2150,(long)&local_80 + 4,&local_80,
               PTR_DAT_04bc1600,6);
  puVar16 = *(uint **)(lVar13 + 0x3b8);
  if ((char)*local_160 == '\0') {
LAB_01ee8308:
    *(char *)puVar16 = '\0';
  }
  else {
    (**(code **)(CONCAT44(uStack_164,CONCAT22(uStack_166,local_168)) + 0x18))(&local_168);
    puVar12 = local_160;
    if (puVar16 != local_160) {
      (**(code **)(CONCAT44(uStack_164,CONCAT22(uStack_166,local_168)) + 0x18))(&local_168);
      lVar11 = 0;
      do {
        if (*(char *)((long)local_160 + lVar11) == '\0') goto LAB_01ee82e0;
        if (*(char *)((long)local_160 + lVar11 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_01ee82e0;
        }
        if (*(char *)((long)local_160 + lVar11 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_01ee82e0;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_01ee82e0:
      iVar4 = (int)lVar11;
      if (*(int *)(lVar13 + 0x3c0) <= (int)lVar11) {
        iVar4 = *(int *)(lVar13 + 0x3c0) + -1;
      }
      memcpy(puVar16,puVar12,(long)iVar4);
      puVar16 = (uint *)((long)puVar16 + (long)iVar4);
      goto LAB_01ee8308;
    }
  }
  *(undefined1 *)(lVar13 + 0x676) = 0;
  *(undefined1 *)(lVar13 + 0x674) = 1;
  lVar13 = *(long *)(param_1 + 0x18);
  uVar10 = FUN_02085a50(lVar13,1,0);
  if ((uVar10 & 1) != 0) {
    *(undefined1 *)(lVar13 + 0x801) = 1;
    lVar11 = lVar13 + 0x10 + (ulong)*(uint *)(lVar13 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar13 + 0x294)) {
      lVar11 = lVar13 + 0x10;
    }
    *(undefined8 *)(lVar11 + 0xc) = 0;
    *(undefined4 *)(lVar11 + 0x14) = 0;
  }
  puVar1 = PTR_DAT_04bb43c0;
  if (*(char *)(param_1 + 0x789c) != '\0') goto LAB_01ee835c;
  local_158 = 0;
  auStack_154[0] = 0;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  local_168 = SUB82(puVar2,0);
  uStack_166 = (undefined2)((ulong)puVar2 >> 0x10);
  uStack_164 = (undefined4)((ulong)puVar2 >> 0x20);
  local_160._0_4_ = *puVar3;
  local_160._4_4_ = *(undefined4 *)(param_1 + 0x7844);
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_160);
  fVar21 = 0.0;
  if (*(long *)puVar1 == 0) {
LAB_01ee85bc:
    fVar20 = 0.0;
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_01ee85bc;
    lVar13 = *(long *)PTR_DAT_04bc0428;
    uVar8 = FUN_0277d6c4(puVar3);
    puVar2 = PTR_DAT_04bbfe90;
    puVar1 = PTR_DAT_04bbfe88;
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar8) ||
       (puVar16 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8),
       puVar16 == (uint *)0x0)) goto LAB_01ee85bc;
    uVar8 = *puVar16;
    fVar20 = -1.0;
    if (uVar8 != 0) {
      cVar18 = *PTR_DAT_04bbfe88;
      do {
        if (cVar18 != '\0') {
          uVar6 = *(uint *)(puVar2 + 0x28);
          if ((int)uVar6 < 0) {
            if (uVar6 == 0xffffffff) goto LAB_01ee8540;
LAB_01ee86fc:
            fVar21 = 0.0;
          }
          else {
            if ((float *)((ulong)uVar6 + (long)puVar16) == (float *)0x0) goto LAB_01ee86fc;
            fVar21 = *(float *)((ulong)uVar6 + (long)puVar16);
          }
LAB_01ee8700:
          uVar8 = *puVar16;
          if (uVar8 != 0) {
            cVar18 = *puVar1;
            goto LAB_01ee8720;
          }
          break;
        }
        cVar18 = '\x01';
        *puVar1 = 1;
        memset(puVar2,0xff,0x1ac);
        uVar8 = *puVar16;
LAB_01ee8540:
        puVar12 = (uint *)(ulong)uVar8;
        fVar21 = 0.0;
        if ((puVar12 == (uint *)0x0) || (puVar16 == puVar12)) goto LAB_01ee8700;
        lVar13 = 0xc;
        if (*(char *)((long)puVar16 + (10 - (long)puVar12)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar16 + (lVar13 - (long)puVar12);
        if (lVar13 == 0) goto LAB_01ee8700;
        uVar10 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar12));
        *(undefined4 *)(puVar2 + 0x28) = 0xfffffffe;
        if (uVar10 == 0) goto LAB_01ee8700;
        piVar14 = (int *)(lVar13 + 4);
        while (piVar14[-1] != -0x3e783aea) {
          piVar14 = piVar14 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_01ee8700;
        }
        fVar21 = 0.0;
        iVar4 = 0;
        if (*piVar14 != -1) {
          iVar4 = *piVar14;
        }
        *(int *)(puVar2 + 0x28) = iVar4;
        uVar8 = *puVar16;
      } while (uVar8 != 0);
    }
  }
LAB_01ee85c0:
  local_178 = *(undefined8 *)(param_1 + 0x7830);
  local_170 = *(undefined4 *)(param_1 + 0x7838);
  lVar13 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar13 == 0) || (*(long *)(lVar13 + 0xa8) == 0)) || (*(char *)(lVar13 + 0x11c8) != '\0')) {
    fVar19 = -500.0;
  }
  else {
    fVar19 = (float)FUN_0093a950(lVar13 + 0x28,&local_178,0);
  }
  lVar13 = *(long *)(param_1 + 0x18);
  local_178 = CONCAT44(fVar21 * fVar20 + fVar19,(undefined4)local_178);
  uVar10 = FUN_02085a50(lVar13,3,0);
  if ((uVar10 & 1) != 0) {
    lVar11 = lVar13 + 0x10;
    *(undefined1 *)(lVar13 + 0x801) = 1;
    lVar5 = lVar11 + (ulong)*(uint *)(lVar13 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar13 + 0x294)) {
      lVar5 = lVar11;
    }
    *(undefined4 *)(lVar5 + 0x14) = local_170;
    *(undefined8 *)(lVar5 + 0xc) = local_178;
    lVar5 = lVar11 + (ulong)*(uint *)(lVar13 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar13 + 0x294)) {
      lVar5 = lVar11;
    }
    *(undefined1 *)(lVar5 + 0x7e) = 1;
  }
  *(undefined4 *)(param_1 + 0xaedc) = 0xffffffff;
  lVar13 = *(long *)PTR_DAT_04bb26a8;
  uVar7 = FUN_0277d6c4(puVar3);
  for (lVar13 = *(long *)(lVar13 + 0x19f8a0);
      local_160 = (uint *)CONCAT44(local_160._4_4_,(undefined4)local_160), lVar13 != 0;
      lVar13 = *(long *)(lVar13 + 8)) {
    while (*(ushort *)(lVar13 + 0x20) <= uVar7) {
      if (uVar7 <= *(ushort *)(lVar13 + 0x20)) {
        local_160 = (uint *)CONCAT44(local_160._4_4_,(undefined4)local_160);
        if (*(int *)(lVar13 + 0x24) == 2) {
          *(undefined4 *)(param_1 + 0xaedc) = 100;
          local_160 = (uint *)CONCAT44(local_160._4_4_,(undefined4)local_160);
        }
        goto LAB_01ee835c;
      }
      lVar13 = *(long *)(lVar13 + 0x10);
      local_160 = (uint *)CONCAT44(local_160._4_4_,(undefined4)local_160);
      if (lVar13 == 0) goto LAB_01ee835c;
    }
  }
LAB_01ee835c:
  FUN_01ee8aa4(param_1);
  local_100 = 0;
  auStack_154[1] = 0xbf800000;
  auStack_154[2] = 0;
  auStack_154[3] = 0;
  auStack_154[4] = 0;
  uStack_164 = 0xffffffff;
  local_160._0_4_ = 0xffffffff;
  local_160._4_4_ = 0xffffffff;
  local_158 = 0xffffffff;
  auStack_154[0] = 0xffffffff;
  local_fc = 0xffffffffffffffff;
  local_f4 = 0xffffffffffffffff;
  local_ec = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0xffffffff;
  local_168 = 0;
  auStack_154[5] = 0xffffffff;
  auStack_154[6] = 0xffffffff;
  auStack_154[7] = 0;
  auStack_154[8] = 0xffffffff;
  auStack_154[9] = 0;
  auStack_154[10] = 0xffffffff;
  auStack_154[0xb] = 0xffffffff;
  auStack_154[0xc] = 0xffffffff;
  local_e8 = 0xffffffffffffffff;
  uStack_e0 = 0xffffffffbf800000;
  lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  auStack_154[0xd] = 0;
  auStack_154[0xe] = 0;
  uStack_118 = 0xffffffff;
  local_110 = 0xffffffff00000000;
  uStack_108 = 0xffffffff00000000;
  uVar17 = 0xffffffff;
  if (lVar13 != 0) {
    FUN_029a7b28(*(long *)PTR_DAT_04bb26a8 + 0x6d8,&local_168,lVar13 + 0x278);
    uVar17 = uStack_164;
  }
  *(undefined4 *)(param_1 + 0xaed8) = uVar17;
  return;
LAB_01ee8720:
  if (cVar18 == '\0') {
    cVar18 = '\x01';
    *puVar1 = 1;
    memset(puVar2,0xff,0x1ac);
    uVar8 = *puVar16;
  }
  else {
    uVar6 = *(uint *)(puVar2 + 0xdc);
    if (-1 < (int)uVar6) {
      if ((float *)((ulong)uVar6 + (long)puVar16) != (float *)0x0) {
        fVar20 = *(float *)((ulong)uVar6 + (long)puVar16);
      }
      goto LAB_01ee85c0;
    }
    if (uVar6 != 0xffffffff) goto LAB_01ee85c0;
  }
  puVar12 = (uint *)(ulong)uVar8;
  if ((puVar12 == (uint *)0x0) || (puVar16 == puVar12)) goto LAB_01ee85c0;
  lVar13 = 0xc;
  if (*(char *)((long)puVar16 + (10 - (long)puVar12)) != '\0') {
    lVar13 = 0x1c;
  }
  lVar13 = (long)puVar16 + (lVar13 - (long)puVar12);
  if (lVar13 == 0) goto LAB_01ee85c0;
  uVar10 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar12));
  *(undefined4 *)(puVar2 + 0xdc) = 0xfffffffe;
  if (uVar10 == 0) goto LAB_01ee85c0;
  piVar14 = (int *)(lVar13 + 4);
  while (piVar14[-1] != -0x7a39c48f) {
    piVar14 = piVar14 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_01ee85c0;
  }
  iVar4 = 0;
  if (*piVar14 != -1) {
    iVar4 = *piVar14;
  }
  *(int *)(puVar2 + 0xdc) = iVar4;
  uVar8 = *puVar16;
  if (uVar8 == 0) goto LAB_01ee85c0;
  goto LAB_01ee8720;
}

