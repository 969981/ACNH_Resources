
undefined8 FUN_01b30ea0(long param_1,undefined4 param_2,ushort *param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_70;
  char *pcStack_68;
  undefined4 local_44;
  
  puVar4 = PTR_DAT_04bb2020;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "MailSendFlag_BundledEdition";
  local_44 = param_2;
  iVar5 = FUN_0274ce10(&local_44,&local_70);
  if ((iVar5 == 0) && (uVar6 = FUN_009b5a34(), (uVar6 & 1) != 0)) {
    if (((DAT_04f292d0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04f292d0), iVar5 != 0)) {
      FUN_00dd5f80(&DAT_04f292c0);
      __cxa_guard_release(&DAT_04f292d0);
    }
    if (0 < (int)DAT_04f292c0) {
      uVar6 = 0;
      do {
        if (*(int *)(DAT_04f292c8 + uVar6 * 4) == 0x51) goto LAB_01b30f4c;
        uVar6 = uVar6 + 1;
      } while (DAT_04f292c0 != uVar6);
    }
    uVar6 = 0;
LAB_01b30f4c:
    uVar2 = *param_3;
    uVar3 = param_3[1];
    bVar1 = *(byte *)((long)param_3 + 3);
    nn::time::IsValidDate((uint)uVar2,(uint)(byte)uVar3,(uint)bVar1);
    local_70 = (undefined *)0x3123;
    FUN_0277d4ac(&local_70);
    *(undefined2 *)(param_1 + 0x34) = 0;
    *(int *)(param_1 + 0x20) = (int)uVar6;
    *(undefined4 *)(param_1 + 0x24) = 0x10;
    *(undefined1 *)(param_1 + 0x28) = 4;
    *(undefined4 *)(param_1 + 8) = param_2;
    *(uint *)(param_1 + 0xc) = (uint)bVar1 << 0x18 | (uint)(byte)uVar3 << 0x10 | (uint)uVar2;
    *(undefined4 *)(param_1 + 0x2c) = (undefined4)local_70;
    *(undefined4 *)(param_1 + 0x30) = local_70._4_4_;
    if ((param_4 & 1) == 0) {
      uVar7 = 1;
    }
    else {
      local_70 = puVar4 + 0x10;
      pcStack_68 = "MailSendFlag_BundledEdition";
      uVar7 = 1;
      FUN_0274d104(&local_44,&local_70,1);
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

