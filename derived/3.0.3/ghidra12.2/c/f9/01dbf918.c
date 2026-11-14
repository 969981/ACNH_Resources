
void FUN_01dbf918(long *param_1,byte *param_2,undefined8 param_3)

{
  uint *puVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_48 [24];
  char local_14 [4];
  
  if (((*(int *)(DAT_05358908 + 0x78) != 0) && (*(int *)(DAT_05358908 + 0xc4) == 0)) &&
     (lVar3 = *param_1, 1 < *(byte *)(lVar3 + 0x476))) {
    bVar4 = *(byte *)(lVar3 + 0x473);
    pbVar2 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar3 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar3 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar2 = (byte *)(lVar3 + 0x471);
      }
    }
    bVar4 = *param_2;
    bVar5 = *pbVar2;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if ((bVar4 == bVar5) && (FUN_01df8f20(local_14,param_3), local_14[0] != -1)) {
      FUN_02645730(auStack_48,param_2);
      FUN_026470b0(auStack_48,param_3);
      FUN_01d4e63c(param_1[2]);
    }
  }
  return;
}

