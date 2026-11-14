
undefined8 FUN_0180dd50(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (DAT_05292338 == 0) {
LAB_0180df2c:
    uVar5 = 0;
  }
  else {
    if (DAT_05aed670 == 0) {
      iVar2 = 0;
LAB_0180de08:
      if (DAT_04c487d4 == -1) goto LAB_0180dea0;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 6 & 1) == 0) {
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 0x15 & 1) == 0) goto LAB_0180dea0;
      }
      if (iVar2 != 5) goto LAB_0180df2c;
    }
    else {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
LAB_0180ddec:
        iVar2 = 0;
      }
      else {
        puVar4 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar4,0);
        if ((iVar2 == 0x758f7eaf) && (DAT_05aed670 != 0)) {
          if (*(long *)(DAT_05aed670 + 0x330) == 0) goto LAB_0180ddec;
          iVar2 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
        }
        else {
          iVar2 = 0;
        }
      }
      if (DAT_05292338 != 0) goto LAB_0180de08;
LAB_0180dea0:
      iVar6 = 0;
      if (DAT_05aed670 != 0) {
        if (*(long *)(DAT_05aed670 + 0x330) == 0) {
          iVar6 = 0;
        }
        else {
          puVar4 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar3 = FUN_006bd550(*puVar4,0);
          iVar6 = 0;
          if ((iVar3 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) {
            iVar6 = 0;
            if (*(long *)(DAT_05aed670 + 0x330) != 0) {
              iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
            }
          }
        }
      }
      if ((iVar2 != 5) || (DAT_05292438 != iVar6)) goto LAB_0180df2c;
    }
    uVar5 = 1;
  }
  return uVar5;
}

