
void FUN_01c041a4(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 local_68;
  uint local_60;
  
  lVar11 = param_1[7];
  cVar4 = *(char *)((long)param_1 + 0x39);
  lVar9 = *param_1;
  iVar2 = *(int *)(lVar9 + 0x8c);
  if (iVar2 == 3) {
    pbVar10 = (byte *)(lVar9 + 0x9e);
LAB_01c0420c:
    bVar8 = 0;
    if (*pbVar10 < 0x2f) {
      bVar8 = *pbVar10;
    }
  }
  else {
    if (iVar2 == 2) {
      pbVar10 = (byte *)(lVar9 + 0x9b);
      goto LAB_01c0420c;
    }
    if (iVar2 == 1) {
      pbVar10 = (byte *)(lVar9 + 0x96);
      goto LAB_01c0420c;
    }
    bVar8 = 0;
  }
  FUN_01b97520(&local_68,bVar8);
  iVar2 = (int)local_68;
  uVar5 = local_68._4_4_;
  uVar1 = local_60 + 3;
  if (((int)local_68 != 0 || ((char)lVar11 == '\0' || cVar4 != '\0')) || 2 < local_60) {
    uVar1 = local_60;
  }
  lVar11 = param_1[4];
  *(int *)(lVar11 + 0x244) = (int)local_68;
  iVar6 = *(int *)(lVar11 + 0x244);
  if (iVar6 == 2) {
    puVar12 = (undefined8 *)(lVar11 + 0x228);
  }
  else if (iVar6 == 1) {
    puVar12 = (undefined8 *)(lVar11 + 0x220);
  }
  else {
    if (iVar6 != 0) goto LAB_01c04290;
    puVar12 = (undefined8 *)(lVar11 + 0x218);
  }
  *(undefined8 *)(lVar11 + 0x210) = *puVar12;
LAB_01c04290:
  if ((int)local_68 == 0) {
    if ((int)param_1[5] != 2) {
      *(undefined4 *)(*(long *)(param_1[4] + 0x218) + 0x318) = local_68._4_4_;
      lVar11 = *(long *)(param_1[4] + 0x218);
      uVar3 = *(undefined4 *)(lVar11 + 0x314);
      *(uint *)(lVar11 + 0x314) = uVar1;
      *(undefined4 *)(lVar11 + 0x310) = uVar3;
    }
  }
  else if ((int)local_68 == 1) {
    lVar11 = *(long *)(param_1[4] + 0x220);
    *(undefined4 *)(lVar11 + 0x310) = local_68._4_4_;
    puVar12 = (undefined8 *)**(long **)(*(long *)(lVar11 + 0x308) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar7 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc4e58);
    if ((uVar7 & 1) == 0) {
      puVar12 = (undefined8 *)0x0;
    }
    plVar13 = *(long **)puVar12[0x45];
    if (plVar13 != (long *)0x0) {
      iVar6 = *(int *)(lVar11 + 0x310);
      local_68 = PTR_DAT_04bc4f00 + 0x10;
      local_60 = 0x14;
      (**(code **)(*plVar13 + 0x18))(plVar13,&local_68);
      (**(code **)(plVar13[3] + 0x158))((float)iVar6,plVar13[1]);
    }
  }
  *(int *)((long)param_1 + 0x2c) = iVar2;
  *(undefined4 *)(param_1 + 6) = uVar5;
  *(uint *)((long)param_1 + 0x34) = uVar1;
  *(undefined2 *)(param_1 + 7) = 0;
  return;
}

