
undefined4 FUN_00158e04(long *param_1,long param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *__dest;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 local_170 [4];
  undefined4 auStack_160 [64];
  
  lVar7 = *param_1;
  memset(local_170,0,0x110);
  uVar5 = *(undefined4 *)(param_2 + 4);
  puVar1 = local_170;
  if (param_3 != (undefined4 *)0x0) {
    puVar1 = param_3;
  }
  *puVar1 = uVar5;
  uVar3 = *(undefined4 *)((long)param_1 + 0xbc);
  puVar1[1] = uVar3;
  if (*(int *)((long)param_1 + 0xbc) == 2) {
    uVar8 = 0x11;
  }
  else {
    uVar8 = *(undefined4 *)(param_2 + 0xc);
  }
  puVar2 = local_170;
  if (param_3 != (undefined4 *)0x0) {
    puVar2 = param_3;
  }
  puVar2[2] = uVar8;
  __dest = auStack_160;
  if (param_3 != (undefined4 *)0x0) {
    __dest = param_3 + 4;
  }
  uVar6 = *(uint *)(param_2 + 0x10);
  if (0xff < uVar6) {
    uVar6 = 0x100;
  }
  puVar2[3] = uVar6;
  memcpy(__dest,*(void **)(param_2 + 0x20),(ulong)uVar6);
  if (*(long *)(lVar7 + 0x758) == 0) {
    iVar4 = nnsocketSocket(uVar5,uVar3,uVar8);
    *param_4 = iVar4;
  }
  else {
    FUN_00149fe4(lVar7,1);
    iVar4 = (**(code **)(lVar7 + 0x758))(*(undefined8 *)(lVar7 + 0x760),0,puVar1);
    *param_4 = iVar4;
    FUN_00149fe4(lVar7,0);
    iVar4 = *param_4;
  }
  uVar5 = 7;
  if (iVar4 != -1) {
    uVar5 = 0;
  }
  return uVar5;
}

