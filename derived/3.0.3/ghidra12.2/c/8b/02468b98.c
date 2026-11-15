
undefined8 FUN_02468b98(long param_1,float *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_8c [10];
  undefined1 local_82;
  undefined4 local_80 [2];
  undefined *local_78;
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
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_054f0960);
      puVar10 = (uint *)&DAT_054f0958;
      if (iVar8 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar10 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar10 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
      puVar10 = (uint *)(DAT_054f5738 + 0x204) + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
    }
  }
  local_80[0] = 1;
  if ((*puVar10 >> 1 & 1) == 0) {
    lVar5 = FUN_0251e98c(1);
    pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x2a0) + 0xf0))(lVar5 + 0x2a0);
    fVar11 = *pfVar6 * 0.9 * 0.97;
    fVar13 = *param_2 - fVar11;
    fVar12 = *param_2 + fVar11;
    fVar14 = param_2[2] - fVar11;
    fVar11 = fVar11 + param_2[2];
    local_58 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    iStack_54 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    iVar8 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
    iVar3 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
    local_68 = local_58;
    if (iVar8 <= local_58) {
      local_68 = iVar8;
    }
    if (local_58 <= iVar8) {
      local_58 = iVar8;
    }
    iStack_64 = iStack_54;
    if (iVar3 <= iStack_54) {
      iStack_64 = iVar3;
    }
    if (iStack_54 <= iVar3) {
      iStack_54 = iVar3;
    }
    lVar5 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)*(byte *)(param_1 + 0x1ee8) * 0x740;
    if (7 < *(byte *)(param_1 + 0x1ee8)) {
      lVar5 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    *(undefined8 *)(lVar5 + 0x420) = 0x100000000;
    *(undefined4 *)(lVar5 + 0x4c0) = 0;
    bVar1 = *(byte *)(param_1 + 0x1ee8);
    uVar2 = *(undefined2 *)PTR_DAT_04bb6298;
    uVar9 = (uint)bVar1;
    if (7 < uVar9) {
      uVar9 = 0xffffffff;
    }
    *(uint *)(lVar5 + 0x4d4) = uVar9;
    if (bVar1 < 8) {
      *(byte *)(lVar5 + 0x4d8) = bVar1;
    }
    *(undefined1 *)(lVar5 + 0x4d9) = 1;
    local_48 = 0xffffffffffffffff;
    local_78 = PTR_DAT_04bbc1a0 + 0x10;
    local_4a = 0;
    local_40 = 0;
    local_80[0] = CONCAT22(local_80[0]._2_2_,uVar2);
    local_4e = 0x100;
    local_60 = &DAT_048f9750;
    puStack_70 = &DAT_048f9750;
    local_3c = 0x41200000;
    local_34 = 0xff00;
    local_50 = 0xff00;
    if (*(int *)(lVar5 + 0x4d0) == 0x15) {
      local_50 = 0x1400;
    }
    local_82 = 0;
    uVar7 = FUN_023016c0(lVar5 + 0x4c8,local_80,auStack_8c);
    uVar4 = 0;
    if ((uVar7 & 1) != 0) {
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
      *(int *)(param_1 + 0x1980) = (int)(*param_2 * 999.99994);
      iVar8 = (int)(param_2[1] * 4.0);
      if (0x7ffe < iVar8) {
        iVar8 = 0x7fff;
      }
      if (iVar8 < -0x7fff) {
        iVar8 = -0x8000;
      }
      *(short *)(param_1 + 0x1984) = (short)iVar8;
      *(int *)(param_1 + 0x1986) = (int)(param_2[2] * 999.99994);
      *(undefined2 *)(param_1 + 0x198a) = *(undefined2 *)((long)param_2 + 0xe);
      *(undefined1 *)(param_1 + 0x198c) = 1;
      *(undefined1 *)(param_1 + 0x198d) = *(undefined1 *)(param_2 + 4);
      local_80[0] = 0xff;
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
      lVar5 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar5 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar5,0xff);
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

