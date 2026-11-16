
/* WARNING: Removing unreachable block (ram,0x0268d388) */

void FUN_0268c7a0(undefined1 *param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined *puVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  byte bVar9;
  ushort uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  uint *puVar18;
  ulong *puVar19;
  void *pvVar20;
  undefined8 *puVar21;
  ushort *puVar22;
  undefined2 uVar23;
  long lVar24;
  long lVar25;
  uint *puVar26;
  char cVar27;
  int *piVar28;
  bool bVar29;
  ulong uVar30;
  undefined8 uVar31;
  long *plVar32;
  long lVar33;
  long *plVar34;
  undefined8 local_b80;
  uint local_b78;
  uint uStack_b74;
  undefined2 local_b70;
  undefined2 uStack_b6e;
  undefined4 uStack_b6c;
  undefined8 uStack_b68;
  undefined4 uStack_b60;
  undefined4 local_b5c;
  undefined1 local_b58;
  undefined8 local_b54;
  undefined8 local_b4c;
  undefined8 local_b44;
  undefined4 local_b3c;
  long local_a50;
  uint local_a38;
  long local_a00 [13];
  long local_998 [13];
  long local_930 [163];
  uint local_414;
  uint local_410;
  uint local_40c;
  int local_408;
  undefined2 local_400;
  undefined2 local_3fe;
  undefined4 local_3fc;
  undefined2 local_3f8;
  undefined2 local_3f6;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  ulong local_3b8 [19];
  uint local_31c;
  undefined1 auStack_318 [272];
  undefined *local_208;
  char *local_200;
  undefined4 local_1f8;
  char local_1f4 [31];
  undefined1 local_1d5;
  undefined *local_1d0;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc [7];
  undefined1 local_1b5;
  undefined4 local_1b0;
  int local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined8 local_198;
  uint local_190;
  undefined8 local_18c;
  char *local_180;
  undefined8 local_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  uint local_158;
  undefined1 local_95;
  undefined8 local_90;
  char *local_88;
  long local_80;
  char local_70 [16];
  
  local_1b0 = param_4;
  local_1ac = param_3;
  memset(param_1,0,0x13230);
  FUN_0268abb0(param_1);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar8 = FUN_020fd7d8(param_2);
  param_1[2] = uVar8;
  local_1c0 = 8;
  local_1b5 = 0;
  local_1bc[0] = 0;
  local_1d5 = 0;
  local_1d0 = PTR_DAT_04bb3768 + 0x10;
  param_1[0x12678] = (char)local_1ac;
  local_1c8 = local_1bc;
  local_1f4[0] = '\0';
  local_200 = local_1f4;
  local_1f8 = 0x20;
  local_208 = PTR_DAT_04bb2028 + 0x10;
  FUN_021fdf60(&local_1d0,&local_208,param_1);
  (**(code **)(local_1d0 + 0x18))(&local_1d0);
  FUN_01c0fd9c(auStack_318,local_1c8);
  if (**(uint **)PTR_DAT_04bb3448 < 0x10) {
    lVar25 = *(long *)(&DAT_0417b490 + (long)(int)**(uint **)PTR_DAT_04bb3448 * 8);
  }
  else {
    lVar25 = 1;
  }
  uStack_b68 = param_1 + lVar25 * 0x2c + 0x10768;
  local_b70 = 0x16;
  uStack_b6e = 0;
  FUN_02906c90(&local_b70,auStack_318);
  lVar25 = *(long *)PTR_DAT_04bb32e8;
  uVar10 = *(ushort *)(lVar25 + 0x4060);
  bVar9 = *(byte *)(lVar25 + 0x4062);
  bVar4 = *(byte *)(lVar25 + 0x4063);
  uVar17 = nn::time::IsValidDate((uint)uVar10,(uint)bVar9,(uint)bVar4);
  if ((uVar17 & 1) != 0) {
    *(ushort *)(param_1 + 0x12674) = uVar10;
    param_1[0x12676] = bVar9;
    param_1[0x12677] = bVar4;
  }
  param_1[0x12679] = (char)local_1b0;
  puVar1 = param_1 + 0x1267c;
  FUN_02748920(puVar1);
  uVar31 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(local_1d0 + 0x18))(&local_1d0);
  uVar11 = FUN_006bd550(local_1c8,0);
  local_b70 = (undefined2)uVar11;
  uStack_b6e = (undefined2)((uint)uVar11 >> 0x10);
  puVar18 = (uint *)FUN_0079e770(uVar31,&local_b70);
  puVar5 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  if (puVar18 == (uint *)0x0) {
    uVar8 = 0;
  }
  else {
    if (*puVar18 != 0) {
      cVar27 = *PTR_DAT_04bb40b0;
      do {
        if (cVar27 == '\0') {
          cVar27 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar12 = *(uint *)(puVar5 + 0x7c);
          if (-1 < (int)uVar12) {
            if ((undefined1 *)((ulong)uVar12 + (long)puVar18) != (undefined1 *)0x0) {
              uVar8 = *(undefined1 *)((ulong)uVar12 + (long)puVar18);
              goto LAB_0268caa8;
            }
            break;
          }
          if (uVar12 != 0xffffffff) break;
        }
        puVar26 = (uint *)(ulong)*puVar18;
        uVar8 = 0;
        if ((*puVar18 == 0) || (puVar18 == puVar26)) goto LAB_0268caa8;
        lVar25 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar26)) != '\0') {
          lVar25 = 0x1c;
        }
        lVar25 = (long)puVar18 + (lVar25 - (long)puVar26);
        if (lVar25 == 0) break;
        uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar26));
        *(undefined4 *)(puVar5 + 0x7c) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar28 = (int *)(lVar25 + 4);
        while (piVar28[-1] != 0x566f1d31) {
          piVar28 = piVar28 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_0268caa4;
        }
        iVar15 = 0;
        if (*piVar28 != -1) {
          iVar15 = *piVar28;
        }
        *(int *)(puVar5 + 0x7c) = iVar15;
        if (*puVar18 == 0) break;
      } while( true );
    }
LAB_0268caa4:
    uVar8 = 0;
