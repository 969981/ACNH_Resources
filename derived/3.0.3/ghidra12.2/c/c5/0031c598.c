
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0031c598(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 long param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 *local_18;
  
  *(long *)(param_1 + 0x78) = param_3;
  uVar5 = _UNK_04102208;
  uVar4 = _DAT_04102200;
  *(undefined8 *)(param_1 + 0x4d0) = param_4;
  uVar9 = _UNK_04102888;
  uVar8 = _DAT_04102880;
  uVar7 = _UNK_041023d8;
  uVar6 = _DAT_041023d0;
  uVar13 = *(undefined8 *)(param_5 + 0x10);
  *(long *)(param_1 + 0x240) = param_5;
  *(undefined4 *)(param_1 + 0x24) = param_6;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0xa0) = uVar13;
  *(undefined8 *)(param_1 + 0x418) = uVar5;
  *(undefined8 *)(param_1 + 0x410) = uVar4;
  *(undefined4 *)(param_1 + 0x674) = 1;
  *(undefined8 *)(param_1 + 0x9b8) = 0;
  *(undefined4 *)(param_1 + 0x9c0) = 0;
  *(undefined8 *)(param_1 + 0x9b0) = param_7;
  *(undefined8 *)(param_1 + 0x428) = uVar9;
  *(undefined8 *)(param_1 + 0x420) = uVar8;
  *(undefined8 *)(param_1 + 0x438) = uVar7;
  *(undefined8 *)(param_1 + 0x430) = uVar6;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = uVar5;
  *(undefined8 *)(param_1 + 0x3d0) = uVar4;
  *(undefined8 *)(param_1 + 1000) = uVar9;
  *(undefined8 *)(param_1 + 0x3e0) = uVar8;
  *(undefined8 *)(param_1 + 0x3f8) = uVar7;
  *(undefined8 *)(param_1 + 0x3f0) = uVar6;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  lVar14 = *(long *)(param_5 + 0x10);
  if ((((*(char *)(param_5 + 4) != '\0') && (*(char *)(lVar14 + 0x82c) == '\0')) &&
      (*(long *)(param_5 + 0x348) != 0)) && ((*(uint *)(param_5 + 0x340) & 0xfffffffe) == 2)) {
    FUN_0032c410("Lightweight child emitter and history based stripe cannot be combined.\n");
    FUN_0032c600(**(long **)(param_1 + 0x4d0) + 0x14,param_1,0x20000);
    goto LAB_0031c84c;
  }
  uVar15 = 0;
  if (*(char *)(lVar14 + 0x799) == '\0') {
    uVar15 = 0x3f800000;
    if (*(char *)(lVar14 + 0x79a) != '\0') {
      uVar15 = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = uVar15;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  if (*(long *)(param_5 + 0x90) != 0) {
    *(long *)(param_1 + 0x248) = *(long *)(param_5 + 0x90);
    *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_5 + 0x98);
    *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_5 + 0xa0);
    *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_5 + 0xa8);
    *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_5 + 0xb0);
    *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_5 + 0xb8);
    *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_5 + 0xc0);
    *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_5 + 200);
    *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_5 + 0xd0);
    *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_5 + 0xd8);
    *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_5 + 0xe0);
    *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_5 + 0xe8);
    *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_5 + 0xf0);
    *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_5 + 0xf8);
    *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_5 + 0x100);
    *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_5 + 0x108);
  }
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  *(undefined1 **)(param_1 + 0x5c) = &DAT_3f8000003f800000;
  uVar15 = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar15;
  uVar2 = *(undefined1 *)(param_5 + 4);
  *(undefined2 *)(param_1 + 2) = 0x101;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *param_1 = uVar2;
  param_1[10] = 1;
  puVar11 = (uint *)FUN_00331550();
  cVar3 = *(char *)(*(long *)(param_1 + 0xa0) + 0x794);
  if (cVar3 == '\x02') {
    uVar10 = *(int *)(*(long *)(param_1 + 0xa0) + 0x7a0) * -0x2023e3cb;
LAB_0031c7c4:
    FUN_003315e0(param_1 + 0xa8,uVar10);
  }
  else {
    if (cVar3 == '\x01') {
      uVar10 = *(uint *)(*(long *)(param_1 + 0x78) + 0x3c);
      goto LAB_0031c7c4;
    }
    if (cVar3 == '\0') {
      uVar1 = puVar11[3];
      uVar10 = *puVar11 ^ *puVar11 << 0xb;
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar10 = uVar10 >> 8 ^ uVar1 >> 0x13 ^ uVar10 ^ uVar1;
      puVar11[2] = uVar1;
      puVar11[3] = uVar10;
      goto LAB_0031c7c4;
    }
  }
  uVar12 = FUN_0031c87c(param_1,param_2,param_8);
  if ((uVar12 & 1) != 0) {
    lVar14 = *(long *)(param_1 + 0x78);
    fVar16 = (float)*(int *)(*(long *)(param_1 + 0xa0) + 0x850) + 1.0;
    *(float *)(param_1 + 0x58) = fVar16;
    *(float *)(param_1 + 0x50) = fVar16;
    uVar4 = *(undefined8 *)(lVar14 + 0xa0);
    *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(lVar14 + 0xa8);
    *(undefined8 *)(param_1 + 0x450) = uVar4;
    *(undefined8 *)(param_1 + 0x468) = 0;
    *(undefined8 *)(param_1 + 0x460) = 0;
    auVar17 = NEON_fmov(0x3f800000,4);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar14 + 0x34);
    *(long *)(param_1 + 0x4b8) = auVar17._8_8_;
    *(long *)(param_1 + 0x4b0) = auVar17._0_8_;
    *(long *)(param_1 + 0x4c8) = auVar17._8_8_;
    *(long *)(param_1 + 0x4c0) = auVar17._0_8_;
    local_18 = param_1;
    uVar12 = FUN_0031bc10(&local_18);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    uVar10 = FUN_0031d3ac(param_1);
    return uVar10 & 1;
  }
LAB_0031c84c:
  param_1[6] = 1;
  return 0;
}

