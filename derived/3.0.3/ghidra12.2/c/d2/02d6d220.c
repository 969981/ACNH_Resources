
void FUN_02d6d220(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  undefined1 auStack_26 [2];
  short local_24;
  undefined1 auStack_22 [2];
  
  puVar3 = PTR_DAT_04bb5ce0;
  puVar2 = PTR_DAT_04bb3170;
  puVar1 = PTR_DAT_04bb3170;
  if (*(long *)PTR_DAT_04bb5ce0 != 0) {
    puVar1 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe5c);
  }
  FUN_007ef010(&local_24,puVar1);
  if (local_24 != *(short *)puVar2) {
    lVar5 = *(long *)puVar3;
    if (lVar5 == 0) {
      bVar4 = true;
    }
    else {
      bVar4 = (*(byte *)(lVar5 + 0xedc) & 0x20) == 0;
    }
    FUN_007ef010(auStack_26,&local_24);
    lVar5 = *(long *)puVar3;
    if (lVar5 != 0) {
      FUN_007ef010(auStack_22,auStack_26);
      FUN_017ba494(lVar5,auStack_22,bVar4,1);
    }
  }
  return;
}

