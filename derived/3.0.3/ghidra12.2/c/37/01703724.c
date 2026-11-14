
/* WARNING: Removing unreachable block (ram,0x0170379c) */

void FUN_01703724(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  uint *puVar8;
  
  piVar1 = (int *)(param_1 + 0x5ee4);
  if (*piVar1 != 5) {
    if (*(long *)(param_1 + 0x1138) == 0) {
      puVar5 = (uint *)FUN_0171ee68(0,&DAT_04c931a0);
    }
    else {
      uVar4 = FUN_03850a90(*(long *)(param_1 + 0x1138),0x16,0,*(uint *)(param_1 + 0x1698) >> 1 & 1);
      if ((uVar4 & 1) != 0) {
        return;
      }
      if (*(long *)(param_1 + 0x1138) == 0) {
        puVar5 = (uint *)FUN_0171ee68(&DAT_04c931a0);
      }
      else {
        puVar5 = (uint *)FUN_0171ee68(*(long *)(*(long *)(param_1 + 0x1138) + 0x88) + 0x60);
      }
    }
    if (((puVar5 != (uint *)0x0) && (uVar3 = *puVar5, uVar3 != 0)) &&
       (puVar5 != (uint *)(ulong)uVar3)) {
      puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      if (((*puVar8 != 0) && (uVar3 = puVar8[1], uVar3 != 0)) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar7 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar8 + lVar7 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar7 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar5 - lVar7) / (ulong)uVar3);
          }
          if (*puVar8 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05248f30) && (*(short *)(DAT_05248f38 + (long)(int)uVar2 * 2) == 6)) {
            *piVar1 = 5;
            if ((*(long *)(param_1 + 0x1138) != 0) &&
               ((lVar7 = *(long *)(*(long *)(param_1 + 0x1138) + 0x78), lVar7 != 0 &&
                (plVar6 = *(long **)(lVar7 + 0x48), plVar6 != (long *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x017038dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar6 + 0x28))(plVar6,&DAT_05248638,*piVar1);
              return;
            }
          }
        }
      }
    }
  }
  return;
}

