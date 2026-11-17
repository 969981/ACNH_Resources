
void FUN_02a58ea0(long *param_1,long param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined4 uVar12;
  
  puVar10 = PTR_DAT_04bbc570;
  lVar11 = *(long *)(param_2 + 8);
  if (lVar11 != 0) {
    uVar7 = (int)((float)(int)*param_3 / 5.0) - (uint)(*param_3 < 0.0);
    uVar8 = (int)((float)(int)param_3[2] / 5.0) - (uint)(param_3[2] < 0.0);
    iVar1 = *(int *)(param_2 + 0x20);
    iVar3 = *(int *)(param_2 + 0x24);
    iVar2 = *(int *)(param_2 + 0x30);
    uVar4 = *(uint *)(param_2 + 0x34);
    if (((iVar1 <= (int)uVar7 && (int)uVar7 <= iVar2) && iVar3 <= (int)uVar8) && uVar8 == uVar4 ||
        (((iVar1 <= (int)uVar7 && (int)uVar7 <= iVar2) && iVar3 <= (int)uVar8) &&
        (int)(uVar8 - uVar4) < 0) !=
        (((iVar1 <= (int)uVar7 && (int)uVar7 <= iVar2) && iVar3 <= (int)uVar8) &&
        SBORROW4(uVar8,uVar4))) {
      uVar12 = 0xffffffff;
      if ((uVar7 < 0x120) && (uVar8 < 0x100)) {
        uVar12 = *(undefined4 *)(lVar11 + (ulong)uVar7 * 0x400 + (ulong)uVar8 * 4 + 0x30);
      }
      FUN_01360490(lVar11,uVar12);
      return;
    }
  }
  uVar5 = PTR_DAT_04bbc570[8];
  *param_1 = (long)(PTR_DAT_04bc4608 + 0x10);
  *(undefined1 *)(param_1 + 1) = uVar5;
  puVar9 = PTR_DAT_04bb2010;
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(puVar10 + 0xc);
  lVar11 = *(long *)(puVar10 + 0x18);
  param_1[2] = (long)(puVar9 + 0x10);
  param_1[3] = lVar11;
  uVar6 = *(undefined2 *)(puVar10 + 0x24);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar10 + 0x20);
  *(undefined2 *)((long)param_1 + 0x24) = uVar6;
  return;
}

