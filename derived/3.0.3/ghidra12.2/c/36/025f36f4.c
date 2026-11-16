
void FUN_025f36f4(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_98 [56];
  
  plVar1 = (long *)(param_1 + 0x58);
  uVar4 = (ulong)param_2;
  plVar2 = plVar1 + param_2;
  if (2 < param_2) {
    uVar4 = 0;
    plVar2 = plVar1;
  }
  lVar5 = *plVar2;
  if (lVar5 != 0) {
    lVar3 = nn::prepo::Struct::GetBuffer();
    if (lVar3 != 0) {
      nn::prepo::Struct::Add((char *)(lVar5 + 8),0x40f5a54);
    }
    lVar3 = plVar1[uVar4];
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar3 + 8),0x4088245);
    }
    lVar3 = plVar1[uVar4];
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
    }
    lVar3 = plVar1[uVar4];
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
    }
    lVar3 = plVar1[uVar4];
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar3 + 8),0x40f03e2);
    }
    lVar3 = plVar1[uVar4];
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
    }
    lVar3 = plVar1[uVar4];
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
    }
    lVar3 = plVar1[uVar4];
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar3 + 8),0x40ffba4);
    }
    lVar3 = plVar1[uVar4];
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
    }
    lVar3 = plVar1[uVar4];
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar3 + 8),0x405dbf6);
    }
    lVar3 = plVar1[uVar4];
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
    }
    lVar3 = plVar1[uVar4];
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
    }
    lVar3 = plVar1[uVar4];
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
    }
    lVar3 = plVar1[uVar4];
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
    }
    lVar3 = plVar1[uVar4];
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
    }
    lVar3 = plVar1[uVar4];
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar3 + 8),true);
    }
    lVar3 = plVar1[uVar4];
    lVar5 = nn::prepo::Struct::GetBuffer();
    if (lVar5 != 0) {
      nn::prepo::Struct::Add((char *)(lVar3 + 8),0x40ac557);
    }
    FUN_006d8678(auStack_98,"RoomInfo%d",param_2);
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605cc0(*(long *)(param_1 + 8),auStack_98,plVar1[uVar4]);
    }
  }
  return;
}

