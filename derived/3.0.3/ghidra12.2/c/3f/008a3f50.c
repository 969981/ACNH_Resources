
void FUN_008a3f50(long param_1)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  undefined4 local_4c;
  ulong local_48;
  undefined8 local_40;
  undefined4 local_38;
  byte local_34;
  undefined1 local_33;
  
  if (*(char *)(param_1 + 0x44) != -1) {
    local_48 = *(ulong *)(param_1 + 0x45);
    if ((local_48 & 0xffff) != 0) {
      uVar2 = *(ushort *)(param_1 + 0x4e);
      local_40 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_40 = local_40 + (ulong)uVar2;
      local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_40);
    }
    lVar6 = *(long *)PTR_DAT_04bb32e8;
    lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar6 + 0x4060));
    if (lVar4 < lVar3) {
      uVar7 = *(ulong *)(param_1 + 0x40);
      *(ulong *)(param_1 + 0x24) = uVar7;
      *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_1 + 0x48);
      bVar8 = *(byte *)(param_1 + 0x50);
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      uVar2 = *(ushort *)(param_1 + 0x51);
      *(byte *)(param_1 + 0x34) = bVar8;
      *(ushort *)(param_1 + 0x35) = uVar2;
      if ((uVar2 & 1) != 0) {
        local_34 = (byte)uVar2 & 1;
        local_38 = (undefined4)uVar7;
        local_33 = 1;
        local_40._0_6_ =
             CONCAT15(*(undefined1 *)(param_1 + 0x31),CONCAT14(bVar8,(int)*(char *)(param_1 + 0x28))
                     );
        *(undefined2 *)(param_1 + 0x1c) = 0x100;
        lVar3 = *(long *)(param_1 + 0xb0);
        if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
          do {
            lVar4 = *(long *)(lVar3 + 8);
            puVar5 = (undefined8 *)(*(long *)(lVar3 + 0x10) + 0x40);
            (**(code **)*puVar5)(puVar5,&local_40);
            lVar3 = lVar4;
          } while (lVar4 != param_1 + 0xa8);
          uVar7 = (ulong)*(uint *)(param_1 + 0x24);
        }
      }
      *(int *)(param_1 + 0x78) = (int)uVar7;
    }
    else {
      nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar6 + 0x4060));
      if ((*(byte *)(param_1 + 0x51) & 1) != 0) {
        local_4c = 1;
        iVar1 = *(int *)(*(long *)(param_1 + 0x70) + 8);
        local_40._6_2_ = (ushort)((ulong)local_40 >> 0x30) & 0xff00;
        local_40 = CONCAT26(local_40._6_2_,0xff0100000000);
        if (-1 < iVar1) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,iVar1,&local_40,&local_4c,4,0);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x44) = 0xff;
    *(undefined2 *)(param_1 + 0x50) = 0xff;
  }
  return;
}

