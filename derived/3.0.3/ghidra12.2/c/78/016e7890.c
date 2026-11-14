
void FUN_016e7890(short *param_1)

{
  int iVar1;
  short sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar3 = *(long *)PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar3 + 0x338));
      iVar1 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    sVar2 = 0;
    puVar4 = DAT_055c1b60;
    do {
      if (*(int *)(puVar4 + -1) == *(int *)(puVar5 + 7)) {
        if (sVar2 != -1) goto LAB_016e7964;
        break;
      }
      puVar4 = (undefined8 *)puVar4[1];
      sVar2 = sVar2 + 1;
    } while (puVar4 != &DAT_055c1b58);
  }
  sVar2 = 0;
LAB_016e7964:
  *param_1 = sVar2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

