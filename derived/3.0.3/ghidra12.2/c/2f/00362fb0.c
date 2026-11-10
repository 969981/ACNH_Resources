
undefined8 FUN_00362fb0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 local_158 [32];
  undefined4 local_58;
  undefined1 local_54;
  
  lVar3 = *(long *)(param_1 + 0x10);
  do {
    if (lVar3 == param_1 + 8) {
      return 0;
    }
    lVar2 = *(long *)(lVar3 + 0x10);
    local_58 = 0x746e6f66;
    local_54 = 0;
    if ((*(char *)(lVar2 + 0x40) == '.') && (*(char *)(lVar2 + 0x41) == '\0')) {
      nn::util::SNPrintf((char *)local_158,0xff,"%s/%s",&local_58,param_2);
      iVar1 = FUN_003640a0(lVar2 + 8,local_158);
    }
    else {
      nn::util::SNPrintf((char *)local_158,0xff,"%s/%s/%s",(char *)(lVar2 + 0x40),&local_58,param_2)
      ;
      iVar1 = FUN_003640a0(lVar2 + 8,local_158);
    }
    if (iVar1 != -1) {
      local_158[0] = 0;
      lVar2 = FUN_00364024(lVar2 + 8,local_158,iVar1);
      if (lVar2 != 0) {
        return *(undefined8 *)(lVar3 + 0x10);
      }
    }
    lVar3 = *(long *)(lVar3 + 8);
  } while( true );
}

