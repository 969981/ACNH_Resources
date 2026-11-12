
uint FUN_006bd550(byte *param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  
  bVar2 = *param_1;
  if (bVar2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar4 = 0;
    pbVar6 = param_1;
    do {
      uVar5 = (uint)bVar2;
      iVar3 = (int)uVar4;
      uVar7 = iVar3 + 1;
      if (param_1[uVar7] == 0) {
        uVar5 = uVar5 * 0x16a88000 | uVar5 * -0x3361d2af >> 0x11;
LAB_006bd61c:
        param_2 = uVar5 * 0x1b873593 ^ param_2;
        break;
      }
      uVar7 = iVar3 + 2;
      if (param_1[uVar7] == 0) {
        uVar5 = (uint)CONCAT11(pbVar6[1],bVar2);
LAB_006bd610:
        uVar5 = uVar5 * 0x16a88000 | uVar5 * -0x3361d2af >> 0x11;
        goto LAB_006bd61c;
      }
      uVar7 = iVar3 + 3;
      if (param_1[uVar7] == 0) {
        uVar5 = uVar5 | (uint)pbVar6[2] << 0x10 | (uint)pbVar6[1] << 8;
        goto LAB_006bd610;
      }
      iVar1 = *(int *)pbVar6;
      uVar7 = iVar3 + 4;
      uVar4 = (ulong)uVar7;
      pbVar6 = param_1 + uVar4;
      param_2 = (iVar1 * 0x16a88000 | (uint)(iVar1 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ param_2;
      param_2 = (param_2 >> 0x13 | param_2 << 0xd) * 5 + 0xe6546b64;
      bVar2 = *pbVar6;
    } while (bVar2 != 0);
  }
  uVar7 = (uVar7 ^ param_2 ^ (uVar7 ^ param_2) >> 0x10) * -0x7a143595;
  uVar7 = (uVar7 ^ uVar7 >> 0xd) * -0x3d4d51cb;
  return uVar7 ^ uVar7 >> 0x10;
}

