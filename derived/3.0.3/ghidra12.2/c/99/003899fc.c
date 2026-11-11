
void FUN_003899fc(long *param_1,long param_2)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [48];
  long local_58;
  undefined8 local_30;
  byte local_28;
  
  FUN_0037d4c0();
  if (((*(short *)((long)param_1 + 0x112) == 0) || (param_1[0x1e] == 0)) || (param_1[0x28] == 0)) {
    *(byte *)((long)param_1 + 0x5c) = *(byte *)((long)param_1 + 0x5c) & 0xef;
  }
  else {
    uVar2 = FUN_0037e870(param_1);
    if ((uVar2 & 1) == 0) {
      FUN_003506a8(param_1[0x29],*(undefined8 *)(param_2 + 0xd0));
      FUN_00376c48(param_1[0x28],param_2);
      if ((*(ushort *)((long)param_1 + 0x114) >> 2 & 1) == 0) {
        FUN_00389614(param_1,param_2);
        return;
      }
      *(ushort *)((long)param_1 + 0x114) = *(ushort *)((long)param_1 + 0x114) & 0xfffb;
      if (*(char *)((long)param_1 + 0x117) == '\0') {
        FUN_00358b98(auStack_88);
        local_28 = *(byte *)((long)param_1 + 0x115) & 1;
        (**(code **)(*param_1 + 0x128))(param_1,auStack_88);
        local_58 = param_1[0x29];
        FUN_00350514(auStack_88);
        puVar3 = (undefined8 *)param_1[0x27];
        if (puVar3 == (undefined8 *)0x0) {
          FUN_003597ec(auStack_88,param_1[0x1b],*(undefined2 *)((long)param_1 + 0x112));
        }
        else {
          FUN_00359880(auStack_88,param_1[0x1b],*(undefined2 *)((long)param_1 + 0x112),0x10,
                       puVar3[1],*puVar3);
        }
        FUN_00350520(auStack_88);
        if ((*(ushort *)((long)param_1 + 0x114) >> 7 & 1) != 0) {
          FUN_00389f30(param_1,local_30);
        }
        thunk_FUN_0035008c(auStack_88);
      }
      else {
        FUN_00357218(auStack_88);
        local_28 = *(byte *)((long)param_1 + 0x115) & 1;
        (**(code **)(*param_1 + 0x130))(param_1,auStack_88);
        local_58 = param_1[0x29];
        FUN_00350514(auStack_88);
        puVar3 = (undefined8 *)param_1[0x27];
        if (puVar3 == (undefined8 *)0x0) {
          FUN_00357c7c(auStack_88,param_1[0x1b],*(undefined2 *)((long)param_1 + 0x112));
          FUN_00350520(auStack_88);
          uVar1 = *(ushort *)((long)param_1 + 0x114);
        }
        else {
          FUN_00357d10(auStack_88,param_1[0x1b],*(undefined2 *)((long)param_1 + 0x112),0x10,
                       puVar3[1],*puVar3);
          FUN_00350520(auStack_88);
          uVar1 = *(ushort *)((long)param_1 + 0x114);
        }
        if ((uVar1 >> 7 & 1) != 0) {
          FUN_00389be0(param_1,local_30);
        }
        thunk_FUN_0035008c(auStack_88);
      }
      FUN_00389614(param_1,param_2);
      return;
    }
  }
  return;
}

