
void FUN_032d4aa0(int *param_1,long *param_2,int param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  ushort uVar9;
  uint uVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR_DAT_04bc94a0;
  lVar8 = FUN_0037e610(param_2,param_4);
  uVar2 = *(uint *)(lVar8 + (ulong)*(uint *)(lVar8 + 4) + (long)*param_1 * 4);
  if (0 < (int)uVar2) {
    puVar1 = (uint *)(lVar11 + 0x3e18) + uVar2;
    if (0x74 < uVar2) {
      puVar1 = (uint *)(lVar11 + 0x3e18);
    }
    uVar2 = *puVar1;
    uVar3 = uVar2 >> 0x10;
    uVar4 = uVar2 >> 0x18;
    if ((char)param_1[1] == '\0') {
      lVar8 = *(long *)(param_1 + 2);
      bVar7 = *(byte *)(lVar8 + 0xef);
      uVar10 = uVar2 >> 8 & 0xff;
      if ((*(byte *)(lVar8 + 0xe8) == uVar4) && ((uint)*(byte *)(lVar8 + 0xe9) == (uVar3 & 0xff))) {
        bVar6 = *(byte *)(lVar8 + 0xea) != uVar10;
      }
      else {
        bVar6 = true;
      }
      uVar9 = 4;
      if (!bVar6 && (*(ushort *)(lVar8 + 0x114) & 4) == 0) {
        uVar9 = 0;
      }
      *(ushort *)(lVar8 + 0x114) = uVar9 | *(ushort *)(lVar8 + 0x114) & 0xfffb;
      uVar5 = (uVar2 >> 8 & 0xff) << 0x10;
      uVar2 = (uVar3 & 0xff) << 8 | uVar4;
      *(uint *)(lVar8 + 0xe8) = (uint)*(byte *)(lVar8 + 0xeb) << 0x18 | uVar5 | uVar2;
      lVar8 = *(long *)(param_1 + 2);
      if (((*(byte *)(lVar8 + 0xec) == uVar4) && ((uint)*(byte *)(lVar8 + 0xed) == (uVar3 & 0xff)))
         && (*(byte *)(lVar8 + 0xee) == uVar10)) {
        bVar6 = *(byte *)(lVar8 + 0xef) != bVar7;
      }
      else {
        bVar6 = true;
      }
      uVar9 = 4;
      if (!bVar6 && (*(ushort *)(lVar8 + 0x114) & 4) == 0) {
        uVar9 = 0;
      }
      *(ushort *)(lVar8 + 0x114) = uVar9 | *(ushort *)(lVar8 + 0x114) & 0xfffb;
      *(uint *)(lVar8 + 0xec) = (uint)bVar7 << 0x18 | uVar5 | uVar2;
    }
    else {
      bVar7 = (**(code **)(*param_2 + 0x50))(param_2);
      if (bVar7 != 0) {
        uVar10 = 0;
        do {
          lVar8 = (**(code **)(*param_2 + 0x58))(param_2,uVar10);
          lVar8 = lVar8 + (long)param_3 * 4;
          uVar10 = uVar10 + 1;
          *(uint *)(lVar8 + 8) =
               (uVar2 >> 8 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 |
               (uint)*(byte *)(lVar8 + 0xb) << 0x18 | uVar4;
        } while (bVar7 != uVar10);
      }
    }
  }
  return;
}

