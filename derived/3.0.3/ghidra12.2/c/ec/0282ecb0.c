
void FUN_0282ecb0(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  int iStack_64;
  
  FUN_0282d76c();
  FUN_0282db54(param_1,param_2,1);
  FUN_0282db54(param_1,param_2,3);
  uVar6 = 0;
  iVar11 = 0;
  do {
    uVar5 = FUN_02828794(param_1 + (long)iVar11 * 0x2b8);
    puVar4 = PTR_DAT_04bc05b8;
    puVar3 = PTR_DAT_04bc0580;
    iVar11 = iVar11 + 1;
    uVar6 = uVar6 + ((uVar5 ^ 0xffffffff) & 1);
  } while (iVar11 != 0x1e);
  if (uVar6 < 2) {
    iVar11 = 0;
    puVar1 = PTR_DAT_04bc05b8 + 0x10;
    do {
      lVar10 = param_1 + (long)iVar11 * 0x2b8;
      uVar7 = FUN_02828794(lVar10);
      if ((uVar7 & 1) != 0) {
        uStack_7c = *(undefined4 *)(lVar10 + 0xc);
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        local_88 = puVar1;
        local_80 = param_2;
        iStack_64 = iVar11;
        lVar10 = FUN_01b42e7c(&local_88,*(undefined8 *)puVar3);
        if (lVar10 != 0) {
          plVar8 = *(long **)PTR_DAT_04bb4fa8;
          lVar9 = *plVar8;
          plVar2 = (long *)(*(int *)((long)plVar8 + 0x14) + lVar10);
          *plVar8 = (long)plVar2;
          *plVar2 = lVar9;
          plVar2[1] = (long)plVar8;
          if (lVar9 != 0) {
            *(long **)(lVar9 + 8) = plVar2;
          }
          *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != 0x1e);
  }
  uVar6 = FUN_0282e284(param_1);
  if (uVar6 < 2) {
    iVar11 = 0;
    do {
      lVar10 = param_1 + 0x5190 + (long)iVar11 * 0x2b8;
      uVar7 = FUN_02828b58(lVar10);
      if ((uVar7 & 1) != 0) {
        uStack_7c = *(undefined4 *)(lVar10 + 0xc);
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 1;
        local_88 = puVar4 + 0x10;
        local_80 = param_2;
        iStack_64 = iVar11;
        lVar10 = FUN_01b42e7c(&local_88,*(undefined8 *)puVar3);
        if (lVar10 != 0) {
          plVar8 = *(long **)PTR_DAT_04bb4fa8;
          lVar9 = *plVar8;
          plVar2 = (long *)(*(int *)((long)plVar8 + 0x14) + lVar10);
          *plVar8 = (long)plVar2;
          *plVar2 = lVar9;
          plVar2[1] = (long)plVar8;
          if (lVar9 != 0) {
            *(long **)(lVar9 + 8) = plVar2;
          }
          *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != 0x18);
  }
  return;
}

