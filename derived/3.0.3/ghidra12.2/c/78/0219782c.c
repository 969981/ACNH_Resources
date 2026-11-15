
int FUN_0219782c(undefined8 param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  undefined *local_50;
  char *pcStack_48;
  byte local_24 [4];
  
  if (param_2 < param_3) {
    return 0;
  }
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  if (lVar10 == 0) {
    pbVar9 = &DAT_0548e140;
LAB_021978c0:
    if (7 < *pbVar9) {
LAB_021978cc:
      if (DAT_0537d558 != (long *)0x0) {
        lVar10 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar10 + 0x473);
        pbVar9 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar9 = (byte *)(lVar10 + 0x471);
          }
        }
        local_24[0] = *pbVar9;
        if (local_24[0] < 8) goto LAB_0219794c;
      }
      pbVar9 = &DAT_0548e168;
    }
  }
  else {
    pbVar9 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar10 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(lVar10 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar9 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_021978c0;
      }
      goto LAB_021978cc;
    }
  }
  local_24[0] = *pbVar9;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
LAB_0219794c:
  uVar7 = FUN_02197a94(param_1,param_4,local_24);
  if ((uVar7 & 1) == 0) {
    iVar6 = 0;
  }
  else {
    lVar10 = FUN_0265cf70(param_4,local_24);
    iVar6 = 0;
    if (lVar10 != 0) {
      if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar8 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar8)();
        uVar4 = uVar4 ^ 1;
      }
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "Friendship";
      uVar5 = FUN_02746e10(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8),&local_50);
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
        (**(code **)*puVar8)();
      }
      uVar4 = nn::os::GetSystemTick();
      uVar3 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
      uVar4 = uVar3 ^ uVar3 * 0x800;
      uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
      uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
      uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
      iVar6 = (int)(((float)uVar5 + 256.0) *
                    (float)((int)((ulong)(uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar4 ^ uVar3) *
                                  (ulong)((param_2 - param_3) + 1) >> 0x20) + param_3) * 0.0078125 +
                   0.5);
    }
  }
  return iVar6;
}

