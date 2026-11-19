
void FUN_03b34320(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  
  uVar13 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
  FUN_0037bb50();
  *param_1 = (long)(PTR_DAT_04bd0890 + 0x10);
  param_1[4] = (long)(param_1 + 4);
  param_1[5] = (long)(param_1 + 4);
  FUN_0037ca20(param_1,param_2,0,0,0);
  puVar3 = PTR_DAT_04bd08a0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  FUN_00383220(param_1,param_2,uVar13,0,0);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *param_1 = (long)&PTR_LAB_04b75a18;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = (long)"agl::TextureData";
  *(undefined4 *)(param_1 + 0x33) = 0x10000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  if ((param_2[0x35] != 0) &&
     (FUN_03b34600(param_1,*(undefined8 *)PTR_DAT_04bd0810,(int)param_2[0x34]), param_1 != param_2))
  {
    uVar2 = *(uint *)(param_2 + 0x34);
    if ((int)*(uint *)(param_1 + 0x34) <= (int)*(uint *)(param_2 + 0x34)) {
      uVar2 = *(uint *)(param_1 + 0x34);
    }
    if (0 < (int)uVar2) {
      lVar5 = param_2[0x35];
      uVar4 = (ulong)uVar2 & 3;
      lVar7 = param_1[0x35];
      uVar9 = 0;
      if (3 < uVar2) {
        do {
          puVar6 = (undefined1 *)(lVar5 + 1 + uVar9);
          puVar8 = (undefined1 *)(lVar7 + 1 + uVar9);
          uVar9 = uVar9 + 4;
          puVar8[-1] = puVar6[-1];
          *puVar8 = *puVar6;
          puVar8[1] = puVar6[1];
          puVar8[2] = puVar6[2];
        } while (((ulong)uVar2 & 0xfffffffc) != uVar9);
      }
      if ((uVar2 & 3) != 0) {
        puVar6 = (undefined1 *)(lVar5 + uVar9);
        puVar8 = (undefined1 *)(lVar7 + uVar9);
        do {
          uVar4 = uVar4 - 1;
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar4 != 0);
      }
    }
    uVar2 = *(uint *)(param_2 + 0x36);
    if ((int)*(uint *)(param_1 + 0x36) <= (int)*(uint *)(param_2 + 0x36)) {
      uVar2 = *(uint *)(param_1 + 0x36);
    }
    if (0 < (int)uVar2) {
      lVar5 = param_2[0x37];
      uVar4 = (ulong)uVar2 & 3;
      lVar7 = param_1[0x37];
      uVar9 = 0;
      if (3 < uVar2) {
        do {
          puVar6 = (undefined1 *)(lVar5 + 1 + uVar9);
          puVar8 = (undefined1 *)(lVar7 + 1 + uVar9);
          uVar9 = uVar9 + 4;
          puVar8[-1] = puVar6[-1];
          *puVar8 = *puVar6;
          puVar8[1] = puVar6[1];
          puVar8[2] = puVar6[2];
        } while (((ulong)uVar2 & 0xfffffffc) != uVar9);
      }
      if ((uVar2 & 3) != 0) {
        puVar6 = (undefined1 *)(lVar5 + uVar9);
        puVar8 = (undefined1 *)(lVar7 + uVar9);
        do {
          uVar4 = uVar4 - 1;
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar4 != 0);
      }
    }
    uVar2 = *(uint *)(param_2 + 0x38);
    if ((int)*(uint *)(param_1 + 0x38) <= (int)*(uint *)(param_2 + 0x38)) {
      uVar2 = *(uint *)(param_1 + 0x38);
    }
    if (0 < (int)uVar2) {
      lVar5 = param_2[0x39];
      lVar10 = 0;
      lVar7 = param_1[0x39];
      if (uVar2 != 1) {
        puVar11 = (undefined4 *)(lVar5 + 8);
        puVar12 = (undefined4 *)(lVar7 + 8);
        do {
          lVar10 = lVar10 + -2;
          puVar12[-2] = puVar11[-2];
          puVar12[-1] = puVar11[-1];
          *puVar12 = *puVar11;
          puVar1 = puVar11 + 1;
          puVar11 = puVar11 + 4;
          puVar12[1] = *puVar1;
          puVar12 = puVar12 + 4;
        } while (-lVar10 != ((ulong)uVar2 & 0xfffffffe));
        lVar10 = -lVar10;
      }
      if ((uVar2 & 1) != 0) {
        puVar11 = (undefined4 *)(lVar5 + lVar10 * 8);
        puVar12 = (undefined4 *)(lVar7 + lVar10 * 8);
        *puVar12 = *puVar11;
        puVar12[1] = puVar11[1];
      }
    }
  }
  return;
}

