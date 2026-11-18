
void FUN_036ef5fc(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ushort uVar6;
  undefined8 *puVar7;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  local_24[0] = 0;
  local_28[0] = 0;
  uVar5 = FUN_037848b0(local_24,local_28);
  lVar3 = DAT_04da7238;
  if ((uVar5 & 1) != 0) {
    *(undefined1 *)(DAT_04da7238 + 0x65446) = local_24[0];
    *(undefined1 *)(lVar3 + 0x65447) = local_28[0];
    *(undefined2 *)(lVar3 + 0x65448) = 0x100;
  }
  if (DAT_05aed670 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  iVar4 = *(int *)(puVar7 + 7);
  if (((iVar4 == -0x7975b8e8) || (iVar4 == -0x17df00c3)) || (iVar4 == -0x3e092032)) {
    uVar6 = 2;
  }
  else {
    uVar6 = 0;
  }
  uVar2 = *param_1;
  *param_1 = uVar2 & 0xfffd | uVar6;
  uVar1 = 4;
  if (((((((((DAT_05ac0a90 != iVar4 && DAT_05ac0aa0 != iVar4) && DAT_05ac0ab0 != iVar4) &&
           DAT_05ac0ac0 != iVar4) && DAT_05ac0ad0 != iVar4) && DAT_05ac0ae0 != iVar4) &&
        DAT_05ac0af0 != iVar4) && DAT_05ac0b00 != iVar4) && DAT_05ac0b10 != iVar4) &&
      DAT_05ac0b20 != iVar4) {
    uVar1 = 0;
  }
  *param_1 = uVar1 | uVar2 & 0xfff9 | uVar6;
  if (DAT_05abbc58 != 0) {
    *(uint *)(&DAT_00001230 + DAT_05abbc58) = *(uint *)(&DAT_00001230 + DAT_05abbc58) | 2;
  }
  if (*(char *)(DAT_0538adc8 + 0x2b0) != '\0') {
    *(undefined4 *)(DAT_04ccdcc0 + 8) = *(undefined4 *)(DAT_0538adc8 + 0x2b4);
  }
  return;
}

