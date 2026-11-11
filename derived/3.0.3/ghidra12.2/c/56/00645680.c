
void FUN_00645680(int *param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  double dVar9;
  float fVar10;
  int local_74;
  int local_58;
  int local_54;
  
  uVar1 = (uint)param_2 & 1;
  dVar9 = (double)uVar1;
  fVar10 = (float)uVar1;
  bVar2 = (byte)param_2 & 1 | 2;
  uVar8 = param_2 & 1;
  uVar4 = (undefined2)uVar1;
  *(undefined2 *)(param_1 + 1) = uVar4;
  *(undefined2 *)((long)param_1 + 6) = uVar4;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  *(ulong *)(param_1 + 4) = uVar8;
  *(ulong *)(param_1 + 6) = uVar8;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar1;
  *param_1 = uVar1 * 0x1010101;
  *(double *)(param_1 + 8) = dVar9;
  param_1[10] = (int)fVar10;
  param_1[0xb] = (int)fVar10;
  *(byte *)(param_1 + 0xe) = bVar2;
  if ((param_2 & 1) == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)FUN_00438810(0x18);
    *puVar6 = &PTR_LAB_048e10f0;
    puVar6[1] = 0xffffffff;
    puVar6[2] = 1;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar6;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar5 = PTR_DAT_048607b8;
  param_1[0x15] = -0x80000000;
  local_74 = 1;
  puVar7 = (undefined1 *)FUN_00421ed0(PTR_DAT_048607b8,1,&local_74);
  puVar6 = (undefined8 *)0x0;
  *(undefined1 **)(param_1 + 0x12) = puVar7;
  param_1[0x14] = 1;
  param_1[0x15] = local_74;
  uVar3 = (undefined1)uVar1;
  *puVar7 = uVar3;
  param_1[0x16] = uVar1 * 0x1010101;
  *(undefined2 *)(param_1 + 0x17) = uVar4;
  *(undefined2 *)((long)param_1 + 0x5e) = uVar4;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar1;
  *(double *)(param_1 + 0x1e) = dVar9;
  param_1[0x20] = (int)fVar10;
  param_1[0x21] = (int)fVar10;
  param_1[0x22] = uVar1;
  param_1[0x23] = uVar1;
  *(byte *)(param_1 + 0x24) = bVar2;
  *(ulong *)(param_1 + 0x1a) = uVar8;
  *(ulong *)(param_1 + 0x1c) = uVar8;
  if ((param_2 & 1) != 0) {
    puVar6 = (undefined8 *)FUN_00438810(0x18);
    *puVar6 = &PTR_LAB_048e10f0;
    puVar6[1] = 0xffffffff;
    puVar6[2] = 1;
  }
  *(undefined8 **)(param_1 + 0x26) = puVar6;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = -0x80000000;
  local_58 = 1;
  puVar7 = (undefined1 *)FUN_00421ed0(puVar5,1,&local_58);
  param_1[0x2a] = 1;
  param_1[0x2b] = local_58;
  puVar6 = (undefined8 *)0x0;
  *(undefined1 **)(param_1 + 0x28) = puVar7;
  *puVar7 = uVar3;
  param_1[0x2c] = uVar1 * 0x1010101;
  *(undefined2 *)(param_1 + 0x2d) = uVar4;
  *(undefined2 *)((long)param_1 + 0xb6) = uVar4;
  param_1[0x2e] = uVar1;
  param_1[0x2f] = uVar1;
  *(ulong *)(param_1 + 0x30) = uVar8;
  *(ulong *)(param_1 + 0x32) = uVar8;
  *(double *)(param_1 + 0x34) = dVar9;
  param_1[0x36] = (int)fVar10;
  param_1[0x37] = (int)fVar10;
  param_1[0x38] = uVar1;
  param_1[0x39] = uVar1;
  *(byte *)(param_1 + 0x3a) = bVar2;
  if ((param_2 & 1) != 0) {
    puVar6 = (undefined8 *)FUN_00438810(0x18);
    *puVar6 = &PTR_LAB_048e10f0;
    puVar6[1] = 0xffffffff;
    puVar6[2] = 1;
  }
  *(undefined8 **)(param_1 + 0x3c) = puVar6;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = -0x80000000;
  local_54 = 1;
  puVar7 = (undefined1 *)FUN_00421ed0(puVar5,1,&local_54);
  *(undefined1 **)(param_1 + 0x3e) = puVar7;
  param_1[0x40] = 1;
  param_1[0x41] = local_54;
  *puVar7 = uVar3;
  return;
}

