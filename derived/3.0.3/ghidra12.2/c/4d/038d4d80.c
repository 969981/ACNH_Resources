
undefined8 FUN_038d4d80(undefined4 *param_1,long param_2,uint param_3,long param_4,int param_5)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  ushort uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar5 = 3;
  if ((param_3 != 0) && (-2 < param_5)) {
    lVar6 = 0;
    iVar3 = 0x7fffffff;
    if (param_5 != -1) {
      iVar3 = param_5;
    }
    uVar1 = 0;
    do {
      uVar8 = uVar1;
      if (iVar3 <= (int)lVar6) {
LAB_038d4e3c:
        uVar5 = 0;
        *(undefined2 *)(param_2 + uVar8 * 2) = 0;
        goto joined_r0x038d4e70;
      }
      pbVar2 = (byte *)(param_4 + lVar6);
      bVar4 = *pbVar2;
      uVar7 = (ushort)bVar4;
      if (bVar4 == 0) goto LAB_038d4e3c;
      if ((char)bVar4 < '\0') {
        uVar7 = (ushort)bVar4;
        if ((uVar7 & 0xe0) == 0xc0) {
          if (pbVar2[1] == 0) goto LAB_038d4e3c;
          uVar7 = pbVar2[1] & 0x3f | (uVar7 & 0x1f) << 6;
          lVar9 = 2;
        }
        else {
          if ((uVar7 & 0xf0) != 0xe0) {
            uVar5 = 1;
            *(undefined2 *)(param_2 + uVar8 * 2) = 0;
            goto joined_r0x038d4e70;
          }
          if ((pbVar2[1] == 0) || (pbVar2[2] == 0)) goto LAB_038d4e3c;
          uVar7 = (ushort)bVar4 << 0xc | (pbVar2[1] & 0x3f) << 6 | pbVar2[2] & 0x3f;
          lVar9 = 3;
        }
      }
      else {
        lVar9 = 1;
      }
      *(ushort *)(param_2 + uVar8 * 2) = uVar7;
      uVar1 = uVar8 + 1;
      lVar6 = lVar9 + lVar6;
    } while (param_3 != uVar1);
    *(undefined2 *)(param_2 + uVar1 * 2 + -2) = 0;
    uVar5 = 2;
joined_r0x038d4e70:
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = (int)uVar8;
    }
  }
  return uVar5;
}

