
undefined8
FUN_01e5a930(float param_1,long param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6,undefined8 *param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *__s;
  long lVar4;
  undefined *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  undefined1 local_84 [31];
  undefined1 local_65;
  
  local_65 = 0;
  local_88 = 0x20;
  puStack_90 = local_84;
  local_84[0] = 0;
  lVar4 = *(long *)(param_2 + 0x358);
  local_98 = PTR_DAT_04bb2028 + 0x10;
  (**(code **)(*(long *)(lVar4 + 0x3e0) + 0x18))(lVar4 + 0x3e0);
  FUN_038d1270(&local_98,"NpcActorAction.%s",*(undefined8 *)(lVar4 + 1000));
  *(undefined4 *)(param_2 + 0x378) = param_3;
  __s = *(undefined8 **)(param_2 + 0x3b8);
  *(undefined4 *)(param_2 + 0x388) = 0xbf800000;
  *(undefined8 *)(param_2 + 0x38c) = 0;
  *(undefined8 *)(param_2 + 0x394) = 0;
  *(undefined4 *)(param_2 + 0x39c) = 6;
  *(undefined8 *)(param_2 + 0x380) = 0;
  *(undefined1 *)(param_2 + 0x418) = *(undefined1 *)(param_2 + 0x59e);
  *(undefined8 *)(param_2 + 0x3a0) = 0;
  *(undefined8 *)(param_2 + 0x3a8) = 0;
  if (__s != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_2 + 0x3c0) < 1) {
      iVar1 = *(int *)(param_2 + 0x3c0) + -1;
    }
    memset(__s,0,(long)iVar1);
    *(undefined1 *)((long)__s + (long)iVar1) = 0;
  }
  *(undefined8 *)(param_2 + 0x408) = 0xfffe;
  FUN_0277d4ac(param_2 + 0x408);
  *(undefined1 *)(param_2 + 0x412) = 0;
  *(undefined2 *)(param_2 + 0x410) = 0;
  *(undefined4 *)(param_2 + 0x390) = *param_4;
  *(undefined4 *)(param_2 + 0x394) = param_4[1];
  *(undefined4 *)(param_2 + 0x398) = param_4[2];
  uVar3 = *param_7;
  *(undefined4 *)(param_2 + 0x388) = *(undefined4 *)(param_7 + 1);
  *(undefined8 *)(param_2 + 0x380) = uVar3;
  *(undefined4 *)(param_2 + 0x3a4) = *param_5;
  uVar2 = *param_6;
  if (param_1 <= 0.0) {
    param_1 = 0.01;
  }
  *(undefined4 *)(param_2 + 0x39c) = param_8;
  *(float *)(param_2 + 0x38c) = param_1;
  *(undefined4 *)(param_2 + 0x3a8) = uVar2;
  return 1;
}

