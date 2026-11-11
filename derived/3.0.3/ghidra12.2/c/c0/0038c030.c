
void thunk_FUN_00385d30(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                       long param_5,long param_6,undefined8 param_7,uint param_8)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  char acStack_80 [32];
  
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xffffff0f | param_8 << 4;
  uVar5 = FUN_0035001c(param_3);
  *param_1 = uVar5;
  lVar6 = nn::util::BinaryFileHeader::GetFirstBlock();
  uVar7 = FUN_0038cba0();
  if ((uVar7 & 1) == 0) {
    if (param_5 == 0) {
      param_5 = 0;
      lVar8 = 0;
      param_7 = 0;
    }
    else {
      lVar8 = (param_6 - param_3) + lVar6;
    }
    FUN_0034fe10(lVar6,param_2,param_5,lVar8,param_7);
  }
  uVar3 = FUN_0038cce0(param_2,*(undefined8 *)(lVar6 + 0x20));
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xfffffff8 | uVar3;
  lVar8 = nn::util::BinaryFileHeader::GetFirstBlock();
  puVar2 = PTR_DAT_04bd0028;
  uVar1 = *(uint *)(lVar8 + 0x1c);
  if (1 < (int)uVar1) {
    lVar8 = 0x40;
    do {
      lVar9 = *(long *)(lVar6 + 0x20);
      uVar7 = FUN_0038cbd0(*(undefined8 *)(lVar9 + *(long *)(puVar2 + (ulong)uVar3 * 8) + lVar8));
      if ((uVar7 & 1) == 0) {
        FUN_0034d730(*(undefined8 *)
                      (*(long *)(lVar9 + *(long *)(puVar2 + (ulong)uVar3 * 8) + lVar8) + 0x68),
                     param_2);
      }
      lVar8 = lVar8 + 0x40;
    } while ((ulong)uVar1 * 0x40 != lVar8);
  }
  lVar6 = nn::util::BinaryFileHeader::GetFirstBlock();
  uVar1 = *(uint *)(lVar6 + 0x1c);
  lVar6 = FUN_00367b30((long)(int)uVar1 << 5);
  if ((0 < (int)uVar1) && (lVar6 != 0)) {
    uVar7 = (ulong)uVar1;
    lVar8 = lVar6;
    do {
      FUN_0034f044(lVar8);
      uVar7 = uVar7 - 1;
      lVar8 = lVar8 + 0x20;
    } while (uVar7 != 0);
  }
  param_1[2] = lVar6;
  lVar6 = (long)(int)uVar1 * 4;
  uVar5 = FUN_00367b30(lVar6);
  param_1[3] = uVar5;
  uVar5 = FUN_00367b30(lVar6);
  param_1[4] = uVar5;
  uVar5 = FUN_00367b30(lVar6);
  param_1[5] = uVar5;
  uVar5 = FUN_00367b30(lVar6 * (int)param_8);
  param_1[6] = uVar5;
  lVar6 = nn::util::BinaryFileHeader::GetFirstBlock();
  uVar1 = *(uint *)(lVar6 + 0x1c);
  if (0 < (int)uVar1) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar8 = nn::util::BinaryFileHeader::GetFirstBlock();
      lVar9 = uVar7 * 0x40;
      uVar11 = *(undefined8 *)
                (*(long *)(*(long *)(lVar8 + 0x20) + lVar9 +
                          *(long *)(puVar2 + ((ulong)*(uint *)(param_1 + 1) & 7) * 8)) + 0x68);
      lVar8 = nn::util::BinaryFileHeader::GetFirstBlock();
      uVar5 = *(undefined8 *)
               (*(long *)(*(long *)(lVar8 + 0x20) + lVar9 +
                         *(long *)(puVar2 + ((ulong)*(uint *)(param_1 + 1) & 7) * 8)) + 0x68);
      lVar8 = nn::util::BinaryFileHeader::GetFirstBlock();
      uVar10 = *(undefined8 *)
                (*(long *)(*(long *)(lVar8 + 0x20) + lVar9 +
                          *(long *)(puVar2 + ((ulong)*(uint *)(param_1 + 1) & 7) * 8)) + 0x68);
      uVar4 = FUN_0034e3c0(uVar11,0,3,"uConstantBufferForVertexShader");
      lVar8 = uVar7 * 4;
      *(undefined4 *)(param_1[3] + lVar8) = uVar4;
      uVar4 = FUN_0034e3c0(uVar5,3,3,"uConstantBufferForGeometryShader");
      *(undefined4 *)(param_1[4] + lVar8) = uVar4;
      uVar4 = FUN_0034e3c0(uVar10,4,3,"uConstantBufferForPixelShader");
      *(undefined4 *)(param_1[5] + lVar8) = uVar4;
      if (0 < (int)param_8) {
        uVar12 = 0;
        do {
          nn::util::SNPrintf(acStack_80,0x20,"uTexture%d",uVar12 & 0xffffffff);
          uVar4 = FUN_0034e3c0(uVar10,4,2,acStack_80);
          *(undefined4 *)(param_1[6] + lVar6 + uVar12 * 4) = uVar4;
          uVar12 = uVar12 + 1;
        } while (param_8 != uVar12);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + (long)(int)param_8 * 4;
    } while (uVar7 != uVar1);
  }
  FUN_00386160(param_1,param_2);
  param_1[7] = param_4;
  return;
}

