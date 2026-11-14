
void FUN_015e8f60(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(long *)PTR_DAT_04bb2720;
  if (lVar2 == 0) {
    puVar3 = &DAT_055c04a0;
  }
  else {
    puVar3 = &DAT_055c04a0;
    if (*(long *)(lVar2 + 0x330) != 0) {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar2 + 0x338));
      iVar1 = FUN_006bd550(*puVar3,0);
      puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar3 = &DAT_055c04a0;
      }
    }
  }
  *(bool *)(param_1 + 0x80) =
       *(int *)(puVar3 + 7) == 0x2b2a6204 || *(int *)(puVar3 + 7) == 0x55b5d9de;
  return;
}

