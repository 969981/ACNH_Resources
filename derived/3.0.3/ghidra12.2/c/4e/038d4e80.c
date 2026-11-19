
ulong FUN_038d4e80(long param_1,uint param_2,ushort *param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  byte *pbVar8;
  
  uVar5 = 0;
  if ((param_2 != 0) && (-2 < (int)param_4)) {
    uVar5 = 0;
    uVar1 = 0x7fffffff;
    if (param_4 != 0xffffffff) {
      uVar1 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
    }
    uVar6 = (ulong)uVar1;
    do {
      iVar4 = (int)uVar5;
      pbVar8 = (byte *)(param_1 + uVar5);
      if (uVar6 == 0) goto LAB_038d4f54;
      uVar2 = *param_3;
      if (uVar2 == 0) goto LAB_038d4f54;
      bVar3 = (byte)uVar2;
      if (uVar2 < 0x80) {
        *pbVar8 = bVar3;
        iVar7 = 1;
      }
      else if (uVar2 < 0x800) {
        if (param_2 <= iVar4 + 1U) break;
        *pbVar8 = (byte)(uVar2 >> 6) | 0xc0;
        pbVar8[1] = bVar3 & 0x3f | 0x80;
        iVar7 = 2;
      }
      else {
        if (param_2 <= iVar4 + 2U) break;
        *pbVar8 = (byte)(uVar2 >> 0xc) | 0xe0;
        pbVar8[1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        pbVar8[2] = bVar3 & 0x3f | 0x80;
        iVar7 = 3;
      }
      uVar5 = (ulong)(uint)(iVar7 + iVar4);
      uVar6 = uVar6 - 1;
      param_3 = param_3 + 1;
    } while ((uint)(iVar7 + iVar4) < param_2);
    uVar5 = (ulong)((int)uVar5 - 1);
    pbVar8 = (byte *)(param_1 + uVar5);
LAB_038d4f54:
    *pbVar8 = 0;
  }
  return uVar5;
}

