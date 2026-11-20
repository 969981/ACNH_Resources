
void FUN_03fc0fbc(long param_1,uint param_2)

{
  ushort *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  long *plVar11;
  ushort uVar12;
  
  puVar1 = (ushort *)(param_1 + 0x316cc2);
  if ((param_2 >> 7 & 1) != 0) {
    *puVar1 = *puVar1 & 0x83ff | (ushort)((param_2 & 0x1f) << 10);
  }
  if (((param_2 & 0xff) >> 6 & 1) != 0) {
    *puVar1 = *puVar1 & 0xfc1f | (ushort)((param_2 & 0x1f) << 5);
  }
  if (((param_2 & 0xff) >> 5 & 1) != 0) {
    *puVar1 = *puVar1 & 0xffe0 | (ushort)param_2 & 0x1f;
  }
  plVar11 = *(long **)(*(long *)(param_1 + 0x45e68) + 0x78);
  (**(code **)(*plVar11 + 0x58))(plVar11,param_1);
  uVar4 = *puVar1;
  *(ushort *)(&LAB_00316ec4 + param_1) = uVar4 & 0x7fff;
  *(ushort *)(param_1 + 0x3170c6) = uVar4 | 0x8000;
  if ((*(char *)(param_1 + 0x3170e7) != '\0') &&
     (*(char *)(param_1 + 0x3170f1) == '\0' && *(char *)(param_1 + 0x3170e8) == '\0')) {
    cVar2 = *(char *)(param_1 + 0x3170f4);
    bVar10 = uVar4 != 0;
    *(bool *)(param_1 + 0x3170f4) = bVar10;
    if ((bool)cVar2 != bVar10) {
      bVar3 = *(byte *)(param_1 + 0x3170f2);
      uVar5 = *(ushort *)(&LAB_00316cc4 + param_1);
      uVar12 = 1;
      if ((bVar3 & 0x20) != 0) {
        uVar12 = ~(ushort)bVar10;
      }
      iVar6 = (uint)(bVar3 & bVar10) * -0x202;
      *(uint *)(param_1 + 0x45a78) = (uint)bVar3 << 3 & (uint)(uVar4 != 0) << 7;
      *(ushort *)(param_1 + 0x3170ca) = uVar12 << 0xf;
      iVar7 = (uint)(bVar10 & bVar3 >> 1) * -0x202;
      *(ushort *)(param_1 + 0x3170cc) = uVar5 | uVar12 << 0xf;
      *(int *)(param_1 + 0x45b20) = iVar6;
      iVar8 = (uint)(bVar10 & bVar3 >> 2) * -0x202;
      iVar9 = (uint)(bVar10 & bVar3 >> 3) * -0x202;
      *(int *)(param_1 + 0x45bd8) = iVar7;
      *(int *)(param_1 + 0x45d48) = iVar9;
      *(int *)(param_1 + 0x45c90) = iVar8;
      *(long *)(param_1 + 0x45a58) = *(long *)(param_1 + 0x459a8) + (long)iVar6;
      *(long *)(param_1 + 0x45a60) = *(long *)(param_1 + 0x459b0) + (long)iVar7;
      *(long *)(param_1 + 0x45a68) = *(long *)(param_1 + 0x459b8) + (long)iVar8;
      *(long *)(param_1 + 0x45a70) = *(long *)(param_1 + 0x459c0) + (long)iVar9;
    }
  }
  return;
}

