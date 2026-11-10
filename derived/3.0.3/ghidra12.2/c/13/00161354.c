
undefined8 FUN_00161354(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte bVar7;
  long local_28;
  
  local_28 = param_2;
  if (param_3 == 3) {
    if ((*(long *)(param_1 + 0x6d8) != -1) &&
       (*(long *)(param_1 + 0x6d8) <= *(long *)(param_1 + 0x6d0))) {
      param_3 = 1;
      bVar2 = true;
      goto LAB_00161414;
    }
    *(long *)(param_1 + 0x6d0) = *(long *)(param_1 + 0x6d0) + 1;
    *(ushort *)(param_1 + 0x15c4) = *(ushort *)(param_1 + 0x15c4) | 2;
    if (-1 < *(char *)(param_1 + 0xf62)) {
LAB_00161410:
      bVar2 = false;
      param_3 = 3;
      goto LAB_00161414;
    }
    if ((*(byte *)(param_1 + 0xf88) >> 1 & 1) != 0) {
      FUN_00143300(*(undefined8 *)(param_1 + 0xf70));
      *(undefined8 *)(param_1 + 0xf70) = 0;
      *(byte *)(param_1 + 0xf88) = *(byte *)(param_1 + 0xf88) & 0xfd;
    }
    lVar4 = FUN_00143320(*(undefined8 *)(param_1 + 0xf68));
    *(long *)(param_1 + 0xf70) = lVar4;
    if (lVar4 != 0) {
      *(byte *)(param_1 + 0xf88) = *(byte *)(param_1 + 0xf88) | 2;
      goto LAB_00161410;
    }
LAB_00161460:
    uVar6 = 0x1b;
    goto LAB_001615dc;
  }
  bVar2 = false;
LAB_00161414:
  uVar5 = FUN_0016297c(param_2,0,8);
  iVar3 = FUN_00163050(*(undefined8 *)(param_1 + 0x1568),0,param_2,(ulong)(param_3 == 1) << 3);
  if (iVar3 == 0) {
    iVar3 = FUN_00162bec(*(undefined8 *)(param_1 + 0x1568),0,&local_28,0);
    if (iVar3 != 0) {
      uVar6 = FUN_0014feb0();
      return uVar6;
    }
    if (param_3 == 1) goto LAB_001614a8;
    if ((uVar5 & 1) != 0) {
      *(ushort *)(param_1 + 0x15c4) = *(ushort *)(param_1 + 0x15c4) & 0xffef;
    }
    bVar7 = *(byte *)(param_1 + 0xf88);
    if ((bVar7 & 1) != 0) {
      FUN_00143300(*(undefined8 *)(param_1 + 0xf68));
      bVar7 = *(byte *)(param_1 + 0xf88);
    }
    *(byte *)(param_1 + 0xf88) = bVar7 | 1;
    *(long *)(param_1 + 0xf68) = local_28;
    FUN_0014d430(param_1,"Issue another request to this URL: \'%s\'\n");
    iVar3 = *(int *)(param_1 + 0x1618);
    if (iVar3 == 0x12f) {
      if ((*(int *)(param_1 + 0xa38) != 1) && ((*(byte *)(param_1 + 0x6e0) >> 2 & 1) == 0)) {
        *(undefined4 *)(param_1 + 0xa38) = 1;
        puVar1 = &DAT_040f20e7;
        if ((*(ulong *)(param_1 + 0xf60) & 0x1000000) != 0) {
          puVar1 = &DAT_040adf5a;
        }
        FUN_0014d430(param_1,"Disables POST, goes with %s\n",puVar1);
      }
    }
    else if (iVar3 == 0x12e) {
      if (*(int *)(param_1 + 0xa38) - 2U < 3) {
        bVar7 = *(byte *)(param_1 + 0x6e0) >> 1;
        goto joined_r0x0016155c;
      }
    }
    else if ((iVar3 == 0x12d) && (*(int *)(param_1 + 0xa38) - 2U < 3)) {
      bVar7 = *(byte *)(param_1 + 0x6e0);
joined_r0x0016155c:
      if ((bVar7 & 1) == 0) {
        FUN_0014d430(param_1,"Switch from POST to GET\n");
        *(undefined4 *)(param_1 + 0xa38) = 1;
      }
    }
    FUN_00146c9c(param_1,10);
    FUN_00146c34(param_1);
  }
  else {
    if (param_3 != 1) {
      uVar6 = FUN_0014feb0();
      return uVar6;
    }
    local_28 = FUN_00143320(param_2);
    if (local_28 == 0) goto LAB_00161460;
LAB_001614a8:
    *(long *)(param_1 + 0x1660) = local_28;
    if (bVar2) {
      FUN_0014d5f8(param_1,"Maximum (%ld) redirects followed",*(undefined8 *)(param_1 + 0x6d8));
      return 0x2f;
    }
  }
  uVar6 = 0;
LAB_001615dc:
  return uVar6;
}

