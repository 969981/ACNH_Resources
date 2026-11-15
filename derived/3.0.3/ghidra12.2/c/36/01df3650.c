
bool FUN_01df3650(long *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  uint uVar5;
  ushort *puVar6;
  ulong uVar7;
  int iVar8;
  byte *pbVar9;
  long lVar10;
  
  (**(code **)(*param_1 + 0x18))();
  lVar10 = param_1[1];
  uVar2 = *(uint *)(param_1 + 2);
  (**(code **)(*param_2 + 0x18))(param_2);
  iVar8 = 3;
  if ((-2 < (int)param_3) && (uVar2 != 0)) {
    uVar5 = 0;
    uVar1 = 0x7fffffff;
    if (param_3 != 0xffffffff) {
      uVar1 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
    }
    uVar7 = (ulong)uVar1;
    puVar6 = (ushort *)param_2[1];
    do {
      pbVar9 = (byte *)(lVar10 + (ulong)uVar5);
      if (uVar7 == 0) {
LAB_01df376c:
        iVar8 = 0;
        goto LAB_01df3770;
      }
      uVar3 = *puVar6;
      if (uVar3 == 0) goto LAB_01df376c;
      bVar4 = (byte)uVar3;
      if (uVar3 < 0x80) {
        *pbVar9 = bVar4;
        iVar8 = 1;
      }
      else if (uVar3 < 0x800) {
        if (uVar2 <= uVar5 + 1) break;
        *pbVar9 = (byte)(uVar3 >> 6) | 0xc0;
        pbVar9[1] = bVar4 & 0x3f | 0x80;
        iVar8 = 2;
      }
      else {
        if (uVar2 <= uVar5 + 2) break;
        *pbVar9 = (byte)(uVar3 >> 0xc) | 0xe0;
        pbVar9[1] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
        pbVar9[2] = bVar4 & 0x3f | 0x80;
        iVar8 = 3;
      }
      uVar5 = iVar8 + uVar5;
      uVar7 = uVar7 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 < uVar2);
    pbVar9 = (byte *)(lVar10 + (ulong)(uVar5 - 1));
    iVar8 = 2;
LAB_01df3770:
    *pbVar9 = 0;
  }
  if (iVar8 != 0) {
    *(undefined1 *)param_1[1] = 0;
  }
  return iVar8 == 0;
}

