
ulong FUN_0015d730(long *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *param_1;
  uVar2 = 0xffffffffffffffbf;
  if (param_1[0x45] != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  iVar3 = *(int *)(lVar6 + 0x180);
  if (iVar3 - 100U < 100) {
    return 0;
  }
  if ((*(ushort *)(lVar6 + 0x15c4) >> 5 & 1) != 0) {
    return (ulong)(-(*(byte *)(lVar6 + 0xf62) & 1) & 0x16);
  }
  if (((*(uint *)((long)param_1 + 0x41c) >> 7 & 1) == 0) && (param_1[0x45] == 0)) {
    uVar7 = 0;
  }
  else if ((iVar3 == 0x191) ||
          ((uVar7 = 0, iVar3 < 300 && ((*(uint *)((long)param_1 + 0x41c) >> 0xf & 1) != 0)))) {
    uVar4 = FUN_0015d930(lVar6 + 0x1268,uVar2);
    uVar7 = uVar4 & 0xffffffff;
    if ((uVar4 & 1) == 0) {
      *(ushort *)(lVar6 + 0x15c4) = *(ushort *)(lVar6 + 0x15c4) | 0x20;
    }
    if ((*(long *)(lVar6 + 0x1270) == 8) && (0xb < (int)param_1[0x46])) {
      FUN_0014d430(lVar6,"Forcing HTTP/1.1 for NTLM");
      FUN_00158f30(param_1,1);
      *(undefined8 *)(*param_1 + 0xa40) = 2;
    }
  }
  if (((*(uint *)((long)param_1 + 0x41c) >> 8 & 1) == 0) ||
     ((*(int *)(lVar6 + 0x180) != 0x197 &&
      (((*(uint *)((long)param_1 + 0x41c) >> 0xf & 1) == 0 || (299 < *(int *)(lVar6 + 0x180))))))) {
LAB_0015d858:
    if ((uVar7 & 1) == 0) {
      if ((((*(int *)(lVar6 + 0x180) < 300) &&
           (pbVar1 = (byte *)(lVar6 + 0x1280), (*pbVar1 & 1) == 0)) &&
          (*(char *)((long)param_1 + 0x41d) < '\0')) &&
         ((*(int *)(lVar6 + 0xa38) != 1 && (*(int *)(lVar6 + 0xa38) != 6)))) {
        lVar5 = FUN_00143320(*(undefined8 *)(lVar6 + 0xf68));
        *(long *)(lVar6 + 0x1d0) = lVar5;
        if (lVar5 == 0) {
          return 0x1b;
        }
        *pbVar1 = *pbVar1 | 1;
      }
      goto LAB_0015d8fc;
    }
  }
  else {
    uVar4 = FUN_0015d930(lVar6 + 0x1288,0xffffffffffffffbf);
    if ((uVar4 & 1) == 0) {
      *(ushort *)(lVar6 + 0x15c4) = *(ushort *)(lVar6 + 0x15c4) | 0x20;
      goto LAB_0015d858;
    }
  }
  if (((*(int *)(lVar6 + 0xa38) != 1) && (*(int *)(lVar6 + 0xa38) != 6)) &&
     (((*(byte *)((long)param_1 + 0x41e) & 1) == 0 &&
      (uVar7 = FUN_0015d9ac(param_1), (int)uVar7 != 0)))) {
    return uVar7;
  }
  FUN_00143300(*(undefined8 *)(lVar6 + 0x1d0));
  *(undefined8 *)(lVar6 + 0x1d0) = 0;
  lVar5 = FUN_00143320(*(undefined8 *)(lVar6 + 0xf68));
  *(long *)(lVar6 + 0x1d0) = lVar5;
  if (lVar5 == 0) {
    return 0x1b;
  }
LAB_0015d8fc:
  uVar7 = FUN_0015da90(param_1);
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  FUN_0014d5f8(lVar6,"The requested URL returned error: %d",*(undefined4 *)(lVar6 + 0x180));
  return 0x16;
}

