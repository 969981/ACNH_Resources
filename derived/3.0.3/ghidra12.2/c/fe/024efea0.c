
void FUN_024efea0(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte local_8 [2];
  short local_6;
  undefined4 local_4;
  
  local_8[0] = *param_1;
  local_4 = 0;
  if (7 < local_8[0]) {
    local_8[0] = 0xff;
  }
  if (DAT_05aed670 == 0) {
    puVar3 = &DAT_055c04a0;
  }
  else {
    puVar3 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar3,0);
      puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar3 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    local_6 = 0;
    puVar2 = DAT_055c1b60;
    do {
      if (*(int *)(puVar2 + -1) == *(int *)(puVar3 + 7)) {
        if (local_6 != -1) goto LAB_024eff84;
        break;
      }
      puVar2 = (undefined8 *)puVar2[1];
      local_6 = local_6 + 1;
    } while (puVar2 != &DAT_055c1b58);
  }
  local_6 = 0;
LAB_024eff84:
  FUN_0254497c(local_8);
  local_4 = 1;
  FUN_0254497c(local_8);
  return;
}

