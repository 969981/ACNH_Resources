
void FUN_024b6404(long param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  byte bVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  byte bVar18;
  long *plVar19;
  undefined8 uVar20;
  float fVar21;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined1 local_50;
  byte bStack_4f;
  undefined2 uStack_4e;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x178) == 1) {
    fStack_4c = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    fVar21 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_50 = SUB41(fVar21,0);
    bStack_4f = (byte)((uint)fVar21 >> 8);
    uStack_4e = (undefined2)((uint)fVar21 >> 0x10);
    local_48 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar3 + 0x4f,&local_50);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_44 = 10;
      local_50 = 10;
      bStack_4f = 0;
      uStack_4e = 0;
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024b659c;
    }
    iVar15 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar19 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar19 = *(long **)(param_1 + 0x4c8);
    }
    lVar12 = (**(code **)(*plVar19 + 0x148))();
    iVar5 = iVar15 - *(int *)(lVar12 + 4);
    if (0xb60b5e < iVar5 + 0x5b05afU) {
      iVar16 = (int)((float)iVar5 * 0.1666667);
      iVar5 = 0x10000000;
      if (iVar16 < 1) {
        iVar5 = -0x5b05b0;
      }
      iVar15 = -0x10000000;
      if (0 < iVar16) {
        iVar15 = 0x5b05b0;
      }
      iVar2 = iVar16;
      if (iVar5 <= iVar16) {
        iVar2 = iVar5;
      }
      if (iVar15 <= iVar16) {
        iVar15 = iVar2;
      }
      iVar15 = iVar15 + *(int *)(lVar12 + 4);
    }
    *(int *)(lVar12 + 4) = iVar15;
  }
