
int _init(EVP_PKEY_CTX *ctx)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  
  if ((DAT_04be2000 == 0) &&
     (DAT_04be2000 = end(PTR_DAT_04bb1db8,PTR_DAT_04bb1dc0,PTR__DYNAMIC_04bb1dc8,
                         PTR__DYNAMIC_04bb1dd0,PTR_DAT_04bb1dd8,DAT_04bb1de0,PTR__DYNAMIC_04bb1df0,
                         PTR__DYNAMIC_04bb1df8,PTR_DAT_04bb1e08,DAT_04bb1e00,
                         PTR___DT_PLTGOT_04bb1db0,PTR_DAT_04bb1de8,PTR___DT_RELA_04bb1da8,
                         PTR___DT_JMPREL_04bb1da0,PTR_DAT_04bb1d98,PTR_DAT_04bb1d90,
                         PTR___DT_JMPREL_04bb1d88,PTR___DT_RELR_04bb1d80,PTR_DAT_04bb1d78,
                         PTR_DAT_04bb1d70,PTR__DYNAMIC_04bb1d68), DAT_04be2000 == 1)) {
    return 1;
  }
  iVar2 = nn::ro::ProtectRelro
                    (PTR___DT_INIT_ARRAY_04bb1e10,PTR_PTR_04bb1e18,PTR_DAT_04bb1e20,PTR_DAT_04bb1e28
                     ,PTR_DAT_04bb1e30);
  puVar1 = PTR___DT_FINI_ARRAY_04bb1e38;
  if (PTR___DT_INIT_ARRAY_04bb1e40 < PTR___DT_FINI_ARRAY_04bb1e38) {
    puVar3 = (undefined8 *)PTR___DT_INIT_ARRAY_04bb1e40;
    do {
      puVar4 = puVar3 + 1;
      iVar2 = (*(code *)*puVar3)();
      puVar3 = puVar4;
    } while (puVar4 < puVar1);
  }
  return iVar2;
}

