
void FUN_01d59b64(long param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined5 uStack_9d;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (*(char *)(param_1 + 0xab2) == '\0') {
    *(undefined8 *)(param_1 + 0x240) = 0x17;
    local_9e = *(undefined1 *)(**(long **)PTR_DAT_04bb27d0 + 0x473);
    uStack_98 = 0;
    uStack_96 = 0;
    local_94 = 0;
    local_9f = 0;
    local_a0 = 0x17;
    if (DAT_0536e668 < 0) {
      return;
    }
    lVar3 = **(long **)PTR_DAT_04bb27d0;
    uVar4 = 3;
    iVar1 = DAT_0536e668;
  }
  else {
    cVar2 = *(char *)(*(long *)PTR_DAT_04bb47c8 + 0x1a0);
    uVar4 = *(undefined8 *)(*(long *)PTR_DAT_04bb47c8 + 0x188);
    *(undefined8 *)(param_1 + 0x240) = 0x26;
    local_9f = 2;
    if (cVar2 == '\0') {
      uVar4 = 0xffffffffffffffff;
    }
    local_9e = (undefined1)uVar4;
    uStack_9d = (undefined5)((ulong)uVar4 >> 8);
    uStack_98 = (undefined2)((ulong)uVar4 >> 0x30);
    local_a0 = 0x26;
    local_94 = CONCAT31(local_94._1_3_,*(undefined1 *)(*DAT_0537d558 + 0x473));
    if (*(int *)(PTR_DAT_04bc12f0 + 8) < 0) {
      return;
    }
    lVar3 = *DAT_0537d558;
    uVar4 = 0x12;
    iVar1 = *(int *)(PTR_DAT_04bc12f0 + 8);
  }
  local_12 = 0;
  local_14 = 0xff01;
  local_18 = 0;
  uStack_20 = 0;
  local_28 = 0;
  uStack_30 = 0;
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  local_90 = 0;
  FUN_01db1df0(lVar3 + 0x480,iVar1,&local_18,&local_a0,uVar4,0);
  return;
}

