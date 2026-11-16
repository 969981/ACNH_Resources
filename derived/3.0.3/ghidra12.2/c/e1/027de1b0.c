
void FUN_027de1b0(long param_1,byte *param_2)

{
  long lVar1;
  uint *puVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  byte local_14 [4];
  
  lVar1 = param_1 + 0x5faf0;
  FUN_0268c7a0(lVar1,param_2,3,3);
  uVar4 = FUN_027dc460(param_1,lVar1);
  uVar6 = (ulong)*param_2;
  if (0x22 < *param_2) {
    uVar6 = 0;
  }
  param_1 = param_1 + uVar6 * 4;
  *(uint *)(param_1 + 0xbf5e0) = *(uint *)(param_1 + 0xbf5e0) | 1 << (ulong)(param_2[1] & 0x1f);
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_027de27c:
    if (7 < *pbVar5) {
LAB_027de288:
      if (DAT_0537d558 != (long *)0x0) {
        lVar7 = *DAT_0537d558;
        bVar3 = *(byte *)(lVar7 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar2 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar5 = (byte *)(lVar7 + 0x471);
          }
        }
        local_14[0] = *pbVar5;
        if (local_14[0] < 8) goto LAB_027de308;
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
        goto LAB_027de27c;
      }
      goto LAB_027de288;
    }
  }
  local_14[0] = *pbVar5;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_027de308:
  FUN_027dd83c(uVar4,lVar1,local_14);
  FUN_027de32c();
  FUN_02b61a20(5);
  return;
}

