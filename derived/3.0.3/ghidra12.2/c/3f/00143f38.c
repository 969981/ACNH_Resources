
undefined8 FUN_00143f38(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR_PTR_04bcb710;
  if (*(long *)PTR_PTR_04bcb710 == 0x4836168) {
    if (param_1 != 0) {
      *(long *)PTR_PTR_04bcb710 = param_1;
      return 0;
    }
    if (PTR_DAT_04be2010 != (undefined *)0x0) {
      lVar3 = FUN_00144c18("CURL_SSL_BACKEND");
      puVar4 = PTR_DAT_04be2010;
      if ((lVar3 != 0) && (PTR_DAT_04be2010 != (undefined *)0x0)) {
        iVar2 = FUN_00144a90(lVar3,*(undefined8 *)(PTR_DAT_04be2010 + 8));
        ppuVar5 = &PTR_DAT_04be2010;
        while (iVar2 == 0) {
          if (ppuVar5[1] == (undefined *)0x0) {
            puVar4 = PTR_DAT_04be2010;
            goto LAB_00143fe8;
          }
          iVar2 = FUN_00144a90(lVar3,*(undefined8 *)(ppuVar5[1] + 8));
          ppuVar5 = ppuVar5 + 1;
        }
        puVar4 = *ppuVar5;
      }
LAB_00143fe8:
      *(undefined **)puVar1 = puVar4;
      thunk_FUN_00143300(lVar3);
      return 0;
    }
  }
  return 1;
}

