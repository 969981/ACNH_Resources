
void FUN_0211afb4(long param_1,byte *param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_14;
  
  lVar3 = *(long *)PTR_DAT_04bb39b0;
  if (lVar3 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_0211b02c:
    if (*pbVar6 < 8) goto LAB_0211b098;
LAB_0211b038:
    if (DAT_0537d558 == (long *)0x0) {
LAB_0211b090:
      pbVar6 = &DAT_0548e168;
      goto LAB_0211b098;
    }
    lVar8 = *DAT_0537d558;
    bVar5 = *(byte *)(lVar8 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar6 = (byte *)(lVar8 + 0x471);
      }
    }
    bVar5 = *pbVar6;
    if (7 < bVar5) goto LAB_0211b090;
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar3 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar3 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar3 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0211b02c;
      }
      goto LAB_0211b038;
    }
LAB_0211b098:
    bVar5 = *pbVar6;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
  }
  bVar9 = *param_2;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  if (bVar9 != bVar5 || *(char *)(param_1 + 0xf4) != '\0') {
    return;
  }
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x15 & 1) != 0) {
      return;
    }
  }
  if (lVar3 == 0) {
    uVar7 = (ulong)DAT_0548e140;
    if (7 < DAT_0548e140) goto LAB_0211b188;
LAB_0211b1f4:
    if (DAT_054f5738 != 0) {
      puVar4 = (undefined4 *)(DAT_054f5738 + uVar7 * 4 + 0xde8);
      goto LAB_0211b218;
    }
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar3 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar3 + 0x158);
    }
    uVar7 = (ulong)*pbVar6;
    if ((*pbVar6 < 8) ||
       (((*(int *)(lVar3 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (uVar7 = (ulong)*(byte *)(DAT_054f5738 + 0x11a5), *(byte *)(DAT_054f5738 + 0x11a5) < 8))))
    goto LAB_0211b1f4;
LAB_0211b188:
    if (DAT_0537d558 != (long *)0x0) {
      lVar3 = *DAT_0537d558;
      bVar5 = *(byte *)(lVar3 + 0x473);
      pbVar6 = PTR_DAT_04bb5038;
      if ((long)(char)bVar5 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar3 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar1 = (uint *)(lVar3 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar6 = (byte *)(lVar3 + 0x471);
        }
      }
      uVar7 = (ulong)*pbVar6;
      if (*pbVar6 < 8) goto LAB_0211b1f4;
    }
    uVar7 = (ulong)DAT_0548e168;
    if (DAT_0548e168 < 8) goto LAB_0211b1f4;
  }
  puVar4 = &DAT_04c9a0c8;
LAB_0211b218:
  local_14 = *puVar4;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  local_70 = *(undefined8 *)(param_3 + 2);
  uStack_68 = *(undefined8 *)(param_3 + 4);
  local_60 = param_3[6];
  uStack_5c = param_3[7];
  local_58 = *(undefined2 *)(param_3 + 8);
  local_56 = *(undefined1 *)((long)param_3 + 0x22);
  local_55 = *(undefined1 *)((long)param_3 + 0x23);
  local_54 = *(undefined8 *)(param_3 + 9);
  local_4c = param_3[0xb];
  local_48 = *(undefined8 *)(param_3 + 0xc);
  uStack_40 = *(undefined8 *)(param_3 + 0xe);
  local_38 = param_3[0x10];
  uStack_34 = param_3[0x11];
  iVar2 = FUN_02119c7c(param_1,&local_14);
  if ((iVar2 != -1) && (DAT_04ccbb68 != 0)) {
    FUN_021206a0(param_1,iVar2,&local_78,1);
    FUN_02120fe0(param_1,iVar2,&local_60,1);
  }
  *(undefined4 *)(param_1 + 0x140) = uStack_74;
  *(undefined4 *)(param_1 + 0x13c) = local_78;
  *(undefined8 *)(param_1 + 0x144) = local_70;
  *(undefined8 *)(param_1 + 0x14c) = uStack_68;
  *(undefined8 *)(param_1 + 0x16c) = local_48;
  *(undefined4 *)(param_1 + 0x154) = local_60;
  *(undefined4 *)(param_1 + 0x158) = uStack_5c;
  *(undefined2 *)(param_1 + 0x15c) = local_58;
  *(undefined1 *)(param_1 + 0x15e) = local_56;
  *(undefined1 *)(param_1 + 0x15f) = local_55;
  *(undefined8 *)(param_1 + 0x160) = local_54;
  *(undefined4 *)(param_1 + 0x168) = local_4c;
  *(undefined8 *)(param_1 + 0x174) = uStack_40;
  *(undefined4 *)(param_1 + 0x17c) = local_38;
  *(undefined4 *)(param_1 + 0x180) = uStack_34;
  return;
}

