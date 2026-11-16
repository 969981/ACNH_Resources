
undefined8 FUN_0254927c(byte *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  long *local_30;
  char local_28;
  char local_27;
  char local_26;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  
  puVar6 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar6 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_1c = *puVar6;
  FUN_0071c8d0(&local_30,&local_1c,PTR_DAT_04bb3238,0);
  plVar2 = local_30;
  if (local_30 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3770);
    if ((uVar4 & 1) == 0) {
      local_27 = '\0';
    }
  }
  uVar5 = 0;
  if ((((local_30 != (long *)0x0) && (local_28 != '\0')) && (local_27 != '\0')) &&
     (local_26 != '\0')) {
    lVar7 = local_30[0xe];
    if (lVar7 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 0;
      if (*(uint *)(lVar7 + 0x280) < 0x149) {
        local_18 = *(uint *)(lVar7 + 0x280);
      }
    }
    if (local_18 == 0x1a) {
      uVar5 = 0;
      if ((*(char *)((long)local_30 + 0x1902) == '\t') &&
         (*(char *)((long)local_30 + 0x1903) == '\0')) {
        local_30[0x331] = 0;
        local_30[0x332] = 0;
        local_30[0x333] = 0;
        local_30[0x334] = 0;
        local_30[0x335] = 0;
        local_30[0x336] = 0;
        local_30[0x337] = 0;
        local_30[0x338] = 0;
        local_30[0x339] = 0;
        local_30[0x33a] = 0;
        *(undefined2 *)(local_30 + 0x33b) = 0;
        local_30[0x32c] = local_30[0x31c];
        local_30[0x330] = 0;
        local_30[0x32d] = local_30[0x31d];
        local_30[0x32e] = local_30[0x31e];
        local_30[0x32f] = local_30[799];
        *(undefined2 *)((long)local_30 + 0x198c) = 0x101;
        *(undefined1 *)((long)local_30 + 0x198e) = 6;
        local_14 = 0xf;
        local_30[0x318] = local_30[0x338];
        local_30[0x319] = local_30[0x339];
        local_30[0x31a] = local_30[0x33a];
        *(short *)(local_30 + 0x31b) = (short)local_30[0x33b];
        local_30[0x314] = local_30[0x334];
        local_30[0x315] = local_30[0x335];
        local_30[0x316] = local_30[0x336];
        local_30[0x317] = local_30[0x337];
        local_30[0x310] = local_30[0x330];
        local_30[0x311] = local_30[0x331];
        local_30[0x312] = local_30[0x332];
        local_30[0x313] = local_30[0x333];
        local_30[0x30c] = local_30[0x32c];
        local_30[0x30d] = local_30[0x32d];
        local_30[0x30e] = local_30[0x32e];
        local_30[0x30f] = local_30[0x32f];
        lVar1 = 0;
        if (lVar7 != 0) {
          lVar1 = lVar7 + 0x278;
        }
        FUN_03ebb160(lVar1,0xf);
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

