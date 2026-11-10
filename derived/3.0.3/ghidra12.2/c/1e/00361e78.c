
void FUN_00361e78(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_138;
  long local_130;
  long lStack_128;
  undefined8 local_120;
  undefined4 local_38;
  undefined1 local_34;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    return;
  }
  local_34 = 0;
  local_38 = 0x676d6974;
  if ((*(char *)(param_1 + 0x40) == '.') && (*(char *)(param_1 + 0x41) == '\0')) {
    nn::util::SNPrintf((char *)&local_138,0xff,"%s/%s",&local_38,"__Combined.bntx");
    iVar1 = FUN_003640a0(param_1 + 8,&local_138);
  }
  else {
    nn::util::SNPrintf((char *)&local_138,0xff,"%s/%s/%s",(char *)(param_1 + 0x40),&local_38,
                       "__Combined.bntx");
    iVar1 = FUN_003640a0(param_1 + 8,&local_138);
  }
  if (iVar1 != -1) {
    local_138 = 0;
    lVar2 = FUN_00364024(param_1 + 8,&local_138,iVar1);
    if (lVar2 != 0) {
      lVar2 = FUN_0034fb8c();
      *(long *)(param_1 + 0xb0) = lVar2;
      if ((lVar2 == 0) || (*(char *)(*(long *)(lVar2 + 0x40) + 0x110) != '\x01')) {
        if (*(long *)(param_1 + 0xd0) == 0) {
          lVar3 = *(long *)(lVar2 + 0x30);
          local_120 = 0;
          local_138 = CONCAT44(local_138._4_4_,0x21);
          lStack_128 = nn::util::BinaryBlockHeader::GetBlockSize();
          lStack_128 = lStack_128 + -0x10;
          local_138 = CONCAT44((int)lStack_128,(undefined4)local_138);
          local_130 = lVar3 + 0x10;
          FUN_003490c4(*(undefined8 *)(lVar2 + 0x40),param_2,&local_138);
          *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar2 + 0x40);
          *(undefined8 *)(lVar2 + 0x50) = 0;
          return;
        }
        lVar3 = *(long *)(param_1 + 200);
        lVar4 = *(long *)(param_1 + 0xd8);
        *(long *)(lVar2 + 0x48) = *(long *)(param_1 + 0xd0);
        *(long *)(lVar2 + 0x50) = *(long *)(lVar2 + 0x30) + (lVar4 - lVar3) + 0x10;
        return;
      }
    }
  }
  return;
}

