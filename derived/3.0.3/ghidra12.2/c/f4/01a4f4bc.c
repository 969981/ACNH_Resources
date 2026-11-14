
void FUN_01a4f4bc(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_049ffa38;
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
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(puVar4 + 7);
  bVar1 = FUN_017baf44();
  *(byte *)(param_1 + 2) = bVar1 & 1;
  return;
}

