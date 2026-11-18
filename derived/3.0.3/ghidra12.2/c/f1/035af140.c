
/* WARNING: Removing unreachable block (ram,0x035af218) */
/* WARNING: Removing unreachable block (ram,0x035af228) */
/* WARNING: Removing unreachable block (ram,0x035af234) */

void FUN_035af140(long param_1)

{
  int iVar1;
  uint uVar2;
  size_t __size;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar10;
  undefined8 *puVar9;
  undefined *local_90;
  char *pcStack_88;
  int local_7c;
  undefined1 auStack_78 [4];
  uint local_74;
  uint local_64 [2];
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  
  puVar3 = PTR_DAT_04bb3518;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  lVar8 = *(long *)(*(long *)puVar3 + 0x108);
  if (lVar8 != 0) {
    local_90 = PTR_DAT_04bb2020 + 0x10;
    pcStack_88 = "WideRoadSearch";
    FUN_03c53c60(auStack_78,&local_90);
    local_64[0] = local_74;
    local_7c = 1 << (ulong)(local_74 & 0x1f);
    FUN_03c53c60(local_64,&local_90);
    iVar4 = FUN_03c54ed0(lVar8,&local_90,local_54,local_64[0],local_5c,&local_7c,uStack_58,0);
    *(int *)(param_1 + 0xb4) = iVar4;
    if (iVar4 != -1) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(long *)(param_1 + 0xd0) = param_1;
      *(undefined1 **)(param_1 + 0xd8) = &LAB_035afa50;
    }
  }
  local_64[0] = 0;
  lVar8 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if ((lVar8 != 0) && (plVar5 = *(long **)(param_1 + 0xe8), plVar5 != (long *)0x0)) {
    iVar4 = (*(int *)(lVar8 + 0x58) - *(int *)(lVar8 + 0x48)) + 1;
    iVar1 = (*(int *)(lVar8 + 0x5c) - *(int *)(lVar8 + 0x4c)) + 1;
    uVar2 = iVar1 * iVar4;
    if (0 < (int)uVar2) {
      __size = (ulong)uVar2 << 3;
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        puVar6 = malloc(__size);
      }
      else {
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
      }
      if (puVar6 != (undefined8 *)0x0) {
        puVar9 = puVar6;
        do {
          puVar10 = puVar9 + 1;
          *puVar9 = 0xfffe;
          FUN_0277d4ac(puVar9);
          puVar9 = puVar10;
        } while (puVar10 != puVar6 + uVar2);
        *(uint *)(param_1 + 0x68) = uVar2;
        *(undefined8 **)(param_1 + 0x70) = puVar6;
      }
    }
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 100) = iVar1;
  }
  if ((*(long *)PTR_DAT_04bb27c8 != 0) && (*(long *)(param_1 + 0x88) == 0)) {
    uVar7 = FUN_00948d0c(*(long *)PTR_DAT_04bb27c8 + 0x28,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0x88) = uVar7;
  }
  return;
}

