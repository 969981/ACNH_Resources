
void FUN_01501500(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  iVar1 = *param_2;
  if (iVar1 - 2U < 4) {
    lVar3 = *(long *)PTR_DAT_04bb2720;
    if (lVar3 == 0) {
      puVar4 = &DAT_055c04a0;
    }
    else {
      puVar4 = &DAT_055c04a0;
      if (*(long *)(lVar3 + 0x330) != 0) {
        puVar4 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (*param_1,param_1[1],param_1[2],DAT_05aed668,
                            *(undefined4 *)(lVar3 + 0x338));
        iVar2 = FUN_006bd550(*puVar4,0);
        puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar4 = &DAT_055c04a0;
        }
      }
    }
    FUN_0153e6b0(param_1,iVar1,*(undefined4 *)(puVar4 + 7));
  }
  return;
}

