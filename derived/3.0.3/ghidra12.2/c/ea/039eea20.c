
void FUN_039eea20(long param_1,uint param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  
  lVar8 = *(long *)(param_1 + 0x18);
  uVar10 = *param_3;
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    param_2 = 0;
  }
  puVar7 = (undefined8 *)(lVar8 + (long)(int)param_2 * 0x410);
  puVar7[1] = param_3[1];
  *puVar7 = uVar10;
  uVar10 = param_3[2];
  puVar7[3] = param_3[3];
  puVar7[2] = uVar10;
  uVar10 = param_3[4];
  puVar7[5] = param_3[5];
  puVar7[4] = uVar10;
  FUN_007535b4(puVar7 + 6,param_3);
  uVar10 = *param_5;
  puVar7[0xd] = param_5[1];
  puVar7[0xc] = uVar10;
  uVar10 = param_5[2];
  puVar7[0xf] = param_5[3];
  puVar7[0xe] = uVar10;
  uVar10 = param_5[4];
  puVar7[0x11] = param_5[5];
  puVar7[0x10] = uVar10;
  FUN_007535b4(puVar7 + 0x12,param_5);
  FUN_03983a20(puVar7 + 0xc,param_4);
  puVar7[0x59] = (ulong)*(uint *)((long)puVar7 + 0x20c);
  puVar7[0x58] = *(undefined8 *)((long)puVar7 + 0x204);
  *(undefined4 *)(puVar7 + 0x5a) = *(undefined4 *)(puVar7 + 0x42);
  puVar7[0x5d] = (ulong)*(uint *)((long)puVar7 + 0x21c);
  puVar7[0x5c] = *(undefined8 *)((long)puVar7 + 0x214);
  *(undefined4 *)(puVar7 + 0x5e) = *(undefined4 *)(puVar7 + 0x44);
  if ((*(byte *)(puVar7 + 0x81) & 1) == 0) {
    lVar6 = 3;
    uVar10 = *(undefined8 *)((long)puVar7 + 0x224);
    uVar12 = *(uint *)((long)puVar7 + 0x22c);
    lVar5 = lVar8 + (long)(int)param_2 * 0x410;
    *(undefined4 *)(lVar5 + 0x310) = *(undefined4 *)(puVar7 + 0x46);
    *(ulong *)(lVar5 + 0x308) = (ulong)uVar12;
    *(undefined8 *)(lVar5 + 0x300) = uVar10;
    uVar12 = 3;
  }
  else {
    uVar12 = 2;
    lVar6 = 2;
  }
  uVar9 = *(undefined4 *)((long)puVar7 + 0x234);
  uVar14 = *(undefined4 *)(puVar7 + 0x48);
  uVar15 = *(undefined4 *)((long)puVar7 + 0x244);
  lVar8 = lVar8 + (long)(int)param_2 * 0x410;
  *(undefined4 *)(lVar8 + 900) = 0;
  uVar11 = *(undefined4 *)(puVar7 + 0x47);
  uVar16 = *(undefined4 *)(puVar7 + 0x49);
  lVar5 = lVar8 + 0x2c0;
  puVar1 = (undefined8 *)(lVar5 + (ulong)(uVar12 + 1) * 0x20);
  puVar2 = (undefined8 *)(lVar5 + lVar6 * 0x20);
  puVar2[1] = (ulong)*(uint *)((long)puVar7 + 0x23c);
  *puVar2 = CONCAT44(uVar11,uVar9);
  uVar17 = *(uint *)((long)puVar7 + 0x24c);
  puVar2 = (undefined8 *)(lVar5 + (ulong)(uVar12 + 2) * 0x20);
  uVar10 = *(undefined8 *)((long)puVar7 + 0x254);
  uVar13 = *(uint *)((long)puVar7 + 0x25c);
  *(undefined4 *)(lVar5 + (ulong)uVar12 * 0x20 + 0x10) = uVar14;
  puVar1[1] = (ulong)uVar17;
  *puVar1 = CONCAT44(uVar16,uVar15);
  uVar4 = *(undefined8 *)(lVar8 + 0x27c);
  uVar3 = *(undefined8 *)(lVar8 + 0x288);
  puVar2[1] = (ulong)uVar13;
  *puVar2 = uVar10;
  uVar13 = *(uint *)(lVar8 + 0x284);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar7 + 0x4a);
  uVar9 = *(undefined4 *)(puVar7 + 0x4c);
  *(uint *)(lVar8 + 0x380) = uVar12 + 3;
  *(undefined4 *)(puVar2 + 2) = uVar9;
  *(ulong *)(lVar8 + 0x2a8) = (ulong)uVar13;
  *(undefined8 *)(lVar8 + 0x2a0) = uVar4;
  *(ulong *)(lVar8 + 0x2b8) = (ulong)*(uint *)(lVar8 + 0x290);
  *(undefined8 *)(lVar8 + 0x2b0) = uVar3;
  return;
}

