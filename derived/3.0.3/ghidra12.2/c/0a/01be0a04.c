
bool FUN_01be0a04(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int local_14;
  
  lVar3 = *(long *)PTR_DAT_04bb28f8;
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  iVar2 = nn::ngc::ProfanityFilter::MaskProfanityWordsInText
                    ((int *)(lVar3 + 0x8828),(wchar16 *)&local_14,uVar1);
  *(bool *)(param_1 + 0x10) = local_14 != 0;
  return iVar2 == 0;
}

