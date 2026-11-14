
void FUN_01a1ff10(long param_1,long param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = DAT_05abff60;
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar1 >> 0x1a & 1) != 0) && ((*puVar1 >> 1 & 1) != 0)) && (DAT_05abff60 != 0)) {
      if (param_1 != 0) {
        fVar5 = (float)*(int *)(DAT_05abff60 + 0x28) * 0.5;
        uVar3 = 0;
        if (fVar5 != (float)(int)fVar5) {
          uVar3 = (uint)(fVar5 < 0.0);
        }
        fVar6 = (float)*(int *)(DAT_05abff60 + 0x2c) * 0.5;
        uVar4 = 0;
        if (fVar6 != (float)(int)fVar6) {
          uVar4 = (uint)(fVar6 < 0.0);
        }
        *(uint *)(param_1 + 8) = (int)fVar5 - uVar3;
        *(uint *)(param_1 + 0xc) = (int)fVar6 - uVar4;
      }
      if (param_2 != 0) {
        fVar5 = (float)*(int *)(lVar2 + 0x38) * 0.5;
        uVar3 = 0;
        if (fVar5 != (float)(int)fVar5) {
          uVar3 = (uint)(fVar5 < 0.0);
        }
        fVar6 = (float)*(int *)(lVar2 + 0x3c) * 0.5;
        uVar4 = 0;
        if (fVar6 != (float)(int)fVar6) {
          uVar4 = (uint)(fVar6 < 0.0);
        }
        *(uint *)(param_2 + 8) = (int)fVar5 - uVar3;
        *(uint *)(param_2 + 0xc) = (int)fVar6 - uVar4;
      }
    }
  }
  return;
}

