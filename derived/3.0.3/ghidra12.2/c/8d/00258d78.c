
void FUN_00258d78(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_7c [16];
  undefined1 local_6c [4];
  undefined1 auStack_68 [72];
  
  iVar1 = (int)param_1[0xb] + 1;
  *(int *)(param_1 + 0xb) = iVar1;
  FUN_0025ef58(auStack_68,param_1 + 0xaf,0x5d8,iVar1,(int)param_1[0x2e0],
               *(undefined4 *)((long)param_1 + 0x1704),param_1[0x2e1],param_1);
  FUN_0025edfc(auStack_68,param_1 + 0x15);
  FUN_0025edfc(auStack_68,param_1 + 0x1d);
  FUN_0025edfc(auStack_68,param_1 + 0x25);
  FUN_0025edfc(auStack_68,param_1 + 0x2d);
  FUN_0025edfc(auStack_68,param_1 + 0x35);
  FUN_0025edfc(auStack_68,param_1 + 0x3d);
  FUN_0025edfc(auStack_68,param_1 + 0x45);
  FUN_0025edfc(auStack_68,param_1 + 0x4d);
  local_6c[0] = (int)param_1[0x84] == 1;
  FUN_0025eee8(auStack_68,local_6c,1);
  lVar4 = param_1[0x82];
  lVar2 = param_1[0xb];
  uVar3 = (**(code **)(*param_1 + 0x248))(param_1);
  FUN_0025f480(auStack_7c,lVar4,auStack_68,(int)lVar2,uVar3);
  return;
}

