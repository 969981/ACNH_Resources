
/* WARNING: Removing unreachable block (ram,0x002a2c38) */

void FUN_002a2b10(undefined8 param_1,long param_2,byte param_3,int param_4,int param_5,
                 undefined8 param_6,byte param_7,long param_8,uint param_9,long *param_10,
                 ushort param_11)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  short sVar12;
  uint uVar13;
  ushort uVar14;
  int local_198;
  ErrorResultVariant aEStack_194 [12];
  int local_188;
  ErrorResultVariant aEStack_184 [4];
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88 [4];
  long local_78;
  byte local_70;
  undefined4 local_64;
  
  uVar5 = FUN_0026c89c(DAT_04c603c8);
  uVar4 = FUN_002aaa44(param_2);
  FUN_00261010(local_88,uVar5,&local_78,uVar4);
  if (local_88[0] != 0) {
    piVar6 = local_88;
    goto LAB_002a2e8c;
  }
  puVar11 = (undefined1 *)(param_2 + 0x5a);
  *puVar11 = 3;
  *(byte *)(param_2 + 0x5b) = param_3;
  FUN_00228480(param_2 + 0x5c,param_4);
  FUN_00228480(param_2 + 0x60,param_5);
  FUN_00228460(param_2 + 100,local_78);
  uVar9 = (ulong)*(byte *)(*(long *)PTR_DAT_04bcb8b8 + 0x162);
  uVar8 = (ulong)(uVar9 == 0);
  if (2 < param_3 - 6) {
    uVar8 = uVar9;
  }
  *(char *)(param_2 + 0x6c) = (char)*(undefined2 *)(*(long *)PTR_DAT_04bcb8b8 + uVar8 * 2 + 0x15e);
  FUN_00228460(param_2 + 0x6d,param_6);
  *(char *)(param_2 + 0x76) = (char)param_9;
  *(byte *)(param_2 + 0x75) = param_7 & 1;
  if (param_9 == 0) {
    uVar13 = 0x1d;
  }
  else {
    if (param_9 == 1) {
      uVar8 = 0;
      uVar13 = 0x1d;
    }
    else {
      uVar8 = 0;
      do {
        puVar1 = (undefined1 *)(param_8 + uVar8);
        iVar7 = (int)uVar8;
        puVar11[iVar7 + 0x1d] = *puVar1;
        uVar8 = uVar8 + 2;
        puVar11[iVar7 + 0x1e] = puVar1[1];
      } while (((ulong)param_9 & 0xfffffffe) != uVar8);
      uVar13 = (int)uVar8 + 0x1d;
      if ((param_9 & 1) == 0) goto LAB_002a2c8c;
    }
    puVar11[uVar13] = *(undefined1 *)(param_8 + uVar8);
    uVar13 = uVar13 + 1;
  }
LAB_002a2c8c:
  if ((param_4 == 0) || (param_5 == 0)) {
    local_198 = 0;
    _local_188 = CONCAT44(aEStack_184,0x10c08);
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_184,(Result *)&local_198);
    piVar6 = &local_188;
    goto LAB_002a2e8c;
  }
  uVar8 = (ulong)param_11;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  _local_188 = 0;
  uStack_180 = 0;
  if (param_11 == 0) {
LAB_002a2e68:
    local_198 = 0x2c0a;
  }
  else {
    uVar14 = 0;
    do {
      if (*param_10 != local_78) {
        FUN_002610a0(&local_198,uVar5,&local_78);
        FUN_00229780(local_88,&local_198);
        bVar2 = local_70;
        if ((local_88[0] == 0) && (local_70 < 0x21)) {
          lVar10 = *(long *)(param_2 + 0x50);
          bVar3 = FUN_002aaa44(param_2);
          lVar10 = lVar10 + (long)(int)((uint)bVar2 - (uint)(bVar3 <= bVar2)) * 0x6b0;
          FUN_002a2eb8(&local_198,param_2,lVar10,uVar13);
          FUN_00229780(local_88,&local_198);
          if (local_88[0] == 0) {
            *(long *)(aEStack_194 + (ulong)uVar14 * 8 + 0xc) = lVar10;
            FUN_00291df0(*(undefined8 *)(DAT_04c60f48 + 0xb8),*param_10,1);
            uVar14 = uVar14 + 1;
          }
          else {
            local_64 = 0;
            local_198 = 0x4c0d;
            nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_194,(Result *)&local_64);
            if (local_88[0] == local_198) {
              local_198 = 0x4c0d;
              goto LAB_002a2e70;
            }
          }
        }
      }
      param_10 = param_10 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    if (uVar14 == 0) goto LAB_002a2e68;
    sVar12 = 0;
    uVar8 = (ulong)uVar14;
    piVar6 = &local_188;
    do {
      FUN_002b0d5c(&local_198,*(undefined8 *)piVar6,puVar11,uVar13,0);
      FUN_00229780(local_88,&local_198);
      if (local_88[0] == 0) {
        sVar12 = sVar12 + 1;
      }
      uVar8 = uVar8 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar8 != 0);
    if (sVar12 == 0) {
      local_198 = 0x8c56;
    }
    else {
      local_198 = 0;
    }
  }
LAB_002a2e70:
  local_64 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_194,(Result *)&local_64);
  piVar6 = &local_198;
LAB_002a2e8c:
  FUN_002296c4(param_1,piVar6);
  return;
}

