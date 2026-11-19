
undefined8
FUN_03b27800(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
            undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 local_68;
  
  lVar5 = *(long *)(param_1 + 0x30);
  while( true ) {
    if (lVar5 == param_1 + 0x28) {
      return 0;
    }
    lVar3 = lVar5 + 0x10;
    local_68 = 0;
    iVar1 = FUN_003640a0(lVar3,"bgsh/__ArchiveShader.bnsh");
    if ((((-1 < iVar1) && (lVar2 = FUN_00364024(lVar3,&local_68,iVar1), lVar2 != 0)) &&
        (local_68._4_4_ != 0)) &&
       (((iVar1 = FUN_003640a0(lVar3,"bgsh/__ArchiveShader.bushvt"), -1 < iVar1 &&
         (lVar3 = FUN_00364024(lVar3,&local_68,iVar1), lVar3 != 0)) &&
        ((local_68._4_4_ != 0 && (iVar1 = FUN_0038c040(lVar3,param_4,param_5,param_6), iVar1 != -1))
        )))) break;
    lVar5 = *(long *)(lVar5 + 8);
  }
  uVar4 = 3;
  if (param_4 == 0x53554243) {
    uVar4 = 4;
  }
  thunk_FUN_00385d30(param_2,param_3,lVar2,lVar3,0,0,0,uVar4);
  return 1;
}

