
uint FUN_00b08880(byte *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  bVar2 = *param_1;
  if (bVar2 != 0) {
    lVar6 = 0;
    do {
      uVar7 = (uint)bVar2;
      pbVar1 = param_1 + lVar6;
      bVar3 = pbVar1[1];
      iVar4 = (int)lVar6;
      if (bVar3 == 0) {
        uVar5 = param_3 + iVar4 + 1;
LAB_00b0893c:
        param_3 = uVar5 ^ param_2 ^ (uVar7 * 0x16a88000 | uVar7 * -0x3361d2af >> 0x11) * 0x1b873593;
        goto LAB_00b08950;
      }
      if (pbVar1[2] == 0) {
        uVar7 = (uint)CONCAT11(bVar3,bVar2);
        uVar5 = param_3 + iVar4 + 2;
        goto LAB_00b0893c;
      }
      if (pbVar1[3] == 0) {
        uVar5 = param_3 + iVar4 + 3;
        uVar7 = (uint)CONCAT12(pbVar1[2],CONCAT11(bVar3,bVar2));
        goto LAB_00b0893c;
      }
      lVar6 = lVar6 + 4;
      param_2 = (*(int *)pbVar1 * 0x16a88000 | (uint)(*(int *)pbVar1 * -0x3361d2af) >> 0x11) *
                0x1b873593 ^ param_2;
      param_2 = (param_2 >> 0x13 | param_2 << 0xd) * 5 + 0xe6546b64;
      bVar2 = pbVar1[4];
    } while (bVar2 != 0);
    param_3 = param_3 + (int)lVar6;
  }
  param_3 = param_3 ^ param_2;
LAB_00b08950:
  uVar7 = (param_3 ^ param_3 >> 0x10) * -0x7a143595;
  uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51cb;
  return uVar7 ^ uVar7 >> 0x10;
}

