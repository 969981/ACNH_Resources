
bool FUN_019515bc(undefined8 param_1,int *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte bVar8;
  long lVar9;
  byte local_38 [4];
  byte local_34 [4];
  byte local_18 [4];
  undefined4 local_14;
  
  iVar3 = *param_2;
  if (iVar3 == 0xfffe) {
    return true;
  }
  if (DAT_052d2598 == 0) {
    return false;
  }
  if (*(int *)(DAT_04cd19d8 + 0x15c) == 0) {
    if (DAT_04c487d4 != -1) {
      local_14 = 0x20;
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        iVar4 = *(int *)(DAT_04cfba28 + 0x774);
        goto LAB_01951868;
      }
    }
    lVar9 = *DAT_0537d558;
    if (1 < *(byte *)(lVar9 + 0x476)) {
      iVar4 = FUN_0273ea30(&DAT_052cb9a8);
      goto LAB_01951868;
    }
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar7 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    bVar8 = *pbVar7;
    if ((7 < bVar8) &&
       (((*(int *)(DAT_04cd19d8 + 0x15c) == 0 || (DAT_054f5738 == 0)) ||
        (bVar8 = *(byte *)(DAT_054f5738 + 0x11a5), 7 < bVar8)))) {
      bVar8 = *(byte *)(lVar9 + 0x473);
      pbVar7 = PTR_DAT_04bb5038;
      if ((long)(char)bVar8 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
        if (7 < bVar8) {
          puVar2 = (uint *)(lVar9 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar7 = (byte *)(lVar9 + 0x471);
        }
      }
      bVar8 = *pbVar7;
      if ((7 < bVar8) && (bVar8 = *PTR_DAT_04bb5038, 7 < bVar8)) goto LAB_01951864;
    }
    local_38[0] = bVar8;
    iVar4 = FUN_02582d8c(local_38,2);
    if (iVar4 < 0) goto LAB_01951864;
    pbVar7 = local_38;
LAB_01951858:
    iVar4 = FUN_02798760(pbVar7,&DAT_052cb998);
  }
  else {
    if (((*(int *)(DAT_04cd19d8 + 0x15c) == 0) || (DAT_054f5738 == 0)) ||
       (7 < *(byte *)(DAT_054f5738 + 0x11a5))) {
      if (DAT_0537d558 != (long *)0x0) {
        lVar9 = *DAT_0537d558;
        bVar8 = *(byte *)(lVar9 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar8 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
          if (7 < bVar8) {
            puVar2 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar7 = (byte *)(lVar9 + 0x471);
          }
        }
        bVar8 = *pbVar7;
        if (*pbVar7 < 8) goto LAB_019516b8;
      }
      bVar8 = DAT_0548e168;
      if (DAT_0548e168 < 8) goto LAB_019516b8;
    }
    else {
      bVar8 = *(byte *)(DAT_054f5738 + 0x11a5);
LAB_019516b8:
      local_34[0] = bVar8;
      if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
        iVar4 = FUN_02582d8c(local_34,2);
        if (-1 < iVar4) goto LAB_01951784;
      }
      else {
        local_18[0] = bVar8;
        uVar6 = FUN_01d3e2d0(*DAT_0537d558 + 8,local_18);
        if ((uVar6 & 1) != 0) {
LAB_01951784:
          pbVar7 = local_34;
          goto LAB_01951858;
        }
      }
    }
LAB_01951864:
    iVar4 = 0;
  }
LAB_01951868:
  uVar5 = FUN_01a12740(DAT_052d2598,iVar3);
  return (int)(uVar5 & 0xffff) <= iVar4;
}

