
/* WARNING: Removing unreachable block (ram,0x02b39d70) */
/* WARNING: Removing unreachable block (ram,0x02b39d80) */
/* WARNING: Removing unreachable block (ram,0x02b39d8c) */

void FUN_02b39d3c(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) &&
       ((*(byte *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 8) & 1) == 0)) {
      if (DAT_05aed670 == 0) {
        puVar3 = &DAT_055c04a0;
      }
      else {
        puVar3 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar3 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar1 = FUN_006bd550(*puVar3,0);
          puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar1 != 0x758f7eaf) {
            puVar3 = &DAT_055c04a0;
          }
        }
      }
      FUN_02b3d3a0(param_1,*(undefined4 *)(puVar3 + 7));
      uVar2 = *(uint *)(param_1 + 8);
    }
    *(uint *)(param_1 + 8) = uVar2 & 0xfffffffe;
  }
  return;
}

