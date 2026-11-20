
void FUN_03d53a50(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar9 = *(long *)(param_1 + 8);
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    puVar7 = malloc(0x100);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar6 = (long *)(lVar11 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) goto LAB_03d53b30;
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x100,8);
  }
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[0x1e] = 0xffffffffffffffff;
    puVar7[0x1f] = 0xffffffffffffffff;
    puVar7[0x1c] = 0xffffffffffffffff;
    puVar7[0x1d] = 0xffffffffffffffff;
    puVar7[0x1a] = 0xffffffffffffffff;
    puVar7[0x1b] = 0xffffffffffffffff;
    puVar7[0x18] = 0xffffffffffffffff;
    puVar7[0x19] = 0xffffffffffffffff;
    puVar7[0x16] = 0xffffffffffffffff;
    puVar7[0x17] = 0xffffffffffffffff;
    puVar7[0x14] = 0xffffffffffffffff;
    puVar7[0x15] = 0xffffffffffffffff;
    puVar7[0x12] = 0xffffffffffffffff;
    puVar7[0x13] = 0xffffffffffffffff;
    puVar7[0x10] = 0xffffffffffffffff;
    puVar7[0x11] = 0xffffffffffffffff;
    puVar7[0xe] = 0xffffffffffffffff;
    puVar7[0xf] = 0xffffffffffffffff;
    puVar7[0xc] = 0xffffffffffffffff;
    puVar7[0xd] = 0xffffffffffffffff;
    puVar7[10] = 0xffffffffffffffff;
    puVar7[0xb] = 0xffffffffffffffff;
    puVar7[8] = 0xffffffffffffffff;
    puVar7[9] = 0xffffffffffffffff;
    puVar7[6] = 0xffffffffffffffff;
    puVar7[7] = 0xffffffffffffffff;
    puVar7[4] = 0xffffffffffffffff;
    puVar7[5] = 0xffffffffffffffff;
    puVar7[2] = 0xffffffffffffffff;
    puVar7[3] = 0xffffffffffffffff;
    *puVar7 = 0xffffffffffffffff;
    puVar7[1] = 0xffffffffffffffff;
    *(undefined4 *)(lVar9 + 0x20) = 0x20;
    *(undefined8 **)(lVar9 + 0x28) = puVar7;
  }
LAB_03d53b30:
  uVar8 = (**(code **)(*DAT_05af83f8 + 0xd0))();
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  FUN_03d53c80(param_1);
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (uVar4 = *(uint *)(*(long *)(param_1 + 0x18) + 0x10), 0 < (int)uVar4)) {
    uVar10 = 0;
    do {
      uVar2 = uVar10;
      if (*(uint *)(*(long *)(param_1 + 0x18) + 0x10) <= uVar10) {
        uVar2 = 0;
      }
      uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) + (ulong)uVar2 * 4);
      fVar12 = powf((float)(uVar2 >> 0x18) / 255.0,2.2);
      fVar16 = 255.0;
      if (fVar12 <= 1.0) {
        fVar16 = fVar12 * 255.0;
      }
      fVar13 = 0.0;
      if (0.0 <= fVar12) {
        fVar13 = fVar16;
      }
      fVar12 = powf((float)(uVar2 >> 0x10 & 0xff) / 255.0,2.2);
      fVar16 = 255.0;
      if (fVar12 <= 1.0) {
        fVar16 = fVar12 * 255.0;
      }
      fVar14 = 0.0;
      if (0.0 <= fVar12) {
        fVar14 = fVar16;
      }
      fVar12 = powf((float)(uVar2 >> 8 & 0xff) / 255.0,2.2);
      fVar16 = 255.0;
      if (fVar12 <= 1.0) {
        fVar16 = fVar12 * 255.0;
      }
      fVar15 = 0.0;
      if (0.0 <= fVar12) {
        fVar15 = fVar16;
      }
      uVar3 = uVar10;
      if (*(uint *)(*(long *)(param_1 + 8) + 0x20) <= uVar10) {
        uVar3 = 0;
      }
      uVar10 = uVar10 + 1;
      puVar1 = (uint *)(*(long *)(*(long *)(param_1 + 8) + 0x28) + (ulong)uVar3 * 8);
      uVar2 = (int)fVar13 << 0x18 | (int)fVar14 << 0x10 | (int)fVar15 << 8 | uVar2 & 0xff;
      *puVar1 = uVar2;
      puVar1[1] = uVar2;
    } while (uVar4 != uVar10);
  }
  return;
}

