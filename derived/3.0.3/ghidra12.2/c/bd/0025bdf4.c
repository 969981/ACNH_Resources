
void FUN_0025bdf4(int *param_1,long param_2,long param_3,long *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  if (((param_3 == 0) || (param_4 == (long *)0x0)) || (*param_4 == 0)) {
    local_50 = 0x10c07;
    goto LAB_0025bf34;
  }
  if ((*(int *)(param_2 + 0x4f0) != 1) &&
     (uVar2 = FUN_002212e4(*(undefined8 *)(param_2 + 0x3e0)), (uVar2 & 1) == 0)) {
    lVar3 = param_2 + 0x2c8;
    uVar2 = FUN_0021fea0(lVar3);
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_0021fea0(param_2 + 0x2a8);
      if (((uVar2 & 1) != 0) && (uVar2 = FUN_002200e4(param_2 + 0x2a8,lVar3), (uVar2 & 1) != 0))
      goto LAB_0025bf2c;
    }
    uVar2 = FUN_0021fea0(lVar3);
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_0021fea0(param_2 + 0x2a8);
      if (((uVar2 & 1) != 0) && (uVar2 = FUN_002200e4(param_2 + 0x2a8,lVar3), (uVar2 & 1) == 0))
      goto LAB_0025bf2c;
    }
    iVar1 = FUN_002212bc(*(undefined8 *)(param_2 + 0x3e0));
    if (iVar1 != 0) {
      (**(code **)(**(long **)(param_2 + 0x3e0) + 0x10))(*(long **)(param_2 + 0x3e0),1);
    }
    lVar3 = FUN_0025b4e8(param_2,*param_4);
    if (lVar3 != 0) {
      FUN_0025bf70(param_2,*(undefined4 *)(lVar3 + 0xc));
      FUN_0025d39c(param_1,*(undefined8 *)(param_2 + 0x3e0),param_3,param_4);
      if (*param_1 == 0) {
        FUN_00258064(param_2);
        FUN_002211bc(*(undefined8 *)(param_2 + 0x3e0),0);
        return;
      }
      return;
    }
  }
LAB_0025bf2c:
  local_50 = 0x10c08;
LAB_0025bf34:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}

