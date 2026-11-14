
bool FUN_017b8748(uint param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04bb2720;
  lVar6 = *(long *)PTR_DAT_04bb2720;
  iVar5 = 0;
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x330) == 0) {
      iVar5 = 0;
    }
    else {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar6 + 0x338));
      iVar3 = FUN_006bd550(*puVar4,0);
      iVar5 = 0;
      if (((iVar3 == 0x758f7eaf) && (iVar5 = 0, *(long *)puVar2 != 0)) &&
         (lVar6 = *(long *)(*(long *)puVar2 + 0x330), iVar5 = 0, lVar6 != 0)) {
        iVar5 = *(int *)(lVar6 + 0x244);
      }
    }
  }
  piVar1 = (int *)((long)(PTR_DAT_04bbe4b0 + 8) + (ulong)param_1 * 4);
  if (0x32 < param_1) {
    piVar1 = (int *)(PTR_DAT_04bbe4b0 + 8);
  }
  return *piVar1 == iVar5;
}

