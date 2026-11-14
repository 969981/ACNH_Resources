
bool FUN_01b311c0(long param_1,undefined4 param_2,ushort *param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 local_78;
  char *pcStack_70;
  undefined4 local_64;
  
  puVar4 = PTR_DAT_04bb2020;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "MailSend_25thAnniversary";
  local_64 = param_2;
  iVar5 = FUN_0274ce10(&local_64,&local_78);
  if (iVar5 == 0) {
    if (((DAT_04f292d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04f292d0), iVar6 != 0)) {
      FUN_00dd5f80(&DAT_04f292c0);
      __cxa_guard_release(&DAT_04f292d0);
    }
    if (0 < (int)DAT_04f292c0) {
      uVar7 = 0;
      do {
        if (*(int *)(DAT_04f292c8 + uVar7 * 4) == 0x51) goto LAB_01b3126c;
        uVar7 = uVar7 + 1;
      } while (DAT_04f292c0 != uVar7);
    }
    uVar7 = 0;
LAB_01b3126c:
    uVar2 = *param_3;
    uVar3 = param_3[1];
    bVar1 = *(byte *)((long)param_3 + 3);
    nn::time::IsValidDate((uint)uVar2,(uint)(byte)uVar3,(uint)bVar1);
    local_78 = (undefined *)0x52b;
    FUN_0277d4ac(&local_78);
    *(undefined1 *)(param_1 + 0x34) = 0;
    *(int *)(param_1 + 0x20) = (int)uVar7;
    *(undefined4 *)(param_1 + 0x24) = 0x10;
    *(undefined1 *)(param_1 + 0x28) = 0xf;
    *(undefined4 *)(param_1 + 8) = param_2;
    *(uint *)(param_1 + 0xc) = (uint)bVar1 << 0x18 | (uint)(byte)uVar3 << 0x10 | (uint)uVar2;
    *(undefined1 *)(param_1 + 0x35) = 1;
    *(undefined4 *)(param_1 + 0x2c) = (undefined4)local_78;
    *(undefined4 *)(param_1 + 0x30) = local_78._4_4_;
    if ((param_4 & 1) != 0) {
      local_78 = puVar4 + 0x10;
      pcStack_70 = "MailSend_25thAnniversary";
      FUN_0274d104(&local_64,&local_78,1);
    }
  }
  return iVar5 == 0;
}

