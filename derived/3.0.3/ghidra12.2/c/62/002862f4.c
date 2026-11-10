
long FUN_002862f4(long param_1,undefined8 param_2,long *param_3,int param_4,uint param_5)

{
  int iVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  if ((param_3 == (long *)0x0) &&
     (param_3 = (long *)FUN_0028a47c(DAT_04c60848), param_3 == (long *)0x0)) {
    return 0;
  }
  if (param_1 == 0) {
    uVar3 = (**(code **)(*param_3 + 0x80))(param_3,4);
  }
  else {
    uVar3 = param_1 + 7;
  }
  uVar3 = uVar3 & 0xfffffffffffffff8;
  if ((uVar3 < 0x129) ||
     (lVar4 = (**(code **)(*param_3 + 0x30))(param_3,uVar3,param_4 << 2), lVar4 == 0)) {
    return 0;
  }
  iVar1 = -param_4;
  if ((int)param_3[0x11] != -1) {
    iVar1 = param_4;
  }
  if (iVar1 == 1) {
    FUN_00286234(lVar4,param_2,param_3,lVar4,uVar3,1,param_5 & 1);
    uVar2 = *(ushort *)(lVar4 + 0xd0);
  }
  else {
    lVar7 = uVar3 + lVar4 + -0x108;
    FUN_00286234(lVar7,param_2,param_3,lVar4,uVar3,iVar1,param_5 & 1);
    uVar2 = *(ushort *)(uVar3 + lVar4 + -0x38);
    lVar4 = lVar7;
  }
  if ((uVar2 & 1) == 0) {
    lVar7 = 0;
    iVar1 = *(int *)(lVar4 + 0x88);
  }
  else {
    lVar7 = lVar4 + 0x90;
    FUN_00290438(lVar7);
    iVar1 = *(int *)(lVar4 + 0x88);
  }
  if (iVar1 == 1) {
    puVar5 = (undefined8 *)(lVar4 + 0x108);
  }
  else {
    puVar5 = *(undefined8 **)(lVar4 + 0x30);
  }
  *(undefined4 *)(puVar5 + 2) = 0;
  lVar6 = *(long *)(lVar4 + 0x38);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[3] = lVar6 + -0x128;
  FUN_00286560(lVar4);
  if (lVar7 != 0) {
    FUN_00290440(lVar7);
  }
  (**(code **)(*param_3 + 0xc0))(param_3,lVar4);
  return lVar4;
}

