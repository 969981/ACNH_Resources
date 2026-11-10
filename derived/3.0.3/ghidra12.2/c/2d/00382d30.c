
void FUN_00382d30(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  
  FUN_0037c270();
  puVar3 = PTR_DAT_04bd08a0;
  plVar6 = param_1 + 0x1e;
  *plVar6 = 0;
  param_1[0x1f] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  lVar1 = param_5;
  if (*(short *)(param_6 + 0x44) != 0 || param_5 == 0) {
    lVar1 = param_4;
  }
  bVar2 = *(byte *)(lVar1 + 0x67);
  uVar7 = (uint)*(byte *)(lVar1 + 0x66);
  if (2 < uVar7) {
    uVar7 = 3;
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = -1;
  param_1[0x1d] = -1;
  if (((bVar2 & 1) == 0) && (uVar7 != 0)) {
    FUN_00364770(plVar6);
    FUN_003647ac(plVar6,uVar7);
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar1 + 0x54);
  *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(lVar1 + 0x58);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(lVar1 + 0x5c);
  *(undefined4 *)((long)param_1 + 0xec) = *(undefined4 *)(lVar1 + 0x60);
  if (uVar7 == 0) {
    uVar8 = 0x68;
  }
  else {
    if (((bVar2 & 1) == 0) && ((char)*plVar6 != '\0')) {
      FUN_00364910(plVar6,lVar1 + 0x68,uVar7);
    }
    uVar8 = (ulong)(uVar7 * 0x20 + 0x68);
  }
  if ((bVar2 & 1) != 0) {
    FUN_00382ee8(param_1,param_2,param_3,lVar1,param_6,*(undefined4 *)(lVar1 + uVar8));
  }
  uVar4 = FUN_003649a0(*(undefined8 *)(param_6 + 0x30),*(undefined2 *)(param_4 + 100));
  uVar5 = 0;
  if (param_5 != 0) {
    uVar5 = FUN_003649a0(*(undefined8 *)(param_6 + 0x38),*(undefined2 *)(param_5 + 100));
  }
  plVar6 = (long *)FUN_00367b30(0x50);
  if (plVar6 != (long *)0x0) {
    *plVar6 = (long)(PTR_DAT_04bd08c0 + 0x10);
    FUN_003745c0(plVar6,param_2,param_3,uVar4,uVar5,param_6);
  }
  param_1[0x1b] = (long)plVar6;
  FUN_003760a0(plVar6,param_2,param_3,param_6);
  FUN_00383128(param_1,param_2,param_3);
  return;
}

