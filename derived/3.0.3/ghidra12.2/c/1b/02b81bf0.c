
/* WARNING: Removing unreachable block (ram,0x02b81d50) */
/* WARNING: Removing unreachable block (ram,0x02b81d60) */

void FUN_02b81bf0(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  uVar2 = *(undefined4 *)(param_1 + 0x174);
  if (*(uint *)(param_1 + 0x550) == 0x1f) {
    FUN_02b93150(param_2,uVar2);
  }
  else {
    if ((*(uint *)(param_1 + 0x550) & 0xfffffffe) != 0x1a) {
      return;
    }
    if ((*(int *)(param_2 + 0xc) != 0) &&
       ((((*(int *)(param_2 + 0xc) != 0 && (*(int *)(param_2 + 0xc) == 0x1a)) &&
         ((*(byte *)(param_2 + 8) & 1) == 0)) ||
        (((*(int *)(param_2 + 0xc) != 0 && (*(int *)(param_2 + 0xc) == 0x1b)) &&
         ((*(byte *)(param_2 + 8) & 1) == 0)))))) {
      puVar4 = &DAT_05636dd8;
      if (*(long *)(DAT_0519d040 + 0x1f8) != 0) {
        puVar4 = (undefined8 *)(*(long *)(DAT_0519d040 + 0x1f8) + 0x148);
      }
      FUN_02a59660(puVar4,param_2,uVar2);
    }
  }
  FUN_02b5df60(param_1 + 0x558,param_2);
  *(undefined1 *)(param_1 + 0xc78) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc7c) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xc88) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0xc8c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0xc90) = *(undefined4 *)(param_2 + 0x20);
  lVar1 = DAT_05635578;
  *(undefined2 *)(param_1 + 0xc94) = *(undefined2 *)(param_2 + 0x24);
  lVar1 = lVar1 + 0x26e8;
  iVar3 = *(int *)(param_1 + 0x550);
  if (iVar3 == 0x1a) {
    if (DAT_05aed670 == 0) {
      puVar4 = &DAT_055c04a0;
    }
    else {
      puVar4 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar4 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar3 = FUN_006bd550(*puVar4,0);
        puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          puVar4 = &DAT_055c04a0;
        }
      }
    }
    FUN_02b3aef0(lVar1,uVar2,*(undefined4 *)(puVar4 + 7));
    return;
  }
  if (iVar3 == 0x1b) {
    if (DAT_05aed670 == 0) {
      puVar4 = &DAT_055c04a0;
    }
    else {
      puVar4 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar4 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar3 = FUN_006bd550(*puVar4,0);
        puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          puVar4 = &DAT_055c04a0;
        }
      }
    }
    FUN_02b3b680(lVar1,uVar2,*(undefined4 *)(puVar4 + 7));
    return;
  }
  if (iVar3 != 0x1f) {
    return;
  }
  if (DAT_05aed670 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  FUN_02b3a450(lVar1,uVar2,*(undefined4 *)(puVar4 + 7));
  return;
}

