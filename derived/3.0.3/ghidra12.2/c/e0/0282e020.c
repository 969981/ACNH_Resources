
void FUN_0282e020(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  int iStack_64;
  
  puVar4 = PTR_DAT_04bc0580;
  puVar3 = PTR_DAT_04bb4fa8;
  iVar9 = 0;
  puVar1 = PTR_DAT_04bc05b8 + 0x10;
  do {
    lVar8 = param_1 + (long)iVar9 * 0x2b8;
    uVar5 = FUN_02828794(lVar8);
    if ((uVar5 & 1) != 0) {
      uStack_7c = *(undefined4 *)(lVar8 + 0xc);
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_88 = puVar1;
      local_80 = param_2;
      iStack_64 = iVar9;
      lVar8 = FUN_01b42e7c(&local_88,*(undefined8 *)puVar4);
      if (lVar8 != 0) {
        plVar6 = *(long **)puVar3;
        lVar7 = *plVar6;
        plVar2 = (long *)(*(int *)((long)plVar6 + 0x14) + lVar8);
        *plVar6 = (long)plVar2;
        *plVar2 = lVar7;
        plVar2[1] = (long)plVar6;
        if (lVar7 != 0) {
          *(long **)(lVar7 + 8) = plVar2;
        }
        *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x1e);
  return;
}

