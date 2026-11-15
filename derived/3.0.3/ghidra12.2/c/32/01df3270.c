
undefined8 FUN_01df3270(undefined8 *param_1)

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long lVar6;
  byte local_4 [4];
  
  *param_1 = 0;
  uVar3 = FUN_02640eb0();
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
  uVar3 = FUN_035ace80();
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  uVar3 = FUN_0252cf54();
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_01df3310:
    if (7 < *pbVar5) {
LAB_01df331c:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
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
        local_4[0] = *pbVar5;
        if (local_4[0] < 8) goto LAB_01df33a4;
      }
      pbVar5 = &DAT_0548e168;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01df3310;
      }
      goto LAB_01df331c;
    }
  }
  local_4[0] = *pbVar5;
  if (7 < local_4[0]) {
    return 0;
  }
LAB_01df33a4:
  uVar4 = FUN_026585a0(local_4);
  *param_1 = uVar4;
  return 1;
}