LAB_024b659c:
  bVar7 = *(byte *)(param_1 + 0x1ee8);
  lVar12 = *(long *)PTR_DAT_04bb48a0;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  bVar18 = *(byte *)(lVar12 + 0x44);
  if (7 < bVar18) {
    bVar18 = 0xff;
  }
  if (bVar7 == bVar18) {
    lVar17 = 0;
LAB_024b66a4:
    lVar12 = lVar12 + 0x40 + lVar17 * 0x20;
  }
  else {
    bVar18 = *(byte *)(lVar12 + 100);
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
    if (bVar7 == bVar18) {
      lVar17 = 1;
      goto LAB_024b66a4;
    }
    bVar18 = *(byte *)(lVar12 + 0x84);
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
    if (bVar7 == bVar18) {
      lVar17 = 2;
      goto LAB_024b66a4;
    }
    bVar18 = *(byte *)(lVar12 + 0xa4);
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
    if (bVar7 == bVar18) {
      lVar17 = 3;
      goto LAB_024b66a4;
    }
    bVar18 = *(byte *)(lVar12 + 0xc4);
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
    if (bVar7 == bVar18) {
      lVar17 = 4;
      goto LAB_024b66a4;
    }
    bVar18 = *(byte *)(lVar12 + 0xe4);
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
    if (bVar7 == bVar18) {
      lVar17 = 5;
      goto LAB_024b66a4;
    }
    bVar18 = *(byte *)(lVar12 + 0x104);
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
    if (bVar7 == bVar18) {
      lVar17 = 6;
      goto LAB_024b66a4;
    }
    bVar18 = *(byte *)(lVar12 + 0x124);
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
    if (bVar7 == bVar18) {
      lVar17 = 7;
      goto LAB_024b66a4;
    }
    lVar12 = lVar12 + 0x140;
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if ((*(int *)(param_1 + 0x178) == 0) && (uVar13 = FUN_013ec620(lVar12 + 0xc), (uVar13 & 1) == 0))
  {
    local_50 = 1;
    bStack_4f = *PTR_DAT_04bb32e0;
    if (7 < bStack_4f) {
      bStack_4f = 0xff;
    }
    if (((*pbVar1 < 8) && (uVar9 = FUN_02582d8c(pbVar1,1), uVar9 < 8)) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d4) != '\0')) {
      local_50 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d6) != '\0';
    }
    else {
      local_50 = false;
    }
    bStack_4f = *pbVar1;
    if (7 < bStack_4f) {
      bStack_4f = 0xff;
    }
    FUN_02307c7c(&local_50);
    local_50 = 0x97;
    bStack_4f = 0;
    uStack_4e = 0;
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
    lVar17 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar17 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar17,0x97);
  }
  if (*(char *)(param_1 + 0x17ac) != '\0') {
    return;
  }
  local_50 = 0;
  bStack_4f = 0;
  uStack_4e = 0;
  if ((*(uint *)(param_1 + 0xed0) & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
    FUN_023164ec(param_1,6);
    return;
  }
  lVar17 = lVar12 + 0xc;
  uVar13 = FUN_013eca0c(lVar17);
  if ((uVar13 & 1) == 0) {
    if (((*pbVar1 < 8) && (uVar9 = FUN_02582d8c(pbVar1,1), uVar9 < 8)) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d4) != '\0')) {
      local_50 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d6) != '\0';
    }
    else {
      local_50 = false;
    }
    bStack_4f = *pbVar1;
    if (7 < bStack_4f) {
      bStack_4f = 0xff;
    }
    FUN_02307c7c(&local_50);
    local_50 = 0x9a;
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
    lVar12 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar12 = *(long *)(param_1 + 0x70) + 0x278;
    }
    goto LAB_024b6ca4;
  }
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  uVar8 = FUN_013ec384(lVar17);
  local_50 = (undefined1)uVar8;
  bStack_4f = (byte)((ushort)uVar8 >> 8);
  uStack_4e = 0;
  fStack_4c = 0.0;
  FUN_0277d4ac(&local_50);
  *(ulong *)(param_1 + 0x1980) =
       CONCAT44(fStack_4c,CONCAT22(uStack_4e,CONCAT11(bStack_4f,local_50)));
  *(int *)(param_1 + 0x1992) = (int)(*(float *)(lVar12 + 0x10) * 999.99994);
  iVar15 = (int)(*(float *)(lVar12 + 0x14) * 4.0);
  if (0x7ffe < iVar15) {
    iVar15 = 0x7fff;
  }
  if (iVar15 < -0x7fff) {
    iVar15 = -0x8000;
  }
  *(short *)(param_1 + 0x1996) = (short)iVar15;
  *(int *)(param_1 + 0x1998) = (int)(*(float *)(lVar12 + 0x18) * 999.99994);
  uVar10 = FUN_013ec770(lVar17);
  local_50 = (undefined1)uVar10;
  bStack_4f = (byte)((uint)uVar10 >> 8);
  uStack_4e = (undefined2)((uint)uVar10 >> 0x10);
  *(undefined4 *)(param_1 + 0x199c) = uVar10;
  uVar9 = FUN_024b1b70(param_1);
  local_58 = FUN_013ec384(lVar17);
  local_56 = 0;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  puVar6 = PTR_DAT_04bb27c0;
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 != 0) {
    if (((uVar9 == 0) ||
        (plVar19 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) + (ulong)(uVar9 >> 0x14) * 8)
        , plVar19 == (long *)0x0)) ||
       (((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar19 + 0x46) != uVar9)))) {
      plVar19 = (long *)0x0;
    }
    if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
      plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar12 = *(long *)puVar6;
      iVar15 = (**(code **)(*plVar14 + 0x60))();
      if (iVar15 < 0x11) {
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_024b6b94;
        uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_024b6b94:
      uVar9 = 0;
    }
    if (plVar19 != (long *)0x0) {
      lVar12 = plVar19[0x2a];
      uVar4 = *(uint *)(plVar19 + 0x49);
      if (((*PTR_DAT_04bb4b28 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb4b28), iVar15 != 0)) {
        *(undefined **)PTR_DAT_04bb4b20 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4b28);
      }
      uVar11 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb4b20);
      if ((((uVar11 & uVar9) == 1) && ((int)lVar12 == 1)) && ((uVar4 >> 4 & 1) != 0)) {
        uVar20 = *(undefined8 *)PTR_DAT_04bb3d80;
        uVar10 = FUN_0277d6c4(&local_58);
        bVar7 = FUN_013eec20(uVar20,uVar10);
        *(byte *)((long)plVar19 + 0x2d2) = bVar7 & 1;
      }
    }
  }
  local_50 = 0x9b;
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar12 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar12 = *(long *)(param_1 + 0x70) + 0x278;
  }
LAB_024b6ca4:
  uStack_4e = 0;
  bStack_4f = 0;
  FUN_03ebb160(lVar12,local_50);
  return;
}

