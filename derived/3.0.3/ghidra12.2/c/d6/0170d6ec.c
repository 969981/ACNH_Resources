
void FUN_0170d6ec(long param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  puVar3 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x1270) != 0) {
    return;
  }
  if (7 < *(byte *)((long)param_2 + 0x19)) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_2);
  lVar4 = DAT_05150358;
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) goto LAB_0170d768;
  }
  if (DAT_05150358 == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0xb0) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0x488) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0x2b0) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0) {
    return;
  }
  uVar5 = FUN_0277d6c4(param_2);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
  if (*(uint *)(lVar4 + 0x1d8) <= uVar5) {
    return;
  }
  if (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return;
  }
LAB_0170d768:
  *(undefined1 *)(param_1 + 0x1274) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x1275) = *(undefined1 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x11f0) = *param_2;
  *(undefined1 *)(param_1 + 0x11f2) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x11f3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 0x11f4) = *(undefined4 *)(param_2 + 2);
  fVar9 = *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x11f8) = fVar9;
  fVar11 = *(float *)(param_2 + 6);
  *(float *)(param_1 + 0x11fc) = fVar11;
  fVar10 = *(float *)(param_2 + 8);
  *(float *)(param_1 + 0x1200) = fVar10;
  uVar2 = *(undefined4 *)(param_2 + 10);
  *(undefined1 *)(param_1 + 0x1208) = *(undefined1 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1204) = uVar2;
  bVar7 = *(byte *)((long)param_2 + 0x19);
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  *(byte *)(param_1 + 0x1209) = bVar7;
  *(undefined4 *)(param_1 + 0x120c) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 0x1210) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1214) = *(undefined4 *)(param_2 + 0x12);
  uVar13 = *(undefined8 *)(param_2 + 0x14);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1228) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1220) = uVar1;
  *(undefined8 *)(param_1 + 0x1218) = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1234) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x122c) = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x1244) = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x123c) = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x1254) = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x124c) = uVar13;
  *(undefined1 *)(param_1 + 0x125c) = *(undefined1 *)(param_2 + 0x36);
  *(undefined4 *)(param_1 + 0x1260) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x1264) = *(undefined4 *)(param_2 + 0x3a);
  *(undefined4 *)(param_1 + 0x1268) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined1 *)(param_1 + 0x126c) = *(undefined1 *)(param_2 + 0x3e);
  if (*(char *)(param_2 + 0xc) != '\0') {
    uVar5 = *(uint *)(*(long *)(*(long *)(param_1 + 0x48) + 0x68) + 0x2b4);
    uVar6 = (ulong)(uVar5 >> 0x15) & 0x7f0;
    fVar12 = (float)(uVar5 >> 1 & 0xffffff) * 5.9604645e-08;
    fVar14 = *(float *)((long)&DAT_04199798 + uVar6) +
             fVar12 * *(float *)((long)&DAT_0419979c + uVar6);
    fVar12 = *(float *)((long)&DAT_041997a0 + uVar6) +
             fVar12 * *(float *)((long)&DAT_041997a4 + uVar6);
    fVar16 = fVar14 * 0.0;
    fVar12 = fVar12 + fVar12;
    fVar18 = fVar14 * (fVar14 + fVar14);
    fVar15 = (fVar14 + fVar14) * fVar16;
    fVar19 = fVar16 * (fVar16 + fVar16);
    fVar17 = fVar12 * fVar16;
    fVar12 = fVar14 * fVar12;
    fVar14 = fVar14 * (fVar16 + fVar16);
    *(float *)(param_1 + 0x11f8) =
         fVar11 * (fVar14 - fVar17) + fVar9 * ((1.0 - fVar18) - fVar19) + fVar10 * (fVar12 + fVar19)
    ;
    *(float *)(param_1 + 0x11fc) =
         fVar11 * ((1.0 - fVar19) - fVar19) + fVar9 * (fVar17 + fVar14) + fVar10 * (fVar15 - fVar17)
    ;
    *(float *)(param_1 + 0x1200) =
         fVar11 * (fVar17 + fVar15) + fVar9 * (fVar19 - fVar12) + fVar10 * ((1.0 - fVar19) - fVar18)
    ;
  }
  *(undefined4 *)(param_1 + 0x1270) = 3;
  return;
}

