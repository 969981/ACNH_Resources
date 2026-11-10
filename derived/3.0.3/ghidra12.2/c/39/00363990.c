
undefined8 FUN_00363990(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 local_170 [32];
  undefined4 local_70;
  undefined1 local_6c;
  
  lVar7 = *(long *)(param_1 + 0x10);
  do {
    if (lVar7 == param_1 + 8) {
      return 0;
    }
    lVar4 = *(long *)(lVar7 + 0x10);
    local_70 = 0x68736762;
    local_6c = 0;
    pcVar5 = (char *)(lVar4 + 0x40);
    if ((*pcVar5 == '.') && (*(char *)(lVar4 + 0x41) == '\0')) {
      nn::util::SNPrintf((char *)local_170,0xff,"%s/%s",&local_70,"__ArchiveShader.bnsh");
      iVar1 = FUN_003640a0(lVar4 + 8,local_170);
    }
    else {
      nn::util::SNPrintf((char *)local_170,0xff,"%s/%s/%s",pcVar5,&local_70,"__ArchiveShader.bnsh");
      iVar1 = FUN_003640a0(lVar4 + 8,local_170);
    }
    if (iVar1 != -1) {
      lVar6 = lVar4 + 8;
      local_170[0] = 0;
      lVar3 = FUN_00364024(lVar6,local_170,iVar1);
      if (lVar3 != 0) {
        local_70 = 0x68736762;
        local_6c = 0;
        if ((*pcVar5 == '.') && (*(char *)(lVar4 + 0x41) == '\0')) {
          nn::util::SNPrintf((char *)local_170,0xff,"%s/%s",&local_70,"__ArchiveShader.bushvt");
          iVar1 = FUN_003640a0(lVar6,local_170);
          if (iVar1 != -1) goto LAB_003639f0;
LAB_00363ae0:
          iVar1 = FUN_0038c040(0,param_2,param_3,param_4);
        }
        else {
          nn::util::SNPrintf((char *)local_170,0xff,"%s/%s/%s",pcVar5,&local_70,
                             "__ArchiveShader.bushvt");
          iVar1 = FUN_003640a0(lVar6,local_170);
          if (iVar1 == -1) goto LAB_00363ae0;
LAB_003639f0:
          local_170[0] = 0;
          uVar2 = FUN_00364024(lVar6,local_170,iVar1);
          iVar1 = FUN_0038c040(uVar2,param_2,param_3,param_4);
        }
        if (iVar1 != -1) {
          return *(undefined8 *)(lVar7 + 0x10);
        }
      }
    }
    lVar7 = *(long *)(lVar7 + 8);
  } while( true );
}

