
void FUN_0387a190(int *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,int param_5
                 )

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined1 local_74 [31];
  undefined1 local_55;
  
  puVar2 = PTR_DAT_04bcb7d8;
  local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
  lVar5 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x20);
  *param_1 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)&local_88);
  local_78 = 0x20;
  local_55 = 0;
  local_80 = local_74;
  local_74[0] = 0;
  local_88 = PTR_DAT_04bb2028 + 0x10;
  FUN_038d1270(&local_88,"%d_%d_%d",*(undefined4 *)(*(long *)(*(long *)puVar2 + 0x20) + 0x18),
               param_4,*(undefined1 *)(*(long *)(*(long *)puVar2 + 0x20) + 0x14));
  (**(code **)(local_88 + 0x18))(&local_88);
  lVar4 = 0;
  do {
    if (local_80[lVar4] == '\0') goto LAB_0387a28c;
    if (local_80[lVar4 + 1] == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_0387a28c;
    }
    if (local_80[lVar4 + 2] == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_0387a28c;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  lVar4 = 0;
LAB_0387a28c:
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  (**(code **)(local_88 + 0x18))(&local_88);
  uVar3 = (uint)lVar4;
  if (0x1f < uVar3) {
    uVar3 = 0x20;
  }
  memcpy(&local_a8,local_80,(ulong)uVar3);
  if (param_5 == 1) {
    FUN_0029ca50(&local_88,DAT_04c60f48,*(undefined1 *)(lVar5 + 0x1c));
    FUN_0029cab4(&local_88,DAT_04c60f48,*(undefined2 *)(lVar5 + 0x1e));
  }
  *param_2 = *(undefined4 *)(lVar5 + 8);
  uVar1 = *(undefined4 *)(lVar5 + 0x10);
  *(undefined8 **)(param_2 + 4) = &local_a8;
  param_2[1] = uVar1;
  FUN_00299c88(&local_88,DAT_04c60f48,param_2);
  FUN_00229780(param_1,&local_88);
  if (*param_1 != 0) {
    FUN_00223064(param_1);
  }
  return;
}

