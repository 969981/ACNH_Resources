
void FUN_032b772c(long param_1,uint param_2)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  ushort uVar5;
  long lVar6;
  undefined *local_40;
  undefined *puStack_38;
  undefined1 auStack_18 [8];
  
  plVar1 = (long *)(param_1 + 8) + (ulong)param_2 * 0xd;
  if (0xe < param_2) {
    plVar1 = (long *)(param_1 + 8);
  }
  FUN_0328a2b0(*plVar1,0);
  lVar6 = *plVar1;
  FUN_0328a0b0(lVar6,6,1,0);
  if (((*(ushort *)(lVar6 + 0x578) >> 5 & 1) == 0) || ((*(ushort *)(lVar6 + 0x578) >> 4 & 1) == 0))
  {
    uVar5 = *(ushort *)(lVar6 + 0x250) | 0x200;
  }
  else {
    uVar5 = *(ushort *)(lVar6 + 0x250) & 0xfdff;
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,9);
  *(ushort *)(lVar6 + 0x250) = uVar5;
  lVar6 = *plVar1;
  plVar3 = *(long **)(lVar6 + 0x570);
  puVar2 = (undefined *)0x0;
  if (plVar3 != (long *)0x0) {
    puVar2 = PTR_LAB_04bc8ef0;
  }
  if (puVar2 == (undefined *)0x0) {
    lVar6 = *(long *)(*(long *)(lVar6 + 0x20) + 0x18);
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,1);
    if ((uVar4 & 1) != 0) {
      FUN_032883c0(lVar6,0);
    }
  }
  if (*PTR_DAT_04c4b988 == '\0') {
    lVar6 = *(long *)(*(long *)(plVar1[2] + 0xf0) + 0x18);
  }
  else {
    local_40 = PTR_DAT_04bc8e68 + 0x10;
    puStack_38 = PTR_DAT_04c4b988;
    lVar6 = FUN_032cb8e0(auStack_18,&local_40,*(undefined8 *)(plVar1[2] + 0xf0));
  }
  *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
  return;
}

