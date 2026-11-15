
uint FUN_01dfa0d0(void)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  char local_4 [4];
  
  lVar7 = *DAT_0537d558;
  if (*(byte *)(lVar7 + 0x476) < 3) {
    local_4[0] = *(char *)(lVar7 + 0x472);
    if (local_4[0] != -1) goto LAB_01dfa2e4;
  }
  else {
    uVar1 = (uint)*(byte *)(lVar7 + 0x473);
    if ((char)*(byte *)(lVar7 + 0x473) < '\x01') {
      bVar3 = *(byte *)(lVar7 + 0x472);
    }
    else {
      bVar3 = *(byte *)(lVar7 + 0x472);
      uVar5 = uVar1 + 1;
      do {
        uVar4 = uVar5 - 2;
        local_4[0] = (char)uVar4;
        if (((uint)bVar3 != (uVar4 & 0xff)) && (((uVar4 ^ 0xffffffff) & 0xff) != 0)) {
          puVar2 = (uint *)(lVar7 + 0x48) + ((long)local_4[0] & 0xffffffffU) * 0x20;
          if ((uVar4 & 0xf8) != 0) {
            puVar2 = (uint *)(lVar7 + 0x48);
          }
          if (((*puVar2 ^ 0xffffffff) & 10) == 0) goto LAB_01dfa2e4;
        }
        uVar5 = uVar5 - 1;
      } while (1 < uVar5);
    }
    if (bVar3 == 7) {
LAB_01dfa1b0:
      if ((uVar1 != 6) && (bVar3 != 6)) {
LAB_01dfa1c0:
        if (((*(uint *)(lVar7 + 0x348) ^ 0xffffffff) & 10) == 0) {
          local_4[0] = '\x06';
          goto LAB_01dfa2e4;
        }
      }
      if (bVar3 == 5) goto LAB_01dfa20c;
      if (uVar1 != 5) goto LAB_01dfa1f4;
      if (bVar3 != 4) goto LAB_01dfa21c;
LAB_01dfa250:
      if (((*(uint *)(lVar7 + 0x1c8) ^ 0xffffffff) & 10) == 0) {
        local_4[0] = '\x03';
        goto LAB_01dfa2e4;
      }
LAB_01dfa268:
      if ((uVar1 != 2) && (bVar3 != 2)) {
LAB_01dfa278:
        if (((*(uint *)(lVar7 + 0x148) ^ 0xffffffff) & 10) == 0) {
          local_4[0] = '\x02';
          goto LAB_01dfa2e4;
        }
      }
      if (bVar3 == 1) goto LAB_01dfa2c0;
      if (uVar1 != 1) goto LAB_01dfa2a8;
      if (bVar3 == 0) goto LAB_01dfa36c;
    }
    else {
      if (uVar1 != 7) {
        if (((*(uint *)(lVar7 + 0x3c8) ^ 0xffffffff) & 10) == 0) {
          local_4[0] = '\a';
          goto LAB_01dfa2e4;
        }
        goto LAB_01dfa1b0;
      }
      if (bVar3 != 6) goto LAB_01dfa1c0;
LAB_01dfa1f4:
      if (((*(uint *)(lVar7 + 0x2c8) ^ 0xffffffff) & 10) == 0) {
        local_4[0] = '\x05';
        goto LAB_01dfa2e4;
      }
LAB_01dfa20c:
      if ((uVar1 != 4) && (bVar3 != 4)) {
LAB_01dfa21c:
        if (((*(uint *)(lVar7 + 0x248) ^ 0xffffffff) & 10) == 0) {
          local_4[0] = '\x04';
          goto LAB_01dfa2e4;
        }
      }
      if (bVar3 == 3) goto LAB_01dfa268;
      if (uVar1 != 3) goto LAB_01dfa250;
      if (bVar3 != 2) goto LAB_01dfa278;
LAB_01dfa2a8:
      if (((*(uint *)(lVar7 + 200) ^ 0xffffffff) & 10) == 0) {
        local_4[0] = '\x01';
        goto LAB_01dfa2e4;
      }
LAB_01dfa2c0:
      uVar5 = 0;
      if ((uVar1 == 0) || (bVar3 == 0)) goto LAB_01dfa370;
    }
    local_4[0] = '\0';
    uVar5 = 0;
    if (((*(uint *)(lVar7 + 0x48) ^ 0xffffffff) & 10) != 0) goto LAB_01dfa370;
LAB_01dfa2e4:
    lVar7 = *(long *)(DAT_05ae6a60 + 0x28);
    if ((*(int *)(lVar7 + 0x1e4) == 1) &&
       (1 < *(int *)(*(long *)(*(long *)(DAT_05ae6a60 + 0x68) + 0xf8) + 0x58))) {
      uVar5 = 0;
      if (*(long *)(DAT_05358908 + 0xf88) == 0) goto LAB_01dfa370;
      plVar6 = (long *)FUN_01c94d50(*(long *)(DAT_05358908 + 0xf88),local_4);
      if (*plVar6 != 0) {
        local_38 = 0x3e8000f4240;
        uStack_30 = 0x500000001;
        local_28 = *plVar6;
        uVar5 = FUN_0389b150(lVar7,&local_38);
        goto LAB_01dfa370;
      }
    }
  }
LAB_01dfa36c:
  uVar5 = 0;
LAB_01dfa370:
  return uVar5 & 1;
}

