
ulong FUN_001280d0(long param_1,long param_2,undefined2 *param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  undefined2 *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  int iVar13;
  byte *local_68;
  
  uVar7 = param_4 & 0xffffffff;
  uVar11 = param_4 & 0xffff;
  lVar10 = uVar11 * 2;
  if (lVar10 + 2U <= (ulong)(ushort)param_5) {
    uVar6 = *(uint *)(*(long *)(param_1 + 8) + 0x24);
    iVar13 = *(int *)(param_1 + 0x70);
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    iVar4 = FUN_0010dbc0(param_1,10,
                         ((uint)*(byte *)(param_2 + 1) << 0x10 | (uint)*(byte *)(param_2 + 2) << 8 |
                         (uint)*(byte *)(param_2 + 3)) + (uVar6 >> 0x10 | uVar6 << 0x10),lVar10,
                         &local_68);
    if (-1 < iVar4) {
      if (iVar13 == 0x40050001) {
        puVar8 = param_3;
        if ((param_4 & 0xffff) == 0) {
          uVar6 = 0;
        }
        else {
          lVar10 = *(long *)(param_1 + 0x48);
          uVar2 = *(undefined1 *)(*(long *)(param_1 + 8) + 0x77);
          uVar3 = *(undefined1 *)(*(long *)(param_1 + 8) + 0x76);
          uVar9 = 0;
          pbVar12 = local_68;
          uVar6 = 0;
          do {
            pbVar5 = (byte *)(lVar10 + (ulong)CONCAT11(uVar3,uVar2) * (ulong)*pbVar12);
            if ((*pbVar5 & 0xfc) == 0xd8) {
              iVar13 = 1;
              if (*(short *)(pbVar5 + 2) != 0) {
                iVar13 = 2;
              }
            }
            else {
              iVar13 = 1;
            }
            uVar1 = iVar13 * 2 + (uVar6 & 0xffff);
            if ((param_5 & 0xffff) <= uVar1) goto LAB_00128228;
            FUN_00100660(puVar8,pbVar5,iVar13 * 2);
            uVar9 = uVar9 + 1;
            puVar8 = puVar8 + (byte)iVar13;
            pbVar12 = pbVar12 + 1;
            uVar6 = uVar1;
          } while ((uVar9 & 0xffff) < ((uint)param_4 & 0xffff));
        }
LAB_00128228:
        uVar7 = (ulong)(uVar6 >> 1 & 0x7fff);
        *puVar8 = 0;
        uVar11 = uVar7;
      }
      else {
        FUN_00100660(param_3,local_68,lVar10);
      }
      param_3[uVar11] = 0;
      return uVar7;
    }
  }
  return (ulong)(param_5 >> 1 & 0x7fff);
}

