
void FUN_0035bfd0(long param_1,long *param_2,uint param_3)

{
  byte *pbVar1;
  ushort *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  undefined2 uVar7;
  short sVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  long lVar12;
  
  pbVar1 = (byte *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0xc));
  param_3 = param_3 & 0xffff;
  uVar9 = 0;
  if ((uint)*(ushort *)(pbVar1 + 0xe) * (uint)*(ushort *)(pbVar1 + 0xc) != 0) {
    uVar9 = param_3 / ((uint)*(ushort *)(pbVar1 + 0xe) * (uint)*(ushort *)(pbVar1 + 0xc));
  }
  if (*(uint *)(pbVar1 + 0x14) == 0) {
    *param_2 = 0;
    lVar12 = *(long *)(param_1 + 0x20);
    uVar3 = *(uint *)(lVar12 + 0x10);
  }
  else {
    *param_2 = *(long *)(param_1 + 0x18) + (ulong)*(uint *)(pbVar1 + 0x14) +
               (ulong)(*(int *)(pbVar1 + 4) * uVar9);
    lVar12 = *(long *)(param_1 + 0x20);
    uVar3 = *(uint *)(lVar12 + 0x10);
  }
  if (uVar3 != 0) {
    do {
      puVar2 = (ushort *)(*(long *)(param_1 + 0x18) + (ulong)uVar3);
      if ((*puVar2 <= param_3) && (param_3 <= puVar2[1])) {
        lVar12 = (long)puVar2 + ((ulong)param_3 - (ulong)*puVar2) * 3;
        break;
      }
      uVar3 = *(uint *)(puVar2 + 2);
    } while (uVar3 != 0);
  }
  *(short *)(param_2 + 1) = (short)*(char *)(lVar12 + 8);
  *(ushort *)((long)param_2 + 10) = (ushort)*(byte *)(lVar12 + 9);
  *(ushort *)((long)param_2 + 0xc) = (ushort)*(byte *)(lVar12 + 10);
  bVar4 = *(byte *)(lVar12 + 9);
  param_2[4] = param_1 + 0x28;
  *(char *)((long)param_2 + 0x1f) = (char)uVar9;
  *(undefined1 *)((long)param_2 + 0x1e) = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(ushort *)((long)param_2 + 0xe) = (ushort)bVar4;
  uVar6 = *(ushort *)(pbVar1 + 0xc);
  bVar4 = *pbVar1;
  uVar11 = (uint)uVar6;
  uVar9 = *(ushort *)(pbVar1 + 0xe) * uVar11;
  uVar3 = 0;
  if (uVar9 != 0) {
    uVar3 = param_3 / uVar9;
  }
  param_3 = param_3 - uVar3 * uVar9;
  sVar8 = 0;
  if (uVar11 != 0) {
    sVar8 = (short)((param_3 & 0xffff) / uVar11);
  }
  bVar5 = pbVar1[1];
  *(ushort *)(param_2 + 2) = (ushort)bVar5;
  sVar10 = (short)param_3 - sVar8 * uVar6;
  *(ushort *)((long)param_2 + 0x12) = (ushort)pbVar1[1];
  *(ushort *)((long)param_2 + 0x1c) = *(ushort *)(pbVar1 + 10) & 0x3fff;
  *(undefined2 *)((long)param_2 + 0x14) = *(undefined2 *)(pbVar1 + 0x10);
  uVar7 = *(undefined2 *)(pbVar1 + 0x12);
  *(ushort *)(param_2 + 3) = sVar10 + sVar10 * (ushort)bVar4 + 1;
  *(undefined2 *)((long)param_2 + 0x16) = uVar7;
  *(ushort *)((long)param_2 + 0x1a) = sVar8 + sVar8 * (ushort)bVar5 + 1;
  return;
}

