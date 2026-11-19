
ulong FUN_038d4cb0(long param_1,uint param_2,long param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ushort uVar7;
  long lVar8;
  
  uVar5 = 0;
  if ((param_2 != 0) && (-2 < param_4)) {
    lVar6 = 0;
    iVar2 = 0x7fffffff;
    if (param_4 != -1) {
      iVar2 = param_4;
    }
    uVar4 = 0;
    while (uVar5 = uVar4, (int)lVar6 < iVar2) {
      pbVar1 = (byte *)(param_3 + lVar6);
      bVar3 = *pbVar1;
      uVar7 = (ushort)bVar3;
      if (bVar3 == 0) break;
      if ((char)bVar3 < '\0') {
        uVar7 = (ushort)bVar3;
        if ((uVar7 & 0xe0) == 0xc0) {
          if (pbVar1[1] == 0) break;
          uVar7 = pbVar1[1] & 0x3f | (uVar7 & 0x1f) << 6;
          lVar8 = 2;
        }
        else {
          if ((((uVar7 & 0xf0) != 0xe0) || (pbVar1[1] == 0)) || (pbVar1[2] == 0)) break;
          uVar7 = (ushort)bVar3 << 0xc | (pbVar1[1] & 0x3f) << 6 | pbVar1[2] & 0x3f;
          lVar8 = 3;
        }
      }
      else {
        lVar8 = 1;
      }
      *(ushort *)(param_1 + uVar5 * 2) = uVar7;
      lVar6 = lVar8 + lVar6;
      uVar4 = uVar5 + 1;
      if ((ulong)param_2 == uVar5 + 1) break;
    }
    *(undefined2 *)(param_1 + uVar5 * 2) = 0;
  }
  return uVar5 & 0xffffffff;
}

