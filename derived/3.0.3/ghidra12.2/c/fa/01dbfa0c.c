
void FUN_01dbfa0c(long *param_1,byte *param_2,undefined8 param_3)

{
  uint *puVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  long *plVar7;
  char local_28 [4];
  undefined4 local_24;
  
  if (((*(int *)(DAT_05358908 + 0x78) != 0) && (*(int *)(DAT_05358908 + 0xc4) == 0)) &&
     (lVar4 = *param_1, 1 < *(byte *)(lVar4 + 0x476))) {
    bVar5 = *(byte *)(lVar4 + 0x473);
    pbVar3 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar1 = (uint *)(lVar4 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar3 = (byte *)(lVar4 + 0x471);
      }
    }
    bVar5 = *param_2;
    bVar6 = *pbVar3;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    if (((bVar5 == bVar6) && (FUN_01df8f20(local_28,param_3), local_28[0] != -1)) &&
       ((local_24 = 0x13, *(int *)(DAT_05358908 + 0x38) != 0 &&
        (*(char *)(DAT_05358908 + 0xfd8) == '\0')))) {
      plVar7 = *(long **)(DAT_05ae6a60 + 0x30);
      uVar2 = (**(code **)(*plVar7 + 0x10))(plVar7);
      if (((uVar2 & 1) == 0) && (uVar2 = (**(code **)(*plVar7 + 0x18))(plVar7), (uVar2 & 1) == 0)) {
        FUN_0387de70(plVar7,&DAT_05b03f00,0xe,0x14,0x13);
      }
    }
  }
  return;
}

