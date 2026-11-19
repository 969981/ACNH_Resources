
void FUN_0391ecec(long *param_1,undefined2 param_2,undefined4 param_3,long param_4,
                 undefined8 param_5)

{
  long lVar1;
  int iVar2;
  long local_870;
  undefined8 local_868;
  undefined1 auStack_458 [1048];
  
  param_1[7] = param_4;
  *(undefined2 *)(param_1 + 0x16) = param_2;
  (**(code **)(*param_1 + 0x80))();
  iVar2 = (**(code **)(*param_1 + 0xb0))(param_1);
  FUN_006e9454(&local_870,"Icon = %s",
               (&PTR_s_CIRCLE_RED_04b667d0)[*(uint *)(&DAT_05ae7c48 + (long)iVar2 * 0x28)]);
  if ((DAT_05ae9300 != 0) && (*(long *)(DAT_05ae92f0 + 0x58) != 0)) {
    (**(code **)(local_870 + 0x18))(&local_870);
    lVar1 = DAT_05ae9300;
    (**(code **)(*(long *)(DAT_05ae9300 + 8) + 0x18))((long *)(DAT_05ae9300 + 8));
    FUN_006e9454(auStack_458,&DAT_0406a3d7,local_868,*(undefined8 *)(lVar1 + 0x10));
  }
  (**(code **)(*param_1 + 0x58))(param_1,param_3,param_5);
  FUN_0391ee00(param_1);
  return;
}

