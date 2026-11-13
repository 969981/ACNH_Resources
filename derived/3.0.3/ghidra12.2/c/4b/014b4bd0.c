
void FUN_014b4bd0(undefined8 param_1,ushort param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_2 != 0xffff) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)param_2 & 0xffffffffU) * 8);
    if ((param_2 & 0xff00) != 0) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((puVar1[1] & 1) != 0) && ((*puVar1 >> 1 & 1) != 0)) {
      FUN_014b5820(param_1,param_3,param_4);
      return;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)param_2 & 0xffffffffU) * 8);
    if ((param_2 & 0xff00) != 0) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((puVar1[1] & 1) != 0) && ((*puVar1 & 1) != 0)) {
      bVar3 = DAT_055c1b60 == &DAT_055c1b58;
      puVar6 = DAT_055c1b60 + -8;
      if ((param_2 != 0) && (puVar5 = DAT_055c1b60, puVar6 != &DAT_055c1b18)) {
        do {
          puVar5 = (undefined8 *)puVar5[1];
          param_2 = param_2 - 1;
          bVar3 = puVar5 == &DAT_055c1b58;
        } while (!bVar3 && param_2 != 0);
        puVar6 = puVar5 + -8;
      }
      puVar5 = &DAT_055c04a0;
      if (!bVar3) {
        puVar5 = puVar6;
      }
      iVar2 = *(int *)(puVar5 + 7);
      uVar4 = 0;
      if (iVar2 < 0x2922957e) {
        if (iVar2 == 0xb6a5301) {
          FUN_014b5ce0(param_1,4);
          return;
        }
        if (iVar2 == 0x1490248c) {
          FUN_014b5ce0(param_1,3);
          return;
        }
      }
      else {
        if (iVar2 == 0x2922957e) {
          FUN_014b5ce0(param_1,2);
          return;
        }
        if (iVar2 == 0x7a616e2f) {
          uVar4 = 5;
        }
        else if (iVar2 == 0x51b9e069) {
          FUN_014b5ce0(param_1,1);
          return;
        }
      }
      FUN_014b5ce0(param_1,uVar4);
      return;
    }
  }
  return;
}

