
void FUN_039be208(long param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined4 local_64;
  
  plVar14 = *(long **)(param_1 + 0x10);
  uVar3 = *(ushort *)(param_1 + 0x120);
  bVar1 = *(byte *)(param_1 + 0x123);
  lVar16 = plVar14[2];
  lVar7 = plVar14[6];
  iVar9 = (**(code **)(*plVar14 + 0x20))(plVar14);
  iVar10 = (**(code **)(*plVar14 + 0x20))(plVar14);
  lVar15 = **(long **)(*(long *)PTR_DAT_04bbd580 + 0x88);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar15 + 0x38) * 4];
  local_64 = param_2;
  (**(code **)(*(long *)(*(long *)PTR_DAT_04bbd580 + 0x80) + 0x18))();
  if ((ulong)bVar2 != 0) {
    uVar13 = (ulong)(bVar1 >> 2) & 3;
    uVar11 = (bVar1 & 3) + 1;
    uVar5 = 0;
    uVar12 = (uint)uVar13;
    if (uVar12 != 0) {
      uVar5 = uVar11 / uVar12;
    }
    memcpy((void *)(lVar16 + ((ulong)(uVar11 - uVar5 * uVar12) + uVar13 * uVar3) *
                             (ulong)(((int)lVar7 + iVar9) - 1U & -iVar10) +
                   (ulong)*(ushort *)(lVar15 + 0x34)),&local_64,(ulong)bVar2 << 2);
  }
  plVar14 = *(long **)(param_1 + 0x10);
  uVar3 = *(ushort *)(param_1 + 0x120);
  bVar1 = *(byte *)(param_1 + 0x123);
  bVar2 = *(byte *)((long)plVar14 + 0x39);
  uVar4 = *(ushort *)((long)plVar14 + 0x3a);
  lVar7 = plVar14[6];
  iVar9 = (**(code **)(*plVar14 + 0x20))(plVar14);
  iVar10 = (**(code **)(*plVar14 + 0x20))(plVar14);
  lVar15 = plVar14[4];
  if (lVar15 != 0) {
    lVar16 = plVar14[6];
    lVar8 = plVar14[3];
    uVar11 = (**(code **)PTR_DAT_04bcf030)(lVar15);
    if ((uVar11 >> 2 & 1) != 0) {
      bVar6 = bVar1 >> 2;
      uVar5 = bVar6 & 3;
      uVar11 = (bVar1 & 3) + 1;
      uVar12 = 0;
      if ((bVar6 & 3) != 0) {
        uVar12 = uVar11 / uVar5;
      }
                    /* WARNING: Could not recover jumptable at 0x039be3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_04c61fd8)(lVar15,(int)lVar8 +
                             (((int)lVar7 + iVar9) - 1U & -iVar10) *
                             ((uVar11 - uVar12 * uVar5) + uVar5 * uVar3 + (uint)uVar4 * (uint)bVar2)
                      ,(int)lVar16);
      return;
    }
  }
  return;
}

