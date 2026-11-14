
undefined8
FUN_0153eb30(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,long param_5
            ,int param_6,int param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  undefined1 auStack_4c [12];
  
  puVar2 = (undefined8 *)PTR_DAT_04bc3a80;
  puVar3 = PTR_DAT_04bb5d40;
  uVar7 = 0;
  do {
    uVar6 = (uint)uVar7;
    piVar1 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar7 * 4);
    if (0x38 < uVar6) {
      piVar1 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar1 == param_7) goto LAB_0153eb9c;
    uVar9 = 0x39;
    if ((int)uVar6 < 0x39) {
      uVar9 = uVar6 + 1;
    }
    uVar7 = (ulong)uVar9;
  } while (uVar9 != 0x39);
  uVar6 = 0;
LAB_0153eb9c:
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == param_7) || (uVar6 != 0)) {
    *(undefined4 *)(param_4 + 8) = *(undefined4 *)(PTR_DAT_04bb5d40 + 8);
    *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(puVar3 + 0xc);
    if (param_6 - 2U < 4) {
      FUN_0153ecc4(auStack_4c,param_6,param_7);
      lVar8 = *(long *)PTR_DAT_04bb2720;
      if (lVar8 == 0) {
        puVar5 = &DAT_055c04a0;
      }
      else {
        puVar5 = &DAT_055c04a0;
        if (*(long *)(lVar8 + 0x330) != 0) {
          puVar5 = (undefined8 *)
                   (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                             (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
          iVar4 = FUN_006bd550(*puVar5,0);
          if (iVar4 != 0x758f7eaf) {
            puVar2 = &DAT_055c04a0;
          }
          puVar5 = puVar2;
        }
      }
      fVar10 = (float)FUN_0153e900(auStack_4c,param_6,*(undefined4 *)(puVar5 + 7));
      iVar4 = *(int *)(param_5 + 0xc);
      *(uint *)(param_4 + 8) =
           (*(int *)(param_5 + 8) - (uint)(fVar10 < 0.0)) + (int)((float)(int)fVar10 / 5.0);
      *(uint *)(param_4 + 0xc) = (iVar4 - (uint)(param_3 < 0.0)) + (int)((float)(int)param_3 / 5.0);
      return 1;
    }
  }
  return 0;
}

