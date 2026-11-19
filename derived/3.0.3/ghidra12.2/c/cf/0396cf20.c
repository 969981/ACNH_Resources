
void FUN_0396cf20(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar9 = *(uint *)(param_1 + 0x6b0) & 0xfffffe77;
  uVar13 = uVar9 | 8;
  if ((param_2 & 1) == 0) {
    uVar13 = uVar9;
  }
  uVar9 = uVar13 | 0x20;
  if ((param_3 & 1) == 0) {
    uVar9 = uVar13 & 0xffffffdf;
  }
  *(uint *)(param_1 + 0x6b0) = uVar9;
  puVar2 = PTR_DAT_04bb39d8;
  if ((uVar9 >> 1 & 1) != 0) {
    uVar9 = *(uint *)(param_1 + 0x6b8);
    if (1 < (int)uVar9) {
      puVar7 = *(undefined8 **)(param_1 + 0x6c0);
      uVar5 = (ulong)(uVar9 >> 1);
      do {
        uVar13 = (uint)uVar5 * 2;
        uVar8 = puVar7[uVar5 - 1 & 0xffffffff];
        if ((int)uVar9 < (int)uVar13) {
          uVar11 = (uint)uVar5;
        }
        else {
          uVar10 = uVar5 & 0xffffffff;
          do {
            if ((int)uVar13 < (int)uVar9) {
              puVar3 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
              uVar11 = *puVar3 ^ *puVar3 << 0xb;
              uVar12 = puVar3[3];
              *puVar3 = puVar3[1];
              puVar3[1] = puVar3[2];
              uVar11 = uVar11 >> 8 ^ uVar12 >> 0x13 ^ uVar11 ^ uVar12;
              puVar3[2] = uVar12;
              puVar3[3] = uVar11;
              uVar12 = uVar13 | (uVar11 & 2) - 1 >> 0x1f;
            }
            else {
              uVar12 = uVar13;
            }
            puVar3 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
            uVar13 = *puVar3 ^ *puVar3 << 0xb;
            uVar11 = puVar3[3];
            *puVar3 = puVar3[1];
            puVar3[1] = puVar3[2];
            uVar13 = uVar13 >> 8 ^ uVar11 >> 0x13 ^ uVar13 ^ uVar11;
            puVar3[2] = uVar11;
            puVar3[3] = uVar13;
            uVar11 = (uint)uVar10;
            if ((uVar13 >> 1 & 1) != 0) break;
            uVar13 = uVar12 * 2;
            uVar10 = (ulong)uVar12;
            puVar7[(int)(uVar11 - 1)] = puVar7[(int)(uVar12 - 1)];
            uVar11 = uVar12;
          } while ((int)uVar13 <= (int)uVar9);
        }
        puVar7[(int)(uVar11 - 1)] = uVar8;
        bVar1 = 1 < (long)uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar1);
      uVar5 = (ulong)uVar9 - 1;
      uVar10 = uVar5 & 0xffffffff;
      uVar8 = puVar7[uVar10];
      puVar7[uVar10] = *puVar7;
      uVar10 = (ulong)uVar9;
      if (2 < uVar9) {
        do {
          uVar6 = uVar5;
          uVar9 = 2;
          uVar13 = 1;
          do {
            uVar11 = uVar9;
            if ((int)uVar9 < (int)uVar6) {
              puVar3 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
              uVar11 = *puVar3 ^ *puVar3 << 0xb;
              uVar12 = puVar3[3];
              *puVar3 = puVar3[1];
              puVar3[1] = puVar3[2];
              uVar11 = uVar11 >> 8 ^ uVar12 >> 0x13 ^ uVar11 ^ uVar12;
              puVar3[2] = uVar12;
              puVar3[3] = uVar11;
              uVar11 = uVar9 | (uVar11 & 2) - 1 >> 0x1f;
            }
            puVar3 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
            uVar9 = *puVar3 ^ *puVar3 << 0xb;
            uVar12 = puVar3[3];
            *puVar3 = puVar3[1];
            puVar3[1] = puVar3[2];
            uVar9 = uVar9 >> 8 ^ uVar12 >> 0x13 ^ uVar9 ^ uVar12;
            puVar3[2] = uVar12;
            puVar3[3] = uVar9;
            if ((uVar9 >> 1 & 1) != 0) {
              iVar4 = uVar13 - 1;
              break;
            }
            iVar4 = uVar11 - 1;
            uVar9 = uVar11 << 1;
            puVar7[(int)(uVar13 - 1)] = puVar7[iVar4];
            uVar13 = uVar11;
          } while ((long)(int)uVar9 < (long)uVar10);
          puVar7[iVar4] = uVar8;
          uVar5 = uVar6 - 1 & 0xffffffff;
          uVar8 = puVar7[uVar5];
          puVar7[uVar5] = *puVar7;
          uVar5 = uVar6 - 1;
          uVar10 = uVar6;
        } while (2 < uVar6);
      }
      *puVar7 = uVar8;
    }
  }
  return;
}

