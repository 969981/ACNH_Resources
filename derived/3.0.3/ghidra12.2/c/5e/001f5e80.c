
undefined8 FUN_001f5e80(long param_1)

{
  long lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  undefined1 local_68 [2];
  undefined1 local_66;
  long local_60;
  byte local_58;
  long local_50;
  long lStack_48;
  uint local_34;
  
  if (*(char *)(param_1 + 0x21) == '\0') {
    return 0;
  }
  lVar1 = param_1 + 0xa0;
  while (iVar4 = FUN_001f6570(*(undefined8 *)(param_1 + 0x80)), iVar4 == 0) {
    pcVar7 = *(char **)(param_1 + 0x78);
LAB_001f5f14:
    if (pcVar7 != (char *)0x0) goto LAB_001f5f18;
    iVar4 = FUN_001f6570(*(undefined8 *)(param_1 + 0x88));
    if (iVar4 == 0) {
      pcVar7 = (char *)FUN_001f6230(param_1);
      *(char **)(param_1 + 0x78) = pcVar7;
      if (pcVar7 == (char *)0x0) {
        return 0;
      }
    }
    else {
      uVar5 = FUN_001f6550(*(undefined8 *)(param_1 + 0x80));
      *(undefined8 *)(param_1 + 0x78) = uVar5;
      FUN_001f6520(*(undefined8 *)(param_1 + 0x80));
      pcVar7 = *(char **)(param_1 + 0x78);
    }
    if (*(int *)(pcVar7 + 4) != 0) goto LAB_001f5fa4;
LAB_001f609c:
    uVar5 = *(undefined8 *)(pcVar7 + 0x10);
    *pcVar7 = '\x01';
    *(undefined8 *)(param_1 + 0x10b8) = 0;
    *(undefined8 *)(param_1 + 0x10b0) = uVar5;
    if (*(int *)(pcVar7 + 4) == 0) goto LAB_001f60b4;
LAB_001f5fac:
    if ((*pcVar7 == '\0') && (*(long *)(param_1 + 0x10a0) == *(long *)(param_1 + 0x10a8))) {
      local_34 = 0;
      lVar6 = (**(code **)(pcVar7 + 0x20))
                        (param_1,lVar1,0x1000,pcVar7 + 0x18,&local_34,
                         *(undefined8 *)(param_1 + 0x1110));
      if (lVar6 == 0) {
        return 0;
      }
      if (lVar6 < 0) goto LAB_001f61e8;
      *(long *)(param_1 + 0x10a0) = lVar1 + lVar6;
      if (local_34 != 0) {
        **(undefined1 **)(param_1 + 0x78) = 1;
      }
      *(long *)(param_1 + 0x10b0) = lVar6;
      *(undefined8 *)(param_1 + 0x10b8) = 0;
    }
    memset(local_68,0,0x28);
    local_58 = *(char *)(param_1 + 0x10) == '\0';
    local_68[0] = **(undefined1 **)(param_1 + 0x78);
    local_66 = (*(undefined1 **)(param_1 + 0x78))[1];
    local_50 = *(long *)(param_1 + 0x10a8);
    local_60 = *(long *)(param_1 + 0x10b0);
    lStack_48 = *(long *)(param_1 + 0x10a0) - local_50;
    lVar6 = FUN_001f6630(*(undefined8 *)(param_1 + 0x18),local_68);
    if (lVar6 < 0) goto LAB_001f61cc;
    lVar6 = *(long *)(param_1 + 0x10a8) + lVar6;
    *(long *)(param_1 + 0x10a8) = lVar6;
    if (lVar6 != *(long *)(param_1 + 0x10a0)) {
      return 0;
    }
    pcVar7 = *(char **)(param_1 + 0x78);
    *(long *)(param_1 + 0x10a0) = lVar1;
    *(long *)(param_1 + 0x10a8) = lVar1;
    if (*pcVar7 == '\0') {
      pcVar7[1] = '\0';
      cVar2 = *(char *)(param_1 + 0x21);
    }
    else {
      *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -1;
LAB_001f5ed0:
      FUN_001f4e60(*(undefined8 *)(pcVar7 + 8));
      FUN_001f4e60(pcVar7);
LAB_001f5ee0:
      *(undefined8 *)(param_1 + 0x78) = 0;
      cVar2 = *(char *)(param_1 + 0x21);
    }
    if (cVar2 == '\0') {
      return 0;
    }
  }
  iVar4 = FUN_001f6570(*(undefined8 *)(param_1 + 0x88));
  pcVar7 = *(char **)(param_1 + 0x78);
  if (iVar4 == 0) goto LAB_001f5f14;
  if (pcVar7 == (char *)0x0) {
    return 0;
  }
LAB_001f5f18:
  if ((((byte)pcVar7[1] >> 3 & 1) == 0) && (*(int *)(*(long *)(param_1 + 0x18) + 0x1078) == 0)) {
    iVar4 = FUN_001f6570(*(undefined8 *)(param_1 + 0x88));
    pcVar7 = *(char **)(param_1 + 0x78);
    if (iVar4 == 0) {
      uVar5 = FUN_001f64c0(*(undefined8 *)(param_1 + 0x80));
      if ((int)uVar5 != 0) {
        *(undefined1 *)(param_1 + 0x21) = 0;
        return uVar5;
      }
      pcVar7 = (char *)FUN_001f6230(param_1);
      *(char **)(param_1 + 0x78) = pcVar7;
      if (pcVar7 == (char *)0x0) {
        return 0;
      }
      goto LAB_001f609c;
    }
  }
LAB_001f5fa4:
  if (*(int *)(pcVar7 + 4) != 0) goto LAB_001f5fac;
LAB_001f60b4:
  memset(local_68,0,0x28);
  local_68[0] = 1;
  local_58 = *(byte *)(param_1 + 0x10) ^ 1;
  local_66 = *(undefined1 *)(*(long *)(param_1 + 0x78) + 1);
  local_60 = *(long *)(param_1 + 0x10b0);
  local_50 = *(long *)(*(long *)(param_1 + 0x78) + 8) + *(long *)(param_1 + 0x10b8);
  lStack_48 = local_60 - *(long *)(param_1 + 0x10b8);
  lVar6 = FUN_001f6630(*(undefined8 *)(param_1 + 0x18),local_68);
  if (-1 < lVar6) {
    lVar6 = *(long *)(param_1 + 0x10b8) + lVar6;
    *(long *)(param_1 + 0x10b8) = lVar6;
    if (lVar6 != *(long *)(param_1 + 0x10b0)) {
      return 0;
    }
    pcVar7 = *(char **)(param_1 + 0x78);
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -1;
    uVar8 = *(ulong *)(pcVar7 + 0x10);
    *(ulong *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) - uVar8;
    if (pcVar7[1] != '\b') goto LAB_001f5ed0;
    local_34 = local_34 & 0xffff0000;
    *(undefined1 *)(param_1 + 0x21) = 0;
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 4;
    if (uVar8 < 2) {
LAB_001f6198:
      *(undefined2 *)(param_1 + 0x14) = 0x3ed;
    }
    else {
      memcpy(&local_34,*(void **)(pcVar7 + 8),2);
      sVar3 = FUN_001f63d0((undefined2)local_34);
      pcVar7 = *(char **)(param_1 + 0x78);
      if (sVar3 == 0) goto LAB_001f6198;
      *(short *)(param_1 + 0x14) = sVar3;
    }
    if (pcVar7 != (char *)0x0) goto LAB_001f5ed0;
    goto LAB_001f5ee0;
  }
LAB_001f61cc:
  if (lVar6 == -0x65) {
    if (*(int *)(param_1 + 0x70) == -0x191) {
      return 0;
    }
    if (*(int *)(param_1 + 0x70) == 0) {
      return 0;
    }
  }
LAB_001f61e8:
  *(undefined1 *)(param_1 + 0x21) = 0;
  return 0xfffffe70;
}

