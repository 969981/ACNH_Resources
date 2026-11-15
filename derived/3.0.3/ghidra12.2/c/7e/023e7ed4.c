
void FUN_023e7ed4(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_8c [2];
  undefined1 local_82;
  undefined8 local_80;
  undefined **local_78;
  undefined8 *puStack_70;
  int local_68;
  int iStack_64;
  undefined8 *local_60;
  int local_58;
  int iStack_54;
  undefined2 local_50;
  undefined4 local_4e;
  undefined1 local_4a;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined2 local_34;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  uVar10 = (uint)*(byte *)(param_1 + 0x1ee8);
  lVar1 = DAT_055021a0 + 0x20 + (ulong)uVar10 * 0x740;
  if (7 < uVar10) {
    lVar1 = DAT_055021a0 + 0x20;
  }
  if (*(int *)(param_1 + 0x1c04) == 0) {
    if ((*(byte *)(param_1 + 0x17d0) >> 6 & 1) != 0) {
      return;
    }
    lVar7 = FUN_0251e98c(1);
    pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x2a0) + 0xf0))(lVar7 + 0x2a0);
    puVar6 = PTR_DAT_04bb6298;
    lVar7 = *(long *)(param_1 + 0x68);
    if (lVar7 == 0) {
      fVar11 = 0.0;
      fVar12 = 0.0;
    }
    else {
      uVar9 = (ulong)(*(uint *)(lVar7 + 0x2b4) >> 0x14) & 0xff0;
      fVar11 = (float)(*(uint *)(lVar7 + 0x2b4) & 0xffffff) * 5.9604645e-08;
      fVar13 = *(float *)((long)&DAT_04199798 + uVar9) +
               fVar11 * *(float *)((long)&DAT_0419979c + uVar9);
      fVar12 = *(float *)((long)&DAT_041997a0 + uVar9) +
               fVar11 * *(float *)((long)&DAT_041997a4 + uVar9);
      fVar11 = *(float *)(lVar7 + 0x278) + fVar13 * 0.0 * 0.0 + fVar12 * 0.0 + (fVar13 + 0.0) * 7.5;
      fVar12 = *(float *)(lVar7 + 0x280) + (fVar12 * 0.0 * 0.0 - fVar13 * 0.0) + fVar12 * 7.5;
    }
    bVar2 = *(byte *)(param_1 + 0x1ee8);
    fVar13 = *pfVar8 * 0.1 * 0.97;
    local_58 = (int)((float)(int)(fVar11 - fVar13) / 5.0) - (uint)(fVar11 - fVar13 < 0.0);
    iStack_54 = (int)((float)(int)(fVar12 - fVar13) / 5.0) - (uint)(fVar12 - fVar13 < 0.0);
    iVar4 = (int)((float)(int)(fVar13 + fVar11) / 5.0) - (uint)(fVar13 + fVar11 < 0.0);
    iVar5 = (int)((float)(int)(fVar13 + fVar12) / 5.0) - (uint)(fVar13 + fVar12 < 0.0);
    local_68 = local_58;
    if (iVar4 <= local_58) {
      local_68 = iVar4;
    }
    if (local_58 <= iVar4) {
      local_58 = iVar4;
    }
    iStack_64 = iStack_54;
    if (iVar5 <= iStack_54) {
      iStack_64 = iVar5;
    }
    if (iStack_54 <= iVar5) {
      iStack_54 = iVar5;
    }
    uVar10 = (uint)bVar2;
    if (7 < uVar10) {
      uVar10 = 0xffffffff;
    }
    *(uint *)(lVar1 + 0x4d4) = uVar10;
    uVar3 = *(undefined2 *)puVar6;
    if (bVar2 < 8) {
      *(byte *)(lVar1 + 0x4d8) = bVar2;
    }
    *(undefined1 *)(lVar1 + 0x4d9) = 1;
    local_48 = 0xffffffffffffffff;
    local_4a = 0;
    local_40 = 0;
    local_80 = CONCAT62(local_80._2_6_,uVar3);
    local_4e = 0x100;
    local_60 = &DAT_048f9750;
    local_78 = &PTR_FUN_0498d548;
    puStack_70 = &DAT_048f9750;
    local_3c = 0x41200000;
    local_34 = 0xff00;
    local_50 = 0xff00;
    if (*(int *)(lVar1 + 0x4d0) == 0x15) {
      local_50 = 0x1400;
    }
    local_82 = 2;
    uVar9 = FUN_023016c0(lVar1 + 0x4c8,&local_80,local_8c);
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
  else {
    local_8c[0] = FUN_01392d64(lVar1 + 0x4c8);
    if (local_8c[0] == 3) {
      return;
    }
    if (local_8c[0] == 1) {
      local_80 = CONCAT44(local_80._4_4_,0x57);
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
      lVar1 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar1 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar1,0x57);
      return;
    }
  }
  local_78 = (undefined **)((ulong)local_78 & 0xffffff0000000000);
  local_80 = 0x1000000000006;
  FUN_02374564(param_1,&local_80);
  return;
}

