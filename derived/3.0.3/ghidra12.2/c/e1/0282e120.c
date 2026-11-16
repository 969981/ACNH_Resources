
void FUN_0282e120(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  int iStack_64;
  
  puVar3 = PTR_DAT_04bc0580;
  iVar8 = 0;
  puVar1 = PTR_DAT_04bc05b8 + 0x10;
  do {
    lVar7 = param_1 + 0x5190 + (long)iVar8 * 0x2b8;
    uVar4 = FUN_02828b58(lVar7);
    if ((uVar4 & 1) != 0) {
      uStack_7c = *(undefined4 *)(lVar7 + 0xc);
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 1;
      local_88 = puVar1;
      local_80 = param_2;
      iStack_64 = iVar8;
      lVar7 = FUN_01b42e7c(&local_88,*(undefined8 *)puVar3);
      if (lVar7 != 0) {
        plVar5 = *(long **)PTR_DAT_04bb4fa8;
        lVar6 = *plVar5;
        plVar2 = (long *)(*(int *)((long)plVar5 + 0x14) + lVar7);
        *plVar5 = (long)plVar2;
        *plVar2 = lVar6;
        plVar2[1] = (long)plVar5;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 8) = plVar2;
        }
        *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x18);
  return;
}

