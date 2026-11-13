
void FUN_01224344(byte *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_40;
  char *pcStack_38;
  
  if (*param_1 < 8) {
    uVar5 = FUN_02582d8c(param_1,1);
    if (((uVar5 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "PrayStarToday";
      local_40 = puVar1;
      iVar6 = FUN_0274bce0(param_1,&local_40);
      if (iVar6 < 0x14) {
        pcStack_38 = "PrayStarToday";
        local_40 = puVar1;
        FUN_0274ca70(param_1,&local_40,1);
      }
      plVar7 = *(long **)PTR_DAT_04bb27d0;
      if ((plVar7 != (long *)0x0) && (lVar8 = *plVar7, 1 < *(byte *)(lVar8 + 0x476))) {
        bVar3 = *(byte *)(lVar8 + 0x473);
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          pbVar2 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
          if (7 < bVar3) {
            pbVar2 = (byte *)(lVar8 + 0x48);
          }
          if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar8 + 0x472) != bVar3)) {
            DAT_0514e3f8 = 0;
            uVar4 = (ulong)local_40 >> 0x30;
            local_40 = (undefined *)CONCAT26((ushort)uVar4 & 0xff00,0xff0100000000);
            if (-1 < DAT_0514e3d0) {
              FUN_01db1df0(*plVar7 + 0x480,DAT_0514e3d0,&local_40,&DAT_0514e3f8,1,0);
            }
          }
        }
      }
    }
  }
  return;
}

