
undefined8 FUN_01dd0270(long param_1,long *param_2)

{
  ushort uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  ushort *puVar5;
  long lVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined1 *)(param_1 + 0x160) = 0;
    if (*(char *)(param_1 + 0x161) == '\0') {
      return 0;
    }
    if (*(char *)(param_1 + 0x162) == '\0') {
      return 0;
    }
    if (*(char *)(param_1 + 0x163) != '\0') {
      return 0;
    }
    if ((*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0) ||
       (1 < *(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) - 1U)) {
      lVar9 = *(long *)(param_1 + 0x68);
      *(undefined1 *)(lVar9 + 0x3f) = 0;
      (**(code **)(*param_2 + 0x18))(param_2);
      uVar4 = 0;
      lVar6 = 0x7fffffff;
      puVar5 = (ushort *)param_2[1];
      do {
        pbVar8 = (byte *)(lVar9 + (ulong)uVar4);
        if (lVar6 == 0) {
LAB_01dd03bc:
          bVar3 = false;
          goto LAB_01dd03c0;
        }
        uVar1 = *puVar5;
        if (uVar1 == 0) goto LAB_01dd03bc;
        bVar2 = (byte)uVar1;
        if (uVar1 < 0x80) {
          *pbVar8 = bVar2;
          iVar7 = 1;
        }
        else if (uVar1 < 0x800) {
          if (0x3e < uVar4) break;
          *pbVar8 = (byte)(uVar1 >> 6) | 0xc0;
          pbVar8[1] = bVar2 & 0x3f | 0x80;
          iVar7 = 2;
        }
        else {
          if (0x3f < uVar4 + 2) break;
          *pbVar8 = (byte)(uVar1 >> 0xc) | 0xe0;
          pbVar8[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
          pbVar8[2] = bVar2 & 0x3f | 0x80;
          iVar7 = 3;
        }
        uVar4 = iVar7 + uVar4;
        lVar6 = lVar6 + -1;
        puVar5 = puVar5 + 1;
      } while (uVar4 < 0x40);
      pbVar8 = (byte *)(lVar9 + (ulong)(uVar4 - 1));
      bVar3 = true;
LAB_01dd03c0:
      *pbVar8 = 0;
      if (bVar3) {
        return 0;
      }
      FUN_03ebb160(param_1,1);
      return 1;
    }
  }
  return 0;
}

