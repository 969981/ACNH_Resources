
/* WARNING: Removing unreachable block (ram,0x02d0a050) */
/* WARNING: Removing unreachable block (ram,0x02d0a034) */

undefined8 FUN_02d09fd4(long param_1,undefined4 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_04bb43c0;
  piVar1 = (int *)(param_1 + 0x927fc);
  if (*piVar1 != 2) {
    return 1;
  }
  if (*piVar1 != 2) {
    return 1;
  }
  if (*piVar1 == 2) {
    local_48 = *(undefined4 *)(param_1 + 0x92820);
    uStack_44 = *(undefined4 *)(param_1 + 0x92824);
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar2 == 0) {
LAB_02d0a0b0:
      uVar3 = 4;
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((*(uint *)(lVar6 + 0x1d8) <= uVar3) ||
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02d0a0b0;
      uVar3 = 3;
    }
    if (uVar3 < 10) {
      puVar5 = (undefined4 *)(param_1 + 0x92808) + (ulong)uVar3 * 2;
      if (9 < uVar3) {
        puVar5 = (undefined4 *)(param_1 + 0x92808);
      }
      goto LAB_02d0a0e4;
    }
  }
  puVar5 = (undefined4 *)&DAT_05586008;
LAB_02d0a0e4:
  local_48 = *puVar5;
  uStack_44 = puVar5[1];
  uVar4 = FUN_0277d7b4(param_3,&local_48);
  if ((uVar4 & 1) == 0) {
    return 1;
  }
  *param_2 = 6;
  return 0;
}

