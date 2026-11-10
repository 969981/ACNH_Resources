
undefined8 FUN_00363730(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char acStack_250 [256];
  undefined8 local_150 [32];
  undefined4 local_38;
  undefined1 local_34;
  
  nn::util::SNPrintf(acStack_250,0x100,"ArchiveShader-%s.bnsh",param_2);
  lVar3 = *(long *)(param_1 + 0x10);
  do {
    if (lVar3 == param_1 + 8) {
      return 0;
    }
    lVar2 = *(long *)(lVar3 + 0x10);
    local_38 = 0x68736762;
    local_34 = 0;
    if ((*(char *)(lVar2 + 0x40) == '.') && (*(char *)(lVar2 + 0x41) == '\0')) {
      nn::util::SNPrintf((char *)local_150,0xff,"%s/%s",&local_38,acStack_250);
      iVar1 = FUN_003640a0(lVar2 + 8,local_150);
    }
    else {
      nn::util::SNPrintf((char *)local_150,0xff,"%s/%s/%s",(char *)(lVar2 + 0x40),&local_38,
                         acStack_250);
      iVar1 = FUN_003640a0(lVar2 + 8,local_150);
    }
    if (iVar1 != -1) {
      local_150[0] = 0;
      lVar2 = FUN_00364024(lVar2 + 8,local_150,iVar1);
      if (lVar2 != 0) {
        return *(undefined8 *)(lVar3 + 0x10);
      }
    }
    lVar3 = *(long *)(lVar3 + 8);
  } while( true );
}

