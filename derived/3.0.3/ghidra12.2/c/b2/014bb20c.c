
void FUN_014bb20c(long param_1)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
LAB_014bb270:
    uVar4 = FUN_0180c600();
    if ((uVar4 & 1) == 0) goto LAB_014bb27c;
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x1a & 1) == 0) goto LAB_014bb270;
  }
  FUN_014bb340();
LAB_014bb27c:
  iVar6 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar5,0);
      iVar6 = 0;
      if ((iVar3 == 0x758f7eaf) && (iVar6 = 0, DAT_05aed670 != 0)) {
        iVar6 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar6 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
  }
  if (DAT_05292434 == iVar6) {
    FUN_016b496c(DAT_0523a180,param_1 + 0x21e0);
    return;
  }
  return;
}

