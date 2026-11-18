
void FUN_032a3c70(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined *local_30;
  undefined *puStack_28;
  long local_8;
  
  local_8 = *(long *)(*(long *)(*(long *)(*(long *)(*param_1 + 0x240) + 0x18) + 0xf0) + 0x18);
  local_30 = PTR_DAT_04bc8e68 + 0x10;
  puStack_28 = &DAT_040f684b;
  lVar2 = FUN_032a3e70(&local_8,&local_30);
  if (lVar2 != 0) {
    local_30 = PTR_DAT_04bc8e78 + 0x10;
    puStack_28 = PTR_DAT_04bb2da0;
    if (*(undefined **)(lVar2 + 0xd8) != (undefined *)0x0) {
      puStack_28 = *(undefined **)(lVar2 + 0xd8);
    }
    local_8 = lVar2;
    fVar5 = (float)FUN_032d8b60(&local_8,&local_30);
    if (fVar5 != *(float *)(lVar2 + 0x54)) {
      uVar3 = (uint)fVar5;
      fVar6 = (float)(int)fVar5;
      uVar1 = -(uVar3 & 1);
      if (-1 < (int)uVar3) {
        uVar1 = uVar3 & 1;
      }
      if (fVar5 != fVar6 || uVar1 != 0) {
        iVar4 = 2;
        if ((int)uVar3 < 0) {
          iVar4 = -2;
        }
        fVar6 = (float)(int)((uVar3 - uVar1) + iVar4);
      }
      *(float *)(lVar2 + 0x54) = fVar6;
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
    }
  }
  return;
}