LAB_0268caa8:
    if (*puVar18 != 0) {
      cVar27 = *puVar3;
      do {
        if (cVar27 == '\0') {
          cVar27 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar12 = *(uint *)(puVar5 + 0x50);
          if (-1 < (int)uVar12) {
            if ((undefined2 *)((ulong)uVar12 + (long)puVar18) != (undefined2 *)0x0) {
              local_b70 = *(undefined2 *)((ulong)uVar12 + (long)puVar18);
              goto LAB_0268cba0;
            }
            break;
          }
          if (uVar12 != 0xffffffff) break;
        }
        puVar26 = (uint *)(ulong)*puVar18;
        local_b70 = 0xfffe;
        if ((*puVar18 == 0) || (puVar18 == puVar26)) goto LAB_0268cba0;
        lVar25 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar26)) != '\0') {
          lVar25 = 0x1c;
        }
        lVar25 = (long)puVar18 + (lVar25 - (long)puVar26);
        if (lVar25 == 0) break;
        uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar26));
        *(undefined4 *)(puVar5 + 0x50) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar28 = (int *)(lVar25 + 4);
        while (piVar28[-1] != -0x78f0e1d7) {
          piVar28 = piVar28 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_0268cb9c;
        }
        iVar15 = 0;
        if (*piVar28 != -1) {
          iVar15 = *piVar28;
        }
        *(int *)(puVar5 + 0x50) = iVar15;
        if (*puVar18 == 0) break;
      } while( true );
    }
LAB_0268cb9c:
    local_b70 = 0xfffe;
LAB_0268cba0:
    uStack_b6e = 0;
    uStack_b6c = 0;
    FUN_0277d4ac(&local_b70);
    FUN_0268e6d0(param_1,&local_b70,0,0,0,0,1,1);
    local_b70 = 0;
    uStack_b6e = 0;
    uStack_b6c = 0;
    uStack_b68._0_4_ = 0;
    uStack_b68._4_4_ = 0;
    uStack_b60 = 0;
    local_b5c = 0;
    local_b54 = 0;
    local_b4c = 0;
    local_b44 = 0;
    local_b3c = 0;
    *(undefined4 *)(param_1 + 0x13214) = *(undefined4 *)(param_1 + 0x125ec);
    *(undefined4 *)(param_1 + 0x13218) = *(undefined4 *)(param_1 + 0x125f0);
    local_b58 = 2;
    if (*puVar18 != 0) {
      cVar27 = *puVar3;
      do {
        if (cVar27 == '\0') {
          cVar27 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar12 = *(uint *)(puVar5 + 0x54);
          if (-1 < (int)uVar12) {
            if ((ushort *)((ulong)uVar12 + (long)puVar18) != (ushort *)0x0) {
              uVar10 = *(ushort *)((ulong)uVar12 + (long)puVar18);
              goto LAB_0268cd10;
            }
            break;
          }
          if (uVar12 != 0xffffffff) break;
        }
        puVar26 = (uint *)(ulong)*puVar18;
        uVar10 = 0xfffe;
        if ((*puVar18 == 0) || (puVar18 == puVar26)) goto LAB_0268cd10;
        lVar25 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar26)) != '\0') {
          lVar25 = 0x1c;
        }
        lVar25 = (long)puVar18 + (lVar25 - (long)puVar26);
        if (lVar25 == 0) break;
        uVar17 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar26));
        *(undefined4 *)(puVar5 + 0x54) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar28 = (int *)(lVar25 + 4);
        while (piVar28[-1] != -0x44637e92) {
          piVar28 = piVar28 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_0268cd0c;
        }
        iVar15 = 0;
        if (*piVar28 != -1) {
          iVar15 = *piVar28;
        }
        *(int *)(puVar5 + 0x54) = iVar15;
        if (*puVar18 == 0) break;
      } while( true );
    }
LAB_0268cd0c:
    uVar10 = 0xfffe;
