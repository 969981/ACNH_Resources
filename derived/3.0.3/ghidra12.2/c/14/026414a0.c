
byte FUN_026414a0(void)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined1 uStack_19;
  byte local_18 [4];
  undefined4 local_14;
  
  puVar4 = (undefined8 *)
           (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
  pcVar5 = (char *)*puVar4;
  if (pcVar5 != "SceneBoot") {
    if (((((*pcVar5 == 'S') && (pcVar5[1] == 'c')) && (pcVar5[2] == 'e')) &&
        ((((pcVar5[3] == 'n' && (pcVar5[4] == 'e')) &&
          ((pcVar5[5] == 'B' && ((pcVar5[6] == 'o' && (pcVar5[7] == 'o')))))) && (pcVar5[8] == 't'))
        )) && (bVar3 = 0, pcVar5[9] == '\0')) goto LAB_0264161c;
    if (DAT_04c487d4 != -1) {
      local_14 = 0xf;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0xf & 1) != 0) goto LAB_02641618;
    }
    bVar3 = 0;
    iVar2 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
    if (((iVar2 == -0x7a8de531) || (iVar2 == 0x30e4fc6)) || (iVar2 == 0x43080996))
    goto LAB_0264161c;
    FUN_0252d11c(local_18);
    if (local_18[0] < 8) {
      FUN_0252d11c(&uStack_19);
      bVar3 = FUN_02669430(&uStack_19);
      bVar3 = bVar3 ^ 1;
      goto LAB_0264161c;
    }
  }
LAB_02641618:
  bVar3 = 0;
LAB_0264161c:
  return bVar3 & 1;
}

