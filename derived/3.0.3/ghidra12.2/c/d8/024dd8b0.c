
void FUN_024dd8b0(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined2 *puVar10;
  long lVar11;
  undefined *local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  long local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  
  lVar9 = *(long *)(param_1 + 0x68);
  local_60 = 0;
  local_58 = 0;
  if (lVar9 != 0) {
    local_58 = *(undefined4 *)(lVar9 + 0x280);
    local_60 = *(undefined8 *)(lVar9 + 0x278);
  }
  FUN_016dafc8(1,param_1,param_1 + 0xc30,param_1 + 0xc34,param_1 + 0xc38,&local_60,0,0,0);
  puVar5 = PTR_DAT_04bb43c0;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x2a789248) {
    return;
  }
  if (*(char *)(param_1 + 0x17ac) != '\0') {
    return;
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,0x23);
  if ((*(uint *)(param_1 + 0xed4) >> 3 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x298) == 0) {
LAB_024dd9e4:
    puVar10 = &DAT_05586008;
  }
  else {
    lVar9 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    if (*(char *)(lVar9 + 0x1d5) != '\0') {
      lVar11 = *(long *)PTR_DAT_04bb43c0;
      puVar10 = (undefined2 *)(lVar9 + 0xcc);
      uVar6 = FUN_0277d6c4(puVar10);
      if (*(long *)puVar5 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_024dd9d0;
        goto LAB_024dd9f4;
      }
LAB_024dd9d0:
      iVar7 = FUN_0277d6c4(puVar10);
      if (iVar7 == 0xfffd) goto LAB_024dd9e4;
    }
    puVar10 = (undefined2 *)(lVar9 + 0xd4);
  }
LAB_024dd9f4:
  uVar4 = *puVar10;
  uVar2 = *(undefined1 *)(puVar10 + 1);
  uVar3 = *(undefined1 *)((long)puVar10 + 3);
  uVar1 = *(undefined4 *)(puVar10 + 2);
  lVar11 = *(long *)puVar5;
  local_68 = uVar4;
  local_66 = uVar2;
  local_65 = uVar3;
  local_64 = uVar1;
  uVar6 = FUN_0277d6c4(&local_68);
  lVar9 = *(long *)puVar5;
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_80 = PTR_DAT_04bc0510 + 0x10;
      local_70 = 0;
      local_78 = uVar4;
      local_76 = uVar2;
      local_75 = uVar3;
      local_74 = uVar1;
      uVar6 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar5 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(&local_68);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8), lVar9 != 0)) {
            local_70 = lVar9;
          }
        }
      }
      local_54 = FUN_01ad78cc(&local_80);
      if (local_54 == 0x1e) {
        uVar6 = 0xda;
      }
      else {
        uVar8 = FUN_016f62fc(param_1);
        if ((uVar8 & 1) == 0) {
          return;
        }
        uVar6 = 0x137;
      }
      if (0x148 < uVar6) {
        return;
      }
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
      lVar9 = *(long *)(param_1 + 0x70);
      local_54 = uVar6;
      goto LAB_024ddbe4;
    }
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,0x137);
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
  lVar9 = *(long *)(param_1 + 0x70);
  uVar6 = 0x137;
LAB_024ddbe4:
  lVar11 = 0;
  if (lVar9 != 0) {
    lVar11 = lVar9 + 0x278;
  }
  FUN_03ebb160(lVar11,uVar6);
  return;
}

