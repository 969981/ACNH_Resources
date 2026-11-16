
void FUN_0291960c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 local_24;
  
  uVar1 = *param_3;
  lVar3 = *(long *)PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar3 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  DAT_055c11a0 = *(undefined4 *)(puVar4 + 7);
  FUN_0292e870(&local_24,*param_2);
  DAT_055c11b4 = local_24;
  DAT_055c11a4 = *param_1;
  DAT_055c11a8 = param_1[1];
  DAT_055c11b0 = uVar1;
  DAT_055c11b8 = 0;
  DAT_055c11ba = 0;
  DAT_055c11ac = param_1[2];
  return;
}

