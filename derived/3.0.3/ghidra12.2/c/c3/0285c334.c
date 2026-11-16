
void FUN_0285c334(long *param_1,int *param_2,byte *param_3)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *local_98;
  char *pcStack_90;
  long local_88;
  undefined8 local_80;
  
  FUN_038d1270(param_1,&DAT_0405bf91,*param_2 + 1U & 0xff);
  uVar5 = (ulong)*param_3;
  if ((((uVar5 < 0x23) && (param_3[1] <= (byte)PTR_DAT_04bc27f0[uVar5])) &&
      ((*(uint *)(PTR_DAT_04bc2a20 + uVar5 * 4) >> (ulong)(param_3[1] & 0x1f) & 1) != 0)) &&
     (bVar2 = FUN_020fd7d8(param_3), **(int **)PTR_DAT_04bb3448 == 0)) {
    (**(code **)(*param_1 + 0x18))(param_1);
    if (bVar2 < 8) {
      puVar4 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)bVar2 * 8 + 0x20);
    }
    else {
      puVar4 = &DAT_0407ebb1;
    }
    FUN_0071b954(&local_88,"%s_%s",param_1[1],puVar4);
    puVar1 = PTR_DAT_04bb2718;
    local_98 = PTR_DAT_04bb2020 + 0x10;
    pcStack_90 = "STR_Favorite";
    FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),&local_98);
    puVar4 = (undefined8 *)FUN_03d53db0(*(undefined8 *)(*(long *)puVar1 + 0x408),&local_98);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)(local_88 + 0x18))(&local_88);
      iVar3 = FUN_038f40b0(*puVar4,local_80);
      if (-1 < iVar3) {
        if (bVar2 < 8) {
          puVar4 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)bVar2 * 8 + 0x20);
        }
        else {
          puVar4 = &DAT_0407ebb1;
        }
        FUN_038d13f0(param_1,&DAT_040a677f,puVar4);
      }
    }
  }
  return;
}

