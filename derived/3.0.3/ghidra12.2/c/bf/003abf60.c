
void FUN_003abf60(long param_1,long param_2)

{
  long *plVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  uVar6 = *(ushort *)(param_1 + 100);
  if ((ulong)uVar6 != 0) {
    lVar11 = 0;
    iVar9 = 0;
    lVar12 = 0x34;
    do {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x58) + lVar11);
      if (-1 < (int)uVar4) {
        uVar10 = (ulong)uVar4 & 0x7fff;
        plVar1 = (long *)(*(long *)(param_2 + 0x48) + uVar10 * 0x80);
        puVar2 = (ushort *)(*(long *)(param_1 + 0x70) + lVar12);
        FUN_003ac090(param_1,plVar1,puVar2 + -0x1a,iVar9);
        iVar9 = iVar9 + (uint)puVar2[-1] + (uint)*puVar2;
        if (puVar2[-3] != 0xffff || puVar2[-2] != 0xffff) {
          lVar8 = (uVar10 >> 5) * 4;
          uVar7 = 1 << (ulong)(uVar4 & 0x1f);
          uVar3 = *(uint *)(*plVar1 + 4);
          uVar5 = *(uint *)(*(long *)(param_2 + 0x10) + lVar8);
          *(uint *)(*(long *)(param_2 + 0x10) + lVar8) =
               uVar5 & (uVar7 ^ 0xffffffff) | (uVar3 & 1) << (ulong)(uVar4 & 0x1f);
          if ((*(code **)(param_2 + 0x80) != (code *)0x0) &&
             (((uVar3 ^ (uVar5 & uVar7) != 0) & 1) != 0)) {
            (**(code **)(param_2 + 0x80))(param_2,uVar10);
          }
        }
      }
      lVar11 = lVar11 + 4;
      lVar12 = lVar12 + 0x40;
    } while ((ulong)uVar6 * 4 != lVar11);
  }
  return;
}

