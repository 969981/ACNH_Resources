
void FUN_014bb584(long param_1)

{
  uint *puVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
LAB_014bb5e8:
    uVar5 = FUN_0180c600();
    if ((uVar5 & 1) == 0) goto LAB_014bb614;
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x1a & 1) == 0) goto LAB_014bb5e8;
  }
  lVar3 = DAT_05abbc58;
  *(undefined4 *)(DAT_05abbc58 + 0x121c) = *(undefined4 *)(param_1 + 0x21e0);
  *(undefined4 *)(lVar3 + 0x1220) = *(undefined4 *)(param_1 + 0x21e4);
  *(undefined4 *)(lVar3 + 0x1224) = *(undefined4 *)(param_1 + 0x21e8);
LAB_014bb614:
  iVar7 = 0;
  if (DAT_05aed670 != 0) {
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      iVar7 = 0;
    }
    else {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar6,0);
      iVar7 = 0;
      if ((iVar4 == 0x758f7eaf) && (iVar7 = 0, DAT_05aed670 != 0)) {
        iVar7 = 0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          iVar7 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
        }
      }
    }
  }
  lVar3 = DAT_0523a180;
  if (DAT_05292434 == iVar7) {
    *(undefined4 *)(DAT_0523a180 + 0x58) = *(undefined4 *)(param_1 + 0x21e0);
    *(undefined4 *)(lVar3 + 0x5c) = *(undefined4 *)(param_1 + 0x21e4);
    *(undefined4 *)(lVar3 + 0x60) = *(undefined4 *)(param_1 + 0x21e8);
  }
  return;
}

