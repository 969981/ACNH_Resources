
void FUN_01f68404(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined *local_40;
  char *pcStack_38;
  
  puVar4 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "HarvestDemoNpcStep";
  iVar5 = FUN_02743000(&local_40);
  if (iVar5 < 1) {
    FUN_01e6648c(param_1,0x73,0,0);
    if ((*(byte *)(param_1 + 0xad5b) >> 1 & 1) != 0) {
      local_40 = puVar4 + 0x10;
      pcStack_38 = "ApproachUpdateStop";
      FUN_021c98f0(*(undefined8 *)(param_1 + 8),&local_40,1);
    }
    if (*(char *)(param_1 + 0x13716) != '\0') {
      *(undefined1 *)(param_1 + 0x13716) = 0;
    }
    *(undefined4 *)(param_1 + 0x1367c) = 0xffffffff;
  }
  else {
    fVar6 = 0.0;
    uVar3 = *(uint *)(param_1 + 0x13690);
    uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x2b4);
    if (uVar2 - uVar3 != 0) {
      uVar1 = uVar2 - uVar3;
      if (uVar2 <= uVar3) {
        uVar1 = uVar3 - uVar2;
      }
      uVar2 = -uVar1;
      if (uVar1 < 0x80000001) {
        uVar2 = uVar1;
      }
      fVar6 = (float)uVar2 * 8.381903e-08;
    }
    fVar7 = fVar6 + -360.0;
    if (fVar6 <= 180.0) {
      fVar7 = fVar6;
    }
    fVar6 = -fVar7;
    if (0.0 <= fVar7) {
      fVar6 = fVar7;
    }
    if (10.0 <= fVar6 && *(int *)(param_1 + 0x1370c) == 0) {
      local_40 = puVar4 + 0x10;
      pcStack_38 = "";
      FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),(uint *)(param_1 + 0x13690),&DAT_04178e18,
                   &local_40,6);
      *(undefined4 *)(param_1 + 0x1370c) = 1;
    }
    else if (((*(int *)(param_1 + 0x1370c) == 1) &&
             (*(int *)(*(long *)(param_1 + 0x10) + 0x4b8) != 0)) &&
            (*(int *)(*(long *)(param_1 + 0x10) + 0x378) == 0x23)) {
      *(undefined4 *)(param_1 + 0x1370c) = 0;
      FUN_01f681f8(param_1);
    }
  }
  return;
}

