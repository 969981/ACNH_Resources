
void FUN_0303a000(undefined8 *param_1,undefined1 param_2)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  short *psVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  uint *puVar10;
  ushort local_14 [2];
  
  *(undefined1 *)(param_1 + 0xd) = param_2;
  if (*(int *)(param_1 + 0x12) != 5) {
    *(undefined4 *)(param_1 + 0x12) = 5;
  }
  plVar8 = param_1 + 0xe;
  uVar6 = (**(code **)(*plVar8 + 8))(plVar8);
  if ((((uVar6 & 1) == 0) ||
      (uVar5 = (**(code **)param_1[0xe])(plVar8,param_1 + 6,param_1 + 7), ((uVar5 ^ 1) & 1) != 0))
     && (uVar2 = *(ushort *)(param_1 + 10), (uVar2 >> 3 & 1) == 0)) {
    if (*(int *)(param_1 + 0x12) == 0) {
      cVar1 = *(char *)(param_1 + 0xd);
      psVar4 = (short *)PTR_DAT_04bb3170;
    }
    else {
      *(undefined4 *)(param_1 + 0x12) = 0;
      cVar1 = *(char *)(param_1 + 0xd);
      psVar4 = (short *)PTR_DAT_04bb3170;
    }
    PTR_DAT_04bb3170 = (undefined *)psVar4;
    if (cVar1 == '\0') {
      if (*(short *)(param_1 + 6) != *psVar4) {
        puVar10 = *(uint **)PTR_DAT_04bb3720;
        FUN_007ef010(local_14);
        if (((uint)((ulong)local_14[0] & 0x7f) < *puVar10) &&
           (puVar7 = *(undefined8 **)(*(long *)(puVar10 + 2) + ((ulong)local_14[0] & 0x7f) * 8),
           puVar7 != (undefined8 *)0x0)) {
          *puVar7 = 0;
        }
      }
      sVar3 = *psVar4;
      param_1[7] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0xffffffff00000000;
      param_1[4] = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined4 *)((long)param_1 + 0x34) = 0;
      *(short *)(param_1 + 6) = sVar3;
      uVar2 = *(ushort *)(param_1 + 10);
    }
    if (((uVar2 >> 1 & 1) != 0) && (lVar9 = *(long *)(DAT_05231900 + 0x100), lVar9 != 0)) {
      FUN_01596980(param_1 + 8);
      if ((*(ushort *)(param_1 + 10) >> 3 & 1) == 0) {
        FUN_015a30c0(lVar9,param_1 + 8);
        return;
      }
    }
  }
  return;
}

