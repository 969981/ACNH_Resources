
void FUN_025ad600(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_025ae670(param_1,0,1);
    lVar2 = *(long *)(param_1 + 0x30);
    lVar1 = nn::prepo::Struct::GetBuffer();
    if (lVar1 != 0) {
      nn::prepo::Struct::Add((char *)(lVar2 + 8),0x40cb101);
    }
    FUN_025ae670(param_1,2,3);
    lVar2 = *(long *)(param_1 + 0x30);
    lVar1 = nn::prepo::Struct::GetBuffer();
    if (lVar1 != 0) {
      nn::prepo::Struct::Add((char *)(lVar2 + 8),0x4072ed7);
    }
    FUN_025ae670(param_1,4,5);
    lVar2 = *(long *)(param_1 + 0x30);
    lVar1 = nn::prepo::Struct::GetBuffer();
    if (lVar1 != 0) {
      nn::prepo::Struct::Add((char *)(lVar2 + 8),0x4072ee8);
    }
    FUN_025ae670(param_1,0xe,0xf);
    lVar2 = *(long *)(param_1 + 0x30);
    lVar1 = nn::prepo::Struct::GetBuffer();
    if (lVar1 != 0) {
      nn::prepo::Struct::Add((char *)(lVar2 + 8),0x408d812);
    }
    FUN_025ae670(param_1,0x10,0x11);
    lVar2 = *(long *)(param_1 + 0x30);
    lVar1 = nn::prepo::Struct::GetBuffer();
    if (lVar1 != 0) {
      nn::prepo::Struct::Add((char *)(lVar2 + 8),0x405db5d);
    }
    FUN_025ae670(param_1,6,7);
    lVar2 = *(long *)(param_1 + 0x30);
    lVar1 = nn::prepo::Struct::GetBuffer();
    if (lVar1 != 0) {
      nn::prepo::Struct::Add((char *)(lVar2 + 8),0x40e02f5);
    }
    FUN_025ae670(param_1,8,9);
    lVar2 = *(long *)(param_1 + 0x30);
    lVar1 = nn::prepo::Struct::GetBuffer();
    if (lVar1 != 0) {
      nn::prepo::Struct::Add((char *)(lVar2 + 8),0x40f0352);
    }
    FUN_025ae670(param_1,0x12,0x13);
    lVar2 = *(long *)(param_1 + 0x30);
    lVar1 = nn::prepo::Struct::GetBuffer();
    if (lVar1 != 0) {
      nn::prepo::Struct::Add((char *)(lVar2 + 8),0x40c10d8);
    }
    FUN_025ae670(param_1,0x14,0x15);
    lVar2 = *(long *)(param_1 + 0x30);
    lVar1 = nn::prepo::Struct::GetBuffer();
    if (lVar1 != 0) {
      nn::prepo::Struct::Add((char *)(lVar2 + 8),0x40d0495);
    }
    FUN_025ae670(param_1,10,0xb);
    lVar2 = *(long *)(param_1 + 0x30);
    lVar1 = nn::prepo::Struct::GetBuffer();
    if (lVar1 != 0) {
      nn::prepo::Struct::Add((char *)(lVar2 + 8),0x40ea9d4);
    }
    FUN_025ae670(param_1,0xc,0xd);
    lVar2 = *(long *)(param_1 + 0x30);
    lVar1 = nn::prepo::Struct::GetBuffer();
    if (lVar1 != 0) {
      nn::prepo::Struct::Add((char *)(lVar2 + 8),0x40ac537);
    }
    FUN_025ae670(param_1,0x16,0x17);
    lVar2 = *(long *)(param_1 + 0x30);
    lVar1 = nn::prepo::Struct::GetBuffer();
    if (lVar1 != 0) {
      nn::prepo::Struct::Add((char *)(lVar2 + 8),0x40f0367);
    }
    FUN_025ae670(param_1,0x18,0x19);
    lVar2 = *(long *)(param_1 + 0x30);
    lVar1 = nn::prepo::Struct::GetBuffer();
    if (lVar1 != 0) {
      nn::prepo::Struct::Add((char *)(lVar2 + 8),0x40d04ab);
    }
    nn::prepo::Struct::GetSize();
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "SendChat";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605cc0(*(long *)(param_1 + 8),&local_40,*(undefined8 *)(param_1 + 0x30));
    }
  }
  return;
}

