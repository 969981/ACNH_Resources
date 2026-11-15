
void FUN_020ee60c(char *param_1,byte *param_2)

{
  long *plVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  char *pcVar10;
  byte bVar11;
  uint *puVar12;
  char cVar13;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  lVar7 = *(long *)PTR_DAT_04bb46b0;
  if (lVar7 == 0) {
    return;
  }
  puVar8 = *(undefined8 **)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x453) & 1) == 0) {
    lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
    if (lVar7 == 0) {
      return;
    }
    lVar7 = lVar7 + 0x70;
  }
  else {
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar8[0x26] == (long *)0x0) {
      return;
    }
    lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
    if (lVar7 == 0) {
      return;
    }
  }
  plVar1 = (long *)(lVar7 + 0xe6ba8);
  lVar9 = *(long *)(lVar7 + 0xe6bc8);
  if (lVar9 == 0) {
    cVar13 = *param_1;
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      cVar13 = *param_1;
      uVar5 = 0;
      plVar6 = *(long **)(lVar9 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      cVar13 = *param_1;
      if (*(long *)(lVar7 + 0xe6bc8) == 0) goto LAB_020ee6fc;
      plVar6 = *(long **)(*(long *)(lVar7 + 0xe6bc8) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_48 = *plVar1;
      local_40 = *(long *)(lVar7 + 0xe6bb0);
      local_38 = 0x1a8;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
  }
LAB_020ee6fc:
  local_48 = CONCAT44(local_48._4_4_,(int)cVar13);
  if (6 < (uint)(int)cVar13) goto LAB_020ee85c;
  lVar9 = *(long *)(lVar7 + 0xe6bb0) + *plVar1;
  switch(cVar13) {
  case '\0':
    pcVar10 = (char *)(lVar9 + 0x34);
    break;
  case '\x01':
    pcVar10 = (char *)(lVar9 + 0x70);
    break;
  case '\x02':
    pcVar10 = (char *)(lVar9 + 0xac);
    break;
  case '\x03':
    pcVar10 = (char *)(lVar9 + 0xec);
    break;
  case '\x04':
    pcVar10 = (char *)(lVar9 + 0x128);
    break;
  case '\x05':
    pcVar10 = (char *)(lVar9 + 0x160);
    break;
  case '\x06':
    pcVar10 = (char *)(lVar9 + 0x198);
  }
  cVar13 = *pcVar10;
  if (cVar13 == -1) goto LAB_020ee85c;
  if ((*(long *)(lVar7 + 0xe6bc8) != 0) &&
     (plVar6 = *(long **)(*(long *)(lVar7 + 0xe6bc8) + 0x20), plVar6 != (long *)0x0)) {
    local_38 = 0x1a8;
    local_48 = *plVar1;
    local_40 = *(long *)(lVar7 + 0xe6bb0);
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    lVar9 = *(long *)(lVar7 + 0xe6bb0) + *plVar1;
  }
  bVar11 = *param_2;
  bVar4 = *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x473);
  puVar12 = (uint *)PTR_DAT_04bb32e0;
  if ((long)(char)bVar4 == 0xffffffffffffffff) {
LAB_020ee7e4:
    puVar12 = (uint *)PTR_DAT_04bb5038;
    if (*PTR_DAT_04bc1220 != bVar11) {
      puVar12 = (uint *)PTR_DAT_04bb32e0;
    }
  }
  else {
    puVar2 = (uint *)(**(long **)PTR_DAT_04bb27d0 + 0x48);
    puVar3 = puVar2 + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
    if (7 < bVar4) {
      puVar3 = puVar2;
    }
    if ((*puVar3 >> 3 & 1) == 0) goto LAB_020ee7e4;
    if (bVar11 != 0xff) {
      puVar3 = puVar2 + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
      if (7 < bVar11) {
        puVar3 = puVar2;
      }
      if ((*puVar3 & 1) != 0) {
        puVar12 = puVar3 + 0x1e;
      }
    }
  }
  bVar11 = (byte)*puVar12;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  local_48 = CONCAT71(local_48._1_7_,bVar11);
  FUN_028498f8(lVar9,(int)cVar13,&local_48,0);
LAB_020ee85c:
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar7 + 0xe6bc8) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0xe6bc8) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

