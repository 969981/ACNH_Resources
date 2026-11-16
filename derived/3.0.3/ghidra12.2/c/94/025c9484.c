
void FUN_025c9484(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *local_50;
  char *pcStack_48;
  undefined8 local_3c;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    local_3c = 0xffffffff00000000;
    uVar1 = FUN_01811ff0(*param_2,&local_3c);
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      lVar2 = nn::prepo::Struct::GetBuffer();
      if (lVar2 != 0) {
        nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
      }
      lVar3 = *(long *)(param_1 + 0x30);
      lVar2 = nn::prepo::Struct::GetBuffer();
      if (lVar2 != 0) {
        nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
      }
      lVar3 = *(long *)(param_1 + 0x30);
      lVar2 = nn::prepo::Struct::GetBuffer();
      if (lVar2 != 0) {
        nn::prepo::Struct::Add((char *)(lVar3 + 8),0x4097987);
      }
      lVar3 = *(long *)(param_1 + 0x30);
      lVar2 = nn::prepo::Struct::GetBuffer();
      if (lVar2 != 0) {
        nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
      }
      lVar3 = *(long *)(param_1 + 0x30);
      lVar2 = nn::prepo::Struct::GetBuffer();
      if (lVar2 != 0) {
        nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
      }
      lVar3 = *(long *)(param_1 + 0x30);
      lVar2 = nn::prepo::Struct::GetBuffer();
      if (lVar2 != 0) {
        nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
      }
      lVar3 = *(long *)(param_1 + 0x30);
      lVar2 = nn::prepo::Struct::GetBuffer();
      if (lVar2 != 0) {
        nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
      }
      lVar3 = *(long *)(param_1 + 0x30);
      lVar2 = nn::prepo::Struct::GetBuffer();
      if (lVar2 != 0) {
        nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
      }
      lVar3 = *(long *)(param_1 + 0x30);
      lVar2 = nn::prepo::Struct::GetBuffer();
      if (lVar2 != 0) {
        nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
      }
      lVar3 = *(long *)(param_1 + 0x30);
      lVar2 = nn::prepo::Struct::GetBuffer();
      if (lVar2 != 0) {
        nn::prepo::Struct::Add((char *)(lVar3 + 8),0x40ac557);
      }
      nn::prepo::Struct::GetSize();
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "Interia";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605cc0(*(long *)(param_1 + 8),&local_50,*(undefined8 *)(param_1 + 0x30));
      }
    }
  }
  return;
}

