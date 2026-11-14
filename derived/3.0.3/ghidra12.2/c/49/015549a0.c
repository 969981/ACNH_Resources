
void FUN_015549a0(undefined8 param_1,ushort param_2,undefined8 param_3)

{
  uint *puVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_38;
  undefined *local_30;
  undefined8 uStack_28;
  
  if (param_2 != 0xffff) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)param_2 & 0xffffffffU) * 8);
    if ((param_2 & 0xff00) != 0) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) == 0) {
      local_30 = (undefined *)CONCAT44(local_30._4_4_,6);
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
        local_38 = 0;
        puVar4 = &DAT_055c04a0;
        if (!bVar2) {
          puVar4 = puVar5;
        }
        uVar3 = FUN_02b698e0((long)&local_38 + 4,&local_38,*(undefined4 *)(puVar4 + 7));
        if ((uVar3 & 1) != 0) {
          local_30 = PTR_DAT_04bb2010 + 0x10;
          uStack_28 = 0xffffffffffffffff;
          FUN_01554fe0(param_1,local_38._4_4_,local_38 & 0xffffffff,param_3,&local_30);
        }
      }
    }
    else {
      local_30 = PTR_DAT_04bb2010 + 0x10;
      uStack_28 = 0xffffffffffffffff;
      FUN_01554b20(param_1,param_3,&local_30);
    }
  }
  return;
}

