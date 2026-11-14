
void FUN_015b1670(undefined4 param_1,long param_2,long param_3,undefined4 param_4,uint param_5)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  size_t __n;
  long lVar11;
  ulong uVar12;
  float fVar13;
  float local_90 [4];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  float local_64;
  
  if (*(char *)(param_2 + 0x778) != '\0') {
    uVar4 = *(uint *)(param_2 + 0x708);
    if (uVar4 < *(uint *)(param_2 + 0x6f8)) {
      *(uint *)(param_2 + 0x708) = uVar4 + 1;
      lVar11 = param_2 + 0x668;
      local_90[1] = 0.0;
      local_90[2] = 0.0;
      local_78 = 0;
      local_70 = 0;
      lVar9 = *(long *)(param_2 + 0x700) + (long)(int)uVar4 * 0x28;
      *(undefined4 *)(lVar9 + 8) = *(undefined4 *)(param_3 + 8);
      uVar2 = *(undefined4 *)(param_3 + 0xc);
      *(undefined4 *)(lVar9 + 0x10) = param_1;
      *(undefined4 *)(lVar9 + 0x14) = 1;
      *(undefined4 *)(lVar9 + 0x18) = param_4;
      *(uint *)(lVar9 + 0x1c) = param_5 & 1;
      *(undefined4 *)(lVar9 + 0xc) = uVar2;
      lVar9 = *(long *)(param_2 + 0x678);
      iVar3 = *(int *)(param_2 + 0x698);
      uVar5 = *(int *)(param_2 + 0x708) - 1;
      uVar4 = uVar5;
      if (*(uint *)(param_2 + 0x6f8) <= uVar5) {
        uVar4 = 0;
      }
      local_68 = 0x41200000;
      lVar10 = *(long *)(param_2 + 0x700) + (long)(int)uVar4 * 0x28;
      local_74 = *(undefined4 *)(lVar10 + 0x10);
      local_80 = 0x3f80000000000000;
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar10 + 0x14));
      local_90[3] = (float)*(int *)(lVar10 + 8) * 10.0;
      local_64 = (float)*(int *)(lVar10 + 0xc) * 10.0;
      local_90[0] = fVar13 * 5.0 + fVar13 * 5.0;
      iVar6 = (**(code **)(*(long *)(param_2 + 0x668) + 0x20))(lVar11);
      iVar7 = (**(code **)(*(long *)(param_2 + 0x668) + 0x20))(lVar11);
      lVar10 = **(long **)(param_2 + 0x670);
      uVar12 = (ulong)(byte)(&DAT_041b370c)[(ulong)*(byte *)(lVar10 + 8) * 4];
      uVar8 = (**(code **)(*(long *)(param_2 + 0x668) + 0x18))(lVar11);
      if (uVar12 != 0) {
        __n = uVar12 * 4;
        pvVar1 = (void *)(lVar9 + (ulong)((iVar3 + iVar6) - 1U & -iVar7) * (long)(int)uVar5 +
                         (ulong)*(ushort *)(lVar10 + 4));
        memcpy(pvVar1,local_90,__n);
        lVar11 = (uVar8 & 0xff) * 4;
        pvVar1 = (void *)((long)pvVar1 + lVar11);
        memcpy(pvVar1,local_90 + uVar12,__n);
        memcpy((void *)((long)pvVar1 + lVar11),local_90 + uVar12 + uVar12,__n);
      }
    }
  }
  return;
}

