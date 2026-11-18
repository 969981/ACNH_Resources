
void FUN_0345ca00(undefined1 *param_1,long param_2)

{
  uint uVar1;
  undefined8 ****ppppuVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined8 *local_358 [4];
  undefined8 local_338;
  undefined1 *local_330;
  undefined8 ****local_328;
  undefined8 ****ppppuStack_320;
  undefined8 ****local_318 [2];
  undefined8 ****local_308 [2];
  undefined8 ****local_2f8 [2];
  undefined8 ****local_2e8 [2];
  undefined8 ****local_2d8 [2];
  undefined8 ****local_2c8 [2];
  undefined8 ****local_2b8 [2];
  undefined8 ****local_2a8 [2];
  undefined8 ****local_298 [2];
  undefined8 ****local_288 [2];
  undefined8 ****local_278 [2];
  undefined8 ****local_268 [2];
  undefined8 ****local_258 [2];
  undefined8 ****local_248 [2];
  undefined8 ****local_238 [2];
  undefined8 ****local_228 [2];
  undefined8 ****local_218 [2];
  undefined8 ****local_208 [2];
  undefined8 ****local_1f8 [2];
  undefined8 ****local_1e8 [2];
  undefined8 ****local_1d8 [2];
  undefined8 ****local_1c8 [2];
  undefined8 ****local_1b8 [2];
  undefined8 ****local_1a8 [2];
  undefined8 ****local_198 [2];
  undefined8 ****local_188 [2];
  undefined8 ***local_178 [2];
  undefined8 **local_168 [2];
  undefined8 *local_158 [2];
  undefined8 local_148 [2];
  undefined1 local_138 [240];
  int local_48;
  int local_44;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined1 **)(param_1 + 0xf8) = param_1 + 0x108;
  *(undefined1 **)(param_1 + 0xe8) = param_1 + 0xf8;
  *(undefined1 **)(param_1 + 0xd8) = param_1 + 0xe8;
  *(undefined1 **)(param_1 + 200) = param_1 + 0xd8;
  *(undefined1 **)(param_1 + 0xb8) = param_1 + 200;
  *(undefined1 **)(param_1 + 0xa8) = param_1 + 0xb8;
  *(undefined1 **)(param_1 + 0x98) = param_1 + 0xa8;
  *(undefined1 **)(param_1 + 0x88) = param_1 + 0x98;
  *(undefined1 **)(param_1 + 0x78) = param_1 + 0x88;
  *(undefined1 **)(param_1 + 0x68) = param_1 + 0x78;
  *(undefined1 **)(param_1 + 0x58) = param_1 + 0x68;
  *(undefined1 **)(param_1 + 0x48) = param_1 + 0x58;
  *(undefined1 **)(param_1 + 0x38) = param_1 + 0x48;
  puVar7 = (undefined8 *)(param_1 + 0x28);
  *puVar7 = param_1 + 0x38;
  *(undefined1 **)(param_1 + 0x108) = param_1 + 0x118;
  *(undefined1 **)(param_1 + 0x118) = param_1 + 0x128;
  *(undefined1 **)(param_1 + 0x128) = param_1 + 0x138;
  *(undefined1 **)(param_1 + 0x138) = param_1 + 0x148;
  *(undefined1 **)(param_1 + 0x148) = param_1 + 0x158;
  *(undefined1 **)(param_1 + 0x158) = param_1 + 0x168;
  *(undefined1 **)(param_1 + 0x168) = param_1 + 0x178;
  *(undefined1 **)(param_1 + 0x178) = param_1 + 0x188;
  *(undefined1 **)(param_1 + 0x188) = param_1 + 0x198;
  *(undefined1 **)(param_1 + 0x198) = param_1 + 0x1a8;
  *(undefined1 **)(param_1 + 0x1a8) = param_1 + 0x1b8;
  *(undefined1 **)(param_1 + 0x1b8) = param_1 + 0x1c8;
  *(undefined1 **)(param_1 + 0x1c8) = param_1 + 0x1d8;
  *(undefined1 **)(param_1 + 0x1d8) = param_1 + 0x1e8;
  *(undefined1 **)(param_1 + 0x1e8) = param_1 + 0x1f8;
  piVar12 = (int *)(param_1 + 8);
  piVar12[0] = 0;
  piVar12[1] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 **)(param_1 + 0x18) = puVar7;
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  if (param_1 + 0x208 != (undefined1 *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0x1e00000000;
    *(undefined1 **)(param_1 + 0x10) = param_1 + 0x208;
  }
  uVar4 = FUN_0345c870(param_2);
  if ((uVar4 & 1) == 0) {
    bVar5 = false;
  }
  else {
    iVar8 = *(int *)(param_2 + 4);
    local_358[0] = (undefined8 *)(PTR_DAT_04bc8560 + 0x10);
    (**(code **)(*(long *)(param_2 + 8) + 0x10))((long *)(param_2 + 8),local_358);
    local_338 = 0;
    local_330 = (undefined1 *)0x0;
    local_318[0] = local_308;
    local_308[0] = local_2f8;
    local_328 = local_318;
    local_2f8[0] = local_2e8;
    local_2e8[0] = local_2d8;
    local_2d8[0] = local_2c8;
    local_2c8[0] = local_2b8;
    local_2b8[0] = local_2a8;
    local_2a8[0] = local_298;
    local_298[0] = local_288;
    local_288[0] = local_278;
    local_278[0] = local_268;
    local_268[0] = local_258;
    local_258[0] = local_248;
    local_248[0] = local_238;
    local_238[0] = local_228;
    local_228[0] = local_218;
    local_218[0] = local_208;
    local_208[0] = local_1f8;
    local_1f8[0] = local_1e8;
    local_1e8[0] = local_1d8;
    local_1d8[0] = local_1c8;
    local_1c8[0] = local_1b8;
    local_1b8[0] = local_1a8;
    local_1a8[0] = local_198;
    local_198[0] = local_188;
    local_188[0] = local_178;
    local_178[0] = local_168;
    local_168[0] = local_158;
    local_158[0] = local_148;
    local_148[0] = 0;
    if (local_138 != (undefined1 *)0x0) {
      local_338 = 0x1e00000000;
      local_330 = local_138;
    }
    if (0 < iVar8) {
      ppppuStack_320 = local_328;
      local_48 = (*(code *)*local_358[0])(local_358,0);
      if (iVar8 == 1) {
        iVar13 = 0;
        iVar3 = local_48;
      }
      else {
        iVar13 = 0;
        iVar11 = 1;
        do {
          iVar3 = (*(code *)*local_358[0])(local_358,iVar11);
          ppppuVar2 = local_328;
          local_44 = iVar3;
          if (local_48 != iVar3) {
            if ((int)(uint)local_338 < local_338._4_4_) {
              if (local_328 != (undefined8 ****)0x0) {
                local_328 = (undefined8 ****)*local_328;
              }
              *(undefined4 *)(ppppuVar2 + 1) = 0;
              *ppppuVar2 = (undefined8 ***)0x0;
              if ((int)(uint)local_338 < local_338._4_4_) {
                *(undefined8 *****)(local_330 + (long)(int)(uint)local_338 * 8) = ppppuVar2;
                local_338 = CONCAT44(local_338._4_4_,(uint)local_338 + 1);
              }
              *(int *)ppppuVar2 = local_48;
              *(int *)((long)ppppuVar2 + 4) = iVar13;
              *(int *)(ppppuVar2 + 1) = iVar11;
            }
            iVar13 = iVar11;
            local_48 = iVar3;
          }
          iVar11 = iVar11 + 1;
          iVar3 = local_48;
        } while (iVar8 != iVar11);
      }
      if ((int)(uint)local_338 < local_338._4_4_) {
        *(undefined4 *)(local_328 + 1) = 0;
        *local_328 = (undefined8 ***)0x0;
        if ((int)(uint)local_338 < local_338._4_4_) {
          *(undefined8 *****)(local_330 + (long)(int)(uint)local_338 * 8) = local_328;
          local_338 = (ulong)((uint)local_338 + 1);
        }
        *(int *)local_328 = iVar3;
        *(int *)((long)local_328 + 4) = iVar13;
        *(int *)(local_328 + 1) = iVar8;
      }
    }
    iVar8 = *piVar12;
    if (piVar12 != (int *)&local_338) {
      uVar1 = *(uint *)(param_1 + 0xc);
      if ((int)(uint)local_338 <= (int)*(uint *)(param_1 + 0xc)) {
        uVar1 = (uint)local_338;
      }
      if (0 < iVar8) {
        lVar6 = 0;
        puVar7 = *(undefined8 **)(param_1 + 0x18);
        do {
          puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x10) + lVar6 * 8);
          lVar6 = lVar6 + 1;
          *puVar9 = puVar7;
          *(undefined8 **)(param_1 + 0x18) = puVar9;
          puVar7 = puVar9;
        } while (lVar6 < *(int *)(param_1 + 8));
      }
      *piVar12 = 0;
      if (((int)uVar1 < 1) || (*(int *)(param_1 + 0xc) < 1)) {
        iVar8 = 0;
      }
      else {
        lVar6 = 0;
        iVar8 = 0;
        do {
          if (iVar8 < *(int *)(param_1 + 0xc)) {
            puVar9 = *(undefined8 **)(param_1 + 0x18);
            puVar7 = *(undefined8 **)(local_330 + lVar6);
            if (puVar9 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x18) = *puVar9;
            }
            uVar10 = *puVar7;
            *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar7 + 1);
            *puVar9 = uVar10;
            iVar8 = *(int *)(param_1 + 8);
            if (iVar8 < *(int *)(param_1 + 0xc)) {
              *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar8 * 8) = puVar9;
              iVar8 = *(int *)(param_1 + 8) + 1;
              *(int *)(param_1 + 8) = iVar8;
            }
          }
          lVar6 = lVar6 + 8;
        } while ((ulong)uVar1 * 8 != lVar6);
      }
    }
    bVar5 = 0 < iVar8;
  }
  *param_1 = bVar5;
  return;
}

