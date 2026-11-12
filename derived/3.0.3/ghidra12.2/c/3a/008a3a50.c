
void FUN_008a3a50(long param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 local_50;
  int local_4c;
  byte local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  byte local_3c;
  undefined1 local_3b;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  puVar7 = &local_50;
  if (*(char *)(param_1 + 0x1d) == '\0') {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x7c) = 0;
    *(undefined1 *)(param_1 + 0x28) = 0xff;
    *(undefined2 *)(param_1 + 0x34) = 0xff;
    *(undefined2 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 0x69) = 0;
    return;
  }
  local_3b = 0;
  puVar13 = (undefined4 *)(param_1 + 0x24);
  uStack_40 = *puVar13;
  local_48 = *(byte *)(param_1 + 0x34);
  cVar3 = *(char *)(param_1 + 0x28);
  *(char *)(param_1 + 0x36) = (char)param_2;
  *puVar13 = 0;
  *(undefined1 *)(param_1 + 0x28) = 0xff;
  local_4c = (int)cVar3;
  *(undefined2 *)(param_1 + 0x34) = 0xff;
  if (7 < local_48) {
    local_48 = 0xff;
  }
  *(undefined2 *)(param_1 + 0x7c) = 0;
  local_3c = *(byte *)(param_1 + 0x1c) ^ 1;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  lVar10 = *(long *)(param_1 + 0xd0);
  local_44 = param_2;
  plVar5 = DAT_0537d558;
  while (DAT_0537d558 = plVar5, lVar10 != param_1 + 200) {
    lVar12 = *(long *)(lVar10 + 8);
    puVar6 = (undefined8 *)(*(long *)(lVar10 + 0x10) + 0x40);
    (**(code **)*puVar6)(puVar6,&local_4c);
    plVar5 = DAT_0537d558;
    lVar10 = lVar12;
  }
  if (((plVar5[2] != 0) && ((*(uint *)(plVar5 + 0x10) & 0xfffffffe) == 2)) &&
     (*(int *)(plVar5[2] + 0x3e4) != 1)) {
    local_50 = 1;
    iVar2 = *(int *)(*(long *)(param_1 + 0x70) + 8);
    local_34 = 0xff01;
    if (iVar2 < 0) {
      return;
    }
    lVar10 = *plVar5;
    uVar8 = 4;
    goto LAB_008a3ca4;
  }
  lVar10 = *plVar5;
  if (*(byte *)(lVar10 + 0x476) < 2) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    return;
  }
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  if (lVar12 == 0) {
    uVar9 = (uint)DAT_0548e140;
    if (7 < DAT_0548e140) goto LAB_008a3c0c;
LAB_008a3c5c:
    if (7 < uVar9) {
      uVar9 = 0xff;
    }
  }
  else {
    pbVar11 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar12 + 0x158);
    }
    uVar9 = (uint)*pbVar11;
    if ((*pbVar11 < 8) ||
       (((*(int *)(lVar12 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (uVar9 = (uint)*(byte *)(DAT_054f5738 + 0x11a5), *(byte *)(DAT_054f5738 + 0x11a5) < 8))))
    goto LAB_008a3c5c;
LAB_008a3c0c:
    bVar4 = *(byte *)(lVar10 + 0x473);
    pbVar11 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar11 = (byte *)(lVar10 + 0x471);
      }
    }
    uVar9 = (uint)*pbVar11;
    if (7 < *pbVar11) {
      uVar9 = (uint)(byte)*PTR_DAT_04bb5038;
      goto LAB_008a3c5c;
    }
  }
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & (1 << (ulong)(uVar9 & 0x1f) ^ 0xffffffffU)
  ;
  local_34 = 0xff00;
  iVar2 = *(int *)(*(long *)(param_1 + 0x38) + 8);
  if (iVar2 < 0) {
    return;
  }
  lVar10 = *plVar5;
  uVar8 = 0x14;
  puVar7 = puVar13;
LAB_008a3ca4:
  local_32 = 0;
  local_38 = 0;
  FUN_01db1df0(lVar10 + 0x480,iVar2,&local_38,puVar7,uVar8,0);
  return;
}

