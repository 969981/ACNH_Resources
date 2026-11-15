
void FUN_01f96fb4(long param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  undefined4 local_28;
  undefined4 local_24;
  
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  if (lVar6 == 0) {
    uVar4 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01f97048;
LAB_01f970b4:
    if (*(long *)PTR_DAT_04bb4718 != 0) {
      puVar3 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + uVar4 * 4 + 0xde8);
      goto LAB_01f970d0;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    uVar4 = (ulong)*pbVar5;
    if ((*pbVar5 < 8) ||
       (((*(int *)(lVar6 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar2 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar4 = (ulong)bVar2, bVar2 < 8))))
    goto LAB_01f970b4;
LAB_01f97048:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar6 = **(long **)PTR_DAT_04bb27d0;
      bVar2 = *(byte *)(lVar6 + 0x473);
      pbVar5 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar6 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar5 = (byte *)(lVar6 + 0x471);
        }
      }
      uVar4 = (ulong)*pbVar5;
      if (*pbVar5 < 8) goto LAB_01f970b4;
    }
    uVar4 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_01f970b4;
  }
  puVar3 = (undefined4 *)PTR_DAT_04bb3238;
LAB_01f970d0:
  FUN_02085e20(*(undefined8 *)(param_1 + 0x18),0,*puVar3,PTR_DAT_04bb6928,0);
  local_24 = 0;
  local_28 = 0;
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x3b0);
  FUN_01e5a930(0x40000000,lVar6,0xc,PTR_DAT_04bb2150,&local_24,&local_28,PTR_DAT_04bc1600,6);
  *(undefined4 *)(lVar6 + 0x3ac) = 0x10;
  *(undefined4 *)(param_1 + 0xaf64) = 0;
  *(undefined1 *)(param_1 + 0xaf68) = 1;
  return;
}

