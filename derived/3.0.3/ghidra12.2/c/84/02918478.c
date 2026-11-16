
void FUN_02918478(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 local_24;
  
  uVar1 = *param_3;
  if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0))
  {
    if (DAT_05aed670 == 0) {
      puVar3 = &DAT_055c04a0;
    }
    else {
      puVar3 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar3,0);
        puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar3 = &DAT_055c04a0;
        }
      }
    }
    DAT_055c1144 = *(undefined4 *)(puVar3 + 7);
    FUN_0292e870(&local_24,*param_2);
    DAT_055c1158 = local_24;
    DAT_055c1148 = *param_1;
    DAT_055c114c = param_1[1];
    DAT_055c1150 = param_1[2];
    DAT_055c115c = 0;
    DAT_055c115e = 0;
    DAT_055c1154 = uVar1;
  }
  return;
}