LAB_0268cd10:
    local_1a8 = (char *)(ulong)uVar10;
    FUN_0277d4ac(&local_1a8);
    puVar3 = PTR_DAT_04bb43c0;
    lVar25 = *(long *)PTR_DAT_04bb43c0;
    uVar12 = FUN_0277d6c4(&local_1a8);
    if (*(long *)puVar3 == 0) {
LAB_0268cd70:
      local_3b8[0] = 0x1c0c;
      FUN_0277d4ac(local_3b8);
      local_1a8 = (char *)local_3b8[0];
    }
    else {
      lVar25 = *(long *)(lVar25 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if ((*(uint *)(lVar25 + 0x1d8) <= uVar12) ||
         (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_0268cd70;
    }
    FUN_027d2090(param_1 + 0x1315c,&local_1a8,&local_b54,7,0,0);
    if (local_1ac == 0) {
      local_3b8[0] = 0x948;
      FUN_0277d4ac(local_3b8);
      FUN_027d2090(param_1 + 0x13188,local_3b8,&local_b54,7,0,0);
      local_3b8[0] = 0xc0c;
      FUN_0277d4ac(local_3b8);
      FUN_027d2090(param_1 + 0x131b4,local_3b8,&local_b54,7,0,0);
      local_3b8[0] = 0xc0b;
    }
    else {
      local_3b8[0] = 0x1698;
      FUN_0277d4ac(local_3b8);
      FUN_027d2090(param_1 + 0x13188,local_3b8,&local_b54,7,0,0);
      local_3b8[0] = 0x949;
      FUN_0277d4ac(local_3b8);
      FUN_027d2090(param_1 + 0x131b4,local_3b8,&local_b54,7,0,0);
      local_3b8[0] = 0x94b;
    }
    FUN_0277d4ac(local_3b8);
    FUN_027d2090(param_1 + 0x131e0,local_3b8,&local_b54,7,0,0);
  }
  *(undefined8 *)(param_1 + 0x12910) = 0;
  *(undefined8 *)(param_1 + 0x12918) = 0;
  *(undefined8 *)(param_1 + 0x12900) = 0;
  *(undefined8 *)(param_1 + 0x12908) = 0;
  *(undefined8 *)(param_1 + 0x128a8) = 0;
  *(undefined4 *)(param_1 + 0x12914) = 0;
  *(undefined8 *)(param_1 + 0x1290c) = 0;
  *(undefined8 *)(param_1 + 0x12904) = 0;
  *(undefined8 *)(param_1 + 0x128f0) = 0;
  *(undefined8 *)(param_1 + 0x128f8) = 0;
  param_1[0x128f8] = 2;
  *(undefined4 *)(param_1 + 0x128f4) = 0;
  *(undefined8 *)(param_1 + 0x128fc) = 0;
  *(undefined8 *)(param_1 + 76000) = 0;
  *(undefined8 *)(param_1 + 0x128e8) = 0;
  *(undefined8 *)(param_1 + 0x128e4) = 0;
  *(undefined8 *)(param_1 + 0x128ec) = 0;
  *(undefined8 *)(param_1 + 0x128d0) = 0;
  *(undefined8 *)(param_1 + 0x128d8) = 0;
  *(undefined8 *)(param_1 + 0x128c0) = 0;
  *(undefined8 *)(param_1 + 0x128c8) = 0;
  *(undefined8 *)(param_1 + 0x128b0) = 0;
  *(undefined8 *)(param_1 + 0x128b8) = 0;
  param_1[0x12919] = 0xee;
  memset(param_1 + 0x12920,0,0x830);
  param_1[0x12918] = 1;
  if (DAT_05594b4c == '\x01') {
    uVar12 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar12 = uVar12 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar12 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar12;
  }
  else {
    uVar12 = nn::os::GetSystemTick();
    uVar14 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
    uVar12 = uVar14 ^ uVar14 * 0x800;
    uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 2;
    uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
    uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4;
    uVar12 = uVar12 >> 8 ^ uVar14 >> 0x13 ^ uVar12 ^ uVar14;
  }
  param_1[0x13150] = (char)((ulong)uVar12 * 10 >> 0x20) + '\x01';
  local_31c = FUN_020fd7d8(param_2);
  local_31c = local_31c & 0xff;
  (**(code **)(local_208 + 0x18))(&local_208);
  FUN_0074fda4(local_3b8,"Param/NpcRoom/%s.byml",local_200);
  local_3c0 = 0;
  local_3c8 = 0;
  local_3d0 = 0;
  local_3d8 = 0;
  uVar11 = FUN_021d7d60(param_1);
  uVar17 = FUN_03eba3a0(local_3b8);
  plVar34 = (long *)PTR_DAT_04bb3350;
  if ((uVar17 & 1) == 0) {
    puVar3 = PTR_DAT_04bbfe60 + 0x10;
    local_b70 = SUB82(puVar3,0);
    uStack_b6e = (undefined2)((ulong)puVar3 >> 0x10);
    uStack_b6c = (undefined4)((ulong)puVar3 >> 0x20);
    memset(&uStack_b68,0,0x754);
    uVar12 = nn::os::GetSystemTick();
    local_414 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
    local_410 = (local_414 ^ local_414 >> 0x1e) * 0x6c078965 + 2;
    local_40c = (local_410 ^ local_410 >> 0x1e) * 0x6c078965 + 3;
    local_408 = (local_40c ^ local_40c >> 0x1e) * 0x6c078965 + 4;
    pvVar20 = (void *)(**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x18))
                                (&local_b70);
    memset(pvVar20,0,0x754);
    FUN_02690004(&local_1a8);
    puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar13 = puVar18[3];
    uVar12 = *puVar18 ^ *puVar18 << 0xb;
    *puVar18 = puVar18[1];
    puVar18[1] = puVar18[2];
    local_70[0] = '\x02';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    uVar14 = uVar12 ^ uVar13;
    uVar12 = uVar12 >> 8 ^ uVar13 >> 0x13 ^ uVar14;
    puVar18[2] = uVar13;
    puVar18[3] = uVar12;
    uVar12 = (uVar12 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
    uVar14 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 2;
    local_b80 = (char *)CONCAT44(uVar14,uVar12);
    local_b78 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
    uStack_b74 = (local_b78 ^ local_b78 >> 0x1e) * 0x6c078965 + 4;
    local_88 = local_70;
    local_90 = &PTR_FUN_049ff3f8;
    FUN_008a1ba0(&local_b70,&local_90);
    puVar3 = PTR_DAT_04bb43c0;
    local_3e0 = (char *)((ulong)local_3e0._4_4_ << 0x20);
    local_88 = (char *)&local_3e0;
    local_90 = &PTR_FUN_049ff448;
    uVar12 = 0;
    do {
      (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x10))
                (local_70,&local_b70,uVar12);
      lVar25 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x20))(&local_b70)
      ;
      uVar14 = 1 << (ulong)(uVar12 & 0x1f);
      if ((*(uint *)(lVar25 + (ulong)(uVar12 >> 5) * 4) & uVar14) != 0) {
        lVar25 = *(long *)puVar3;
        uVar13 = FUN_0277d6c4(local_70);
        if (*(long *)puVar3 != 0) {
          lVar25 = *(long *)(lVar25 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
          if ((uVar13 < *(uint *)(lVar25 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
            uVar17 = (*(code *)*local_90)(&local_90,local_70);
            if ((uVar17 & 1) != 0) goto LAB_0268d614;
          }
        }
        lVar25 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x18))
                           (&local_b70);
        lVar24 = (ulong)(uVar12 >> 5) * 4;
        *(uint *)(lVar25 + lVar24) = *(uint *)(lVar25 + lVar24) & (uVar14 ^ 0xffffffff);
      }
LAB_0268d614:
      uVar12 = uVar12 + 1;
    } while (uVar12 != 15000);
    uVar12 = 0;
    local_88 = (char *)&local_3e0;
    local_3e0 = (char *)((ulong)local_3e0 & 0xffffffff00000000);
    local_90 = &PTR_FUN_049ff498;
    do {
      (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x10))
                (local_70,&local_b70,uVar12);
      lVar25 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x20))(&local_b70)
      ;
      uVar14 = 1 << (ulong)(uVar12 & 0x1f);
      if ((*(uint *)(lVar25 + (ulong)(uVar12 >> 5) * 4) & uVar14) != 0) {
        lVar25 = *(long *)puVar3;
        uVar13 = FUN_0277d6c4(local_70);
        if (*(long *)puVar3 != 0) {
          lVar25 = *(long *)(lVar25 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
          if ((uVar13 < *(uint *)(lVar25 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
            uVar17 = (*(code *)*local_90)(&local_90,local_70);
            if ((uVar17 & 1) != 0) goto LAB_0268d700;
          }
        }
        lVar25 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x18))
                           (&local_b70);
        lVar24 = (ulong)(uVar12 >> 5) * 4;
        *(uint *)(lVar25 + lVar24) = *(uint *)(lVar25 + lVar24) & (uVar14 ^ 0xffffffff);
      }
LAB_0268d700:
      uVar12 = uVar12 + 1;
    } while (uVar12 != 15000);
    lVar24 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x20))(&local_b70);
    lVar25 = 0;
    iVar15 = 0;
    do {
      puVar18 = (uint *)(lVar24 + lVar25);
      lVar25 = lVar25 + 4;
      uVar12 = *puVar18 - (*puVar18 >> 1 & 0x55555555);
      uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
      uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
      uVar12 = uVar12 + (uVar12 >> 8);
      iVar15 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + iVar15;
    } while (lVar25 != 0x754);
    if (iVar15 == 0) {
      local_90 = *(undefined ***)PTR_DAT_04bb37e0;
    }
    else {
      lVar24 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x20))(&local_b70)
      ;
      lVar25 = 0;
      uVar12 = 0;
      do {
        puVar18 = (uint *)(lVar24 + lVar25);
        lVar25 = lVar25 + 4;
        uVar14 = *puVar18 - (*puVar18 >> 1 & 0x55555555);
        uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
        uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
        uVar14 = uVar14 + (uVar14 >> 8);
        uVar12 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + uVar12;
      } while (lVar25 != 0x754);
      uVar14 = (uint)local_b80 ^ (uint)local_b80 << 0xb;
      local_b80 = (char *)CONCAT44(local_b78,local_b80._4_4_);
      uVar14 = uVar14 >> 8 ^ uStack_b74 >> 0x13 ^ uVar14 ^ uStack_b74;
      local_b78 = uStack_b74;
      uStack_b74 = uVar14;
      FUN_00889f80(&local_90,&local_b70,(int)((ulong)uVar14 * (ulong)uVar12 >> 0x20) + 1);
      FUN_01a4c66c(&local_b80,&local_90);
    }
    FUN_0268f390(param_1,&local_90,&local_3d8,0,1,1,0);
    pvVar20 = (void *)(**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x18))
                                (&local_b70);
    memset(pvVar20,0,0x754);
    local_70[0] = '\x01';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_90 = &PTR_FUN_049ff3f8;
    local_88 = local_70;
    FUN_008a1ba0(&local_b70,&local_90);
    local_70[0] = '\a';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_90 = &PTR_FUN_049ff3f8;
    local_88 = local_70;
    FUN_008a1ba0(&local_b70,&local_90);
    puVar3 = PTR_DAT_04bb43c0;
    local_88 = (char *)&local_3e0;
    local_3e0 = (char *)((ulong)local_3e0 & 0xffffffff00000000);
    local_90 = &PTR_FUN_049ff448;
    uVar12 = 0;
    do {
      (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x10))
                (local_70,&local_b70,uVar12);
      lVar25 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x20))(&local_b70)
      ;
      uVar14 = 1 << (ulong)(uVar12 & 0x1f);
      if ((*(uint *)(lVar25 + (ulong)(uVar12 >> 5) * 4) & uVar14) != 0) {
        lVar25 = *(long *)puVar3;
        uVar13 = FUN_0277d6c4(local_70);
        if (*(long *)puVar3 != 0) {
          lVar25 = *(long *)(lVar25 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
          if ((uVar13 < *(uint *)(lVar25 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
            uVar17 = (*(code *)*local_90)(&local_90,local_70);
            if ((uVar17 & 1) != 0) goto LAB_0268d980;
          }
        }
        lVar25 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x18))
                           (&local_b70);
        lVar24 = (ulong)(uVar12 >> 5) * 4;
        *(uint *)(lVar25 + lVar24) = *(uint *)(lVar25 + lVar24) & (uVar14 ^ 0xffffffff);
      }
LAB_0268d980:
      puVar5 = PTR_DAT_04bb43c0;
      uVar12 = uVar12 + 1;
    } while (uVar12 != 15000);
    local_88 = (char *)&local_3e0;
    local_3e0 = (char *)((ulong)local_3e0 & 0xffffffff00000000);
    local_90 = &PTR_FUN_049ff498;
    uVar12 = 0;
    do {
      (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x10))
                (local_70,&local_b70,uVar12);
      lVar25 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x20))(&local_b70)
      ;
      uVar14 = 1 << (ulong)(uVar12 & 0x1f);
      if ((*(uint *)(lVar25 + (ulong)(uVar12 >> 5) * 4) & uVar14) != 0) {
        lVar25 = *(long *)puVar5;
        uVar13 = FUN_0277d6c4(local_70);
        if (*(long *)puVar5 != 0) {
          lVar25 = *(long *)(lVar25 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
          if ((uVar13 < *(uint *)(lVar25 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
            uVar17 = (*(code *)*local_90)(&local_90,local_70);
            if ((uVar17 & 1) != 0) goto LAB_0268da70;
          }
        }
        lVar25 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x18))
                           (&local_b70);
        lVar24 = (ulong)(uVar12 >> 5) * 4;
        *(uint *)(lVar25 + lVar24) = *(uint *)(lVar25 + lVar24) & (uVar14 ^ 0xffffffff);
      }
LAB_0268da70:
      uVar12 = uVar12 + 1;
    } while (uVar12 != 15000);
    lVar24 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x20))(&local_b70);
    lVar25 = 0;
    iVar15 = 0;
    do {
      puVar18 = (uint *)(lVar24 + lVar25);
      lVar25 = lVar25 + 4;
      uVar12 = *puVar18 - (*puVar18 >> 1 & 0x55555555);
      uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
      uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
      uVar12 = uVar12 + (uVar12 >> 8);
      iVar15 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + iVar15;
    } while (lVar25 != 0x754);
    if (iVar15 == 0) {
      local_90 = *(undefined ***)PTR_DAT_04bb37e0;
    }
    else {
      lVar24 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x20))(&local_b70)
      ;
      lVar25 = 0;
      uVar12 = 0;
      do {
        puVar18 = (uint *)(lVar24 + lVar25);
        lVar25 = lVar25 + 4;
        uVar14 = *puVar18 - (*puVar18 >> 1 & 0x55555555);
        uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
        uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
        uVar14 = uVar14 + (uVar14 >> 8);
        uVar12 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + uVar12;
      } while (lVar25 != 0x754);
      uVar14 = (uint)local_b80 ^ (uint)local_b80 << 0xb;
      local_b80 = (char *)CONCAT44(local_b78,local_b80._4_4_);
      uVar14 = uVar14 >> 8 ^ uStack_b74 >> 0x13 ^ uVar14 ^ uStack_b74;
      local_b78 = uStack_b74;
      uStack_b74 = uVar14;
      FUN_00889f80(&local_90,&local_b70,(int)((ulong)uVar14 * (ulong)uVar12 >> 0x20) + 1);
      FUN_01a4c66c(&local_b80,&local_90);
    }
    puVar3 = PTR_DAT_04bb43c0;
    FUN_0268f390(param_1,&local_90,&local_3d8,0,1,1,0);
    pvVar20 = (void *)(**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x18))
                                (&local_b70);
    memset(pvVar20,0,0x754);
    local_70[0] = '\0';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_90 = &PTR_FUN_049ff3f8;
    local_88 = local_70;
    FUN_008a1ba0(&local_b70,&local_90);
    local_70[0] = '\x06';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_90 = &PTR_FUN_049ff3f8;
    local_88 = local_70;
    FUN_008a1ba0(&local_b70,&local_90);
    uVar12 = 0;
    local_88 = (char *)&local_3e0;
    local_3e0 = (char *)((ulong)local_3e0 & 0xffffffff00000000);
    local_90 = &PTR_FUN_049ff448;
    do {
      (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x10))
                (local_70,&local_b70,uVar12);
      lVar25 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x20))(&local_b70)
      ;
      uVar14 = 1 << (ulong)(uVar12 & 0x1f);
      if ((*(uint *)(lVar25 + (ulong)(uVar12 >> 5) * 4) & uVar14) != 0) {
        lVar25 = *(long *)puVar3;
        uVar13 = FUN_0277d6c4(local_70);
        if (*(long *)puVar3 != 0) {
          lVar25 = *(long *)(lVar25 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
          if ((uVar13 < *(uint *)(lVar25 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
            uVar17 = (*(code *)*local_90)(&local_90,local_70);
            if ((uVar17 & 1) != 0) goto LAB_0268dcf0;
          }
        }
        lVar25 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x18))
                           (&local_b70);
        lVar24 = (ulong)(uVar12 >> 5) * 4;
        *(uint *)(lVar25 + lVar24) = *(uint *)(lVar25 + lVar24) & (uVar14 ^ 0xffffffff);
      }
LAB_0268dcf0:
      uVar12 = uVar12 + 1;
    } while (uVar12 != 15000);
    uVar12 = 0;
    local_88 = (char *)&local_3e0;
    local_3e0 = (char *)((ulong)local_3e0 & 0xffffffff00000000);
    local_90 = &PTR_FUN_049ff498;
    do {
      (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x10))
                (local_70,&local_b70,uVar12);
      lVar25 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x20))(&local_b70)
      ;
      uVar14 = 1 << (ulong)(uVar12 & 0x1f);
      if ((*(uint *)(lVar25 + (ulong)(uVar12 >> 5) * 4) & uVar14) != 0) {
        lVar25 = *(long *)puVar3;
        uVar13 = FUN_0277d6c4(local_70);
        if (*(long *)puVar3 != 0) {
          lVar25 = *(long *)(lVar25 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
          if ((uVar13 < *(uint *)(lVar25 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
            uVar17 = (*(code *)*local_90)(&local_90,local_70);
            if ((uVar17 & 1) != 0) goto LAB_0268dde0;
          }
        }
        lVar25 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x18))
                           (&local_b70);
        lVar24 = (ulong)(uVar12 >> 5) * 4;
        *(uint *)(lVar25 + lVar24) = *(uint *)(lVar25 + lVar24) & (uVar14 ^ 0xffffffff);
      }
LAB_0268dde0:
      uVar12 = uVar12 + 1;
      if (uVar12 == 15000) {
        FUN_01a4cc70(&local_b80,&local_1a8,&local_b70,2,1,0,PTR_FUN_04bb67e0,0);
        uVar12 = 0;
        lVar25 = *(long *)puVar3;
        do {
          lVar24 = (long)&local_1a8 + ((long)((ulong)uVar12 << 0x20) >> 0x1d);
          uVar14 = FUN_0277d6c4(lVar24);
          lVar33 = *(long *)puVar3;
          if (lVar33 != 0) {
            lVar25 = *(long *)(lVar25 + 0x57e58);
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
            if ((uVar14 < *(uint *)(lVar25 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
              FUN_0268f390(param_1,lVar24,&local_3d8,0,1,1,0);
              lVar33 = *(long *)puVar3;
            }
          }
          uVar12 = uVar12 + 1;
          lVar25 = lVar33;
        } while (uVar12 != 0x20);
        return;
      }
    } while( true );
  }
  plVar32 = *(long **)(*(long *)PTR_DAT_04bb3968 + 0x17598);
  if (plVar32 == (long *)0x0) {
    return;
  }
  lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  lVar24 = *(long *)(lVar25 + 0xa8);
  *(long **)(lVar25 + 0xa8) = plVar32;
  pcVar2 = PTR_DAT_04bb2020 + 0x10;
  local_1a0 = "NpcRoom";
  local_1a8 = pcVar2;
  (**(code **)(local_208 + 0x18))(&local_208);
  local_88 = local_200;
  local_90 = (undefined **)pcVar2;
  FUN_00b62c50(&local_b70,&local_1a8,&local_90,0);
  local_1a0 = (char *)((long)&local_198 + 4);
  local_95 = 0;
  local_198 = (uint *)CONCAT35(local_198._5_3_,0x100);
  local_1a8 = PTR_DAT_04bb21f8 + 0x10;
  uVar17 = (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0xf0))
                     (&local_b70,&local_1a8,1);
  if ((uVar17 & 1) != 0) {
    FUN_03c27e60(&local_b70,&local_1a8,plVar32);
  }
  puVar7 = PTR_DAT_04bc00c8;
  puVar5 = PTR_DAT_04bc0048;
  puVar3 = PTR_DAT_04bb43c0;
  if (local_1ac != 0) {
    if (0 < (int)local_a38) {
      uVar17 = 0;
      puVar3 = PTR_DAT_04bc0510 + 0x10;
      iVar15 = -1;
      do {
        puVar19 = (ulong *)(**(code **)(*(long *)(*(long *)(local_a50 + uVar17 * 8) + 0x60) + 0xf0))
                                     ();
        uVar30 = *puVar19;
        local_90 = (undefined **)(uVar30 & 0xffff);
        FUN_0277d4ac(&local_90);
        puVar6 = PTR_DAT_04bb43c0;
        local_90 = (undefined **)
                   CONCAT44((int)(uVar30 >> 0x20),
                            CONCAT13((char)(uVar30 >> 0x18),
                                     CONCAT12((char)(uVar30 >> 0x10),(undefined2)local_90)));
        lVar33 = *(long *)PTR_DAT_04bb43c0;
        uVar12 = FUN_0277d6c4(&local_90);
        lVar25 = *(long *)puVar6;
        iVar16 = iVar15;
        if (lVar25 != 0) {
          lVar33 = *(long *)(lVar33 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar33 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
            local_198 = (uint *)0x0;
            local_1a0 = (char *)local_90;
            local_1a8 = puVar3;
            uVar12 = FUN_0277d6c4(&local_1a0);
            if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_0268d324:
              puVar18 = (uint *)0x0;
              bVar29 = true;
              uVar12 = 0xbc;
            }
            else {
              lVar25 = *(long *)(lVar25 + 0x57e58);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
              if ((*(uint *)(lVar25 + 0x1d8) <= uVar12) ||
                 (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar12 * 8) == 0))
              goto LAB_0268d324;
              lVar25 = *(long *)PTR_DAT_04bc0428;
              uVar12 = FUN_0277d6c4(&local_90);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
              if ((*(uint *)(lVar25 + 0x1d8) <= uVar12) ||
                 (puVar18 = *(uint **)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar12 * 8),
                 puVar18 == (uint *)0x0)) goto LAB_0268d324;
              uVar12 = 0;
              uVar14 = *puVar18;
              local_198 = puVar18;
              if ((uVar14 == 0) || (puVar18 == (uint *)(ulong)uVar14)) {
LAB_0268d4b8:
                bVar29 = false;
              }
              else {
                puVar26 = (uint *)((long)puVar18 - (long)(ulong)uVar14);
                uVar12 = 0;
                if (*puVar26 == 0) goto LAB_0268d4b8;
                uVar12 = puVar26[1];
                if ((uVar12 == 0) || ((ulong)(ushort)puVar26[2] == 0)) {
LAB_0268d4b4:
                  uVar12 = 0;
                  goto LAB_0268d4b8;
                }
                lVar25 = 0xc;
                if (*(char *)((long)puVar26 + 10) != '\0') {
                  lVar25 = 0x1c;
                }
                lVar25 = (long)puVar26 + lVar25 + (ulong)(ushort)puVar26[2] * 8;
                if (lVar25 == 0) goto LAB_0268d4b4;
                uVar14 = 0;
                if ((ulong)uVar12 != 0) {
                  uVar14 = (uint)((ulong)((long)puVar18 - lVar25) / (ulong)uVar12);
                }
                if (*puVar26 <= uVar14) {
                  uVar14 = 0xffffffff;
                }
                if (*(uint *)puVar7 <= uVar14) goto LAB_0268d4b4;
                uVar12 = (uint)*(ushort *)(*(long *)(puVar7 + 8) + (long)(int)uVar14 * 2);
                if (uVar12 < 0xbd) goto LAB_0268d4b8;
                bVar29 = false;
                uVar12 = 0;
              }
            }
            local_b80 = (char *)CONCAT44(local_b80._4_4_,uVar12);
            if (uVar12 != 0xb6) {
              if (local_1ac != 4) {
                FUN_0268f390(param_1,&local_90,&local_3d8,7,1,1,0);
              }
              uVar12 = 0;
              if (bVar29) {
                local_b80 = (char *)((ulong)local_b80._4_4_ << 0x20);
              }
              else {
                uVar14 = *puVar18;
                if ((uVar14 != 0) && (puVar18 != (uint *)(ulong)uVar14)) {
                  puVar26 = (uint *)((long)puVar18 - (long)(ulong)uVar14);
                  uVar12 = 0;
                  if (*puVar26 != 0) {
                    uVar12 = puVar26[1];
                    if ((uVar12 != 0) && ((ulong)(ushort)puVar26[2] != 0)) {
                      lVar25 = 0xc;
                      if (*(char *)((long)puVar26 + 10) != '\0') {
                        lVar25 = 0x1c;
                      }
                      lVar25 = (long)puVar26 + lVar25 + (ulong)(ushort)puVar26[2] * 8;
                      if (lVar25 != 0) {
                        uVar14 = 0;
                        if ((ulong)uVar12 != 0) {
                          uVar14 = (uint)((ulong)((long)puVar18 - lVar25) / (ulong)uVar12);
                        }
                        if (*puVar26 <= uVar14) {
                          uVar14 = 0xffffffff;
                        }
                        if ((uVar14 < *(uint *)puVar5) &&
                           (uVar12 = (uint)*(ushort *)
                                            (*(long *)(puVar5 + 8) + (long)(int)uVar14 * 2),
                           uVar12 < 0x52)) goto LAB_0268d40c;
                      }
                    }
                    uVar12 = 0;
                  }
                }
LAB_0268d40c:
                local_b80 = (char *)CONCAT44(local_b80._4_4_,uVar12);
                if ((uVar12 & 0xfffffffe) == 0x12) {
                  iVar16 = 0;
                }
                else {
                  puVar26 = (uint *)((long)puVar18 - (ulong)*puVar18);
                  if ((((*puVar18 != 0) && (puVar26 != (uint *)0x0)) && (*puVar26 != 0)) &&
                     ((uVar12 = puVar26[1], uVar12 != 0 && ((ulong)(ushort)puVar26[2] != 0)))) {
                    lVar25 = 0xc;
                    if (*(char *)((long)puVar26 + 10) != '\0') {
                      lVar25 = 0x1c;
                    }
                    lVar25 = (long)puVar26 + lVar25 + (ulong)(ushort)puVar26[2] * 8;
                    if (lVar25 != 0) {
                      uVar14 = 0;
                      if ((ulong)uVar12 != 0) {
                        uVar14 = (uint)((ulong)((long)puVar18 - lVar25) / (ulong)uVar12);
                      }
                      if (*puVar26 <= uVar14) {
                        uVar14 = 0xffffffff;
                      }
                      if (((uVar14 < *(uint *)puVar5) &&
                          (*(short *)(*(long *)(puVar5 + 8) + (long)(int)uVar14 * 2) == 0x14)) &&
                         (iVar16 = 2, -1 < iVar15)) {
                        iVar16 = iVar15;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        plVar34 = (long *)PTR_DAT_04bb3350;
        uVar17 = uVar17 + 1;
        iVar15 = iVar16;
      } while (local_a38 != uVar17);
      if (-1 < iVar16) {
        local_1a0 = "UseAudioType";
        local_1a8 = PTR_DAT_04bb2020 + 0x10;
        FUN_02749650(puVar1,uVar11,&local_1a8,iVar16,0);
      }
    }
    puVar21 = (undefined8 *)(**(code **)(local_a00[0] + 0xf0))(local_a00);
    uVar31 = *puVar21;
    local_3f6 = 0;
    local_3f4 = 0;
    local_3f8 = (undefined2)uVar31;
    FUN_0277d4ac(&local_3f8);
    local_3f6 = (undefined2)((ulong)uVar31 >> 0x10);
    local_3f4 = (undefined4)((ulong)uVar31 >> 0x20);
    FUN_0285a8b0(param_1 + 0x12880,&local_3f8);
    puVar19 = (ulong *)(**(code **)(local_a00[0] + 0xf0))(local_a00);
    uVar17 = *puVar19;
    local_1a8 = (char *)(uVar17 & 0xffff);
    FUN_0277d4ac(&local_1a8);
    local_1a8 = (char *)CONCAT44((int)(uVar17 >> 0x20),
                                 CONCAT13((char)(uVar17 >> 0x18),
                                          CONCAT12((char)(uVar17 >> 0x10),(undefined2)local_1a8)));
    iVar15 = 0;
    if (*(long *)PTR_DAT_04bb46d0 != 0) {
      iVar15 = FUN_017c206c(*(long *)PTR_DAT_04bb46d0,&local_1a8);
    }
    local_90 = (undefined **)CONCAT44(local_90._4_4_,iVar15);
    param_1[0x128a0] = param_1[0x128a0] & 0xf1 | (byte)(iVar15 << 1);
    puVar21 = (undefined8 *)(**(code **)(local_998[0] + 0xf0))(local_998);
    uVar31 = *puVar21;
    local_3fe = 0;
    local_3fc = 0;
    local_400 = (undefined2)uVar31;
    FUN_0277d4ac(&local_400);
    local_3fe = (undefined2)((ulong)uVar31 >> 0x10);
    local_3fc = (undefined4)((ulong)uVar31 >> 0x20);
    FUN_0285aa40(param_1 + 0x12880,&local_400);
    param_1[0x1289f] = param_1[0x1289f] & 0xbf;
    goto LAB_0268e5b4;
  }
  FUN_0268b680(local_70,param_2);
  FUN_0268f390(param_1,local_70,&local_3d8,7,1,1,0);
  local_1a8 = (char *)0xfffe;
  FUN_0277d4ac(&local_1a8);
  local_198 = (uint *)0x0;
  pcVar2 = PTR_DAT_04bb2010 + 0x10;
  local_18c = 0xfffe;
  local_1a0 = pcVar2;
  FUN_0277d4ac(&local_18c);
  local_178 = 0;
  local_170 = 0xfffe;
  local_180 = pcVar2;
  FUN_0277d4ac(&local_170);
  local_160 = 0;
  local_168 = pcVar2;
  FUN_0268bf20(&local_1a8,&local_b70,uVar8,&local_31c);
  lVar33 = *(long *)puVar3;
  uVar12 = FUN_0277d6c4(&local_1a8);
  lVar25 = *(long *)puVar3;
  if (lVar25 != 0) {
    lVar33 = *(long *)(lVar33 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar33 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      FUN_0268f390(param_1,&local_1a8,&local_3d8,7,1,1,0);
      lVar25 = *(long *)puVar3;
    }
  }
  uVar12 = FUN_0277d6c4(&local_170);
  if (*(long *)puVar3 != 0) {
    lVar25 = *(long *)(lVar25 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar25 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      FUN_0268f390(param_1,&local_170,&local_3d8,7,1,1,0);
    }
  }
  local_b80 = (char *)0x598;
  FUN_0277d4ac(&local_b80);
  puVar5 = PTR_DAT_04bc0510;
  lVar25 = *(long *)puVar3;
  local_80 = 0;
  local_90 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  local_88 = local_b80;
  uVar12 = FUN_0277d6c4(&local_88);
  if (*(long *)puVar3 != 0) {
    lVar25 = *(long *)(lVar25 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar25 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      lVar25 = *(long *)PTR_DAT_04bc0428;
      uVar12 = FUN_0277d6c4(&local_b80);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if (uVar12 < *(uint *)(lVar25 + 0x1d8)) {
        lVar25 = *(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar12 * 8);
        if (lVar25 != 0) {
          local_80 = lVar25;
        }
      }
    }
  }
  bVar9 = FUN_020fd7d8(param_2);
  iVar15 = *(int *)(&DAT_04058160 + (ulong)bVar9 * 4);
  iVar16 = FUN_01ad7260(&local_90);
  if (iVar16 != 0) {
    if (bVar9 != 2) {
      iVar16 = FUN_01ad7260(&local_90);
      if (iVar16 <= iVar15) goto LAB_0268e324;
    }
    puVar22 = (ushort *)FUN_01afd600(&local_90);
    if (puVar22 != (ushort *)0x0) {
      *puVar22 = *puVar22 & 0xfff8 | (ushort)iVar15 & 7;
    }
  }
LAB_0268e324:
  local_3e0 = local_88;
  FUN_0268f390(param_1,&local_3e0,&local_3d8,7,1,1,0);
  local_b80 = (char *)0xe71;
  FUN_0277d4ac(&local_b80);
  local_90 = (undefined **)(puVar5 + 0x10);
  lVar25 = *(long *)puVar3;
  local_80 = 0;
  local_88 = local_b80;
  uVar12 = FUN_0277d6c4(&local_88);
  if (*(long *)puVar3 != 0) {
    lVar25 = *(long *)(lVar25 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar25 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      lVar25 = *(long *)PTR_DAT_04bc0428;
      uVar12 = FUN_0277d6c4(&local_b80);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if (uVar12 < *(uint *)(lVar25 + 0x1d8)) {
        lVar25 = *(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar12 * 8);
        if (lVar25 != 0) {
          local_80 = lVar25;
        }
      }
    }
  }
  bVar9 = FUN_020fd7d8(param_2);
  iVar15 = *(int *)(&DAT_04057fa0 + (ulong)bVar9 * 4);
  iVar16 = FUN_01ad7260(&local_90);
  if (iVar16 != 0) {
    if (bVar9 != 3) {
      iVar16 = FUN_01ad7260(&local_90);
      if (iVar16 <= iVar15) goto LAB_0268e458;
    }
    puVar22 = (ushort *)FUN_01afd600(&local_90);
    if (puVar22 != (ushort *)0x0) {
      *puVar22 = *puVar22 & 0xfff8 | (ushort)iVar15 & 7;
    }
  }
LAB_0268e458:
  local_3e0 = local_88;
  FUN_0268f390(param_1,&local_3e0,&local_3d8,7,1,1,0);
  if (local_190 < 0x24) {
    param_1[(ulong)(local_190 >> 3) + 0x13156] =
         param_1[(ulong)(local_190 >> 3) + 0x13156] | (byte)(1 << (ulong)(local_190 & 7));
  }
  if (local_158 < 0x24) {
    param_1[(ulong)(local_158 >> 3) + 0x13156] =
         param_1[(ulong)(local_158 >> 3) + 0x13156] | (byte)(1 << (ulong)(local_158 & 7));
  }
  local_b80 = (char *)0x134b;
  FUN_0277d4ac(&local_b80);
  local_3e0 = (char *)0x139b;
  FUN_0277d4ac(&local_3e0);
  local_3e8 = (uint)local_b80;
  local_3e4 = local_b80._4_4_;
  FUN_0285a8b0(param_1 + 0x12880,&local_3e8);
  iVar15 = 0;
  if (*(long *)PTR_DAT_04bb46d0 != 0) {
    iVar15 = FUN_017c206c(*(long *)PTR_DAT_04bb46d0,&local_b80);
  }
  puVar3 = PTR_DAT_04bb2020;
  local_90 = (undefined **)CONCAT44(local_90._4_4_,iVar15);
  param_1[0x128a0] = param_1[0x128a0] & 0xf1 | (byte)(iVar15 << 1);
  local_3ec = local_3e0._4_4_;
  local_3f0 = (undefined4)local_3e0;
  FUN_0285aa40(param_1 + 0x12880,&local_3f0);
  local_90 = (undefined **)(puVar3 + 0x10);
  param_1[0x1289f] = param_1[0x1289f] & 0xbf;
  local_88 = "UseAudioType";
  FUN_02749650(puVar1,uVar11,&local_90,2,0);
LAB_0268e5b4:
  puVar19 = (ulong *)(**(code **)(local_930[0] + 0xf0))(local_930);
  uVar17 = *puVar19;
  local_1a8 = (char *)(uVar17 & 0xffff);
  FUN_0277d4ac(&local_1a8);
  param_1[0x1320e] = (char)(uVar17 >> 0x10);
  param_1[0x1320f] = (char)(uVar17 >> 0x18);
  *(int *)(param_1 + 0x13210) = (int)(uVar17 >> 0x20);
  *(undefined2 *)(param_1 + 0x1320c) = (undefined2)local_1a8;
  lVar25 = *(long *)PTR_DAT_04bb26a8;
  uVar10 = FUN_0277d6c4(param_1 + 0x1320c);
  for (lVar25 = *(long *)(lVar25 + 0x19f800); lVar25 != 0; lVar25 = *(long *)(lVar25 + 8)) {
    while (*(ushort *)(lVar25 + 0x20) <= uVar10) {
      if (uVar10 <= *(ushort *)(lVar25 + 0x20)) {
        uVar23 = (undefined2)*(undefined4 *)(lVar25 + 0x24);
        goto LAB_0268e664;
      }
      lVar25 = *(long *)(lVar25 + 0x10);
      if (lVar25 == 0) goto LAB_0268e658;
    }
  }
LAB_0268e658:
  uVar23 = 0;
LAB_0268e664:
  *(undefined2 *)(param_1 + 0x1287c) = uVar23;
  (**(code **)(CONCAT44(uStack_b6c,CONCAT22(uStack_b6e,local_b70)) + 0x20))(&local_b70);
  (**(code **)(*plVar32 + 0x58))(plVar32);
  FUN_00b634e0(&local_b70);
  if (lVar24 != 1) {
    lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*plVar34 + 0x68));
    *(long *)(lVar25 + 0xa8) = lVar24;
  }
  return;
}

