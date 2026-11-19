
void FUN_03ba9f7c(long param_1)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar15 = *(float *)(param_1 + 0x134);
  fVar16 = *(float *)(param_1 + 0x144);
  fVar14 = *(float *)(param_1 + 0x154);
  plVar2 = *(long **)(param_1 + 0xf0);
  if (plVar2 == (long *)0x0) {
    uVar9 = *(undefined8 *)(param_1 + 0x110);
    uVar8 = *(ulong *)(param_1 + 0x108);
    uVar6 = *(undefined8 *)(param_1 + 0x120);
    uVar5 = *(ulong *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x180) = uVar6;
    *(ulong *)(param_1 + 0x178) = uVar5;
    uVar4 = *(undefined8 *)(param_1 + 0x100);
    uVar3 = *(ulong *)(param_1 + 0xf8);
    fVar10 = (float)((ulong)uVar6 >> 0x20);
    fVar13 = (float)(uVar5 >> 0x20);
    *(undefined8 *)(param_1 + 0x160) = uVar4;
    *(ulong *)(param_1 + 0x158) = uVar3;
    *(undefined8 *)(param_1 + 0x170) = uVar9;
    *(ulong *)(param_1 + 0x168) = uVar8;
    fVar7 = (float)((ulong)uVar4 >> 0x20);
    fVar11 = (float)((ulong)uVar9 >> 0x20);
    fVar12 = (float)(uVar3 >> 0x20);
    fVar18 = (float)(uVar8 >> 0x20);
    fVar17 = (float)uVar4;
    fVar20 = (float)uVar9;
    fVar19 = (float)uVar6;
  }
  else {
    (**(code **)(*plVar2 + 0x38))(plVar2,param_1 + 0xf8,param_1 + 0x158);
    uVar3 = (ulong)*(uint *)(param_1 + 0x158);
    fVar7 = *(float *)(param_1 + 0x164);
    uVar8 = (ulong)*(uint *)(param_1 + 0x168);
    fVar11 = *(float *)(param_1 + 0x174);
    uVar5 = (ulong)*(uint *)(param_1 + 0x178);
    fVar10 = *(float *)(param_1 + 0x184);
    fVar12 = *(float *)(param_1 + 0x15c);
    fVar18 = *(float *)(param_1 + 0x16c);
    fVar13 = *(float *)(param_1 + 0x17c);
    fVar17 = *(float *)(param_1 + 0x160);
    fVar20 = *(float *)(param_1 + 0x170);
    fVar19 = *(float *)(param_1 + 0x180);
  }
  *(float *)(param_1 + 0x188) =
       (-((float)uVar8 * fVar11) - fVar7 * (float)uVar3) - fVar10 * (float)uVar5;
  *(float *)(param_1 + 0x18c) = (-(fVar18 * fVar11) - fVar7 * fVar12) - fVar10 * fVar13;
  *(float *)(param_1 + 400) = (-(fVar20 * fVar11) - fVar7 * fVar17) - fVar10 * fVar19;
  FUN_007535b4(param_1 + 0x128,param_1 + 0xf8);
  if (*(int *)(param_1 + 0x1a4) == 0) {
    if (*(char *)(param_1 + 0x1a0) == '\0') {
      *(float *)(param_1 + 0x194) = *(float *)(param_1 + 0x134) - fVar15;
      *(float *)(param_1 + 0x198) = *(float *)(param_1 + 0x144) - fVar16;
      *(float *)(param_1 + 0x19c) = *(float *)(param_1 + 0x154) - fVar14;
      cVar1 = *(char *)(param_1 + 0xd8);
      goto joined_r0x03baa090;
    }
    *(undefined8 *)(param_1 + 0x199) = 0;
    *(undefined8 *)(param_1 + 0x194) = 0;
  }
  cVar1 = *(char *)(param_1 + 0xd8);
joined_r0x03baa090:
  if (cVar1 != '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x128);
    uVar6 = *(undefined8 *)(param_1 + 0x138);
    uVar9 = *(undefined8 *)(param_1 + 0x148);
    fVar16 = (float)*(undefined8 *)(param_1 + 0x140);
    fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x140) >> 0x20);
    fVar14 = (float)*(undefined8 *)(param_1 + 0x130);
    fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x130) >> 0x20);
    fVar10 = (float)*(undefined8 *)(param_1 + 0x150);
    *(ulong *)(param_1 + 0x80) = CONCAT44(fVar15,-fVar14);
    *(undefined8 *)(param_1 + 0x78) = uVar4;
    fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x150) >> 0x20);
    *(ulong *)(param_1 + 0x90) = CONCAT44(fVar17,-fVar16);
    *(undefined8 *)(param_1 + 0x88) = uVar6;
    *(ulong *)(param_1 + 0xa0) = CONCAT44(fVar12,-fVar10);
    *(undefined8 *)(param_1 + 0x98) = uVar9;
    *(float *)(param_1 + 0xa8) =
         (fVar15 + (((float)((ulong)uVar4 >> 0x20) * 0.0 + (float)uVar4 * 0.0) - fVar14)) - fVar15;
    *(float *)(param_1 + 0xac) =
         (fVar17 + (((float)((ulong)uVar6 >> 0x20) * 0.0 + (float)uVar6 * 0.0) - fVar16)) - fVar17;
    *(float *)(param_1 + 0xb0) =
         (fVar12 + (((float)((ulong)uVar9 >> 0x20) * 0.0 + (float)uVar9 * 0.0) - fVar10)) - fVar12;
  }
  return;
}

