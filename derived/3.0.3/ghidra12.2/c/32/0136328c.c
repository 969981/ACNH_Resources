
void FUN_0136328c(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) &&
     (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 8) == 4)) {
    puVar2 = (uint *)(param_1 + 0x4780);
    puVar5 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar4 = FUN_006bd550(*puVar5,0);
    piVar1 = (int *)(PTR_DAT_04bc3a80 + 0x38);
    if (iVar4 != 0x758f7eaf) {
      piVar1 = &DAT_055c04d8;
    }
    if (*piVar1 == -0x2f1ac06c || *piVar1 == -0x8b34a75) {
      uVar3 = *puVar2;
    }
    else {
      FUN_012ea250(param_1 + 0x3d58);
      uVar3 = *puVar2;
    }
    if ((uVar3 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x4788) = 0;
      *(undefined4 *)(param_1 + 0x4790) = *(undefined4 *)(param_1 + 0x478c);
      *puVar2 = uVar3 & 0xfffffffd;
      if ((uVar3 & 1) == 0) {
        *puVar2 = uVar3 & 0xfffffffd | 1;
      }
    }
  }
  return;
}

