
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023e77f8(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  long lVar5;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined7 uStack_48;
  undefined4 local_41;
  undefined4 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  byte local_24;
  undefined1 local_23;
  
  local_34 = *param_1;
  local_23 = 0;
  local_2c = *(undefined4 *)(param_1 + 1);
  local_28 = *(undefined4 *)((long)param_1 + 0xc);
  bVar1 = *(byte *)(param_1 + 2);
  local_24 = 0xff;
  if (bVar1 < 8) {
    local_24 = bVar1;
  }
  lVar5 = *(long *)PTR_DAT_04bb4718;
  if (lVar5 == 0 || 7 < bVar1) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f0c70);
      if (iVar3 != 0) {
        DAT_054f0c6c = '\0';
        _DAT_054f0c44 = 0;
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
      psVar4 = &DAT_054f0c08;
      cVar2 = DAT_054f0c6c;
    }
    else {
      psVar4 = &DAT_054f0c08;
      cVar2 = DAT_054f0c6c;
    }
  }
  else {
    lVar5 = lVar5 + (ulong)(uint)bVar1 * 0xd0 +
            (ulong)(*(uint *)(lVar5 + (ulong)bVar1 * 4 + 0xd68) & 1) * 0x68;
    psVar4 = (short *)(lVar5 + 0x6e8);
    cVar2 = *(char *)(lVar5 + 0x74c);
  }
  if ((cVar2 == '\0') || (*psVar4 != *(short *)PTR_DAT_04bb6298)) {
    local_23 = false;
  }
  else {
    local_23 = *(int *)(psVar4 + 0x30) == 7;
  }
  local_3c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = PTR_DAT_04bb2010 + 0x10;
  local_41 = 0;
  uStack_58 = 0;
  local_68 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_64 = *(undefined4 *)((long)PTR_DAT_04bb37e0 + 4);
  FUN_01505a20(&local_68,&local_34);
  return;
}

