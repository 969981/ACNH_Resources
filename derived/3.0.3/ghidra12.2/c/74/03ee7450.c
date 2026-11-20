
void FUN_03ee7450(undefined4 param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ushort *puVar12;
  uint uVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  
  puVar4 = PTR_DAT_04bd0da0;
  uVar2 = *(uint *)(*(long *)(param_2 + 0x10) + 0x290);
  if (0 < (int)uVar2) {
    uVar13 = 0;
    do {
      uVar7 = uVar13;
      if (*(uint *)(param_2 + 0x30) <= uVar13) {
        uVar7 = 0;
      }
      if (0.0 < *(float *)(*(long *)(param_2 + 0x38) + (ulong)uVar7 * 8 + 4)) {
        uVar7 = uVar13;
        if (*(uint *)(*(long *)(param_2 + 0x10) + 0x2e0) <= uVar13) {
          uVar7 = 0;
        }
        uVar7 = *(uint *)(*(long *)(*(long *)(param_2 + 0x10) + 0x2e8) + (ulong)uVar7 * 0xd0 + 0x48)
        ;
        lVar10 = *(long *)(*(long *)(param_2 + 8) + 8);
        if (*(uint *)(param_2 + 0x20) <= uVar7) {
          uVar7 = 0;
        }
        sVar3 = *(short *)(*(long *)(param_2 + 0x28) + (long)(int)uVar7 * 4 + 2);
        iVar1 = (int)sVar3;
        if (*(uint *)(lVar10 + 8) <= (uint)(int)sVar3) {
          iVar1 = 0;
        }
        lVar11 = *(long *)(*(long *)(param_3 + 8) + 8);
        uVar7 = *(uint *)(lVar11 + 8);
        if (0 < (int)uVar7) {
          lVar8 = 0;
          puVar12 = *(ushort **)(lVar11 + 0x10);
          do {
            uVar9 = (uint)*(ushort *)(*(long *)(lVar10 + 0x10) + (long)iVar1 * 2);
            if (*puVar12 == uVar9) {
              uVar9 = uVar9 - (int)lVar8;
              goto LAB_03ee75b4;
            }
            lVar8 = lVar8 + -0x10000;
            puVar12 = puVar12 + 1;
          } while ((ulong)uVar7 * 0x10000 + lVar8 != 0);
        }
        uVar9 = 0xffffffff;
LAB_03ee75b4:
        uVar5 = FUN_03ef9b40(*(long *)(param_2 + 8),(int)sVar3);
        if ((uVar9 < 0xffff0000) && ((uVar9 & 0xffff) != 0xffff)) {
          puVar6 = (undefined8 *)FUN_03ef9b40(*(undefined8 *)(param_3 + 8),(int)uVar9 >> 0x10);
          lVar10 = *(long *)(param_2 + 0x10);
          if (lVar10 == 0) {
            uVar7 = 0;
            uVar9 = 0;
          }
          else {
            uVar7 = uVar13;
            if (*(uint *)(lVar10 + 0x2e0) <= uVar13) {
              uVar7 = 0;
            }
            lVar10 = *(long *)(lVar10 + 0x2e8) + (ulong)uVar7 * 0xd0;
            uVar7 = ~*(uint *)(lVar10 + 200) >> 0x1f;
            uVar9 = ~*(uint *)(lVar10 + 0x88) >> 0x1f;
          }
          lVar10 = *(long *)(param_2 + 8);
        }
        else {
          local_90 = *(undefined8 *)puVar4;
          uStack_88 = *(undefined8 *)(puVar4 + 8);
          local_80 = 0;
          local_78 = 0;
          FUN_03ef8788(*(undefined8 *)(*(long *)(param_2 + 8) + 8),&local_90,(int)sVar3);
          lVar10 = *(long *)(param_2 + 8);
          uVar7 = 1;
          uVar9 = 1;
          puVar6 = &local_90;
        }
        FUN_03ef8e08(param_1,*(undefined8 *)(lVar10 + 8),uVar5,puVar6,(int)sVar3,uVar7,uVar9);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar2);
  }
  return;
}

