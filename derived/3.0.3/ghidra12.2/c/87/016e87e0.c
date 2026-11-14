
undefined1  [16] FUN_016e87e0(float *param_1,undefined4 *param_2,short *param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  short sVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  sVar5 = *param_3;
  bVar1 = DAT_055c1b60 == &DAT_055c1b58;
  puVar4 = DAT_055c1b60 + -8;
  if ((sVar5 != 0) && (puVar6 = DAT_055c1b60, puVar4 != &DAT_055c1b18)) {
    do {
      puVar6 = (undefined8 *)puVar6[1];
      sVar5 = sVar5 + -1;
      bVar1 = puVar6 == &DAT_055c1b58;
    } while (!bVar1 && sVar5 != 0);
    puVar4 = puVar6 + -8;
  }
  puVar6 = &DAT_055c04a0;
  if (!bVar1) {
    puVar6 = puVar4;
  }
  local_48 = 0;
  local_58 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_50 = PTR_DAT_04bb2010 + 0x10;
  local_38 = 0;
  local_40 = puStack_50;
  uVar2 = FUN_017ba710(*(undefined4 *)(puVar6 + 7),&local_58);
  if ((uVar2 & 1) == 0) {
LAB_016e8918:
    uVar2 = 0x42480000;
    if (param_2 == (undefined4 *)0x0) goto LAB_016e892c;
    uVar3 = 0x25;
  }
  else {
    fVar9 = *param_1;
    fVar8 = (float)(int)local_38 * 5.0 + 5.0;
    bVar1 = false;
    if (((float)(int)local_48 * 5.0 <= fVar9) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar8))) {
      bVar1 = fVar9 < fVar8;
    }
    if (bVar1) {
      fVar8 = (float)local_38._4_4_ * 5.0 + 5.0;
      fVar9 = param_1[2];
      bVar1 = false;
      if (((float)local_48._4_4_ * 5.0 <= fVar9) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar8))) {
        bVar1 = fVar9 < fVar8;
      }
      if (!bVar1) goto LAB_016e88f0;
      uVar2 = 0;
      if (param_2 == (undefined4 *)0x0) goto LAB_016e892c;
      uVar3 = 0xd;
    }
    else {
LAB_016e88f0:
      if ((*(char *)((long)param_3 + 3) == '\0') ||
         (uVar2 = FUN_016e8520(param_1,*param_3), (uVar2 & 1) == 0)) goto LAB_016e8918;
      uVar2 = 0;
      if (param_2 == (undefined4 *)0x0) goto LAB_016e892c;
      uVar3 = 0xe;
    }
  }
  *param_2 = uVar3;
LAB_016e892c:
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar2;
  return auVar7;
}

