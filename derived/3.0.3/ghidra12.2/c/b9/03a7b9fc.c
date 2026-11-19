
void FUN_03a7b9fc(long param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  undefined2 local_d4 [2];
  undefined4 local_d0;
  undefined4 local_b8;
  
  uVar8 = (uint)*(byte *)(param_3 + 8);
  if (*(uint *)(param_1 + 0x248) <= (uint)*(byte *)(param_3 + 8)) {
    uVar8 = 0;
  }
  if (((*(byte *)(param_1 + 0x324) ^ 0xff) & 3) == 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0x250) + (ulong)uVar8 * 0x88 + 0x80);
    if (*piVar11 != 0) {
      plVar9 = (long *)(*(long *)(param_1 + 0x250) + (ulong)uVar8 * 0x88);
      bVar1 = *(byte *)((long)plVar9 + 0x39);
      uVar2 = *(ushort *)((long)plVar9 + 0x3a);
      lVar3 = plVar9[6];
      iVar6 = (**(code **)(*plVar9 + 0x20))(plVar9);
      iVar7 = (**(code **)(*plVar9 + 0x20))(plVar9);
      lVar10 = plVar9[4];
      if (lVar10 != 0) {
        lVar4 = plVar9[6];
        lVar5 = plVar9[3];
        uVar8 = (*DAT_04c62000)(lVar10);
        if ((uVar8 >> 2 & 1) != 0) {
          (*DAT_04c61fd8)(lVar10,(int)lVar5 +
                                 (uint)uVar2 * (uint)bVar1 * (((int)lVar3 + iVar6) - 1U & -iVar7),
                          (int)lVar4);
        }
      }
      FUN_038e4cec(local_d4);
      local_d4[0] = 0;
      local_b8 = 0;
      local_d0 = 0;
      FUN_038e4d90(local_d4,param_2);
      lVar3 = *(long *)(*(long *)PTR_DAT_04bd1650 + 0x40) + 0xe70;
      if (*(uint *)(*(long *)PTR_DAT_04bd1650 + 0x38) < 0xc) {
        lVar3 = 0;
      }
      FUN_03907810(lVar3,param_2);
      FUN_03a465e0(lVar3,param_2,0,plVar9,0);
      if (*piVar11 != 0) {
        (**(code **)PTR_DAT_04bcf118)(*(undefined8 *)(param_2 + 0xb8),0,0);
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),0x21);
    }
  }
  return;
}

