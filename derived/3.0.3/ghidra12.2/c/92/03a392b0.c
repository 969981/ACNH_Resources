
void FUN_03a392b0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar4 = (uint)*(byte *)(param_3 + 8);
  if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)*(byte *)(param_3 + 8)) {
    uVar4 = 0;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar4 * 0x23c0) >> 4 & 1) ==
      0) {
    if ((param_4 == 0) ||
       (((*(uint *)(param_4 + 0x10) & 0x108) == 0 && (1 < *(int *)(param_4 + 0x20) - 1U)))) {
      local_60 = *(undefined8 *)(*(long *)(param_3 + 0x3d0) + 0x9c);
      local_58 = *(undefined8 *)(*(long *)(param_3 + 0x3d0) + 0xa4);
    }
    else {
      pbVar1 = (byte *)(param_4 + 0x24);
      if ((*(uint *)(param_4 + 0x10) & 0x100) != 0) {
        pbVar1 = (byte *)&DAT_05ae9b80;
      }
      fVar9 = (float)NEON_ucvtf((uint)pbVar1[3]);
      fVar10 = (float)NEON_ucvtf((uint)pbVar1[2]);
      fVar11 = (float)NEON_ucvtf((uint)pbVar1[1]);
      local_60 = CONCAT44(fVar10 / 255.0,fVar9 / 255.0);
      fVar9 = (float)NEON_ucvtf((uint)*pbVar1);
      local_58 = CONCAT44(fVar9 / 255.0,fVar11 / 255.0);
    }
    FUN_03af63f0();
    iVar8 = 0;
    bVar2 = *(byte *)(param_3 + 8);
    uVar7 = (uint)bVar2;
    uVar4 = uVar7;
    if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= (uint)bVar2) {
      uVar4 = 0;
    }
    *(ulong *)(param_3 + 0xa8) =
         *(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar4 * 0x23c0 + 0x708;
    if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= uVar7) {
      uVar7 = 0;
    }
    *(ulong *)(param_3 + 0xb0) =
         *(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar7 * 0x23c0 + 0x7e8;
    uVar4 = (uint)bVar2;
    if (*(uint *)(*(long *)(param_1 + 0x248) + 8) <= uVar4) {
      uVar4 = 0;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x248) + 0x10) + (ulong)uVar4 * 0x23c0;
    local_70 = *(float *)(lVar6 + 0xab0) - *(float *)(lVar6 + 0xaa8);
    fStack_6c = *(float *)(lVar6 + 0xab4) - *(float *)(lVar6 + 0xaac);
    fVar10 = local_70;
    fVar9 = fStack_6c;
    if (1 < *(int *)(lVar6 + 0xab8) - 1U) {
      fVar10 = fStack_6c;
      fVar9 = local_70;
    }
    local_68 = (fVar9 / *(float *)(lVar6 + 0x310)) *
               (*(float *)(lVar6 + 800) - *(float *)(lVar6 + 0x318));
    fVar9 = local_68 * 0.25;
    fStack_64 = (fVar10 / *(float *)(lVar6 + 0x314)) *
                (*(float *)(lVar6 + 0x324) - *(float *)(lVar6 + 0x31c));
    fVar10 = fStack_64 * 0.25;
    fVar11 = local_68 * 0.5;
    fVar12 = fStack_64 * 0.5;
    do {
      if (iVar8 == 2) {
        pfVar5 = &local_78;
        iVar3 = 2;
        local_78 = fVar9;
        fStack_74 = fVar10;
      }
      else if (iVar8 == 1) {
        pfVar5 = &local_78;
        local_78 = fVar11;
        fStack_74 = fVar12;
        iVar3 = 1;
      }
      else {
        pfVar5 = &local_68;
        iVar3 = iVar8;
      }
      FUN_039f2928(param_3,iVar3,pfVar5,&local_70);
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x1c);
  }
  return;
}

