
long FUN_029a7898(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined1 local_d4 [4];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined1 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  
  if (*(int *)(param_1 + 0xe8) == 0) {
    local_d0 = *param_2;
    uStack_cc = param_2[1];
    local_a8 = param_2[10];
    uStack_a4 = param_2[0xb];
    local_d4[0] = 0;
    local_c8 = *(undefined1 *)(param_2 + 2);
    local_bc = *(undefined8 *)(param_2 + 5);
    local_c4 = *(undefined8 *)(param_2 + 3);
    local_b4 = param_2[7];
    local_b0 = *(undefined8 *)(param_2 + 8);
    param_1 = FUN_0299a2c8(param_1 + 0xf0,local_d4);
  }
  else {
    if (*(char *)(param_1 + 0x62ea0) != '\0') {
      *(undefined1 *)(param_1 + 0x62ea0) = 0;
    }
    uVar8 = *(undefined1 *)(param_2 + 2);
    uVar1 = param_2[5];
    uVar4 = param_2[6];
    uVar20 = param_2[10];
    fVar21 = (float)param_2[0xb];
    uVar18 = param_2[8];
    uVar19 = param_2[9];
    uVar7 = param_2[7];
    uVar2 = param_2[3];
    uVar5 = param_2[4];
    uVar3 = *param_2;
    uVar6 = param_2[1];
    fVar11 = 0.0;
    if (fVar21 <= 500.0) {
      fVar11 = fVar21;
    }
    fVar10 = sinf(fVar11);
    fVar11 = cosf(fVar11);
    fVar16 = fVar10 * 0.0;
    fVar14 = fVar11 * 0.0;
    uVar9 = (ulong)uVar6 << 0x20 | 0xffffffff;
    fVar17 = fVar16 * 0.0 + 1.0;
    uVar13 = param_2[10];
    uVar15 = param_2[9];
    uVar12 = CONCAT44(param_2[8],fVar10 + 0.0);
    *(undefined8 *)(param_1 + 0x62d28) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x62db0) = 0xff000000;
    *(undefined1 *)(param_1 + 0x62d30) = uVar8;
    *(undefined4 *)(param_1 + 0x62d34) = uVar3;
    *(ulong *)(param_1 + 0x62d38) = uVar9;
    *(undefined4 *)(param_1 + 0x62d40) = uVar4;
    *(undefined4 *)(param_1 + 0x62d44) = uVar7;
    *(undefined4 *)(param_1 + 0x62d48) = 0x42f00000;
    *(undefined4 *)(param_1 + 0x62d4c) = uVar2;
    *(undefined4 *)(param_1 + 0x62d50) = uVar5;
    *(undefined4 *)(param_1 + 0x62d54) = uVar1;
    *(undefined8 *)(param_1 + 0x62d58) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x62d60) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x62d64) = uVar2;
    *(undefined4 *)(param_1 + 0x62d68) = uVar5;
    *(undefined4 *)(param_1 + 0x62d6c) = uVar1;
    *(undefined4 *)(param_1 + 0x62d70) = uVar18;
    *(undefined4 *)(param_1 + 0x62d74) = uVar19;
    *(undefined4 *)(param_1 + 0x62d78) = uVar20;
    *(float *)(param_1 + 0x62d7c) = fVar21;
    *(ulong *)(param_1 + 0x62da8) = CONCAT44(uVar13,fVar11);
    *(ulong *)(param_1 + 0x62da0) = CONCAT44(fVar14,-fVar10);
    *(undefined8 *)(param_1 + 0x62ddc) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x62de4) = 0xff000000ffffffff;
    *(undefined8 *)(param_1 + 0x62e14) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x62e1c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x62e20) = uVar8;
    *(undefined4 *)(param_1 + 0x62e24) = uVar3;
    *(ulong *)(param_1 + 0x62e28) = uVar9;
    *(undefined4 *)(param_1 + 0x62e30) = uVar4;
    *(undefined4 *)(param_1 + 0x62e34) = uVar7;
    *(undefined4 *)(param_1 + 0x62e38) = 0x42f00000;
    *(undefined4 *)(param_1 + 0x62e3c) = uVar2;
    *(undefined4 *)(param_1 + 0x62e40) = uVar5;
    *(undefined4 *)(param_1 + 0x62e44) = uVar1;
    *(undefined8 *)(param_1 + 0x62e48) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x62e50) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x62e54) = uVar2;
    *(undefined4 *)(param_1 + 0x62e58) = uVar5;
    *(undefined4 *)(param_1 + 0x62e5c) = uVar1;
    *(undefined4 *)(param_1 + 0x62e60) = uVar18;
    *(undefined2 *)(param_1 + 0x62d31) = 0xff00;
    *(undefined2 *)(param_1 + 0x62e21) = 0xff00;
    *(undefined4 *)(param_1 + 0x62e64) = uVar19;
    *(undefined4 *)(param_1 + 0x62e68) = uVar20;
    *(float *)(param_1 + 0x62e6c) = fVar21;
    *(undefined8 *)(param_1 + 0x62dc4) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x62dbc) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x62db4) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x62dd4) = 0;
    *(undefined8 *)(param_1 + 0x62dcc) = 0;
    *(undefined8 *)(param_1 + 0x62dfc) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x62df4) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x62dec) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x62e0c) = 0;
    *(undefined8 *)(param_1 + 0x62e04) = 0;
    *(ulong *)(param_1 + 0x62d98) = CONCAT44(uVar15,fVar16);
    *(ulong *)(param_1 + 0x62d90) = CONCAT44(fVar17,fVar14);
    *(undefined8 *)(param_1 + 0x62e78) = uVar12;
    *(ulong *)(param_1 + 0x62e70) = CONCAT44(fVar16,fVar11);
    *(undefined8 *)(param_1 + 0x62d88) = uVar12;
    *(ulong *)(param_1 + 0x62d80) = CONCAT44(fVar16,fVar11);
    *(ulong *)(param_1 + 0x62e88) = CONCAT44(uVar15,fVar16);
    *(ulong *)(param_1 + 0x62e80) = CONCAT44(fVar17,fVar14);
    *(ulong *)(param_1 + 0x62e98) = CONCAT44(uVar13,fVar11);
    *(ulong *)(param_1 + 0x62e90) = CONCAT44(fVar14,-fVar10);
    if (*(char *)(param_1 + 0x62ea0) == '\0') {
      *(undefined1 *)(param_1 + 0x62ea0) = 1;
    }
    param_1 = param_1 + 0x62db0;
  }
  return param_1;
}

