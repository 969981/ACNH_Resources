
void FUN_03912618(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined4 param_6)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  uint local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xe0) = *param_5;
  *(undefined4 *)(param_1 + 0xe4) = param_5[1];
  lVar2 = *(long *)(param_5 + 2);
  *(long *)(param_1 + 0xe8) = lVar2;
  uVar3 = *(undefined8 *)(param_5 + 4);
  *(undefined4 *)(param_1 + 0xf8) = param_6;
  *(undefined8 *)(param_1 + 0xf0) = uVar3;
  if (lVar2 != 0) {
    FUN_0390a734(param_1 + 0x18,1,0x14,1,1,1,1,1,0,1);
    iVar4 = *(int *)(param_1 + 0x54);
    uStack_34 = *(undefined4 *)(param_1 + 0xe4);
    *(char **)(param_1 + 0xa8) = "CMM_Unit";
    bVar1 = false;
    if (iVar4 < 0x21) {
      iVar4 = 0x20;
    }
    local_30 = *(undefined8 *)(param_1 + 0xe8);
    uStack_28 = *(undefined8 *)(param_1 + 0xf0);
    local_38 = (*(int *)(param_1 + 0xe0) + iVar4) - 1U & -iVar4;
    *(uint *)(param_1 + 0x18) = local_38;
    *(undefined4 *)(param_1 + 0x1c) = uStack_34;
    *(undefined8 *)(param_1 + 0x20) = local_30;
    *(undefined8 *)(param_1 + 0x28) = uStack_28;
    if ((*(byte *)(param_1 + 0x66) >> 1 & 1) != 0) {
      bVar1 = 0x11 < *(ushort *)(param_1 + 0xb0) && *(ushort *)(param_1 + 0xb0) - 0x59 < 0xffffffd6;
    }
    FUN_038fd3e0(param_1 + 0x68,&local_38,param_1 + 0x48,0,"CMM_Unit",bVar1,1);
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0xffffffffffffffff;
  return;
}

