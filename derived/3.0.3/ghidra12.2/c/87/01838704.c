
void FUN_01838704(long param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float *pfVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  
  bVar4 = param_2[1];
  uVar1 = (uint)(*param_2 >> 7) | (bVar4 & 7) << 1;
  if ((uVar1 < 7) && (uVar3 = *(uint *)(param_1 + 0x280), uVar3 != uVar1)) {
    if (uVar1 == 0) {
      if (uVar3 != 0) {
        FUN_03ebb160(param_1 + 0x278);
        bVar4 = param_2[1];
      }
      fVar8 = *(float *)(*(long *)(param_1 + 0x300) + 0x278);
      uVar1 = bVar4 >> 1 & 0x7c | (param_2[2] & 0x1f) << 7;
      if ((param_2[2] & 0x10) != 0) {
        uVar1 = uVar1 | 0xfffff000;
      }
      lVar7 = *(long *)(param_1 + 0x460);
      iVar6 = 0;
      if (lVar7 != 0) {
        pfVar5 = (float *)(**(code **)(*(long *)(lVar7 + 0x180) + 0xf0))(lVar7 + 0x180);
        iVar6 = (int)(long)(*pfVar5 * 11930465.0);
      }
      iVar2 = -iVar6;
      if (fVar8 < (float)(int)uVar1) {
        iVar2 = iVar6;
      }
      *(int *)(param_1 + 800) = iVar2;
    }
    else {
      lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x60) + 0x1138);
      if (((lVar7 != 0) && (*(float *)(lVar7 + 0xa8) == 0.0)) && (uVar3 != uVar1)) {
        FUN_03ebb160(param_1 + 0x278);
        return;
      }
    }
  }
  return;
}

