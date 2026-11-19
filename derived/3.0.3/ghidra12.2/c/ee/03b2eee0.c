
int FUN_03b2eee0(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  for (lVar4 = *(long *)(param_3 + 0x50); lVar4 != param_3 + 0x48; lVar4 = *(long *)(lVar4 + 8)) {
    lVar3 = FUN_0036ab80(param_4,lVar4 + -0x28);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0xe8) != 0)) {
      iVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,*(undefined8 *)(lVar4 + 0x10));
      iVar1 = iVar2 + iVar1;
    }
  }
  return iVar1;
}

