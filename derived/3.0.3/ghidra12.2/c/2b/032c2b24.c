
void FUN_032c2b24(long param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  
  plVar5 = (long *)(*(long *)PTR_DAT_04bc8e90 + 8) + param_2;
  if (0xf < param_2) {
    plVar5 = (long *)(*(long *)PTR_DAT_04bc8e90 + 8);
  }
  lVar7 = *plVar5;
  uVar3 = *(ushort *)(param_1 + 0x50);
  uVar6 = (uint)uVar3;
  if ((((uVar3 >> 3 & 1) != 0) && ((uVar3 >> 1 & 1) == 0)) &&
     (plVar5 = *(long **)(param_1 + 0x150), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x20))(plVar5,lVar7 + 8);
    uVar6 = (uint)*(ushort *)(param_1 + 0x50);
  }
  if ((uVar6 >> 4 & 1) == 0) {
    return;
  }
  if ((uVar6 >> 1 & 1) != 0) goto LAB_032c2bcc;
  bVar1 = *(byte *)(param_1 + 0x53);
  uVar6 = (uint)*(byte *)(param_1 + 0x52) - (uint)bVar1;
  if (uVar6 != 0) {
    if ((uint)*(byte *)(param_1 + 0x52) < (uint)bVar1) goto LAB_032c2bcc;
    bVar2 = *(byte *)(param_1 + 0x54);
    uVar6 = uVar6 & 0xff;
    uVar4 = 0;
    if (bVar2 != 0) {
      uVar4 = uVar6 / bVar2;
    }
    if (uVar6 != uVar4 * bVar2) goto LAB_032c2bcc;
  }
  plVar5 = *(long **)(param_1 + 0x180);
  *(byte *)(param_1 + 0x52) = bVar1;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,lVar7 + 8);
  }
LAB_032c2bcc:
  *(char *)(param_1 + 0x52) = *(char *)(param_1 + 0x52) + '\x01';
  return;
}

