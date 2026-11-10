
ulong FUN_00159114(uint param_1,uint param_2,uint param_3,ulong param_4)

{
  long lVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((param_2 & param_1 & param_3) == 0xffffffff) {
    uVar7 = FUN_0015905c(param_4 & 0xffffffff);
    return uVar7;
  }
  if ((long)param_4 < 1) {
    iVar6 = 0;
    auVar10 = ZEXT816(0);
  }
  else {
    auVar10 = FUN_00147178();
    iVar6 = (int)param_4;
  }
  bVar5 = param_1 != 0xffffffff;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  if (bVar5) {
    local_78 = CONCAT44(0xc3,param_1);
  }
  uVar7 = (ulong)bVar5;
  if (param_2 != 0xffffffff) {
    lVar1 = uVar7 * 8;
    puVar2 = (uint *)(&local_78 + uVar7);
    uVar7 = (ulong)(bVar5 + 1);
    *puVar2 = param_2;
    *(undefined4 *)((long)&local_78 + lVar1 + 4) = 0xc3;
  }
  if (param_3 != 0xffffffff) {
    lVar1 = uVar7 * 8;
    puVar2 = (uint *)(&local_78 + uVar7);
    uVar7 = (ulong)((int)uVar7 + 1);
    *puVar2 = param_3;
    *(undefined4 *)((long)&local_78 + lVar1 + 4) = 0x104;
  }
  iVar9 = 0;
  if (param_4 != 0) {
    iVar9 = iVar6;
  }
  if ((long)param_4 < 0) {
    iVar9 = -1;
  }
  iVar6 = nnsocketPoll(&local_78,uVar7,iVar9);
  puVar4 = PTR_DAT_04bcb6f0;
  if (iVar6 == -1) {
    uVar8 = 0xffffffff;
    do {
      iVar6 = nnsocketGetLastErrno();
      if ((iVar6 != 0) && ((iVar6 != 4 || (*(int *)puVar4 != 0)))) goto LAB_0015933c;
      iVar6 = iVar9;
      if (0 < (long)param_4) {
        auVar11 = FUN_00147178();
        iVar6 = FUN_001471a8(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,auVar10._8_8_);
        iVar6 = (int)param_4 - iVar6;
        if (iVar6 < 1) goto LAB_001592cc;
      }
      iVar9 = 0;
      if (param_4 != 0) {
        iVar9 = iVar6;
      }
      if ((long)param_4 < 0) {
        iVar9 = -1;
      }
      iVar6 = nnsocketPoll(&local_78,uVar7,iVar9);
    } while (iVar6 == -1);
  }
  if (iVar6 < 0) {
    uVar8 = 0xffffffff;
  }
  else if (iVar6 == 0) {
LAB_001592cc:
    uVar8 = 0;
  }
  else {
    if (param_1 == 0xffffffff) {
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
      uVar8 = (uint)((local_78 & 0x59000000000000) != 0);
      if ((local_78 & 0xa2000000000000) != 0) {
        uVar8 = uVar8 | 4;
      }
    }
    if (param_2 != 0xffffffff) {
      lVar1 = uVar7 * 8;
      uVar7 = (ulong)((int)uVar7 + 1);
      uVar3 = *(ushort *)((long)&local_78 + lVar1 + 6);
      if ((uVar3 & 0x59) != 0) {
        uVar8 = uVar8 | 8;
      }
      if ((uVar3 & 0xa2) != 0) {
        uVar8 = uVar8 | 4;
      }
    }
    if (param_3 != 0xffffffff) {
      uVar3 = *(ushort *)((long)&local_78 + uVar7 * 8 + 6);
      if ((uVar3 & 0x104) != 0) {
        uVar8 = uVar8 | 2;
      }
      if ((uVar3 & 0x38) != 0) {
        uVar8 = uVar8 | 4;
      }
    }
  }
LAB_0015933c:
  return (ulong)uVar8;
}

