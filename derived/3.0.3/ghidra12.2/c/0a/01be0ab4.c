
bool FUN_01be0ab4(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 local_14;
  
  lVar3 = *(long *)PTR_DAT_04bb28f8;
  uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  iVar2 = nn::ngc::ProfanityFilter::MaskProfanityWordsInText
                    ((int *)(lVar3 + 0x8828),(wchar16 *)&local_14,uVar1);
  *(undefined4 *)(param_1 + 0x20) = local_14;
  return iVar2 == 0;
}

