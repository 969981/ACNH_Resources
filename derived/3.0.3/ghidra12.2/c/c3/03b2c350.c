
void FUN_03b2c350(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  pbVar1 = (byte *)(param_1 + 0xe8);
  uVar9 = *(undefined8 *)PTR_DAT_04bd0810;
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 1;
  uVar6 = FUN_03b2dad4(uVar9,param_1,param_2,pbVar1);
  *(undefined8 *)(param_1 + 0xf0) = uVar6;
  lVar7 = FUN_0037e610(param_1,"DynamicCaptureOn");
  if (lVar7 != 0) {
    puVar2 = (undefined1 *)(lVar7 + (ulong)*(uint *)(lVar7 + 4));
    if (puVar2 == &DAT_040b84a4) {
LAB_03b2c410:
      *pbVar1 = *pbVar1 | 4;
    }
    else {
      uVar8 = 0;
      bVar5 = true;
      do {
        cVar3 = puVar2[uVar8];
        if (cVar3 != (&DAT_040b84a4)[uVar8]) break;
        if (cVar3 == '\0') {
          if (bVar5) goto LAB_03b2c410;
          break;
        }
        bVar5 = uVar8 < 0x80000;
        uVar8 = uVar8 + 1;
      } while (uVar8 != 0x80001);
    }
  }
  lVar7 = FUN_0037e610(param_1,"CaptureOutputAlpha");
  if ((lVar7 != 0) && (*(int *)(lVar7 + (ulong)*(uint *)(lVar7 + 4)) == 0xff)) {
    *pbVar1 = *pbVar1 | 8;
  }
  lVar7 = FUN_0037e610(param_1,"CaptureApplyScale");
  if (lVar7 != 0) {
    *pbVar1 = *pbVar1 | 0x80;
  }
  lVar7 = FUN_0037e610(param_1,"CaptureAdjustSize");
  if ((lVar7 == 0) || (*(int *)(lVar7 + (ulong)*(uint *)(lVar7 + 4)) != 0)) {
    bVar4 = *pbVar1 | 0x10;
  }
  else {
    bVar4 = *pbVar1 & 0xef;
  }
  *(byte *)(param_1 + 0xe8) = bVar4;
  lVar7 = FUN_03b14760(uVar9,param_1,param_2);
  *(long *)(param_1 + 0xf8) = lVar7;
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x7a8) = 5;
  }
  *(long *)(param_1 + 0x140) = param_1 + 0x188;
  uVar6 = DAT_0419b4fc;
  *(undefined8 *)(param_1 + 0x80) = DAT_0419b4f4;
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  uVar6 = DAT_0419b50c;
  *(undefined8 *)(param_1 + 0x90) = DAT_0419b504;
  *(undefined8 *)(param_1 + 0x98) = uVar6;
  uVar6 = DAT_0419b4ec;
  *(undefined8 *)(param_1 + 0x70) = DAT_0419b4e4;
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x40;
  return;
}

