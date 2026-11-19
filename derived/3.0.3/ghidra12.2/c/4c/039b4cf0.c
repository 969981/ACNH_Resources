
void FUN_039b4cf0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *__ptr;
  
  puVar4 = PTR_DAT_04bbd578;
  *param_1 = (long)&PTR_FUN_04b6a660;
  puVar1 = puVar4 + 0x10;
  param_1[0xba35] = (long)puVar1;
  param_1[0xba27] = (long)puVar1;
  param_1[0xba19] = (long)puVar1;
  param_1[0xb9e1] = (long)puVar1;
  param_1[0xb9d3] = (long)puVar1;
  param_1[0xb9cf] = (long)puVar1;
  param_1[0xb9cb] = (long)puVar1;
  param_1[0xb9c7] = (long)puVar1;
  param_1[0xba0b] = (long)puVar1;
  param_1[0xb9fd] = (long)puVar1;
  param_1[0xb9ef] = (long)puVar1;
  param_1[0xb9c3] = (long)puVar1;
  param_1[0xb9bf] = (long)puVar1;
  param_1[0xb9bb] = (long)puVar1;
  param_1[0xb9b7] = (long)puVar1;
  param_1[0xb9b3] = (long)puVar1;
  param_1[0xb9af] = (long)puVar1;
  puVar5 = PTR_DAT_04bd1068;
  puVar2 = PTR_DAT_04bd1068 + 0x10;
  param_1[0xb9ab] = (long)puVar1;
  puVar3 = PTR_DAT_04bd1070 + 0x10;
  param_1[0xb9a5] = (long)puVar2;
  param_1[0xb96b] = (long)puVar3;
  FUN_039b4ed4(param_1 + 0x9b);
  *param_1 = (long)(PTR_DAT_04bd15c8 + 0x10);
  plVar7 = (long *)param_1[0x96];
  if (plVar7 != (long *)0x0) {
    __ptr = plVar7 + -1;
    lVar8 = *__ptr;
    if (lVar8 != 0) {
      plVar9 = plVar7 + lVar8 * 0x22;
      uVar10 = lVar8 * 0x110 - 0x110;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar10;
      if ((SUB164(auVar6 * ZEXT816(0xf0f0f0f0f0f0f0f1),8) >> 8 & 1) == 0) {
        plVar9[-0xe] = (long)(puVar4 + 0x10);
        plVar9[-0x1c] = (long)(puVar4 + 0x10);
        plVar9 = plVar9 + -0x22;
        *plVar9 = (long)(puVar5 + 0x10);
      }
      if (0x10f < uVar10) {
        puVar4 = puVar4 + 0x10;
        puVar5 = puVar5 + 0x10;
        do {
          plVar9[-0xe] = (long)puVar4;
          plVar12 = plVar9 + -0x3e;
          plVar9[-0x1c] = (long)puVar4;
          plVar9[-0x22] = (long)puVar5;
          plVar11 = plVar9 + -0x30;
          plVar9 = plVar9 + -0x44;
          *plVar11 = (long)puVar4;
          *plVar9 = (long)puVar5;
          *plVar12 = (long)puVar4;
        } while (plVar9 != plVar7);
      }
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,__ptr);
      }
    }
    param_1[0x96] = 0;
    *(undefined4 *)(param_1 + 0x95) = 0;
  }
  param_1[0x5b] = (long)puVar3;
  param_1[0x57] = (long)puVar1;
  param_1[0x53] = (long)puVar1;
  param_1[0x4f] = (long)puVar1;
  param_1[0x41] = (long)puVar1;
  param_1[0x3b] = (long)puVar2;
  param_1[1] = (long)puVar3;
  return;
}

