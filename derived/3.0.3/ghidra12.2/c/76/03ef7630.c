
void FUN_03ef7630(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *__ptr;
  
  puVar4 = PTR_DAT_04bd1070;
  *param_1 = (long)&PTR_FUN_04ba7470;
  puVar5 = PTR_DAT_04bd1068;
  puVar3 = PTR_DAT_04bbd578;
  lVar7 = param_1[0xea];
  if (lVar7 != 0) {
    __ptr = (long *)(lVar7 + -8);
    if (*__ptr != 0) {
      puVar1 = PTR_DAT_04bbd578 + 0x10;
      puVar2 = PTR_DAT_04bd1068 + 0x10;
      lVar8 = *__ptr * 0x140;
      do {
        plVar6 = (long *)(lVar7 + -0x88 + lVar8);
        lVar8 = lVar8 + -0x140;
        plVar6[0xc] = (long)puVar1;
        plVar6[8] = (long)puVar1;
        plVar6[4] = (long)puVar1;
        *plVar6 = (long)puVar1;
        plVar6[-4] = (long)puVar1;
        plVar6[-8] = (long)puVar1;
        plVar6[-0xe] = (long)puVar2;
        plVar6[-0x17] = (long)(puVar4 + 0x10);
      } while (lVar8 != 0);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
      }
    }
    param_1[0xea] = 0;
    *(undefined4 *)(param_1 + 0xe9) = 0;
  }
  puVar3 = puVar3 + 0x10;
  puVar4 = puVar4 + 0x10;
  param_1[0xdb] = (long)puVar3;
  param_1[0xd7] = (long)puVar3;
  param_1[0xd3] = (long)puVar3;
  param_1[0xcf] = (long)puVar3;
  param_1[0xcb] = (long)puVar3;
  param_1[199] = (long)puVar3;
  param_1[0xc3] = (long)puVar3;
  param_1[0xbf] = (long)puVar3;
  param_1[0xbb] = (long)puVar3;
  param_1[0xb7] = (long)puVar3;
  param_1[0xb3] = (long)puVar3;
  param_1[0xaf] = (long)puVar3;
  param_1[0xab] = (long)puVar3;
  param_1[0xa7] = (long)puVar3;
  param_1[0xa3] = (long)puVar3;
  param_1[0x9f] = (long)puVar3;
  param_1[0x9b] = (long)puVar3;
  param_1[0x97] = (long)puVar3;
  param_1[0x93] = (long)puVar3;
  param_1[0x8f] = (long)puVar3;
  param_1[0x8b] = (long)puVar3;
  param_1[0x87] = (long)puVar3;
  param_1[0x83] = (long)puVar3;
  param_1[0x7f] = (long)puVar3;
  param_1[0x7b] = (long)puVar3;
  param_1[0x77] = (long)puVar3;
  param_1[0x73] = (long)puVar3;
  param_1[0x6e] = (long)puVar3;
  param_1[0x69] = (long)puVar3;
  param_1[100] = (long)puVar3;
  param_1[0x5f] = (long)puVar3;
  param_1[0x5b] = (long)puVar3;
  param_1[0x57] = (long)puVar3;
  param_1[0x53] = (long)puVar3;
  param_1[0x4f] = (long)puVar3;
  param_1[0x4b] = (long)puVar3;
  param_1[0x47] = (long)puVar3;
  param_1[0x42] = (long)puVar3;
  param_1[0x3d] = (long)puVar3;
  param_1[0x39] = (long)puVar3;
  param_1[0x35] = (long)puVar3;
  param_1[0x31] = (long)puVar3;
  param_1[0x2c] = (long)puVar3;
  param_1[0x27] = (long)puVar3;
  param_1[0x22] = (long)puVar3;
  param_1[0x1d] = (long)puVar3;
  param_1[0x19] = (long)puVar3;
  param_1[0xf] = (long)puVar3;
  param_1[0xe0] = (long)puVar4;
  param_1[9] = (long)(puVar5 + 0x10);
  *param_1 = (long)puVar4;
  return;
}

