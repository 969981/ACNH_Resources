
void FUN_004dca40(long param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined8 local_48;
  
  lVar7 = *(long *)(param_1 + 8);
  uVar2 = FUN_00428440(lVar7);
  puVar1 = PTR_DAT_048607b8;
  if ((lVar7 != 0) && ((uVar2 & 0x1f) == 7)) {
    do {
      auVar9 = FUN_00428010(lVar7);
      puVar8 = auVar9._0_8_;
      uVar2 = auVar9._8_8_ - (long)puVar8;
      if (0 < (int)(uVar2 >> 3)) {
        uVar2 = uVar2 >> 3 & 0xffffffff;
        do {
          local_48 = *puVar8;
          uVar3 = FUN_004290b0(&local_48);
          if (((uVar3 & 1) == 0) && (lVar4 = FUN_00427b40(&local_48), lVar4 != 0)) {
            uVar5 = FUN_00427b40(puVar8);
            uVar6 = *(uint *)(param_2 + 1);
            if (uVar6 == (*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) {
              FUN_00426990(puVar1,param_2,8);
              uVar6 = *(uint *)(param_2 + 1);
            }
            *(uint *)(param_2 + 1) = uVar6 + 1;
            *(undefined8 *)(*param_2 + (long)(int)uVar6 * 8) = uVar5;
          }
          puVar8 = puVar8 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      lVar7 = FUN_00427d30(lVar7);
    } while (lVar7 != 0);
  }
  return;
}

