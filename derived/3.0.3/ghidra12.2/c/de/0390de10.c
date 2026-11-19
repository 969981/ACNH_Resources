
void FUN_0390de10(long *param_1,long *param_2,int param_3,int param_4,int param_5,undefined8 param_6
                 ,uint param_7,int param_8)

{
  void *__src;
  uint uVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  long local_88;
  
  bVar3 = *(byte *)((long)param_1 + 0x39);
  uVar4 = *(ushort *)((long)param_1 + 0x3a);
  lVar9 = param_1[6];
  iVar13 = (**(code **)(*param_1 + 0x20))();
  iVar14 = (**(code **)(*param_1 + 0x20))(param_1);
  lVar10 = param_1[3];
  if (param_1[4] == 0) {
    local_88 = 0;
  }
  else {
    local_88 = (**(code **)PTR_DAT_04bb2cd8)();
  }
  piVar18 = (int *)(*(long *)param_1[1] + (long)param_4 * 0xc);
  uVar5 = *(ushort *)(*(long *)param_1[1] + (long)param_3 * 0xc + 4);
  uVar6 = *(ushort *)(piVar18 + 1);
  uVar19 = param_7;
  if (param_7 == 0xffffffff) {
    uVar19 = (uint)*(byte *)((long)param_2 + 0x39);
  }
  uVar7 = *(ushort *)((long)piVar18 + 6);
  iVar2 = *piVar18;
  uVar8 = *(ushort *)((long)param_2 + 0x3a);
  lVar11 = param_2[6];
  iVar15 = (**(code **)(*param_2 + 0x20))(param_2);
  iVar16 = (**(code **)(*param_2 + 0x20))(param_2);
  lVar12 = param_2[3];
  lVar17 = 0;
  if (param_2[4] != 0) {
    lVar17 = (*DAT_04c61fd0)();
  }
  uVar1 = (uint)bVar3;
  if (param_7 != 0xffffffff) {
    uVar1 = param_7;
  }
  local_88 = local_88 +
             (ulong)((int)lVar10 +
                    (((int)lVar9 + iVar13) - 1U & -iVar14) * (param_8 + uVar1 * uVar4));
  __src = (void *)(local_88 + (ulong)uVar5);
  memcpy((void *)(lVar17 + (ulong)*(ushort *)(*(long *)param_2[1] + (long)param_5 * 0xc + 4) +
                 (ulong)((int)lVar12 +
                        (((int)lVar11 + iVar15) - 1U & -iVar16) * (param_8 + uVar19 * uVar8))),__src
         ,(long)(int)(((int)local_88 + (uint)uVar6 + (uint)uVar7 * iVar2 * 4) - (int)__src));
  return;
}

