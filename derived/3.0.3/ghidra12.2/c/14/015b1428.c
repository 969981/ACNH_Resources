
void FUN_015b1428(undefined4 param_1,undefined4 param_2,long param_3,long param_4,undefined4 param_5
                 ,byte param_6)

{
  float *pfVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  size_t __n;
  long lVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float local_90 [4];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float fStack_70;
  undefined4 local_6c;
  float local_68;
  float fStack_64;
  
  if (*(char *)(param_3 + 0x778) != '\0') {
    uVar5 = *(uint *)(param_3 + 0x708);
    if (uVar5 < *(uint *)(param_3 + 0x6f8)) {
      lVar11 = param_3 + 0x668;
      *(uint *)(param_3 + 0x708) = uVar5 + 1;
      lVar9 = *(long *)(param_3 + 0x700) + (long)(int)uVar5 * 0x28;
      *(undefined4 *)(lVar9 + 8) = *(undefined4 *)(param_4 + 8);
      uVar3 = *(undefined4 *)(param_4 + 0xc);
      *(undefined4 *)(lVar9 + 0x14) = 1;
      *(undefined4 *)(lVar9 + 0x18) = param_5;
      *(undefined4 *)(lVar9 + 0x10) = param_1;
      *(byte *)(lVar9 + 0x20) = param_6;
      *(undefined4 *)(lVar9 + 0x1c) = 2;
      *(undefined4 *)(lVar9 + 0xc) = uVar3;
      uVar10 = (ulong)((float)param_6 * 90.0 * 11930465.0);
      uVar6 = *(int *)(param_3 + 0x708) - 1;
      uVar5 = uVar6;
      if (*(uint *)(param_3 + 0x6f8) <= uVar6) {
        uVar5 = 0;
      }
      lVar12 = *(long *)(param_3 + 0x678);
      iVar4 = *(int *)(param_3 + 0x698);
      local_90[1] = 0.0;
      local_80 = 0;
      local_78 = 0;
      local_6c = 0;
      lVar9 = *(long *)(param_3 + 0x700) + (long)(int)uVar5 * 0x28;
      pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar10 >> 0x18 & 0xff) * 0x10);
      fVar14 = (float)((uint)uVar10 & 0xffffff) * 5.9604645e-08;
      fVar15 = *pfVar1 + fVar14 * pfVar1[1];
      local_90[2] = (float)*(uint *)(lVar9 + 0x14);
      fStack_64 = (float)*(int *)(lVar9 + 0xc) * 10.0 + 5.0;
      local_68 = (pfVar1[2] + fVar14 * pfVar1[3]) * 10.0;
      local_90[3] = (float)*(int *)(lVar9 + 8) * 10.0 + 5.0 +
                    (float)(*(uint *)(lVar9 + 0x14) - 1) * 5.0;
      fStack_70 = fVar15 * -10.0;
      local_90[0] = local_68 * local_90[2];
      local_90[2] = fVar15 * 10.0 * local_90[2];
      local_7c = param_2;
      local_74 = param_1;
      iVar7 = (**(code **)(*(long *)(param_3 + 0x668) + 0x20))(lVar11);
      iVar8 = (**(code **)(*(long *)(param_3 + 0x668) + 0x20))(lVar11);
      lVar9 = **(long **)(param_3 + 0x670);
      uVar13 = (ulong)(byte)(&DAT_041b370c)[(ulong)*(byte *)(lVar9 + 8) * 4];
      uVar10 = (**(code **)(*(long *)(param_3 + 0x668) + 0x18))(lVar11);
      if (uVar13 != 0) {
        __n = uVar13 * 4;
        pvVar2 = (void *)(lVar12 + (ulong)((iVar4 + iVar7) - 1U & -iVar8) * (long)(int)uVar6 +
                         (ulong)*(ushort *)(lVar9 + 4));
        memcpy(pvVar2,local_90,__n);
        lVar11 = (uVar10 & 0xff) * 4;
        pvVar2 = (void *)((long)pvVar2 + lVar11);
        memcpy(pvVar2,local_90 + uVar13,__n);
        memcpy((void *)((long)pvVar2 + lVar11),local_90 + uVar13 + uVar13,__n);
      }
    }
  }
  return;
}

