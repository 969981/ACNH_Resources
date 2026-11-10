
undefined1 * FUN_001447bc(void *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04be2010;
  if (*(undefined **)PTR_PTR_04bcb710 != (undefined *)0x4836168) {
    puVar2 = *(undefined **)PTR_PTR_04bcb710;
  }
  if (puVar2 != DAT_04c57ba0) {
    DAT_04c57ba0 = puVar2;
    if (PTR_DAT_04be2010 == (undefined *)0x0) {
      puVar4 = &DAT_04c57ba8;
    }
    else {
      puVar4 = &DAT_04c57ba8;
      puVar3 = PTR_DAT_04be2010;
      lVar7 = 0;
      do {
        puVar5 = puVar4;
        if (lVar7 != 0) {
          puVar3 = (&PTR_DAT_04be2010)[lVar7];
          puVar5 = puVar4 + 1;
          *puVar4 = 0x20;
        }
        puVar6 = puVar5;
        if (puVar2 != puVar3) {
          puVar2 = (&PTR_DAT_04be2010)[lVar7];
          puVar6 = puVar5 + 1;
          *puVar5 = 0x28;
        }
        lVar1 = (**(code **)(puVar2 + 0x30))(puVar6,(long)&DAT_04c57c70 - (long)puVar6);
        puVar2 = DAT_04c57ba0;
        puVar6 = puVar6 + lVar1;
        puVar4 = puVar6;
        if (DAT_04c57ba0 != (&PTR_DAT_04be2010)[lVar7]) {
          puVar4 = puVar6 + 1;
          *puVar6 = 0x29;
        }
        puVar3 = (undefined *)(&DAT_04be2018)[lVar7];
        lVar7 = lVar7 + 1;
      } while (puVar3 != (undefined *)0x0);
    }
    *puVar4 = 0;
    DAT_04c57c70 = puVar4 + -0x4c57ba8;
  }
  puVar4 = DAT_04c57c70;
  if (param_2 < DAT_04c57c70) {
    memcpy(param_1,&DAT_04c57ba8,(size_t)(DAT_04c57c70 + 1));
  }
  else {
    memcpy(param_1,&DAT_04c57ba8,(size_t)(param_2 + -1));
    *(undefined1 *)((long)param_1 + (long)(param_2 + -1)) = 0;
  }
  return puVar4;
}

