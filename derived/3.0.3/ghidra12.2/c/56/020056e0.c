
bool FUN_020056e0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float local_88 [4];
  undefined8 local_78;
  float local_6c [3];
  
  iVar4 = *(int *)((long)param_3 + 0x2c) + 1;
  iVar7 = *(int *)((long)param_3 + 0x1c);
  if (iVar4 != iVar7) {
    lVar1 = param_3[3];
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x38b0) + 8) + 0x68);
    fVar9 = *(float *)(lVar6 + 0x280);
    fVar10 = *(float *)(lVar6 + 0x278);
    iVar8 = (int)lVar1;
    do {
      local_88[1] = 0.0;
      local_6c[1] = 0.0;
      local_6c[0] = (float)iVar8 * 5.0 + 2.5;
      local_6c[2] = (float)iVar7 * 5.0 + 2.5;
      local_88[0] = (float)(int)((int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0)) * 5.0 + 2.5
      ;
      local_88[2] = (float)(int)((int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0)) * 5.0 + 2.5;
      iVar2 = FUN_01318f40(local_88,local_6c);
      if (iVar2 != 0) {
        return false;
      }
      if (iVar8 < (int)param_3[5]) {
        iVar8 = iVar8 + 1;
      }
      else {
        iVar7 = iVar7 + 1;
        iVar8 = (int)param_3[3];
      }
    } while (((int)lVar1 != iVar8) || (iVar4 != iVar7));
  }
  lVar1 = DAT_05150358;
  lVar6 = *param_3;
  if ((((lVar6 != 0) &&
       ((((DAT_05150358 != 0 && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
        ((*(long *)(DAT_05150358 + 0x488) != 0 &&
         (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))))) &&
      (*(long *)(DAT_05150358 + 0x2b0) != 0)) &&
     (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)) {
    uVar3 = FUN_0277d6c4(lVar6);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar1 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      FUN_0124c030(local_88,lVar6);
      iVar4 = FUN_0123db50(local_88 + 2,local_78);
      if ((iVar4 - 0x23U < 9) && (uVar5 = FUN_0123d890(local_78,0), (uVar5 & 1) == 0)) {
        return 25.0 < *(float *)(param_3 + 9);
      }
    }
  }
  return false;
}

