
void FUN_00384ea0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long local_50;
  long lStack_48;
  
  uVar2 = *(byte *)(param_4 + 10) - 1;
  if (uVar2 < 3) {
    uVar5 = *(undefined4 *)(&DAT_04134fb0 + (long)(char)uVar2 * 4);
  }
  else {
    uVar5 = 0;
  }
  uVar3 = FUN_00366284(*(undefined8 *)(param_2 + 0xb8),uVar5);
  FUN_00348090(param_3,uVar3);
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_48 = plVar1[1];
  local_50 = *plVar1 + (long)*(int *)(param_5 + 0xc);
  lVar4 = FUN_0037e530(param_1);
  lVar6 = *(long *)(lVar4 + 0x20);
  lVar4 = FUN_0037e530(param_1);
  FUN_00348cdc(param_3,*(undefined4 *)
                        (*(long *)(lVar6 + 0x18) + (ulong)*(ushort *)(lVar4 + 0x4a) * 4),0,&local_50
               ,0x230);
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_48 = plVar1[1];
  local_50 = *plVar1 + (long)*(int *)(param_5 + 0x10);
  FUN_00348cdc(param_3,*(undefined4 *)(param_5 + 4),4,&local_50,0x120);
  FUN_00364c60(param_3,param_2);
  uVar3 = FUN_0037e530(param_1);
  FUN_0037ba78(uVar3,param_3);
  uVar3 = FUN_0037e530(param_1);
  FUN_0037b730(uVar3,param_3,param_2);
  return;
}

