
void FUN_01555310(undefined8 param_1,ushort param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_18;
  
  if (param_2 != 0xffff) {
    local_18 = CONCAT44(3,(undefined4)local_18);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)param_2 & 0xffffffffU) * 8);
    if ((param_2 & 0xff00) != 0) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) != 0) {
      FUN_01554b20(param_1,param_3,param_4);
      return;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)param_2 & 0xffffffffU) * 8);
    if ((param_2 & 0xff00) != 0) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 6 & 1) != 0) {
      bVar2 = DAT_055c1b60 == &DAT_055c1b58;
      puVar5 = DAT_055c1b60 + -8;
      if ((param_2 != 0) && (puVar4 = DAT_055c1b60, puVar5 != &DAT_055c1b18)) {
        do {
          puVar4 = (undefined8 *)puVar4[1];
          param_2 = param_2 - 1;
          bVar2 = puVar4 == &DAT_055c1b58;
        } while (!bVar2 && param_2 != 0);
        puVar5 = puVar4 + -8;
      }
      local_18 = 0;
      puVar4 = &DAT_055c04a0;
      if (!bVar2) {
        puVar4 = puVar5;
      }
      uVar3 = FUN_02b698e0((long)&local_18 + 4,&local_18,*(undefined4 *)(puVar4 + 7));
      if ((uVar3 & 1) != 0) {
        FUN_01554fe0(param_1,local_18._4_4_,local_18 & 0xffffffff,param_3,param_4);
      }
    }
  }
  return;
}

