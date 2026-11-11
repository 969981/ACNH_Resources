
undefined8 FUN_004cd0c0(long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  undefined1 auStack_2e0 [64];
  undefined8 local_2a0;
  undefined8 *local_298 [14];
  ulong local_228;
  undefined8 *local_190;
  undefined8 uStack_188;
  
  uVar4 = FUN_004ccef0();
  local_298[0] = (undefined8 *)CONCAT71(local_298[0]._1_7_,0xff);
  plVar11 = *(long **)(param_1 + 8);
  if (*plVar11 < plVar11[1]) {
    memcpy(local_298,(void *)*plVar11,1);
    *plVar11 = *plVar11 + 1;
    uVar15 = (ulong)((byte)local_298[0] >> 1) & 0x3f;
    iVar3 = (int)uVar15;
    puVar5 = local_298[0];
  }
  else {
    FUN_0049e700(plVar11,local_298,1);
    uVar15 = (ulong)((byte)local_298[0] >> 1) & 0x3f;
    iVar3 = (int)uVar15;
    puVar5 = local_298[0];
  }
  bVar1 = (char)(byte)local_298[0] < '\0';
  local_298[0] = puVar5;
  if (bVar1) {
    uVar14 = 6;
    do {
      local_298[0] = (undefined8 *)CONCAT71(local_298[0]._1_7_,0xff);
      plVar11 = *(long **)(param_1 + 8);
      if (*plVar11 < plVar11[1]) {
        memcpy(local_298,(void *)*plVar11,1);
        *plVar11 = *plVar11 + 1;
      }
      else {
        FUN_0049e700(plVar11,local_298,1);
      }
      uVar15 = ((ulong)local_298[0] & 0x7f) << (uVar14 & 0x3f) | uVar15;
      iVar3 = (int)uVar15;
      bVar1 = (char)(byte)local_298[0] < '\0';
      uVar14 = (ulong)((int)uVar14 + 7);
    } while (bVar1);
  }
  iVar16 = -iVar3;
  if (((ulong)puVar5 & 1) == 0) {
    iVar16 = iVar3;
  }
  puVar5 = (undefined8 *)FUN_004714d0(param_1 + 0x28,uVar4,0);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_00422030(*(undefined8 *)(param_1 + 0x68),0x40,1);
    FUN_0043a810(puVar5,0,0x40);
    *puVar5 = 0x90001d;
    puVar5[1] = 0;
    puVar5[2] = 7;
    FUN_00471240(param_1 + 0x28,uVar4,puVar5);
  }
  puVar5[4] = uVar4;
  puVar5[5] = (long)iVar16;
  puVar5[6] = 0;
  lVar12 = *(long *)(param_1 + 0xb8);
  local_298[0] = puVar5;
  lVar6 = FUN_0049cee0(lVar12 + 0xe8,local_298);
  if ((lVar6 == 0) ||
     ((int)(*(uint *)(lVar6 + 4) | ((int)lVar6 - (int)*(undefined8 *)(lVar12 + 0xf8)) * 0x20000000)
      < 0)) {
    FUN_004ce360(lVar12,*(undefined4 *)(lVar12 + 0xf0),local_298[0]);
  }
  uVar10 = *(uint *)(param_1 + 0x20);
  if (uVar10 == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,(long *)(param_1 + 0x18),8);
    uVar10 = *(uint *)(param_1 + 0x20);
  }
  *(undefined8 **)(*(long *)(param_1 + 0x18) + (long)(int)uVar10 * 8) = puVar5;
  *(uint *)(param_1 + 0x20) = uVar10 + 1;
  local_298[0] = (undefined8 *)CONCAT71(local_298[0]._1_7_,0xff);
  plVar11 = *(long **)(param_1 + 8);
  if (*plVar11 < plVar11[1]) {
    memcpy(local_298,(void *)*plVar11,1);
    *plVar11 = *plVar11 + 1;
    puVar7 = local_298[0];
  }
  else {
    FUN_0049e700(plVar11,local_298,1);
    puVar7 = local_298[0];
  }
  bVar1 = (char)(byte)local_298[0] < '\0';
  uVar15 = (ulong)((byte)local_298[0] >> 1) & 0x3f;
  local_298[0] = puVar7;
  if (bVar1) {
    uVar14 = 6;
    do {
      local_298[0] = (undefined8 *)CONCAT71(local_298[0]._1_7_,0xff);
      plVar11 = *(long **)(param_1 + 8);
      if (*plVar11 < plVar11[1]) {
        memcpy(local_298,(void *)*plVar11,1);
        *plVar11 = *plVar11 + 1;
      }
      else {
        FUN_0049e700(plVar11,local_298,1);
      }
      uVar15 = ((ulong)local_298[0] & 0x7f) << (uVar14 & 0x3f) | uVar15;
      bVar1 = (char)(byte)local_298[0] < '\0';
      uVar14 = (ulong)((int)uVar14 + 7);
    } while (bVar1);
  }
  uVar14 = -uVar15;
  if (((ulong)puVar7 & 1) == 0) {
    uVar14 = uVar15;
  }
  if ((int)uVar14 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)
             (*(long *)(param_1 + 0x18) +
             (-(uVar14 >> 0x1f & 1) & 0xfffffff800000000 | (uVar14 & 0xffffffff) << 3));
  }
  puVar5[1] = uVar4;
  local_298[0] = (undefined8 *)CONCAT71(local_298[0]._1_7_,0xff);
  plVar11 = *(long **)(param_1 + 8);
  if (*plVar11 < plVar11[1]) {
    memcpy(local_298,(void *)*plVar11,1);
    *plVar11 = *plVar11 + 1;
    puVar7 = local_298[0];
  }
  else {
    FUN_0049e700(plVar11,local_298,1);
    puVar7 = local_298[0];
  }
  bVar1 = (char)(byte)local_298[0] < '\0';
  uVar15 = (ulong)((byte)local_298[0] >> 1) & 0x3f;
  local_298[0] = puVar7;
  if (bVar1) {
    uVar14 = 6;
    do {
      local_298[0] = (undefined8 *)CONCAT71(local_298[0]._1_7_,0xff);
      plVar11 = *(long **)(param_1 + 8);
      if (*plVar11 < plVar11[1]) {
        memcpy(local_298,(void *)*plVar11,1);
        *plVar11 = *plVar11 + 1;
      }
      else {
        FUN_0049e700(plVar11,local_298,1);
      }
      uVar15 = ((ulong)local_298[0] & 0x7f) << (uVar14 & 0x3f) | uVar15;
      bVar1 = (char)(byte)local_298[0] < '\0';
      uVar14 = (ulong)((int)uVar14 + 7);
    } while (bVar1);
  }
  puVar5[2] = 7;
  puVar5[3] = &DAT_04c70240;
  *puVar5 = 0x90001d;
  uVar14 = -uVar15;
  if (((ulong)puVar7 & 1) == 0) {
    uVar14 = uVar15;
  }
  lVar6 = FUN_00428650(0,uVar14 & 0xffffffff,0,*(undefined8 *)(param_1 + 0x68));
  puVar5[7] = lVar6;
  if (0 < (int)uVar14) {
    lVar12 = 0;
    do {
      uVar4 = FUN_004ccef0(param_1);
      local_298[0] = (undefined8 *)CONCAT71(local_298[0]._1_7_,0xff);
      plVar11 = *(long **)(param_1 + 8);
      if (*plVar11 < plVar11[1]) {
        memcpy(local_298,(void *)*plVar11,1);
        *plVar11 = *plVar11 + 1;
        uVar15 = (ulong)((byte)local_298[0] >> 1) & 0x3f;
        uVar10 = (uint)uVar15;
        puVar7 = local_298[0];
      }
      else {
        FUN_0049e700(plVar11,local_298,1);
        uVar15 = (ulong)((byte)local_298[0] >> 1) & 0x3f;
        uVar10 = (uint)uVar15;
        puVar7 = local_298[0];
      }
      bVar1 = (char)(byte)local_298[0] < '\0';
      local_298[0] = puVar7;
      if (bVar1) {
        uVar13 = 6;
        do {
          local_298[0] = (undefined8 *)CONCAT71(local_298[0]._1_7_,0xff);
          plVar11 = *(long **)(param_1 + 8);
          if (*plVar11 < plVar11[1]) {
            memcpy(local_298,(void *)*plVar11,1);
            *plVar11 = *plVar11 + 1;
          }
          else {
            FUN_0049e700(plVar11,local_298,1);
          }
          uVar15 = ((ulong)local_298[0] & 0x7f) << (uVar13 & 0x3f) | uVar15;
          uVar10 = (uint)uVar15;
          bVar1 = (char)(byte)local_298[0] < '\0';
          uVar13 = (ulong)((int)uVar13 + 7);
        } while (bVar1);
      }
      uVar2 = -uVar10;
      if (((ulong)puVar7 & 1) == 0) {
        uVar2 = uVar10;
      }
      if ((uVar2 >> 5 & 1) == 0) {
        iVar16 = 0;
        if ((uVar2 & 0xe | 1) != 9) goto LAB_004cd5a4;
LAB_004cd68c:
        uVar9 = FUN_004ccef0(param_1);
      }
      else {
        local_298[0] = (undefined8 *)CONCAT71(local_298[0]._1_7_,0xff);
        plVar11 = *(long **)(param_1 + 8);
        if (*plVar11 < plVar11[1]) {
          memcpy(local_298,(void *)*plVar11,1);
          *plVar11 = *plVar11 + 1;
          uVar15 = (ulong)((byte)local_298[0] >> 1) & 0x3f;
          iVar3 = (int)uVar15;
          puVar7 = local_298[0];
        }
        else {
          FUN_0049e700(plVar11,local_298,1);
          uVar15 = (ulong)((byte)local_298[0] >> 1) & 0x3f;
          iVar3 = (int)uVar15;
          puVar7 = local_298[0];
        }
        bVar1 = (char)(byte)local_298[0] < '\0';
        local_298[0] = puVar7;
        if (bVar1) {
          uVar13 = 6;
          do {
            local_298[0] = (undefined8 *)CONCAT71(local_298[0]._1_7_,0xff);
            plVar11 = *(long **)(param_1 + 8);
            if (*plVar11 < plVar11[1]) {
              memcpy(local_298,(void *)*plVar11,1);
              *plVar11 = *plVar11 + 1;
            }
            else {
              FUN_0049e700(plVar11,local_298,1);
            }
            uVar15 = ((ulong)local_298[0] & 0x7f) << (uVar13 & 0x3f) | uVar15;
            iVar3 = (int)uVar15;
            bVar1 = (char)(byte)local_298[0] < '\0';
            uVar13 = (ulong)((int)uVar13 + 7);
          } while (bVar1);
        }
        iVar16 = -iVar3;
        if (((ulong)puVar7 & 1) == 0) {
          iVar16 = iVar3;
        }
        if ((uVar2 & 0xe | 1) == 9) goto LAB_004cd68c;
LAB_004cd5a4:
        uVar9 = 0;
      }
      puVar7 = (undefined8 *)FUN_004ce010(param_1,uVar2,uVar9,iVar16);
      lVar17 = *(long *)(param_1 + 0xb8);
      local_298[0] = puVar7;
      lVar8 = FUN_0049cee0(lVar17 + 0xe8,local_298);
      if ((lVar8 == 0) ||
         ((int)(*(uint *)(lVar8 + 4) |
               ((int)lVar8 - (int)*(undefined8 *)(lVar17 + 0xf8)) * 0x20000000) < 0)) {
        FUN_004ce360(lVar17,*(undefined4 *)(lVar17 + 0xf0),local_298[0]);
      }
      FUN_00451ea0(local_298);
      FUN_00452260(local_298,puVar7);
      FUN_00453b70(local_298,uVar4,0xfefe,uVar2 == 0);
      local_228 = local_228 | 0xc0000;
      uStack_188 = 0;
      local_190 = puVar5;
      iVar3 = FUN_004535f0(local_298,*(undefined8 *)(param_1 + 0x68),&local_2a0);
      if (iVar3 < 0) {
        if (DAT_04c71888 != '\0') {
          FUN_00444bc0(auStack_2e0,&DAT_04c71838,1);
          lVar6 = FUN_004446b0(auStack_2e0,"Failed to allocate type from builder",&DAT_0413df78);
          *(char **)(lVar6 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile2014/hkTagfileReadFormat2014.cpp"
          ;
          *(undefined8 *)(lVar6 + 0x30) = 0x4a1;
          FUN_00444c00(auStack_2e0);
        }
        FUN_00451fa0(local_298);
        return 0x80040200;
      }
      *(undefined8 *)(lVar6 + lVar12 * 8 + 8) = local_2a0;
      FUN_00451fa0(local_298);
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)uVar14);
  }
  return 0;
}

