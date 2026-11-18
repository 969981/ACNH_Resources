
undefined8 FUN_033f97e0(void)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  byte local_4 [4];
  
  puVar3 = PTR_DAT_04bb2230;
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar7 = PTR_DAT_04bb32e0;
  if (lVar8 == 0) {
LAB_033f984c:
    if (7 < *pbVar7) {
LAB_033f9858:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar8 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar8 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar7 = (byte *)(lVar8 + 0x471);
          }
        }
        local_4[0] = *pbVar7;
        if (local_4[0] < 8) goto LAB_033f98d8;
      }
      pbVar7 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_033f984c;
      }
      goto LAB_033f9858;
    }
  }
  local_4[0] = *pbVar7;
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
LAB_033f98d8:
  plVar4 = (long *)FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),
                                (undefined4)DAT_0574d708,local_4);
  if ((((((plVar4 == (long *)0x0) || (uVar5 = (**(code **)(*plVar4 + 0xe0))(), (uVar5 & 1) == 0)) &&
        ((plVar4 = (long *)FUN_0339be20(*(undefined8 *)(*(long *)puVar3 + 0x10),DAT_0574d708._4_4_,
                                        local_4), plVar4 == (long *)0x0 ||
         (uVar5 = (**(code **)(*plVar4 + 0xe0))(), (uVar5 & 1) == 0)))) &&
       ((plVar4 = (long *)FUN_0339be20(*(undefined8 *)(*(long *)puVar3 + 0x10),
                                       (undefined4)DAT_0574d710,local_4), plVar4 == (long *)0x0 ||
        (uVar5 = (**(code **)(*plVar4 + 0xe0))(), (uVar5 & 1) == 0)))) &&
      ((plVar4 = (long *)FUN_0339be20(*(undefined8 *)(*(long *)puVar3 + 0x10),DAT_0574d710._4_4_,
                                      local_4), plVar4 == (long *)0x0 ||
       (uVar5 = (**(code **)(*plVar4 + 0xe0))(), (uVar5 & 1) == 0)))) &&
     ((plVar4 = (long *)FUN_0339be20(*(undefined8 *)(*(long *)puVar3 + 0x10),DAT_0574d718,local_4),
      plVar4 == (long *)0x0 || (uVar5 = (**(code **)(*plVar4 + 0xe0))(), (uVar5 & 1) == 0)))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}

